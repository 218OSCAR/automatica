import os
import cv2
import math
import datetime
import shutil
import subprocess
import numpy as np
import open3d as o3d
from helpers import segmentation as seg
from helpers import estimation as est
import config as cfg



def images_workflow(paths, IN_mask, IN_skeletons, IN_gpCoords, IN_gpOrder, IN_gaps):
    #### --- MASK (GRAY & RGB) ---
    ## settings
    gs_draw = 100
    ## import
    mask_gray = np.copy(IN_mask.astype('int32'))
    mask_rbg = np.zeros([cfg.HEIGHT_2D, cfg.WIDTH_2D, 3])
    ## transform masks such that 0=background, 1=skeleton1, 2=skeleton2, ... 
    mask_gray += 1
    ## get grayshades of masks (not 0, as 0=background)
    grayshades_masks = np.unique(mask_gray)[1:]
    ## iterate mask grayshades
    for i,gs in enumerate(grayshades_masks):
        ## draw over iterated grayshades
        mask_rbg[mask_gray==gs] = cfg.RBG[i]
        mask_gray[mask_gray==gs] = int(gs_draw/gs)
    ## export
    cv2.imwrite(paths['visu_mask_rbg'], mask_rbg)
    cv2.imwrite(paths['visu_mask_gray'], mask_gray)

    #### --- SKELETONS (PROCESSED) ---
    ## skeletons, if available
    if IN_skeletons is not None:
        ## import
        skeletons = np.copy(IN_skeletons)
        ## transform skeletons such that 0=background, 1=skeleton1, 2=skeleton2, ...
        skeletons = (skeletons+1).astype(np.uint8)
        ## transform skeletons such that all skeleton pixels are white
        skeletons[skeletons!=0] = 255
        ## export
        cv2.imwrite(paths['visu_skeletons'], skeletons)

    #### --- TOPOLOGY ---
    ## skeletons
    if IN_skeletons is not None:
        ## import
        topology = mask_rbg.copy()
        skeletons = IN_skeletons.copy()
        ## settings
        thickness = 3
        rbg_upper = (0,0,0)
        rbg_lower = (255,255,255)
        ## transform skeletons such that 0=background, 1=skeleton1, 2=skeleton2, ...
        skeletons = (skeletons+1).astype(np.uint8)
        ## make skeletons thicker
        skeletons = cv2.dilate(skeletons, np.ones((3,3), np.uint8), iterations=thickness)
        ## draw raw skeletons
        topology[skeletons!=0] = rbg_lower
        ## iterate gaps
        for gaps in IN_gaps:
            for gap in gaps:
                ## get coordinates of gap start, end and center
                gap_prev,gap_post = gap
                gap_cent = (gap_prev+gap_post) / 2
                ## draw upper skeleton at gap
                mask_area = np.zeros([cfg.HEIGHT_2D, cfg.WIDTH_2D])
                mask_area = cv2.circle(mask_area, gap_cent.astype(int)[::-1], 50, 255, -1)
                mask_upper = np.logical_and(mask_area, mask_gray==mask_gray[int(gap_cent[0]), int(gap_cent[1])]).astype(np.uint8)
                mask_upper = np.logical_and(mask_upper, skeletons)
                # mask_upper = cv2.dilate(mask_upper.astype(np.uint8), np.ones((3,3), np.uint8), iterations=thickness)
                topology[mask_upper!=0] = rbg_upper
        ## export
        cv2.imwrite(paths['visu_topology'], topology)

    #### --- IMAGE INCL. SKELETONS & GRASP POINT(S) ---
    ## settings
    only_best_gp = True
    white = (255,255,255)
    black = (0,0,0)
    thickness = 5
    ## import
    image_annotated = cv2.imread(paths['image'])
    ## skeletons, if available
    if IN_skeletons is not None:
        ## settings
        thickness = 3
        ## import
        skeletons = np.copy(IN_skeletons)
        ## transform skeletons such that 0=background, 1=skeleton1, 2=skeleton2, ...
        skeletons = (skeletons+1).astype(np.uint8)
        ## make skeletons thicker
        skeletons = cv2.dilate(skeletons, np.ones((3,3), np.uint8), iterations=thickness)
        ## get grayshades of skeletons (not 0, as 0=background)
        grayshades_skeletons = np.unique(skeletons)[1:]
        ## iterate skeletons
        for i,gs in enumerate(grayshades_skeletons):
            image_annotated[skeletons==gs] = cfg.RBG[i]
    ## sort grasp points 
    gps_iter = np.array(IN_gpCoords, dtype=int)[IN_gpOrder]
    ## exclude non-prioritized grasp points
    if only_best_gp:
        gps_iter = [gps_iter[0]]
    ## iterate grasp point(s)
    for i,gp in enumerate(gps_iter):
        ## read grasp point
        y,x,z = gp
        ## prepare grasp point drawing
        is_prioritized = i!=0
        radius = 10 * (1 - is_prioritized*1)
        arrow_length = 70 * (1 - is_prioritized*0.3)
        y_arrow_parallel = int(y + arrow_length * math.sin(math.pi*(z-90)/180))
        x_arrow_parallel = int(x + arrow_length * math.cos(math.pi*(z-90)/180))
        y_arrow_normal = int(y + arrow_length * math.sin(math.pi*(z-180)/180))
        x_arrow_normal = int(x + arrow_length * math.cos(math.pi*(z-180)/180))
        ## draw contour in black
        cv2.circle(image_annotated, (x,y), radius=radius+3, color=black, thickness=-1)
        cv2.arrowedLine(image_annotated, (x,y), (x_arrow_parallel,y_arrow_parallel), color=black, thickness=thickness+6)
        cv2.arrowedLine(image_annotated, (x,y), (x_arrow_normal,y_arrow_normal), color=black, thickness=thickness+6)
        ## draw grasp point in white white 
        cv2.circle(image_annotated, (x,y), radius=radius, color=white, thickness=-1)
        cv2.arrowedLine(image_annotated, (x,y), (x_arrow_parallel,y_arrow_parallel), color=white, thickness=thickness)
        cv2.arrowedLine(image_annotated, (x,y), (x_arrow_normal,y_arrow_normal), color=white, thickness=thickness)
    ## export
    cv2.imwrite(paths['visu_graspfinal'], image_annotated)


def popups(pdict={}, keys=[], paths=[]):
    ## iterate provided keys of path-dictionary
    for key in keys:
        ## load
        img = cv2.imread(pdict[key])
        windowname = key
        ## show
        cv2.imshow(windowname, img)
        ## close
        while cv2.waitKey(100) != 27:
            if cv2.getWindowProperty(windowname, cv2.WND_PROP_VISIBLE) <= 0:
                break
        cv2.destroyWindow(windowname)
    ## iterate provided paths
    for path in paths:
        ## load
        img = cv2.imread(path)
        windowname = path
        ## show
        cv2.imshow(windowname, img)
        ## close
        while cv2.waitKey(100) != 27:
            if cv2.getWindowProperty(windowname, cv2.WND_PROP_VISIBLE) <= 0:
                break
        cv2.destroyWindow(windowname)


def popup_nonblocking(dict, key):
    subprocess.Popen(['xdg-open', dict[key]],
                     stdin=None,
                     stdout=open(os.devnull, 'wb'),
                     stderr=open(os.devnull, 'wb'))


def console(gp_yxrz, gp_z, xyz_rob, rxryrz_rob, debug_list=None, success=None):
    print(f' grasp point xy [px]:\t\t[{int(gp_yxrz[1])},{int(gp_yxrz[0])}]')
    print(f' grasp point z:\t\t\t{gp_z}m')
    print(f' gripper orientation:\t\t{gp_yxrz[2]:.1f}°')
    print(f' TCP xyz [rob]:\t\t[{xyz_rob[0][0]: .4f}, {xyz_rob[0][1]: .4f}, {xyz_rob[0][2]: .4f}]')
    print(f' TCP rxryrz [rob]:\t[{rxryrz_rob[0]: .4f}, {rxryrz_rob[1]: .4f}, {rxryrz_rob[2]: .4f}]')
    if debug_list is not None:
        print(f' Debug messages from SM:\n##########')
        print(*debug_list, sep = "\n")
        print(f'##########')
    if success is not None:
        print(f' The BP-process was :\t[{"SUCCESSFUL!" if success else "NOT SUCCESSFUL!"}]')

def log_csv_solo(gp_yxrz, gp_z, debug_list=None, success=None):
    with open(cfg.LOGGING_PATH + 'solo/experiment_log.txt', 'w') as f:
        f.write('grasp point xy [px]: ' + str(int(gp_yxrz[1])) + ", " + str(int(gp_yxrz[0])) + "\n")
        f.write('grasp point z: ' + str(gp_z) + 'm\n')
        if debug_list is not None:
            f.write('Debug messages from SM:\n##########\n')
            for line in debug_list:
                f.write(line)
                f.write("\n")
            f.write('##########\n')
        if success is not None:
            status = "SUCCESSFUL!" if success else "NOT SUCCESSFUL!"
            f.write('The BP-process was :\t' + status)
        f.close()
        

def log_csv_sam(gp_yxrz, gp_z, debug_list=None, success=None):
    with open(cfg.LOGGING_PATH + 'sam/experiment_log.txt', 'w') as f:
        f.write('grasp point xy [px]: ' + str(int(gp_yxrz[1])) + ", " + str(int(gp_yxrz[0])) + "\n")
        f.write('grasp point z: ' + str(gp_z) + 'm\n')
        if debug_list is not None:
            f.write('Debug messages from SM:\n##########\n')
            for line in debug_list:
                f.write(line)
                f.write("\n")
            f.write('##########\n')
        if success is not None:
            status = "SUCCESSFUL!" if success else "NOT SUCCESSFUL!"
            f.write('The BP-process was :\t' + status)
        f.close()


def logging_img_solo(IN_paths):
    ## set path to directory
    folderpath = cfg.LOGGING_PATH + str("solo/imgs_solo/")
    if os.path.exists(folderpath):
        shutil.rmtree(folderpath)
    os.makedirs(folderpath)
    ## get current timestamp
    timestamp = datetime.datetime.now()
    timestamp = str(timestamp)[:-7].replace(' ','_').replace('-','').replace(':','')
    ## load data
    rbg = cv2.imread(IN_paths['image'], cv2.IMREAD_COLOR)
    skeletons = cv2.imread(IN_paths['visu_skeletons'], cv2.IMREAD_COLOR)
    rbgmask = cv2.imread(IN_paths['visu_mask_rbg'], cv2.IMREAD_COLOR)
    image_anno = cv2.imread(IN_paths['visu_graspfinal'], cv2.IMREAD_COLOR)
    solo_seg = cv2.imread(IN_paths['visu_segmentation'], cv2.IMREAD_COLOR)
    gp_computation = cv2.imread(IN_paths['visu_graspsearch'], cv2.IMREAD_COLOR)
    visu_topology = cv2.imread(IN_paths['visu_topology'], cv2.IMREAD_COLOR)
    pcd = o3d.io.read_point_cloud(IN_paths['pointcloud'])
    ## store data
    cv2.imwrite(folderpath+timestamp+'_rbg.png', rbg)
    cv2.imwrite(folderpath+timestamp+'_skeletons.png', skeletons)
    cv2.imwrite(folderpath+timestamp+'_mask_rbg.png', rbgmask)
    cv2.imwrite(folderpath+timestamp+'_image_annotated.png', image_anno)
    cv2.imwrite(folderpath+timestamp+'_debug_solo_segmentation.png', solo_seg)
    cv2.imwrite(folderpath+timestamp+'_debug_graspposecomputation.png', gp_computation)
    cv2.imwrite(folderpath+timestamp+'_visu_topology.png', visu_topology)
    o3d.io.write_point_cloud(folderpath+timestamp+'_camera_pointcloud.ply', pcd)

def logging_img_sam(IN_paths):
    ## set path to directory
    folderpath = cfg.LOGGING_PATH + str("sam/imgs_sam/")
    if os.path.exists(folderpath):
        shutil.rmtree(folderpath)
    os.makedirs(folderpath)
    ## get current timestamp
    timestamp = datetime.datetime.now()
    timestamp = str(timestamp)[:-7].replace(' ','_').replace('-','').replace(':','')
    ## load data
    rbg = cv2.imread(IN_paths['image'], cv2.IMREAD_COLOR)
    pcd = o3d.io.read_point_cloud(IN_paths['pointcloud'])
    sam21_toplayer_bw = cv2.imread(IN_paths['sam21_toplayer_bw'], cv2.IMREAD_COLOR)
    sam21_input_point_sampler_skeleton = cv2.imread(IN_paths['sam21_input_point_sampler_skeleton'], cv2.IMREAD_COLOR)
    sam21_input_points = cv2.imread(IN_paths['sam21_input_points'], cv2.IMREAD_COLOR)
    sam21_annotations = cv2.imread(IN_paths['sam21_annotations'], cv2.IMREAD_COLOR)
    sam21_visu_mask = cv2.imread(IN_paths['sam21_visu_mask'], cv2.IMREAD_COLOR)
    sam21_output_skeletons = cv2.imread(IN_paths['sam21_output_skeletons'], cv2.IMREAD_COLOR)
    sam21_gp = cv2.imread(IN_paths['sam21_gp'], cv2.IMREAD_COLOR)
    ## store data
    cv2.imwrite(folderpath+timestamp+'_rbg.png', rbg)
    cv2.imwrite(folderpath+timestamp+'_sam21_toplayer_bw.png', sam21_toplayer_bw)
    cv2.imwrite(folderpath+timestamp+'_sam21_input_point_sampler_skeleton.png', sam21_input_point_sampler_skeleton)
    cv2.imwrite(folderpath+timestamp+'_sam21_input_points.png', sam21_input_points)
    cv2.imwrite(folderpath+timestamp+'_sam21_annotations.png', sam21_annotations)
    cv2.imwrite(folderpath+timestamp+'_sam21_visu_mask.png', sam21_visu_mask)
    cv2.imwrite(folderpath+timestamp+'_sam21_output_skeletons.png', sam21_output_skeletons)
    cv2.imwrite(folderpath+timestamp+'_sam21_gp.png', sam21_gp)
    o3d.io.write_point_cloud(folderpath+timestamp+'_camera_pointcloud.ply', pcd)

