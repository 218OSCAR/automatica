import numpy as np
import cv2
#from matplotlib import pyplot as plt
import open3d as o3d
import skimage.morphology as morphology
from glob import glob
from scipy import signal
from scipy import spatial
from scipy import ndimage
import time
from DSEskeletonpruning.dsepruning import skel_pruning_DSE
import traceback
from scipy.ndimage import distance_transform_edt
import math
from get_sam_mask import inference_model

## resolutions of image data [px]                                                      
HEIGHT_2D = 960
WIDTH_2D = 1280
HEIGHT_3D = 480
WIDTH_3D = 640

## rectified focal length [px]                                                         
FOCAL_FACTOR = 1083.18994140625


##################################################### (1) HELPERS ######################################################
def neighbours(x,y,image):
    """Return 8-neighbours of image point P1(x,y), in a clockwise order"""
    img = image
    x_1, y_1, x1, y1 = x-1, y-1, x+1, y+1;
    return [ img[x_1][y], img[x_1][y1], img[x][y1], img[x1][y1], img[x1][y], img[x1][y_1], img[x][y_1], img[x_1][y_1] ]   


def getSkeletonIntersection(skeleton):  ## https://stackoverflow.com/questions/41705405/finding-intersections-of-a-skeletonised-image-in-python-opencv
    """ Given a skeletonised image, it will give the coordinates of the intersections of the skeleton.

    Keyword arguments:
    skeleton -- the skeletonised image to detect the intersections of

    Returns: 
    List of 2-tuples (x,y) containing the intersection coordinates
    """
    # A biiiiiig list of valid intersections             2 3 4
    # These are in the format shown to the right         1 C 5
    #                                                    8 7 6 
    validIntersection = [[0,1,0,1,0,0,1,0],[0,0,1,0,1,0,0,1],[1,0,0,1,0,1,0,0],
                         [0,1,0,0,1,0,1,0],[0,0,1,0,0,1,0,1],[1,0,0,1,0,0,1,0],
                         [0,1,0,0,1,0,0,1],[1,0,1,0,0,1,0,0],[0,1,0,0,0,1,0,1],
                         [0,1,0,1,0,0,0,1],[0,1,0,1,0,1,0,0],[0,0,0,1,0,1,0,1],
                         [1,0,1,0,0,0,1,0],[1,0,1,0,1,0,0,0],[0,0,1,0,1,0,1,0],
                         [1,0,0,0,1,0,1,0],[1,0,0,1,1,1,0,0],[0,0,1,0,0,1,1,1],
                         [1,1,0,0,1,0,0,1],[0,1,1,1,0,0,1,0],[1,0,1,1,0,0,1,0],
                         [1,0,1,0,0,1,1,0],[1,0,1,1,0,1,1,0],[0,1,1,0,1,0,1,1],
                         [1,1,0,1,1,0,1,0],[1,1,0,0,1,0,1,0],[0,1,1,0,1,0,1,0],
                         [0,0,1,0,1,0,1,1],[1,0,0,1,1,0,1,0],[1,0,1,0,1,1,0,1],
                         [1,0,1,0,1,1,0,0],[1,0,1,0,1,0,0,1],[0,1,0,0,1,0,1,1],
                         [0,1,1,0,1,0,0,1],[1,1,0,1,0,0,1,0],[0,1,0,1,1,0,1,0],
                         [0,0,1,0,1,1,0,1],[1,0,1,0,0,1,0,1],[1,0,0,1,0,1,1,0],
                         [1,0,1,1,0,1,0,0]];
    image = skeleton.copy();
    image = image/255;
    intersections = list();
    for x in range(1,len(image)-1):
        for y in range(1,len(image[x])-1):
            # If we have a white pixel
            if image[x][y] == 1:
                neighbours2 = neighbours(x,y,image);
                valid = True;
                if neighbours2 in validIntersection:
                    intersections.append((y,x));
    # Filter intersections to make sure we don't count them twice or ones that are very close together
    for point1 in intersections:
        for point2 in intersections:
            if (((point1[0] - point2[0])**2 + (point1[1] - point2[1])**2) < 10**2) and (point1 != point2):
                intersections.remove(point2);
    # Remove duplicates
    intersections = list(set(intersections));
    return intersections;


def get_skeletonpixels(IN_skeleton, IN_ordered=False):
    """
    Extracts the pixel coordinates of skeleton pixels from an image. Offers the possibility to sort the coordinates along the center line such that the first and last point refer to the endpoints of the skeleton. 

    Args:
        IN_skeleton: image (3d resolution) of a cables' center line (=skeleton)
        IN_ordered: boolean variable that triggers the (time-consuming) sorting of the skeleton pixels (default: False)
    
    Returns:
        OUT_xpixels: (ordered) list of the skeletons' pixel coordinates.
        OUT_gaps: list of lists with coordinates for start- and enpoint of gap  
    """
    ## get skeleton's pixel coordinates
    OUT_xpixels = np.argwhere(IN_skeleton)
    ## order only if requested (time consuming)  
    if IN_ordered:           
        ## get distance matrix
        distances = spatial.distance.cdist(OUT_xpixels, OUT_xpixels, 'euclidean')
        dmax = distances.max()*2
        distances = distances + np.identity(len(OUT_xpixels))*dmax
        ## get endpoints
        n_neighbors = signal.convolve2d(IN_skeleton, np.ones((3,3), np.uint8), boundary='fill', mode='same')
        endpoints = np.argwhere((n_neighbors==2)*IN_skeleton)
        ## connect neighboring pixels starting from one endpoint
        endpoint_list=list(endpoints)
        OUT_xpixels_ordered = [endpoint_list.pop()]   
        OUT_gaps=[]     
        while True:
            ## find index of current endpoint
            ix_endpoint = np.argwhere(np.logical_and(OUT_xpixels[:,0]==OUT_xpixels_ordered[-1][0], OUT_xpixels[:,1]==OUT_xpixels_ordered[-1][1]))[0][0]
            ## if endpoint not reached --> add closest pixel to ordered list
            if distances[ix_endpoint].min() < 2:
                ## find index of nearest pixel
                ix_nearest = distances[ix_endpoint].argmin()
                ## manipulate pixel's row/col in distance matrix (to avoid repeated consideration) and append pixel to ordered list
                distances[:,ix_endpoint] = dmax
                distances[ix_endpoint,:] = dmax
                OUT_xpixels_ordered.append(OUT_xpixels[ix_nearest])
            ## if endpoint reached
            else:
                ## remove resolved endpoints
                for idx,ep in enumerate(endpoint_list.copy()):
                    if ep[0]==OUT_xpixels_ordered[-1][0] and ep[1]==OUT_xpixels_ordered[-1][1]:
                          endpoint_list.pop(idx)
                ## continue with closest unresolved endpoint
                if len(endpoint_list)>0:
                    ## find smallest endpoint distance
                    i_min = -1
                    j_min = -1
                    dist_min = float('inf')
                    for i,uEP in enumerate([OUT_xpixels_ordered[0],OUT_xpixels_ordered[-1]]):
                        for j,EP in enumerate(endpoint_list):
                            dist = np.sqrt(np.sum((uEP - EP) ** 2))
                            if dist<dist_min:
                                dist_min = dist
                                i_min = i
                                j_min = j
                    if i_min==0:
                        OUT_xpixels_ordered.reverse()
                    ## dave gap
                    gap_start = OUT_xpixels_ordered[-1]
                    OUT_xpixels_ordered.append(endpoint_list.pop(j_min))
                    gap_end = OUT_xpixels_ordered[-1]
                    OUT_gaps.append([gap_start,gap_end])
                else:
                    break                        
        return np.array(OUT_xpixels_ordered), OUT_gaps
    else:
        return OUT_xpixels, None


#################################################### (2) INTERFACES ####################################################

def get_skeletons(mask_depth_solo):
    masks = (mask_depth_solo-1).astype(int)
    ## initialize outputs
    OUT_raw = np.zeros(masks.shape, dtype=np.uint8)
    ## iterate instances/cables
    for i in range(masks.max()+1):
        try:
            ## extract mask
            mask = (masks==i).astype('uint8')
            ## get skeleton
            skeleton = morphology.skeletonize(mask, method='lee')
            OUT_raw[skeleton==1] = i+200
        except Exception as e:
            print("ERROR! ", e)
    #cv2.imwrite("./debug/visu_skeletons.png", OUT_raw)
    dist = distance_transform_edt(mask_depth_solo, return_indices=False, return_distances=True)
    skeletons_pruned = skel_pruning_DSE(OUT_raw, dist, 100)
    return skeletons_pruned


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
    img = np.zeros((HEIGHT_3D,WIDTH_3D))
    ## add points to image
    for x,y,z in pcd:
        ## convert to real coordinates
        px_y = (FOCAL_FACTOR/HEIGHT_2D*HEIGHT_3D) * y/z
        px_x = (FOCAL_FACTOR/WIDTH_2D*WIDTH_3D) * x/z
        ## shift offspring to
        px_y = int(np.rint(px_y +HEIGHT_3D/2 -0.5))
        px_x = int(np.rint(px_x +WIDTH_3D/2 -0.5))
        ## assign to image array
        img[px_y, px_x] = z
    ## output
    return img


def get_overlay_mask(img_depth, mask_solo):
    (thresh, im_bw) = cv2.threshold(mask_solo, 11, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
    thresh = 10
    mask_solo_bw = cv2.threshold(mask_solo, thresh, 255, cv2.THRESH_BINARY)[1] / 255
    img_depth_orig = img_depth
    max_cut_off_height = 0.65
    min_cut_off_height = 0.45
    cut_off_height = min_cut_off_height
    stepsize = 0.01
    area_threshold = 7000

    object_found = False
    areas = list()
    while not object_found:
        mask_depth = img_depth > cut_off_height
        mask_depth = (mask_depth).astype(float)
        mask_depth = (1-mask_depth)

        # make edges black because of no/bad depth data
        edge = 140
        mask_depth[:edge,:] = 0
        mask_depth[-edge:-1,:] = 0
        mask_depth[:,:edge] = 0
        mask_depth[:,-edge:-1] = 0

        ## Overlay mask of Solo and depth image
        mask_depth_solo = cv2.bitwise_and(mask_depth, mask_solo_bw)

        # Filter using contour area and remove small noise
        cnts = cv2.findContours(mask_depth_solo.astype(np.uint8), cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        cnts = cnts[0] if len(cnts) == 2 else cnts[1]
        idx = 0
        biggest_area = 0
        biggest_area_idx = 0
        for c in cnts:
            area = cv2.contourArea(c)
            # Filter out small areas
            if area < area_threshold:
                cv2.drawContours(mask_depth_solo, [c], -1, (0,0,0), -1)
            else:
                object_found = True
                if (area > biggest_area):
                    ## Fill area that is not biggest area anymore
                    cv2.drawContours(mask_depth_solo, cnts, biggest_area_idx, (0,0,0), -1)
                    biggest_area = area
                    biggest_area_idx = idx
                #print("Object found!; Cut off height: ", cut_off_height, "; Area: ", biggest_area)
                #print(cut_off_height)
            idx = idx + 1
        cut_off_height += stepsize
        img_depth = img_depth_orig
    return mask_depth_solo


def get_sam_input_points(skeletons_pruned):
    ## Find the contours
    skeletons_pruned = skeletons_pruned.astype(np.uint8)
    _, thresh  = cv2.threshold(skeletons_pruned, 11, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
    contours, _ = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

    biggest_contour = contours[0]
    for contour in contours:
        if np.size(contour) > np.size(biggest_contour):
            biggest_contour = contour
    #cv2.drawContours(rgb_image_2, [biggest_contour], 0, (0,255,0), 1)

    ## pick 2 end points from biggest contour
    pt1 = biggest_contour[0,0]
    pt2 = biggest_contour[int(np.shape(biggest_contour)[0]/2),0]
    return pt1, pt2


def get_grasp_pose(skeletons_pruned):
    ## Find the contours
    skeletons_pruned = skeletons_pruned.astype(np.uint8)
    _, thresh  = cv2.threshold(skeletons_pruned, 11, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
    contours, _ = cv2.findContours(thresh, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

    biggest_contour = contours[0]
    for contour in contours:
        if np.size(contour) > np.size(biggest_contour):
            biggest_contour = contour
    #cv2.drawContours(rgb_image_2, [biggest_contour], 0, (0,255,0), 1)

    ## pick 2 end points from biggest contour
    pt_grasp = biggest_contour[int(np.shape(biggest_contour)[0]/4),0]

    ### PROCESS BEST GRASPPOINT
    ## find orientation of cable at best grasp point via line between skeleton pixels at idx=+-30 compared to grasp point idx
    idx_gp = int(np.shape(biggest_contour)[0]/4)
    idx_earlier = int(max(idx_gp-10, 0))
    idx_later = int(min(idx_gp+10, len(biggest_contour)-1))
    y_earlier,x_earlier = biggest_contour[idx_earlier,0]
    y_later,x_later = biggest_contour[idx_later,0]
    #cv2.circle(rgb_image_2, (y_earlier.astype(int), x_earlier.astype(int)), 5, (255,0,0), -1)
    #cv2.circle(rgb_image_2, (y_later.astype(int), x_later.astype(int)), 5, (255,0,0), -1)

    ## orientation of cable [°]
    rz_cable = np.arctan2(x_earlier-x_later, y_earlier-y_later) * 180/np.pi
    ## orientation of gripper [°] is perpendicular to cable axis
    rz_gripper = rz_cable + 90
    ## make sure that orientation is specified between 90..270°
    if -180<=rz_gripper<=-90:
        rz_gripper += 360
    elif -90<rz_gripper<90:
        rz_gripper += 180
    elif rz_gripper<-180 or 270<rz_gripper:
        raise ValueError('Cable orientation out of boundaries.')
    ## add cable's grasp point to list of scene's grasp points
    best_gp = np.append(pt_grasp, rz_gripper)
    return best_gp

def save_gp_img(gp, rgb_image):
    ## read grasp point
    x,y,z = gp
    ## prepare grasp point drawing
    #radius = 10 * (1 - 5*1)
    arrow_length = 70 * (1 - 5*0.3)
    y_arrow_parallel = int(y + arrow_length * math.sin(math.pi*(z-90)/180))
    x_arrow_parallel = int(x + arrow_length * math.cos(math.pi*(z-90)/180))
    y_arrow_normal = int(y + arrow_length * math.sin(math.pi*(z-180)/180))
    x_arrow_normal = int(x + arrow_length * math.cos(math.pi*(z-180)/180))
    ## draw contour in black
    cv2.circle(rgb_image, (x.astype(int),y.astype(int)), radius=5, color=(0,0,0), thickness=-1)
    cv2.arrowedLine(rgb_image, (x.astype(int),y.astype(int)), (x_arrow_parallel,y_arrow_parallel), color=(0,0,0), thickness=3+6)
    cv2.arrowedLine(rgb_image, (x.astype(int),y.astype(int)), (x_arrow_normal,y_arrow_normal), color=(0,0,0), thickness=3+6)
    ## draw grasp point in white white 
    cv2.circle(rgb_image, (x.astype(int),y.astype(int)), radius=5, color=(255,255,255), thickness=-1)
    cv2.arrowedLine(rgb_image, (x.astype(int),y.astype(int)), (x_arrow_parallel,y_arrow_parallel), color=(255,255,255), thickness=3)
    cv2.arrowedLine(rgb_image, (x.astype(int),y.astype(int)), (x_arrow_normal,y_arrow_normal), color=(255,255,255), thickness=3)
    ## export
    cv2.imwrite('./debug/visu_graspfinal.png', rgb_image)


folder_no = "1"
img_path = './test/'+folder_no+'/cables.png'
ply_path = './test/'+folder_no+'/pointcloud.ply'
solo_path = './test/'+folder_no+'/visu_mask_gray.png'
windows_scale = 0.75

## Depth image from ply
img_depth = get_depthimage(ply_path)
img_depth = cv2.resize(img_depth, (WIDTH_2D,HEIGHT_2D))


## RGB Image
rgb_image = cv2.imread(img_path)
rgb_image_2 = cv2.imread(img_path)
rgb_image_3 = cv2.imread(img_path)

## Solo Mask BW
mask_solo = cv2.imread(solo_path, cv2.IMREAD_GRAYSCALE)

mask_depth_solo = get_overlay_mask(img_depth, mask_solo)

"""cv2.namedWindow("Contour", cv2.WINDOW_NORMAL)
cv2.resizeWindow("Contour", int(WIDTH_2D*windows_scale), int(HEIGHT_2D*windows_scale))
cv2.imshow("Contour", mask_depth_solo)
cv2.waitKey()"""

skeletons = get_skeletons(mask_depth_solo)
dist = distance_transform_edt(mask_depth_solo, return_indices=False, return_distances=True)
skeletons_pruned = skel_pruning_DSE(skeletons, dist, 100)
rgb_image[skeletons_pruned] = 255

"""cv2.namedWindow("Skeletons", cv2.WINDOW_NORMAL)
cv2.resizeWindow("Skeletons", int(WIDTH_2D*windows_scale), int(HEIGHT_2D*windows_scale))
cv2.imshow("Skeletons", rgb_image)
cv2.imwrite("./visu_skeletons_pruned.png", skeletons_pruned.astype(float)*255)
cv2.waitKey()"""

intersections = getSkeletonIntersection(skeletons_pruned.astype(float)*255)

## Cut off lines at intersections
width_window = 50
for intersection in intersections:
    cv2.circle(rgb_image, (intersection[0], intersection[1]), 3, 0, -1)
    skeletons_pruned[(intersection[1]-width_window):(intersection[1]+width_window), (intersection[0]-width_window):(intersection[0]+width_window)] = 0
# cv2.imwrite("./debug/skeletons_pruned_no_inters.png", skeletons_pruned.astype(float)*255)
"""cv2.imshow("Intersections", skeletons_pruned.astype(float)*255)
cv2.waitKey()"""

## largest branch evtl auch interessant: https://stackoverflow.com/questions/53481596/python-image-finding-largest-branch-from-image-skeleton

pt1, pt2 = get_sam_input_points(skeletons_pruned)

gp = get_grasp_pose(skeletons_pruned)
# print(gp)

save_gp_img(gp, rgb_image_2)


cv2.circle(rgb_image_3, (pt1[0], pt1[1]), 5, (255,0,0), -1)
cv2.circle(rgb_image_3, (pt2[0], pt2[1]), 5, (255,0,0), -1)


cv2.imshow("SAM Input Points", rgb_image_3)
cv2.waitKey()

#input_points = np.array(pt1)
input_points = np.vstack((pt1, pt2))
inference_model(img_path, input_points)