# -*- coding: utf-8 -*-
########################################################################################################################################################################
### IMPORTANT ###
# In the following, if a value is in curved brackets ({}) the option has NOT been tested or not been tested thoroughly!
# The vacuum gripper version is not deleted, however, it is not recommended for cluttered scenes with entanglements.
########################################################################################################################################################################

EXPERIMENT_MODE = True  # writes important variable values to a csv file; path = LOGGING_PATH

########################################################################################################################################################################
### SCENE DEPENDENT USER INPUT #########################################################################################################################################
########################################################################################################################################################################
ID_CAM = 0              # 0=rc_visard / {1=oak_d}                                                                                 
ID_OBJ = 0              # 0=all_DLO / {1=HV_SOLO} / {2=HV_RTDLO} / {3=SSB_SOLO} / {4=SSB_RTDLO} / {5=Tube}
ID_SEG = 1              # 0=SOLOv2 / 1=SAM2.1 (requires USE_DEPTH_INFO=True)
ID_ACT = 1              # 0=NoActuation / 1=JawGripper
ID_PAD = 3              # {0=GrayPaper} / {1=GrayMat} / 2=WhitePad / 3=LightgrayBox / {4=ElevateBox} / {5=GreenBox} / {6=BlueBox} / {7=nothing (only jaw!)} // Z_MIN and Z_MAX has to be set if gpz_auto is used!
ID_DBG = [1,1,1]        # [1=images_workflow, 1=workflow_as_popup, 1=console_printing]

########################################################################################################################################################################
### STATE MACHINE USER INPUT #########################################################################################################################################
########################################################################################################################################################################
ID_START_RELEASE_POSITION = 3  # 1=Next to bin (original) / {2=Further away from bin} / 3=On other table on the other side (also changes detection of entangled cables from Fx to Fy!)
# -----
USE_DEPTH_INFO = True  # True=Uses depth camera to obtain z-value of grasp pose / {False=Uses values from lookup-table for z-value of grasp pose}
# -----
USE_SM = True  # True=Uses the state machine implemented in actuation_sm() / {False=Uses the original approach implemented in actuation()}
ROBOT_TO_CAMERA_CORRECTION = 0.02  # a correction factor, which allows to fine-tune the distance from the camera to the robot before and after grasping (only sm!)
# -----
POSTPROCESS_METRIC = 1  # 1=The original metric (only works for up to 8 DLOs) / 2=Metric for cluttered scenes (prefers grasp pose on longest skeleton and in the middle of it)
# -----
ID_FT_SENSOR = 2  # 1=UR Sensor / 2=BotaSys SensOne
ADAPTER = "enp5s0f0"  # only for BotaSys SensOne! Adapter can be found with find_ethernet_adapters.py, see https://gitlab.com/botasys/python_interface
# -----
DLO_WEIGHT = 0.13  # [kg]
DLO_DIAMETER = 0.011  # [m] 
DLO_WEIGHT_SAFETY_FACTOR = 1.175  # how many times more can picked dlo(s) weigh until it is detected as 2 or more dlos
MAX_PULL_FORCE = 10  # [N] -> max force in pulling direction (=after cable grasped) when moving from above_grasp to above_release; detects if multiple cables are pulled out of the box
ID_MOP = 2              # {0=No Motion Primitive (MP)} / {1=Shaking MP} / 2=Pendulum MP
# -----
GRIPPER_FORCE = 1  # between 0 and 1; percentage of maximum gripping force; 2F-85 can do 20-235N
GRIPPER_SPEED = 1  # between 0 and 1; percentage of maximal gripper speed; 2F-85 can do 20-150 mm/s
GRIPPER_OPENING = (DLO_DIAMETER*2 * 1.3) if ID_SEG==1 else (DLO_DIAMETER*2 * 1.14)  # gripper opening in [m]; 1.25 is a safety factory
# ----- sam21 specific
NO_INPUT_POINTS = 20  # number of input points for mask generation
# NO_INPUT_POINTS = 10  # number of input points for mask generation
MIN_MERGE_OVERLAP = 0.4  # when all SAM masks are compared to each other, what is the minimum overlap, so that 2 masks are merged
MAX_APPEND_OVERLAP = 0.1  # after the masks are sorted by their quality and merged, the best one is initially appended to the final masks; the rest of the masks may not overlap with the prior masks by more than XX otherwise it gets discarded
# -----
IMAGE_BOX_EDGE = 100
# IMAGE_BOX_EDGE = 260  # edge of the camera_image.png, which is cropped to avoid grasp poses that lead to a collision with the box (atm only for ID_PAD==3)
REDUCE_SCENE = False  # use the depth data to only make upmost "layer" of DLOs visible; Improves segmentation results and ensures a grasp point on the top layer; Only makes sense for SOLO, since SAM2.1 already uses depth sensor
AREA_THRESHOLD = 15000# minimum area [px²] visible in the depth image; if above that value one can assume that a graspable structure is visible in the corresponding "layer" 
# -----
DETECT_DLO_OVERHANG = False  # TODO: detects overhanging cables
DETECT_DLO_OVERHANG_EDGE = 100  # TODO: edge of the image which shall still be visible
# -----
GRIPPER_MAX_OPENING_DIST = 0.085  # [m] -> given by manufacturer (here: 2F-85: 85mm opening distance)
Z_OFFSET = 0.035  # for additional attachments to the end effector, e.g. the BotaSys SensOne FT sensor; !! ALSO ADJUST ON TEACH PANEL!!
# -----
LOGGING_PATH = "/home/pachler/Dokumente/dlo_bp/data/pachler_ma/"  # path where log files are stored at (end with a slash/!)

########################################################################################################################################################################
### DICTIONARIES (usually no modifications required) ###################################################################################################################
########################################################################################################################################################################
## maps object id (ID_OBJ) to object name, segmentation settings and DLO-property 
OBJECTS = {
    0: {'name':         'all DLOs (SOLO)',
        'checkpoint':   'data/solo_checkpoints/20230616_DLO_SOLO.pth',
        'config':       'data/solo_configs/solov2/solov2_r101_fpn_3x_coco.py',
        'is_DLO':       True
        },
    1: {'name':         'HV-Cable (SOLO)',
        'checkpoint':   'data/solo_checkpoints/20230505_KabelHV_SOLO.pth',
        'config':       'data/solo_configs/solov2/solov2_r101_fpn_3x_coco.py',
        'is_DLO':       True
        },
    2: {'name':         'HV-Cable (RTDLO)',
        'checkpoint':   'data/solo_checkpoints/20230505_KabelHV_RTDLO.pth',
        'config':       'data/solo_configs/solov2/solov2_r101_fpn_3x_coco.py',
        'is_DLO':       True
        },
    3: {'name':         'SSB-Cable (SOLO)',
        'checkpoint':   'data/solo_checkpoints/20230505_KabelSSB_SOLO.pth',
        'config':       'data/solo_configs/solov2/solov2_r101_fpn_3x_coco.py',
        'is_DLO':       True
        },
    4: {'name':         'SSB-Cable (RTDLO)',
        'checkpoint':   'data/solo_checkpoints/20230505_KabelSSB_RTDLO.pth',
        'config':       'data/solo_configs/solov2/solov2_r101_fpn_3x_coco.py',
        'is_DLO':       True
        },
    5: {'name':         'Tube',
        'checkpoint':   'data/solo_checkpoints/20230505_Schlauch.pth',
        'config':       'data/solo_configs/solov2/solov2_r101_fpn_3x_coco.py',
        'is_DLO':       True
        },
}
## maps camera id (ID_CAM) to extrinsic camera parameters for translation (T) and rotation (Q) which are read from hand-eye-calibration         # TODO OAK-D missing        
ECP = {
    0:  ## RC_VISARD_65
        {
            'T':    [[-0.3081],     #  X @Polyscope
                     [-0.7310],     # -Y @Polyscope
                     [ 0.9810]],    #  Z @Polyscope
            'Q':    [[ 0.0011,      # QX @Polyscope
                      -1.0000,      # QY @Polyscope
                      -0.0003,      # QZ @Polyscope
                       0.0004]]     # QW @Polyscope
        },
    1:  ## OAK_D_LITE                                                                                                                           # TODO OAK-D missing
        {
            'T':    [[None],     #  X
                     [None],     #  Y
                     [None]],    #  Z
            'Q':    [[None,      # QX
                      None,      # QY
                      None,      # QZ
                      None]]     # QW
        },
}
## maps ranges for z pose to scene's padding (only for gpz_auto!)
Z_MIN = {
    2: 0.45,
    3: -0.20
}
Z_MAX = {
    2: 0.5675,
    3: 0.5675
}

START_RELEASE_POSITION = {
    1: {  # original
        "x": 0.29,
        "y": 0.73
    },
    2: { 
        "x": 0.6,
        "y": 0.6
    },
    3: { 
        "x": -0.53,
        "y": 0.0
    }
}
## maps padding id (ID_PAD) to scene's padding (gray paper, gray mat, white pad, lightgray/darkgray/green/blue box) as well as the z-coordinate of the robot's grasp pose
POSE_Z = {
    0: {            # no actuation
        0: None,        # gray paper
        1: None,        # gray mat
        2: None,        # white pad
        3: None,        # lightgray box
        4: None,        # darkgray box
        5: None,        # green box
        6: None         # blue box
        },
    1: {            # jaw gripper
        0: 0.412,       # gray paper
        1: 0.415,       # gray mat
        2: 0.415,       # white pad
        3: 0.413,       # lightgray box # Original 0.42
        4: 0.460,       # ElevateBox
        5: 0.420,       # green box
        6: 0.430        # blue box
        },
    2: {            # vacuum grippers
        0: 0.382,       # gray paper
        1: 0.385,       # gray mat
        2: 0.385,       # white pad
        3: 0.385,       # lightgray box
        4: 0.390,       # darkgray box
        5: 0.390,       # green box
        6: 0.400        # blue box
        },
    3: {            # jaw gripper with additional tcp_stationary_rotate
        0: 0.412,       # gray paper
        1: 0.415,       # gray mat
        2: 0.415,       # white pad
        3: 0.415,       # lightgray box
        4: 0.460,       # ElevateBox
        5: 0.420,       # green box
        6: 0.430        # blue box
        },
    4: {            # jaw gripper with additional wrist_joint_rotate
        0: 0.412,       # gray paper
        1: 0.415,       # gray mat
        2: 0.415,       # white pad
        3: 0.415,       # lightgray box
        4: 0.460,       # ElevateBox
        5: 0.420,       # green box
        6: 0.430        # blue box
        },
    5: {            # jaw gripper with additional dual_spin
        0: 0.412,       # gray paper
        1: 0.415,       # gray mat
        2: 0.415,       # white pad
        3: 0.415,       # lightgray box
        4: 0.460,       # ElevateBox
        5: 0.420,       # green box
        6: 0.430        # blue box
        },
    6: {            # jaw gripper with additional force based motions
        0: 0.412,       # gray paper
        1: 0.415,       # gray mat
        2: 0.415,       # white pad
        3: 0.415,       # lightgray box
        4: 0.460,       # ElevateBox
        5: 0.420,       # green box
        6: 0.430        # blue box
        },
    7: {            # JawGripper: Motion Primitives based on user input
        0: 0.412,       # gray paper
        1: 0.415,       # gray mat
        2: 0.415,       # white pad
        3: 0.415,       # lightgray box
        4: 0.460,       # ElevateBox
        5: 0.420,       # green box
        6: 0.430        # blue box
        },
    8: {            # Vacuum grippers: Motion Primitives based on user input
        0: 0.382,       # gray paper
        1: 0.385,       # gray mat
        2: 0.385,       # white pad
        3: 0.385,       # lightgray box
        4: 0.390,       # darkgray box
        5: 0.390,       # green box
        6: 0.400        # blue box
        }
}
## central storage of all paths
PATHS = {
    ## mandatory handovers between functions/modules
    'image':                'data/camera_image.png',                                # captured 2D-RBG-image
    'rgb_image':            'data/camera_image/camera_image.png',  
    'depth_image':          'data/depth_image.npz',                                 # depth image from pointcloud (see function get_depthimage())
    'depth_values':         'data/camera_depth.npy',                                # captured depth map (distance [m] to camera plane for each pixel)
    'depth_confidence':     'data/rcvisard_img_depth_confidence.png',               # Original: camera_confidence.png [deactivated] captured depth confidence (confidence value for each pixel)     (!)) not provided by OAKD
    'pointcloud':           'data/camera_pointcloud.ply',                           # [deactivated] captured point cloud
    'point_cloud':           'data/camera_pointcloud/camera_pointcloud.ply', 
    'solo_checkpoint':      OBJECTS[ID_OBJ]['checkpoint'],                          # SOLO checkpoint file (depends on object type)
    'solo_config':          OBJECTS[ID_OBJ]['config'],                              # SOLO checkpoint file (depends on checkpoint file)
    'solo_polygons':        'data/solo_polygons.json',                              # transfer from SOLO to estimation
    'rtdlo_folder':         'rtdlo',                                                # RTDLO folder (cloned from https://github.com/lar-unibo/RT-DLO)
    'rtdlo_intersections':  'data/rtdlo_intersections.json',                        # [deactivated] for splitting masks (PP V2 Part1)
    'mask_binary':          'data/solo_mask_binary.png',                            # transfer from SOLO to RTDLO
    'mask_instance':        'data/solo_mask_instance.png',                          # transfer from SOLO to estimation
    'mask_rtdlo':           'data/rtdlo_mask_interpolated.png',                     # transfer from RTDLO to estimation
    ## voluntary visualizations and intermediate results
    'visu_disparity':               'data/visu_disparity.png',                      #  gs-disparity
    'visu_depth':                   'data/visu_depth.png',                          #  gs-depth
    'visu_mask_gray':               'data/visu_mask_gray.png',                      #  gs-masks
    'visu_mask_rbg':                'data/visu_mask_rbg.png',                       # rbg-masks
    'visu_skeletons':               'data/visu_skeletons.png',                      #  bw-skeletons
    'visu_segmentation':            'data/visu_solo_segmentation.png',              # rbg-image with solo-masks     and bounding boxes
    'visu_topology':                'data/visu_topology.png',                       # rbg-masks with   bw-skeletons and intersections
    'visu_graspsearch':             'data/visu_graspsearch.png',                    #  gs-masks with  rbg-skeletons and multiple generated grasp points
    'visu_graspfinal':              'data/visu_graspfinal.png',                     # rbg-image with  rbg-skeletons and single best grasp point
    'visu_split':                   'data/visu_split.png',                          # ?
    ## reduced scene
    'image_red':                'data/camera_image_red.png',
    ## SAM2.1 specific
    'sam21_toplayer_bw':            'data/sam21_toplayer_bw.png',
    'sam21_input_point_sampler_skeleton': 'data/sam21_input_point_sampler_skeleton.png',
    'sam21_input_points':           'data/sam21_input_points.png',
    'sam21_annotations':            'data/sam21_annotations.png',
    'sam21_visu_mask':              'data/sam21_visu_mask.png',
    'sam21_seg_map':                'data/seg_map.npz',
    'sam21_output_skeletons':       'data/sam21_output_skeletons.png',
    'sam21_gp':                     'data/sam21_gp.png',
}


########################################################################################################################################################################
### SPECIFIC PARAMETERS (no modifications required) ####################################################################################################################
########################################################################################################################################################################
##UR10e calibration result(eye-in-hand calibration)
UR10e_ee_cam = [[ -0.04008,   0.98342,   0.17688, -74.52176],
 [ -0.99842,  -0.03244,  -0.04586,  58.41246],
 [ -0.03936,  -0.17844,   0.98316, -98.41952],
 [  0.,        0.,        0.,        1.     ]]
# panda_flange_cam = [[  -0.00955,    0.99995,    0.00344,  -95.28284],
#  [  -0.999,     -0.00939,   -0.04372,   56.60873],
#  [  -0.04369,   -0.00386,    0.99904,   84.6757 ],
#  [   0.,         0. ,        0. ,        1.     ]]

panda_flange_cam = [[  0.00955,    -0.99995,    -0.00344,  95.28284],
 [  0.999,     0.00939,   0.04372,   -56.60873],
 [  -0.04369,   -0.00386,    0.99904,   84.6757 ],
 [   0.,         0. ,        0. ,        1.     ]]

##zivid camera intrinsic parameters
ZIVID_fx = 1240.775390625
ZIVID_fy = 1240.4244384765625
ZIVID_cx = 593.7578735351562
ZIVID_cy = 505.812744140625

## resolutions of zivid camera
ZIVID_WIDTH_2D = 2448
ZIVID_HEIGHT_2D = 2048
ZIVID_WIDTH_3D = 1224
ZIVID_HEIGHT_3D = 1024
## resolutions of image data [px]                                                       (@ _2b_segmentation_RTDLO.py, segmentation.py, estimation.py, actuation.py)
HEIGHT_2D = 960
WIDTH_2D = 1280
HEIGHT_3D = 480
WIDTH_3D = 640
## rectified focal length [px]                                                          (@ estimation.py, actuation.py)
FOCAL_LENGTH = 0.844893
FOCAL_FACTOR = FOCAL_LENGTH * WIDTH_2D - 1.5  # 1.5 was estimated in some experiments; orig: 1083.18994140625
## minimum circumference for polygons to be used for instance mask creation             (@ segmentation.py)
MIN_PIXEL_NUMBER = 150
## minimum number of pixels that are not covered by any other mask segment              (@ segmentation.py)
UNIQUE_PIXELS = 1000
## maximum distance between two skeleton endpoints for connection via interpolation     (@ estimation.py)
MAX_SKEL_DISTANCE = 50
## offset of grayshade values for better visualization                                  (@ estimation.py)
GRAYSHADE_OFFSET_VISUALIZATION = 200
## radius of circular kernel for filtered depth estimation                              (@ estimation.py)
# KERNEL_SIZE = 10
KERNEL_SIZE = 4
## grasp point selection                                                                (@ estimation.py)
N_CANDIDATES = 10
PIXELRADIUS_COLLISION = 35
HV_CENTROID = 0.45
PIXELRADIUS_CONFIDENCE = 20                 # unused
THRESHOLD_CONFIDENCE = 200                  # unused
MIN_SEGMENT_LENGTH = 200
## robot actuation                                                                      (@ actuation.py)
TRAJECTORY_SECONDS = 2
## colors of masks/skeletons in debug images                                            (@ debug.py)
RBG =  [(255,  0,  0), (  0,255,  0), (  0,  0,255),    # red,    green,     blue
        (255,255,  0), (  0,255,255), (255,  0,255),    # yellow, cyan,      magenta
        (120,120,  0), (  0,120,120), (120,  0,120),    # olive,  turquoise, purple
        (255,120,  0), (  0,255,120), (120,  0,255),    # orange, lGreen,    lPurple
        (120,255,  0), (  0,120,255), (255,  0,120)]    # lGreen, lBlue,     pink

