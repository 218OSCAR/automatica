import cv2
import numpy as np
import open3d as o3d
import skimage.morphology as morphology
import open3d as o3d
import torch
import sys
import os
parent_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))
sys.path.append(parent_dir)
import config as cfg
from sam2.build_sam import build_sam2
from sam2.sam2_image_predictor import SAM2ImagePredictor
from skimage import morphology, measure
from skimage.util import invert
from scipy.ndimage import convolve
from scipy.ndimage import binary_closing, binary_opening
from scipy.ndimage import gaussian_filter
from skimage.morphology import binary_closing, disk
import time


####################################################### from helpers/estimation.py ########################################################
def get_depthimage(IN_path):
    """
    Creates depth image based on pointcloud obtained from step1_capture.py.
    
    Args:
        IN_path: path to the pointcloud stored as *.ply-file
        
    Returns:
        img: depth image with distance from pixel to sensor plane [m] stored as np.array
    """
    ## get pointcloud data
    pcd = o3d.io.read_point_cloud(IN_path)
    pcd = np.array(pcd.points)
    ## create image template
    # img = np.zeros((cfg.HEIGHT_3D,cfg.WIDTH_3D))
    img = np.zeros((cfg.ZIVID_HEIGHT_3D, cfg.ZIVID_WIDTH_3D))
    ## add points to image
    for x,y,z in pcd:
        ## convert to real coordinates
        # px_y = (cfg.FOCAL_FACTOR/cfg.HEIGHT_2D*cfg.HEIGHT_3D) * y/z
        # px_x = (cfg.FOCAL_FACTOR/cfg.WIDTH_2D*cfg.WIDTH_3D) * x/z
        # ## shift offspring to
        # px_y = int(np.rint(px_y +cfg.HEIGHT_3D/2 -0.5))
        # px_x = int(np.rint(px_x +cfg.WIDTH_3D/2 -0.5))
        
        px_x = int(round((cfg.ZIVID_fx * x / z) + cfg.ZIVID_cx))
        px_y = int(round((cfg.ZIVID_fy * y / z) + cfg.ZIVID_cy))
        ## assign to image array
        img[px_y, px_x] = z
    """## Adjust depth image because of box edge (no grasp point wanted there) and bad quality
    # Set the top and bottom edges to zero
    img[:int(cfg.IMAGE_BOX_EDGE/2), :] = 0
    img[-int(cfg.IMAGE_BOX_EDGE/2):, :] = 0
    
    # Set the left and right edges to zero
    img[:, :int(cfg.IMAGE_BOX_EDGE/2)] = 0
    img[:, -int(cfg.IMAGE_BOX_EDGE/2):] = 0"""

    ## output
    np.savez_compressed(cfg.PATHS['depth_image'], img=img)
    return img

####################################################### SAM21 ########################################################
# def get_depth_image_toplayer(img_depth, area_threshold, stepsize = 0.005, max_cut_off_height = 0.65, min_cut_off_height = 0.45):
def get_depth_image_toplayer(img_depth, area_threshold, stepsize = 0.005, max_cut_off_height = 0.50, min_cut_off_height = 0.30):
    
    """
    Finds large area in the depth image, which most likely is a pickable structure.

    Args:
        img_depth: Slightly adjusted depth image from get_depthimage()
    
    Returns:
        mask_depth: Mask from the depth image in a certain height
    """
    ## Some prior adjustments for the search of a large area in the depth image
    img_depth[img_depth < min_cut_off_height] = 1  # exclude values which should not be contained
    img_depth[img_depth > max_cut_off_height] = 1
    img_depth_orig = img_depth
    cut_off_height = min_cut_off_height
    ## Adjust depth image because of box edge (no grasp point wanted there) and bad quality
    # Set the top and bottom edges to zero
    img_depth[:int(cfg.IMAGE_BOX_EDGE), :] = 1
    img_depth[-int(cfg.IMAGE_BOX_EDGE):, :] = 1
    
    # Set the left and right edges to zero
    img_depth[:, :int(cfg.IMAGE_BOX_EDGE)] = 1
    img_depth[:, -int(cfg.IMAGE_BOX_EDGE):] = 1

    ## Loop to find the largest area in the depth image
    object_found = False
    areas = list()
    while not object_found:
        ## Convert depth mask to bw
        mask_depth = img_depth < cut_off_height
        mask_depth = (mask_depth).astype(float)

        # make edges black because of no/bad depth data or Kleinladungsträger
        edge = 140
        mask_depth[:edge+25,:] = 0  # upper border
        mask_depth[-edge-25:-1,:] = 0  # lower border
        mask_depth[:,:edge] = 0  # left border
        mask_depth[:,-edge:-1] = 0  # right border
        
        # Filter using contour area and remove small noise
        cnts, _ = cv2.findContours(mask_depth.astype(np.uint8), cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        idx = 0
        biggest_area = 0
        biggest_area_idx = 0
        for c in cnts:
            area = cv2.contourArea(c)
            # Filter out small areas
            if cut_off_height > max_cut_off_height:
                raise ValueError("No area found!")
            elif area < area_threshold:
                cv2.drawContours(mask_depth, [c], -1, (0,0,0), -1)
            else:
                object_found = True
                if (area > biggest_area):
                    if biggest_area_idx != 0:
                        ## Fill area that is not biggest area anymore
                        cv2.drawContours(mask_depth, cnts, biggest_area_idx, (0,0,0), -1)
                    biggest_area = area
                    biggest_area_idx = idx
            idx = idx + 1
  
        cut_off_height += stepsize
        img_depth = img_depth_orig

    return mask_depth.astype(bool)


def get_bw(img_depth):
    ## Get cut off depth image
    start_time = time.time()
    cut_off_depth_img = get_depth_image_toplayer(img_depth, area_threshold=cfg.AREA_THRESHOLD)
    end_time = time.time()
    execution_time = end_time - start_time
    print(f"Execution time get_depth_image_toplayer: {execution_time:.6f} seconds")

    depth_image_bw = cut_off_depth_img.astype(np.uint8)*255
    return depth_image_bw


def get_skeletons(depth_image_bw, branch_length_threshold=100):
    """
    Skeletonizes combined mask from the depth data and solo segmentation. A pruning algorithm improves the skeletons.

    Args:
        mask_depth_solo: Black-white mask that combines the solo (semantic) segmentation mask and the obtained depth data,
        wheras the depth data is already processed so only the uppermost cables are represented.
    
    Returns:
        skeleton_map: Pruned skeletons, which represent the cables middle line. 
    """
    # Get the skeleton
    skeleton = morphology.skeletonize(depth_image_bw, method="lee")

    # Kernel to count neighbors
    kernel = np.array([[1, 1, 1],
                    [1, 0, 1],
                    [1, 1, 1]])

    # Count neighbors for each pixel
    neighbor_count = convolve(skeleton.astype(int), kernel, mode='constant', cval=0)

    # Find endpoints (pixels with exactly one neighbor)
    endpoints = (skeleton & (neighbor_count == 1))

    # Copy skeleton for pruning
    pruned_skeleton = skeleton.copy()

    # Iterate through endpoints to trace and remove small branches
    for y, x in zip(*np.where(endpoints)):
        branch = [(y, x)]  # Start with the endpoint
        visited = set(branch)

        # Trace the branch
        while True:
            # Get current pixel
            cy, cx = branch[-1]

            # Find neighbors of the current pixel
            neighbors = [(ny, nx) for ny in range(cy - 1, cy + 2)
                        for nx in range(cx - 1, cx + 2)
                        if (ny, nx) != (cy, cx) and (ny, nx) not in visited]

            # Check which neighbors are part of the skeleton
            skeleton_neighbors = [(ny, nx) for ny, nx in neighbors
                                if 0 <= ny < skeleton.shape[0]
                                and 0 <= nx < skeleton.shape[1]
                                and skeleton[ny, nx]]

            # If no more skeleton neighbors, we've reached the branch's end
            if not skeleton_neighbors:
                break

            # Add the first skeleton neighbor to the branch
            next_pixel = skeleton_neighbors[0]
            branch.append(next_pixel)
            visited.add(next_pixel)

            # Stop if we reach a junction (neighbor count > 2)
            if neighbor_count[next_pixel] > 2:
                break

        # Prune the branch if it's too short, but protect junctions
        if len(branch) < branch_length_threshold:
            for py, px in branch:
                # Only prune if the pixel is not a junction (i.e., it has <= 2 neighbors)
                if neighbor_count[py, px] <= 2:
                    pruned_skeleton[py, px] = 0

    def get_edge_points(skeleton):
        # Define 8-connectivity (neighbors)
        connectivity = np.array([[-1, -1], [0, -1], [1, -1], [-1, 0], [1, 0], [-1, 1], [0, 1], [1, 1]])

        # List to store edge points
        edge_points = []

        # Iterate over the skeleton
        for x in range(skeleton.shape[0]):
            for y in range(skeleton.shape[1]):
                if skeleton[x, y] == 1:  # If this pixel is part of the skeleton
                    # Get neighbors
                    neighbor_count = 0
                    for dx, dy in connectivity:
                        nx, ny = x + dx, y + dy
                        # Check if neighbor is within bounds and part of the skeleton
                        if 0 <= nx < skeleton.shape[0] and 0 <= ny < skeleton.shape[1]:
                            if skeleton[nx, ny] == 1:
                                neighbor_count += 1
                    
                    # If the pixel has exactly one neighbor, it's an edge point
                    if neighbor_count == 1:
                        edge_points.append((x, y))
        return edge_points

    def trim_skeleton(edge_points, skeleton, trim_length=100):
        trimmed_skeleton = skeleton.copy()
        
        # Define 8-connectivity (neighbors)
        connectivity = np.array([[-1, -1], [0, -1], [1, -1], [-1, 0], [1, 0], [-1, 1], [0, 1], [1, 1]])
        
        # Iterate over each edge point
        for edge in edge_points:
            x, y = edge
            # Delete the initial edge point itself
            trimmed_skeleton[x, y] = 0
            
            # Perform the trimming operation `trim_length` times
            for _ in range(trim_length):
                # Find a neighbor to delete, starting from the current edge point
                deleted = False
                for dx, dy in connectivity:
                    nx, ny = x + dx, y + dy
                    # Check if the neighbor is within bounds and part of the skeleton
                    if 0 <= nx < skeleton.shape[0] and 0 <= ny < skeleton.shape[1]:
                        if trimmed_skeleton[nx, ny] == 1:  # Neighbor is part of the skeleton
                            # Delete the neighbor by setting it to 0
                            trimmed_skeleton[nx, ny] = 0
                            # Move the edge point to this new neighbor
                            x, y = nx, ny
                            deleted = True
                            break  # Once we delete one neighbor, stop and move to the next iteration
                
                # If no neighbor is deleted (meaning no valid neighbor), stop trimming
                if not deleted:
                    break
        
        return trimmed_skeleton

    edge_points = get_edge_points(pruned_skeleton)
    trimmed_skeleton = trim_skeleton(edge_points, pruned_skeleton)

    return pruned_skeleton.astype(np.uint8)*255


def get_sam_masks(image, mask):
    torch.autocast(device_type="cuda", dtype=torch.bfloat16).__enter__()

    num_samples = cfg.NO_INPUT_POINTS  # number of points/segment to sample
    rgb_image = cv2.imread(cfg.PATHS['image'])
    def get_points(mask,num_points):  # Sample points inside the input mask
            points=[]
            for i in range(num_points):
                coords = np.argwhere(mask > 0)
                yx = np.array(coords[np.random.randint(len(coords))])
                points.append([[yx[1], yx[0]]])
                cv2.circle(rgb_image, (yx[1], yx[0]), 3, (200,100,150), 3)
            return np.array(points)
    input_points = get_points(mask,num_samples)
    cv2.imwrite(cfg.PATHS['sam21_input_points'], rgb_image)


    # Load model you need to have pretrained model already made
    sam2_checkpoint = "./data/sam21_checkpoints/sam2.1_hiera_small.pt"  # path to model weight (pre model loaded from: https://dl.fbaipublicfiles.com/segment_anything_2/072824/sam2_hiera_small.pt)
    model_cfg = "/configs/sam2.1/sam2.1_hiera_s.yaml"  # model config
    sam2_model = build_sam2(model_cfg, sam2_checkpoint, device="cuda")

    # Build net and load weights
    predictor = SAM2ImagePredictor(sam2_model)

    # predict mask
    with torch.no_grad():
            predictor.set_image(image)
            masks, scores, _ = predictor.predict(
                point_coords=input_points,
                point_labels=np.ones([input_points.shape[0],1])
            )
                
    # Sort predicted masks from high to low score
    masks=masks[:,0].astype(bool)
    cv2.resize(mask, (cfg.HEIGHT_2D, cfg.WIDTH_2D),interpolation=cv2.INTER_NEAREST)
    sorted_masks = masks[np.argsort(scores[:,0])][::-1].astype(bool)


    def keep_largest_contour(mask):
        """
        Nimmt eine Binärmaske und behält nur die größte Kontur.
        
        :param mask: Binärmaske (2D-Numpy-Array)
        :return: Binärmaske mit nur der größten Kontur
        """
        # Find contours
        contours, _ = cv2.findContours(mask.astype(np.uint8), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        if not contours:
            # Keine Konturen gefunden, Rückgabe einer leeren Maske
            return np.zeros_like(mask, dtype=np.uint8)
        
        # Finde die größte Kontur basierend auf der Fläche
        largest_contour = max(contours, key=cv2.contourArea)
        
        # Erstelle eine neue leere Maske
        largest_contour_mask = np.zeros_like(mask, dtype=np.uint8)
        
        # Zeichne die größte Kontur auf die leere Maske
        cv2.drawContours(largest_contour_mask, [largest_contour], -1, color=1, thickness=cv2.FILLED)
        
        return largest_contour_mask

    """# Verarbeite eine Liste von Masken
    processed_masks = []
    for mask in sorted_masks:
        resized_mask = cv2.resize(mask.astype(np.uint8), (cfg.WIDTH_2D, cfg.HEIGHT_2D), interpolation=cv2.INTER_NEAREST)
        largest_contour_mask = keep_largest_contour(resized_mask)
        processed_masks.append(largest_contour_mask)"""


    def merge_overlapping_masks(masks, overlap_threshold=cfg.MIN_MERGE_OVERLAP):
        merged_masks = []
        for mask in masks:
            added = False
            for i, m in enumerate(merged_masks):
                overlap_area = (mask & m).sum()
                mask_area = mask.sum()
                if overlap_area / mask_area >= overlap_threshold:
                    merged_masks[i] = m | mask
                    added = True
                    break
            if not added:
                merged_masks.append(mask)
        return np.array(merged_masks)

    def smooth_mask(mask, method='gaussian', kernel_size=5, sigma=2):
        """
        Smooth the edges of a binary mask.

        Parameters:
            mask (2D numpy array): Binary mask to smooth.
            method (str): Smoothing method ('gaussian' or 'morphology').
            kernel_size (int): Kernel size for smoothing.
            sigma (float): Standard deviation for Gaussian blur.

        Returns:
            smoothed_mask (2D numpy array): Smoothed binary mask.
        """
        if method == 'gaussian':
            # Apply Gaussian blur
            blurred = gaussian_filter(mask.astype(float), sigma=sigma)
            smoothed_mask = (blurred > 0.5).astype(np.uint8)  # Re-threshold after blur
        elif method == 'morphology':
            # Apply morphological closing for smoothing
            structuring_element = disk(kernel_size)
            smoothed_mask = binary_closing(mask, structuring_element).astype(np.uint8)
        else:
            raise ValueError("Unknown method. Use 'gaussian' or 'morphology'.")

        return smoothed_mask

    def filter_largest_contour(mask):
        """
        Retain only the largest contour in the given binary mask.

        Parameters:
            mask (2D numpy array): Binary mask with values 0 and 255.

        Returns:
            filtered_mask (2D numpy array): Binary mask containing only the largest contour.
        """
        # Find all contours in the mask
        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        if not contours:
            # If no contours are found, return an empty mask
            return np.zeros_like(mask)
        
        # Find the largest contour by area
        largest_contour = max(contours, key=cv2.contourArea)
        
        # Create an empty mask
        filtered_mask = np.zeros_like(mask)
        
        # Draw the largest contour onto the empty mask
        cv2.drawContours(filtered_mask, [largest_contour], -1, 255, thickness=cv2.FILLED)
        
        return filtered_mask


    # Initialize segmentation map and occupancy mask
    seg_map = np.zeros_like(sorted_masks[0], dtype=np.uint8)
    occupancy_mask = np.zeros_like(sorted_masks[0], dtype=bool)

    # Merge overlapping masks
    merged_masks = merge_overlapping_masks(sorted_masks)

    # Stitch merged masks into segmentation map
    for i in range(merged_masks.shape[0]):
        mask = merged_masks[i]
        # Smooth the mask before applying
        smoothed_mask = smooth_mask(mask, method='gaussian', sigma=4)

        # Keep only the largest contour
        largest_contour_mask = filter_largest_contour(smoothed_mask.astype(np.uint8) * 255)
        largest_contour_mask = largest_contour_mask > 0  # Convert back to boolean
        
        # Check overlap and process
        if (largest_contour_mask & occupancy_mask).sum() / largest_contour_mask.sum() > cfg.MAX_APPEND_OVERLAP:
            continue
        largest_contour_mask[occupancy_mask] = 0
        seg_map[largest_contour_mask] = i + 1
        occupancy_mask[largest_contour_mask] = 1
        

    # Create an empty RGB image for the colored annotation
    annotations = np.zeros((seg_map.shape[0], seg_map.shape[1], 3), dtype=np.uint8)
    for id_class in range(1,seg_map.max()+1):
        annotations[seg_map == id_class] = [np.random.randint(255), np.random.randint(255), np.random.randint(255)]

    visu_mask = (annotations/2+image/2).astype(np.uint8)
    return seg_map, annotations, visu_mask
