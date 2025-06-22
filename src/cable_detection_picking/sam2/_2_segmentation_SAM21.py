import warnings
# Suppress specific warning
warnings.filterwarnings("ignore", category=UserWarning, message=".*Flash Attention.*")  # supress unnecessary warnings

import os
import cv2
import numpy as np
import est_seg_sam21 
import config as cfg
import time


## has to be run from here, because:
"""
RuntimeError: You're likely running Python from the parent directory of the sam2 repository 
(i.e. the directory where https://github.com/facebookresearch/sam2 is cloned into). This is 
not supported since the `sam2` Python package could be shadowed by the repository name (the 
repository is also named `sam2` and contains the Python package in `sam2/sam2`). Please run 
Python from another directory (e.g. from the repo dir rather than its parent dir, or from your 
home directory) after installing SAM 2.
"""
if cfg.ID_SEG==1:  # SAM21
    ## Load images
    # Load RGB Image
    rgb_image = cv2.imread(cfg.PATHS['image'])
    rgb_image = cv2.resize(rgb_image, (cfg.ZIVID_WIDTH_2D, cfg.ZIVID_HEIGHT_2D))
    cv2.imwrite(cfg.PATHS['image'], rgb_image)
    # Depth image from ply
    start_time = time.time()

    img_depth = est_seg_sam21.get_depthimage(cfg.PATHS['pointcloud'])
    img_depth = cv2.resize(img_depth, (cfg.ZIVID_WIDTH_2D, cfg.ZIVID_HEIGHT_2D))
    end_time = time.time()
    execution_time = end_time - start_time
    print(f"Execution time get_depthimage sam21: {execution_time:.6f} seconds")
    
    np.savez_compressed(cfg.PATHS['depth_image'], img=img_depth)
    
    bw_mask = cv2.imread("data/sam21_toplayer_bw.png", cv2.IMREAD_GRAYSCALE)
    ## Get BW image
    depth_image_bw = est_seg_sam21.get_bw(img_depth)
    cv2.imwrite(cfg.PATHS['sam21_toplayer_bw'], depth_image_bw)
        
    # Resize 
    bw_mask = cv2.resize(bw_mask, (rgb_image.shape[1], rgb_image.shape[0]))

  
    bw_mask_color = cv2.cvtColor(bw_mask, cv2.COLOR_GRAY2BGR)

 
    alpha = 0.4  

    overlay = cv2.addWeighted(rgb_image, 1 - alpha, bw_mask_color, alpha, 0)


    # cv2.imshow("Overlay", overlay)
    cv2.imwrite("data/overlay_rgb_toplayer.png", overlay)
    

    # generate an image, which can be used to sample input points for sam
    input_point_sampler_bw = est_seg_sam21.get_skeletons(depth_image_bw).astype(np.uint8)
    cv2.imwrite(cfg.PATHS['sam21_input_point_sampler_skeleton'], input_point_sampler_bw)

    # get sam masks
    #start_time = time.time()
    seg_map, annotations, visu_mask = est_seg_sam21.get_sam_masks(rgb_image, input_point_sampler_bw)
    #end_time = time.time()
    #execution_time = end_time - start_time
    #print(f"Execution time: {execution_time:.6f} seconds")

    np.savez_compressed(cfg.PATHS['sam21_seg_map'], seg_map=seg_map)
    cv2.imwrite(cfg.PATHS['sam21_annotations'], annotations)
    cv2.imwrite(cfg.PATHS['sam21_visu_mask'], visu_mask)
