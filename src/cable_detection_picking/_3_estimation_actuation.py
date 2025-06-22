from helpers import segmentation as seg
from helpers import estimation as est
# from helpers import actuation as act
from helpers import debugging as dbg
import config as cfg
import shutil
import numpy as np
import cv2
import time
import os
import warnings
from scipy.spatial.transform import Rotation as R
import yaml
from pathlib import Path

warnings.filterwarnings("ignore", category=UserWarning)

cv2.imwrite("data/rcvisard_img_depth_confidence.png", np.full((480, 640), 255, dtype=np.uint8))

if cfg.ID_SEG==0:
    mask, cable_types = seg.get_instancemask_SOLO(cfg.PATHS['solo_polygons'], enable_split_masks=False)
    skeletons, _, coords_ind, gaps, cable_types = est.get_skeletons(mask, cable_types)
    gps_yxrz, gps_order = est.get_grasppoints_DLO(mask, skeletons, coords_ind, gaps, cable_types)
elif cfg.ID_SEG==1:
    seg_map = np.load(cfg.PATHS['sam21_seg_map'])['seg_map']  # load the sam21 segmentation map

    # get skeletons from sam masks
    start_time = time.time()

    _, occupancy_grid, skeleton_coords = est.get_skeletons_from_sam_masks2(seg_map)
    end_time = time.time()
    execution_time = end_time - start_time
    print(f"Execution time get_skel: {execution_time:.6f} seconds")

    cv2.imwrite(cfg.PATHS['sam21_output_skeletons'], occupancy_grid)

    # get grasp pose
    gps_yxrz = est.get_grasp_pose(skeleton_coords)
    
    gp_img = est.draw_gp_img(gps_yxrz[0])
    print(f"gp_img type: {type(gp_img)}, dtype: {gp_img.dtype}, shape: {gp_img.shape}")

    # Display image, wait for user to press Enter
    cv2.imshow("Grasp Pose Image", gp_img)
    print("Press ENTER to save the image...")
    while True:
        key = cv2.waitKey(0)
        if key == 13:  # Enter 
            break
    cv2.destroyAllWindows()

    est.save_gp_img(gps_yxrz[0], cfg.PATHS['sam21_gp'])
    print("[INFO] Grasp Points (y, x, rotation):")
    for i, (y, x, r) in enumerate(gps_yxrz):
        print(f"  Point {i+1}: y={y:.1f}, x={x:.1f}, r={r:.2f}")


if not gps_yxrz:
    raise Exception(f'No grasp point(s) found! Retry, mix cables or fill bin.')
if cfg.USE_DEPTH_INFO:  # if the depth sensor is used, get the z value from it
    if cfg.ID_SEG==0:
        gp_z_auto = est.get_depth(gps_yxrz[gps_order[0]], mask, cfg.PATHS['pointcloud'], cfg.PATHS['depth_confidence'])               # measured depth value [m] -> Use dot projector!!
    elif cfg.ID_SEG==1:
        gp_z_auto = est.get_depth(gps_yxrz[0], seg_map-1, cfg.PATHS['pointcloud'], cfg.PATHS['depth_confidence'])
    # Define range for gp_z_auto and correction factor
    # gp_z_auto_corr = 0.011  # Move gripper up a little
    # gp_z_auto -= gp_z_auto_corr
    gp_z_min = cfg.Z_MIN[cfg.ID_PAD]
    gp_z_max = cfg.Z_MAX[cfg.ID_PAD]
    if gp_z_auto < gp_z_min:
        gp_z_auto = gp_z_min
    elif gp_z_auto > gp_z_max:
        gp_z_auto = gp_z_max

    gp_z = gp_z_auto
else:
    gp_z = cfg.POSE_Z[cfg.ID_ACT][cfg.ID_PAD]

# gp_z = gp_z_auto
print(f"[INFO] Estimated gp_z (with depth sensor): {gp_z:.4f} m")                                                                                   # forced depth value [m]


## Get the grasp point in the camera frame
scale_x = cfg.ZIVID_WIDTH_3D  / cfg.WIDTH_2D
scale_y = cfg.ZIVID_HEIGHT_3D / cfg.HEIGHT_2D

x_resized = x
y_resized = y

x_orig = x_resized * scale_x
y_orig = y_resized * scale_y

def pixel_to_camera_coords(x, y, depth, fx, fy, cx, cy):
    X = (x - cx) * depth / fx
    Y = (y - cy) * depth / fy
    Z = depth
    return np.array([X, Y, Z])
camera_point = pixel_to_camera_coords(x_orig, y_orig, gp_z, cfg.ZIVID_fx, cfg.ZIVID_fy, cfg.ZIVID_cx, cfg.ZIVID_cy)
print(f"[INFO] Estimated grasp point in the camera frame: X = {camera_point[0]:.4f} m, Y = {camera_point[1]:.4f} m, Z = {camera_point[2]:.4f} m, rz = {r:.2f} degree")  

## Calculate the grasp point in the ee frame
def grasp_to_ee(X_cam, Y_cam, Z_cam, rz_degree, T_cam_to_ee, save_path):
    #1. Convert the camera frame's meter unit to millimeters
    point_cam_mm = np.array([X_cam * 1000, Y_cam * 1000, Z_cam * 1000, 1.0])  

    # 2. Use the 4x4 transformation matrix to transform to the ee frame
    point_ee_mm = T_cam_to_ee @ point_cam_mm
    X_ee_mm, Y_ee_mm, Z_ee_mm, _ = point_ee_mm
    X_ee = X_ee_mm / 1000
    Y_ee = Y_ee_mm / 1000
    Z_ee = Z_ee_mm / 1000


    # 3. Rotation: Calculate the quaternion based on rz (rotation around the Z axis)
    theta_rad = np.deg2rad(rz_degree)  # Degree to radians
    qw = np.cos(theta_rad / 2)
    qx = 0.0
    qy = 0.0
    qz = np.sin(theta_rad / 2)

    # 4. Print to ROS Pose format
    print("pose.position.x = {:.6f}".format(X_ee))  # Remember to turn back to m at the end
    print("pose.position.y = {:.6f}".format(Y_ee))
    print("pose.position.z = {:.6f}".format(Z_ee))
    print("pose.orientation.x = {:.6f}".format(qx))
    print("pose.orientation.y = {:.6f}".format(qy))
    print("pose.orientation.z = {:.6f}".format(qz))
    print("pose.orientation.w = {:.6f}".format(qw))
    grasp_pose = {
        "position": {
            "x": float("{:.6f}".format(X_ee)),
            "y": float("{:.6f}".format(Y_ee)),
            "z": float("{:.6f}".format(Z_ee)),
        },
        "orientation": {
            "x": float("{:.6f}".format(qx)),
            "y": float("{:.6f}".format(qy)),
            "z": float("{:.6f}".format(qz)),
            "w": float("{:.6f}".format(qw)),
        }
    }

    # 5. Save to YAML
    os.makedirs(os.path.dirname(save_path), exist_ok=True)
    with open(save_path, 'w') as file:
        yaml.dump(grasp_pose, file, default_flow_style=False)

    print(f"Grasp pose saved to: {save_path}")

# Example usage
T1 = np.array(cfg.UR10e_ee_cam)#ur10e
T2 = np.array(cfg.panda_flange_cam)#panda
T_cam_ee = np.linalg.inv(T1)#ur10e
# T_cam_flange = np.linalg.inv(T2)#panda
T_cam_flange = T2
# T_cam_ee = np.array(cfg.UR10e_cam_ee)
# save_file_path = '/home/tailai/ros2_ws/src/cable_detection_picking/data/transformation_data/grasp_pose_ee_frame.yaml'
current_file = Path(__file__).resolve()
project_root = current_file.parent
# save_file_path_ur = project_root / "data" / "transformation_data" / "grasp_pose_ee_frame.yaml"
save_file_path_panda = project_root / "data" / "transformation_data" / "grasp_pose_flange_frame.yaml"
# grasp_to_ee(camera_point[0], camera_point[1], camera_point[2], r, T_cam_ee, save_file_path_ur)
grasp_to_ee(camera_point[0], camera_point[1], camera_point[2], r, T_cam_flange, save_file_path_panda)


# ######## (debugging) ####################################################################################################
# if (cfg.ID_DBG[0] or cfg.ID_DBG[1]) and cfg.ID_SEG==0:                                                                                      #
#     dbg.images_workflow(cfg.PATHS, mask, skeletons, gps_yxrz, gps_order, gaps)                                          #
# if cfg.ID_DBG[1]:
#     if cfg.ID_SEG==0:                                                                                                       #
#         dbg.popups(cfg.PATHS, keys=['visu_topology', 'visu_graspsearch', 'visu_graspfinal'])                                #
#     elif cfg.ID_SEG==1:                                                                                                       #
#         dbg.popups(cfg.PATHS, keys=['sam21_input_points', 'sam21_visu_mask', 'sam21_output_skeletons', 'sam21_gp'])   
#     #####################################################################################################################


# # ## ACTUATION
# if cfg.ID_SEG==0:
#     xyz_rob, rxryrz_rob = act.transformation(gps_yxrz[gps_order[0]], gp_z, cfg.ID_ACT)                                                                                                                   # !TODO reconfigure virtual walls
# elif cfg.ID_SEG==1:
#     xyz_rob, rxryrz_rob = act.transformation(gps_yxrz[0], gp_z, cfg.ID_ACT)           
# if cfg.ID_ACT==1 or cfg.ID_ACT==2:
#     if cfg.ID_CAM==1:                                                                                                                                       # !TODO delete after calibration
#         print('OAK-D is not yet calibrated!')                                                                                                               # !TODO delete after calibration
#         raise Exception('OAK-D is not yet calibrated!')                                                                                                     # !TODO delete after calibration
#     if cfg.USE_SM:
#         debug_list, success = act.actuation_sm(xyz_rob, rxryrz_rob, cfg.OBJECTS[cfg.ID_OBJ]['name'], cfg.ID_ACT)
#     else:
#         if not cfg.USE_DEPTH_INFO:  # if the depth sensor is not used, hard code z
#             xyz_rob[0][2] = gp_z
#         act.actuation(xyz_rob, rxryrz_rob, cfg.OBJECTS[cfg.ID_OBJ]['name'], cfg.ID_ACT)

# ######## (debugging) ####################################################################################################
# if (cfg.ID_ACT==1 or cfg.ID_ACT==2) and cfg.ID_SEG==0:
#     if cfg.ID_DBG[2] and cfg.USE_SM:                                                                                            #
#         dbg.console(gps_yxrz[gps_order[0]], xyz_rob[0][2], xyz_rob, rxryrz_rob, debug_list, success) 
#     else:
#         dbg.console(gps_yxrz[gps_order[0]], xyz_rob[0][2], xyz_rob, rxryrz_rob)                                                      #                                                                                                  #
#     if cfg.EXPERIMENT_MODE:
#         dbg.logging_img_solo(cfg.PATHS)
#         if cfg.USE_SM:
#             dbg.log_csv_solo(gps_yxrz[gps_order[0]], xyz_rob[0][2], debug_list, success)
#         else:
#             dbg.log_csv_solo(gps_yxrz[gps_order[0]], xyz_rob[0][2])
# elif cfg.ID_ACT==0 and cfg.ID_SEG==0:
#     if cfg.ID_DBG[2]:                                                                                            #
#         dbg.console(gps_yxrz[gps_order[0]], xyz_rob[0][2], xyz_rob, rxryrz_rob)                                                #                                                                                                  #
#     if cfg.EXPERIMENT_MODE:
#         dbg.logging_img_solo(cfg.PATHS)
#         dbg.log_csv_solo(gps_yxrz[gps_order[0]], xyz_rob[0][2])
# elif (cfg.ID_ACT==1 or cfg.ID_ACT==2) and cfg.ID_SEG==1:
#     if cfg.ID_DBG[2] and cfg.USE_SM:                                                                                            #
#         dbg.console(gps_yxrz[0], xyz_rob[0][2], xyz_rob, rxryrz_rob, debug_list, success) 
#     else:
#         dbg.console(gps_yxrz[0], xyz_rob[0][2], xyz_rob, rxryrz_rob)                                                      #                                                                                                  #
#     if cfg.EXPERIMENT_MODE:
#         dbg.logging_img_sam(cfg.PATHS)
#         if cfg.USE_SM:
#             dbg.log_csv_sam(gps_yxrz[0], xyz_rob[0][2], debug_list, success)
#         else:
#             dbg.log_csv_sam(gps_yxrz[0], xyz_rob[0][2])
# elif cfg.ID_ACT==0 and cfg.ID_SEG==1:
#     if cfg.ID_DBG[2]:                                                                                            #
#         dbg.console(gps_yxrz[0], xyz_rob[0][2], xyz_rob, rxryrz_rob)                                                #                                                                                                  #
#     if cfg.EXPERIMENT_MODE:
#         dbg.logging_img_sam(cfg.PATHS)
#         dbg.log_csv_sam(gps_yxrz[0], xyz_rob[0][2])

#                                                                                    #
# #####################################################################################################################   
