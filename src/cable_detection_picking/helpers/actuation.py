import sys
import time
import serial
import logging
import numpy as np
from scipy.spatial.transform import Rotation
from rtde import rtde, rtde_config
import config as cfg
import matplotlib.pyplot as plt
import rtde.csv_writer as csv_writer
from multiprocessing import Process,Queue,Pipe
from helpers.bota_ethercat_interface import get_data
import csv

################################################## (1) HELPERS FOR TRANSFORMATION ##################################################

## transformation img->cam
def pixel2real(IN_x_pixel, IN_y_pixel, IN_depth):
    """
    Transforms one point's pixel coordinates (xy in image CoSy) and depth value (z) into real coordinates (xyz in camera CoSy).

    Args:
        IN_x_pixel: x-coordinate of a point in pixel coordinates (image coordinate system)
        IN_y_pixel: y-coordinate of a point in pixel coordinates (image coordinate system)
        IN_depth: distance between point and sensor plane in m
        
    Returns:
        OUT_real: coordinates (xyz) of a point in real coordinates (camera coordinate system) 
    """
    ## defining [0,0] as center of image
    x = IN_x_pixel -cfg.WIDTH_3D/2  +0.5
    y = IN_y_pixel -cfg.HEIGHT_3D/2 +0.5
    ## transformation pixel->real (depth is already real)
    x = x*IN_depth / (cfg.FOCAL_FACTOR/cfg.WIDTH_2D*cfg.WIDTH_3D)
    y = y*IN_depth / (cfg.FOCAL_FACTOR/cfg.WIDTH_2D*cfg.WIDTH_3D)
    ## output
    OUT_real = np.array([[x,y,IN_depth]])
    return OUT_real

## transformation cam->world
def cam2world(pc, extrinsic):
    # extrinsic is Camera Position and Quaternion
    # pc shape (1 , 3)
    # extrinsic shape (4, 4)
    extr_inv = np.linalg.inv(extrinsic)  # get inverse matrix
    R = extr_inv[:3, :3]
    T = extr_inv[:3, 3]
    pc_transformed = (R @ pc.T).T + T
    return pc_transformed

## returns gripper orientation depending on robot pose
def get_gripper_orientation_wrt_robot(orientation_cameracoordinates):
    ## predefine orientations
    orientation_mapping = {
        -90:    [2.221, 2.221, 0],
        -82.5:  [2.361, 2.071, 0],
        -75:    [2.492, 1.912, 0],
        -67.5:  [2.611, 1.745, 0],
        -60:    [2.720, 1.570, 0],
        -52.5:  [2.817, 1.389, 0],
        -45:    [2.901, 1.202, 0],
        -37.5:  [2.976, 1.010, 0],
        -30:    [3.035, 0.813, 0],
        -22.5:  [3.082, 0.613, 0],
        -15:    [3.116, 0.410, 0],
        -7.5:   [3.136, 0.206, 0],
        0:     [3.143, 0, 0],
        7.5:   [3.136, -0.206, 0],
        15:    [3.116, -0.410, 0],
        22.5:  [3.082, -0.613, 0],
        30:    [3.035, -0.813, 0],
        37.5:  [2.976, -1.010, 0],
        45:    [2.901, -1.202, 0],
        52.5:  [2.817, -1.389, 0],
        60:    [2.720, -1.570, 0],
        67.5:  [2.611, -1.745, 0],
        75:    [2.492, -1.912, 0],
        82.5:  [2.361, -2.071, 0],         
        90:     [2.221, -2.221, 0]}    
    
    ## select orientation
    keys = np.array(list(orientation_mapping.keys()))
    nearest_index = np.abs(keys-orientation_cameracoordinates).argmin()
    nearest_key = keys[nearest_index]
    orientation_robotcoordinates = orientation_mapping[nearest_key]
    ## output
    return orientation_robotcoordinates

def get_gripper_orientation_wrt_robot_add(orientation_cameracoordinates):
    ## predefine orientations
    orientation_mapping = {
        ## between orientation [°] in camera coordinates (=keys) and robot coordinates (=values)
        90:     [0, 3.143, 0],
        97.5:   [0.206, 3.136, 0],
        105:    [0.410, 3.116, 0],
        112.5:  [0.613, 3.082, 0],
        120:    [0.813, 3.035, 0],
        127.5:  [1.010, 2.976, 0],
        135:    [1.202, 2.901, 0],
        142.5:  [1.389, 2.817, 0],
        150:    [1.570, 2.720, 0],
        157.5:  [1.745, 2.611, 0],
        165:    [1.912, 2.492, 0],
        172.5:  [2.071, 2.361, 0],
        180:    [2.221, 2.221, 0],
        187.5:  [2.362, 2.071, 0],
        195:    [2.493, 1.913, 0],
        202.5:  [2.611, 1.745, 0],
        210:    [2.720, 1.570, 0],
        217.5:  [2.817, 1.389, 0],
        225:    [2.901, 1.202, 0],
        232.5:  [2.976, 1.010, 0],
        240:    [3.035, 0.813, 0],
        247.5:  [3.082, 0.613, 0],
        255:    [3.116, 0.410, 0],
        262.5:  [3.136, 0.206, 0],
        270:    [3.141, 0, 0]
    }
    ## select orientation
    keys = np.array(list(orientation_mapping.keys()))
    nearest_index = np.abs(keys-orientation_cameracoordinates).argmin()
    nearest_key = keys[nearest_index]
    orientation_robotcoordinates = orientation_mapping[nearest_key]
    ## output
    return orientation_robotcoordinates

def get_gripper_orientation_wrt_robot_sub(orientation_cameracoordinates):
    ## predefine orientations
    orientation_mapping = {
        ## between orientation [°] in camera coordinates (=keys) and robot coordinates (=values)
        90:     [3.141, 0 , 0],
        97.5:   [3.134, -0.205, 0],
        105:    [3.114, -0.410, 0],
        112.5:  [3.080, -0.613, 0],
        120:    [3.034, -0.813, 0],
        127.5:  [2.974, -1.009, 0],
        135:    [2.901, -1.202, 0],
        142.5:  [2.817, -1.389, 0],
        150:    [2.720, -1.570, 0],
        157.5:  [2.611, -1.745, 0],
        165:    [2.492, -1.912, 0],
        172.5:  [2.361, -2.071, 0],
        180:    [2.221, -2.221, 0],
        187.5:  [2.071, -2.361, 0],
        195:    [1.912, -2.492, 0],
        202.5:  [1.745, -2.611, 0],
        210:    [1.570, -2.720, 0],
        217.5:  [1.389, -2.817, 0],
        225:    [1.202, -2.901, 0],
        232.5:  [1.009, -2.974, 0],
        240:    [0.813, -3.034, 0],
        247.5:  [0.613, -3.080, 0],
        255:    [0.410, -3.114, 0],
        262.5:  [0.205, -3.134, 0],
        270:    [0, 3.143, 0]
    }
    ## select orientation
    keys = np.array(list(orientation_mapping.keys()))
    nearest_index = np.abs(keys-orientation_cameracoordinates).argmin()
    nearest_key = keys[nearest_index]
    orientation_robotcoordinates = orientation_mapping[nearest_key]
    ## output
    return orientation_robotcoordinates

## creates trajectory based on start-/endpose and duration
class PathPlanTranslation(object):
    def __init__(self, pose_init, pose_desired, total_time):    
        self.position_init = pose_init[:3]
        self.position_des = pose_desired[:3]
        self.tfinal = total_time

    def trajectory_planning(self, t):
        X_init = self.position_init[0]
        Y_init = self.position_init[1]
        Z_init = self.position_init[2]
        X_final = self.position_des[0]
        Y_final = self.position_des[1]
        Z_final = self.position_des[2]
        # position
        x_traj = (X_final - X_init) / (self.tfinal ** 3) * (
                6 * (t ** 5) / (self.tfinal ** 2) - 15 * (t ** 4) / self.tfinal + 10 * (t ** 3)) + X_init
        y_traj = (Y_final - Y_init) / (self.tfinal ** 3) * (
                6 * (t ** 5) / (self.tfinal ** 2) - 15 * (t ** 4) / self.tfinal + 10 * (t ** 3)) + Y_init
        z_traj = (Z_final - Z_init) / (self.tfinal ** 3) * (
                6 * (t ** 5) / (self.tfinal ** 2) - 15 * (t ** 4) / self.tfinal + 10 * (t ** 3)) + Z_init
        position = np.array([x_traj, y_traj, z_traj])
        # velocities
        vx = (X_final - X_init) / (self.tfinal ** 3) * (
                30 * (t ** 4) / (self.tfinal ** 2) - 60 * (t ** 3) / self.tfinal + 30 * (t ** 2))
        vy = (Y_final - Y_init) / (self.tfinal ** 3) * (
                30 * (t ** 4) / (self.tfinal ** 2) - 60 * (t ** 3) / self.tfinal + 30 * (t ** 2))
        vz = (Z_final - Z_init) / (self.tfinal ** 3) * (
                30 * (t ** 4) / (self.tfinal ** 2) - 60 * (t ** 3) / self.tfinal + 30 * (t ** 2))
        velocity = np.array([vx, vy, vz])
        # acceleration
        ax = (X_final - X_init) / (self.tfinal ** 3) * (
                120 * (t ** 3) / (self.tfinal ** 2) - 180 * (t ** 2) / self.tfinal + 60 * t)
        ay = (Y_final - Y_init) / (self.tfinal ** 3) * (
                120 * (t ** 3) / (self.tfinal ** 2) - 180 * (t ** 2) / self.tfinal + 60 * t)
        az = (Z_final - Z_init) / (self.tfinal ** 3) * (
                120 * (t ** 3) / (self.tfinal ** 2) - 180 * (t ** 2) / self.tfinal + 60 * t)
        acceleration = np.array([ax, ay, az])
        # output
        return [position, velocity, acceleration]


################################################## (2) INTERFACES FOR TRANSFORMATION #################################################

## get robot pose [robot coordinates] from grasp point [image coordinates]
def transformation(yxrz_img, z_img, id_act):
    """
    Transforms image coordinates (x,y,z,rz) into robot pose (x,y,z,rx,ry,rz).

    Args:
        x_img: x-coordinate of the grasp point (in image coordinates [px])
        y_img: y-coordinate of the grasp point (in image coordinates [px])
        z_img: z-coordinate of the grasp point (in real coordinates [m])
        rz_img_gripper: orientation of the gripper at the cable's grasp point (in image coordinates [°])
        
    Returns:
        pc_world: x-, y- and z-coordinate of the robot pose stored as np.array([[x,y,z]])
        gripper_orientation: rx-, ry- and rz-cordinate of the robot pose stored as list([r,ry,rz])
    """
    ## transformation from img[px] to cam[px]
    x_cam = np.rint(yxrz_img[1]/2) 
    y_cam = np.rint(yxrz_img[0]/2)
    z_cam = z_img
    rz_cam_gripper = yxrz_img[2]
    ## vacuum gripper's orientation is shifted by 90° compared to jaw gripper
    if id_act==2:
        rz_cam_gripper += 90
        ## scale input into limiting boundaries
        if rz_cam_gripper>=270:
            rz_cam_gripper = rz_cam_gripper-180
    ## transformation from cam[px] to cam[real]
    real_cam = pixel2real(x_cam, y_cam, z_cam)
    ## transformation from cam[real] to rob[real]
    R = Rotation.from_quat(np.array(cfg.ECP[cfg.ID_CAM]['Q'])).as_matrix()
    T = np.array(cfg.ECP[cfg.ID_CAM]['T'])
    extr = np.eye(4)
    extr[:3, :3] = R
    extr[:3, 3:] = T
    ## output (xyz_point and rxryrz_gripper)
    yxz_rob = cam2world(real_cam, extr)
    rxryrz_rob = get_gripper_orientation_wrt_robot(rz_cam_gripper)
    return yxz_rob, rxryrz_rob

################################################## (3) INTERFACE FOR ACTUATION ##################################################

## actuate robot to grasp and release object
def actuation(xyz_rob, rxryrz_rob, objectname, gripperID):
    """
    Comments see actuation_sm()!
    """
    ## ------------------------- input handling -------------------------
    setp_x = xyz_rob[0][0]
    setp_y = xyz_rob[0][1]
    setp_z = xyz_rob[0][2]
    setp_rx = rxryrz_rob[0]
    setp_ry = rxryrz_rob[1]
    setp_rz = rxryrz_rob[2]
    if gripperID==1:
        gripper = 'jaw'
        config_filename = 'data/gripper_configurations/configuration_jaw.xml'
    elif gripperID==2:
        gripper = 'vacuum'
        config_filename = 'data/gripper_configurations/configuration_vacuum.xml'

    ## ------------------- define poses -------------------
    # determine start/release position
    start_release_x = cfg.START_RELEASE_POSITION[cfg.ID_START_RELEASE_POSITION]["x"]
    start_release_y = cfg.START_RELEASE_POSITION[cfg.ID_START_RELEASE_POSITION]["y"]
    robot_poses = {                                                                                     # coordinates via Polyscope/Move/ToolPosition (! Z is shifted by 400mm)
        'jaw': {'start':            [ start_release_x, start_release_y, 0.600  - cfg.Z_OFFSET, 3.141, 0.000, 0.000],
                'camera_center':    [-0.340, 0.730, 0.600 - cfg.Z_OFFSET, 2.247, -2.195, 0.000],
                'above_grasp':      [setp_x, setp_y, 0.600 - cfg.Z_OFFSET,  setp_rx, setp_ry, setp_rz],
                'grasp':            [setp_x, setp_y, setp_z, setp_rx, setp_ry, setp_rz],
                'above_release':    [ start_release_x, start_release_y, 0.600 - cfg.Z_OFFSET, 3.141, 0.000, 0.000],
                'release':          [ start_release_x, start_release_y, 0.450, 3.141, 0.000, 0.000]}, 
        'vacuum':  {'start':            [0.200, 0.730, 0.660, 2.247, -2.195, 0.000],
                    'camera_center':    [-0.340, 0.730, 0.660, 2.247, -2.195, 0.000],
                    'above_grasp':      [setp_x, setp_y, 0.660,  setp_rx, setp_ry, setp_rz],
                    'grasp':            [setp_x, setp_y, setp_z, setp_rx, setp_ry, setp_rz],
                    'above_release':    [ 0.200, 0.730, 0.660, 2.247, -2.195, 0.000],
                    'release':          [ 0.200, 0.730, 0.450, 2.247, -2.195, 0.000]}  
    }
    gripper_orientations = {
        'grasp':    robot_poses[gripper]['grasp'][3:],
        'release':  robot_poses[gripper]['release'][3:]
    }
    gripper_actuations = {
        'jaw_init':     b'\x09\x10\x03\xE8\x00\x03\x06\x00\x00\x00\x00\x00\x00\x73\x30',
        #'jaw_init':     b'\x09\x10\x03\xE8\x00\x03\x06\x00\x00\x00\x80\x20\x00\x73\x30',                # TEST (does not work, jaw init not used properly) 1/2 open, 1/8 speed, no force
        'jaw_open':     b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\x00\xFF\xFF\x72\x19',
        'jaw_quarter':  b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\xA0\xFF\xFF\x72\x3B',                # between semi and quarter closed, this size is designed precisely to the thickness of cable, reduce collison with adjacent cables
        'jaw_close':    b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\xEE\x40\x40\x23\xAC',                # 1/8 closed with 1/4 speed and 1/4 force
        'slow_close':   b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\xFF\x40\xFF\x32\x19',                # !TODO remove slow_close for USB? // Cong: slower is better for grasping USB
        'vacuum_on':    (48,48),        #   activate ports 4&5 by setting them to 4&5 (48=2⁴+2⁵)
        'vacuum_off':   (16,0)          # deactivate port  4   by setting it   to 0   (16=2⁴) 
    }
    
    ## ------------------- define trajectories -------------------
    trajectories = {
        1:  None,
        2: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['start'],
            'p1':   robot_poses[gripper]['camera_center'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        gripper_actuations['jaw_quarter'] if not (('Cylinder' in objectname) or ('Plate' in objectname)) else gripper_actuations['jaw_open'],
            'vacuum_actuation':     None
            },
        3: {'t':    cfg.TRAJECTORY_SECONDS+2,
            'p0':   robot_poses[gripper]['camera_center'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None
            },
        4: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['grasp'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        gripper_actuations['jaw_close'] if not ('USB' in objectname) else gripper_actuations['slow_close'], # !TODO remove slow_close for USB?
            'vacuum_actuation':     gripper_actuations['vacuum_on']
            },
        5: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None
            },
        6: {'t':    6,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None
            },
        7: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['above_release'],
            'p1':   robot_poses[gripper]['release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        gripper_actuations['jaw_open'],
            'vacuum_actuation':     None
            },
        8: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['release'],
            'p1':   robot_poses[gripper]['above_release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     gripper_actuations['vacuum_off']
            },
        9: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['above_release'],
            'p1':   robot_poses[gripper]['start'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None
            }
    }
    ## ------------------------- define helper functions -------------------------
    def set_pose(setp, parameters):
        for i in range(0, 6):
            setp.__dict__["input_double_register_%i" % i] = parameters[i]
        return setp
    def set_vacuum(setp, parameters):
        setp.__dict__["standard_digital_output_mask"] = parameters[0]
        setp.__dict__["standard_digital_output"] = parameters[1]
        return setp

    ## ------------------------- setup communication with robotiq_2f_gripper -------------------------
    if gripper=='jaw':
        ser = serial.Serial(port='/dev/ttyUSB0',
                            baudrate=115200,
                            timeout=1,
                            parity=serial.PARITY_NONE,
                            stopbits=serial.STOPBITS_ONE,
                            bytesize=serial.EIGHTBITS)
        ser.write(gripper_actuations['jaw_init'])
        time.sleep(0.01)

    ## ------------------------- setup communication with robot -------------------------
    ROBOT_HOST = '192.168.1.2'
    ROBOT_PORT = 30004
    logging.getLogger().setLevel(logging.INFO)
    conf = rtde_config.ConfigFile(config_filename)
    state_names, state_types = conf.get_recipe('state')     # define recipe for access to robot output ex. joints,tcp etc.
    setp_names, setp_types = conf.get_recipe('setp_orig')        # define recipe for access to robot input
    watchdog_names, watchdog_types= conf.get_recipe('watchdog')

    ## -------------------- establish connection with robot--------------------
    con = rtde.RTDE(ROBOT_HOST, ROBOT_PORT)
    connection_state = con.connect()
    con.get_controller_version()

    ## ------------------- setup recipes ----------------------------
    FREQUENCY = 500  # send data with 500 Hz (default: 125Hz)
    con.send_output_setup(state_names, state_types, FREQUENCY)
    setp = con.send_input_setup(setp_names, setp_types)     # configure an input package that the external application will send to the robot controller
    setp.input_double_register_0 = 0
    setp.input_double_register_1 = 0
    setp.input_double_register_2 = 0
    setp.input_double_register_3 = 0
    setp.input_double_register_4 = 0
    setp.input_double_register_5 = 0
    setp.input_bit_registers0_to_31 = 0
    if gripper=='vacuum':
        setp.standard_digital_output_mask = 0
        setp.standard_digital_output = 0
    watchdog = con.send_input_setup(watchdog_names, watchdog_types)
    watchdog.input_int_register_0 = 0

    ## ------------------- start data synchronization -------------------
    if not con.send_start():
        sys.exit()
    
    ## ------------------- setup trajectories -------------------
    while True:
        state = con.receive()
        con.send(watchdog)
        if state.output_bit_registers0_to_31 == True:
            break
    
    ## log wrench data
    csvfile = open("data/pachler_ma/internal_ft_xyz_q_orig.csv", "w")
    output_names = ["timestamp", "actual_TCP_force", "actual_TCP_pose", "actual_q"]
    output_types = ["DOUBLE", "VECTOR6D", "VECTOR6D", "VECTOR6D"]
    writer = csv_writer.CSVWriter(csvfile, output_names, output_types)
    writer.writeheader()


    ## ------------------- trajectory 1 -------------------
    watchdog.input_int_register_0 = 1
    con.send(watchdog)  # send trajectory ID to robot
    set_pose(setp, robot_poses[gripper]['start'])
    con.send(setp)  # send pose to robot 
    while True:
        writer.writerow(state)
        ## refresh current state
        state = con.receive()
        con.send(watchdog)
        ## proceed only if pose is reached
        if state.output_bit_registers0_to_31 == False:
            break

    ## ------------------- trajectories 2-8 -------------------
    for i_mode in range(2,9):
        ## send trajectory ID to robot
        watchdog.input_int_register_0 = i_mode
        con.send(watchdog)
        ## plan trajectory
        planner = PathPlanTranslation(trajectories[i_mode]['p0'],
                                      trajectories[i_mode]['p1'],
                                      trajectories[i_mode]['t'])
        ## execute trajectory
        t_start = time.time()
        dt_current = 0

        # Force filter prereq
        Fz = 0
        Fz_filtered = 0
        alpha = 0.005

        while (time.time()-t_start) < trajectories[i_mode]['t']:
            writer.writerow(state)

            # Get and average force data
            if (((i_mode == 3) and ((time.time()-t_start) > (trajectories[i_mode]['t'] - 1))) or ((i_mode == 6) and (time.time()-t_start) < 1)) :
                if (time.time()-t_start) == 0:
                    Fz = 0
                    Fz_filtered = 0
                Fz = state.actual_TCP_force[2]
                Fz_filtered = alpha * Fz + (1-alpha) * Fz_filtered
            

            ## refresh ellapsed time & state
            dt_current = time.time() - t_start
            state = con.receive()
            if state.runtime_state > 1:
                ## refresh desired pose
                if dt_current <= trajectories[i_mode]['t']:
                    [pos_ref, vel_ref, acc_ref] = planner.trajectory_planning(dt_current)
                ## set pose
                pose = pos_ref.tolist() + trajectories[i_mode]['gripper_orientation']
                set_pose(setp, pose)
                ## actuate vacuum gripper
                if gripper=='vacuum' and (trajectories[i_mode]['vacuum_actuation'] is not None):
                    set_vacuum(setp, trajectories[i_mode]['vacuum_actuation'])
                con.send(setp)
        ## receive state
        state = con.receive()
        ## actuate jaw gripper
        if gripper=='jaw' and (trajectories[i_mode]['jaw_actuation'] is not None):
            ser.write(trajectories[i_mode]['jaw_actuation'])
        ## wait to ensure successful grasping 
        if i_mode==4:
            time.sleep(0.01)
    
    ## ------------------- disconnect -------------------
    watchdog.input_int_register_0 = 99
    con.send(watchdog)  # Make Program on teach panel go in wait mode

    con.send_pause()
    con.disconnect()
    return 


## actuate robot to grasp and release object
def actuation_sm(xyz_rob, rxryrz_rob, objectname, gripperID):
    """
    State Machine for the Bin-Picking process from start (robot is in a random pose) to end (robot is at a defined pose and has deposited a cable in a defined pose)
    Uses a force sensor and the gripper information about its opening width in contrast to earlier approaches.
    
    Args:
        xyz_rob: x-, y- and z-coordinate of the grasp pose stored as np.array([[x,y,z]])
        rxryrz_rob: rx-, ry- and rz-cordinate of the grasp pose stored as list([r,ry,rz])
        objectname: Contains information about the used AI model
        gripperID: The id of the gripper that is used

    Returns:
        debug_list: List with arbitary number of debug messages
        success: True if the bin-picking process was successful, i.e. one cable was deposited in a defined pose
    """
    ## ------------------------- input handling -------------------------
    setp_x = xyz_rob[0][0]
    setp_y = xyz_rob[0][1]
    setp_z = xyz_rob[0][2]
    setp_rx = rxryrz_rob[0]
    setp_ry = rxryrz_rob[1]
    setp_rz = rxryrz_rob[2]

    ## set the used gripper and individual config file name
    if gripperID==1:
        gripper = 'jaw'
        config_filename = 'data/gripper_configurations/configuration_jaw.xml'
    elif gripperID==2:
        gripper = 'vacuum'
        config_filename = 'data/gripper_configurations/configuration_vacuum.xml'

    ## ----------------- helper for poses -----------------
    def getRot90(angle_x, angle_y):
        rotMat = np.array([[np.cos(np.deg2rad(90)), -np.sin(np.deg2rad(90))], 
                            [np.sin(np.deg2rad(90)), np.cos(np.deg2rad(90))]])
        angle = np.array([angle_x, angle_y])
        angle = angle.dot(rotMat)
        return angle[0], angle[1]

    def getRot90neg(angle_x, angle_y):
        rotMat = np.array([[np.cos(np.deg2rad(-90)), -np.sin(np.deg2rad(-90))], 
                            [np.sin(np.deg2rad(-90)), np.cos(np.deg2rad(-90))]])
        angle = np.array([angle_x, angle_y])
        angle = angle.dot(rotMat)
        return angle[0], angle[1]

    ## ----------------- helper for gripper configuration -----------------
    def modbusCrc(msg: bytes) -> int:  # Expecting msg as bytes, not str
        crc = 0xFFFF
        for byte in msg:
            crc ^= byte  # XOR with the byte value
            for _ in range(8):  # Process each bit
                if crc & 1:
                    crc >>= 1
                    crc ^= 0xA001
                else:
                    crc >>= 1
        return crc

    def get_gripper_configuration(force, opening, speed):
        # Initial fixed bytes
        gripper_configuration_bytestring = b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00'

        # Calculate opening byte
        opening = int((cfg.GRIPPER_MAX_OPENING_DIST - cfg.GRIPPER_OPENING) / cfg.GRIPPER_MAX_OPENING_DIST * 255)
        if abs(opening) > 255:
            raise ValueError("Gripper opening out of range")
        gripper_configuration_bytestring += bytes([opening])

        # Calculate speed byte
        if abs(speed) > 1:
            raise ValueError("Gripper speed out of range")
        speed = int(abs(speed) * 255)
        gripper_configuration_bytestring += bytes([speed])

        # Calculate force byte
        if abs(force) > 1:
            raise ValueError("Gripper force out of range")
        force = int(abs(force) * 255)
        gripper_configuration_bytestring += bytes([force])

        # Calculate CRC and append it in little-endian order
        crc = modbusCrc(gripper_configuration_bytestring)
        gripper_configuration_bytestring += crc.to_bytes(2, 'little')
        return gripper_configuration_bytestring
    ## ------------------- define poses -------------------
    # Rotate setpoint negative 180 degrees to have more space for motion primitive
    setp_rx_rot1, setp_ry_rot1 = getRot90neg(setp_rx, setp_ry)
    setp_rx_rot2, setp_ry_rot2 = getRot90neg(setp_rx_rot1, setp_ry_rot1)

    # set some intermediate rotations for motion primitive 1
    mp_1_1_rx, mp_1_1_ry = getRot90(3.141,0.000)
    mp_1_2_rx, mp_1_2_ry = getRot90(mp_1_1_rx,mp_1_1_ry)

    # determine start/release position
    start_release_x = cfg.START_RELEASE_POSITION[cfg.ID_START_RELEASE_POSITION]["x"]
    start_release_y = cfg.START_RELEASE_POSITION[cfg.ID_START_RELEASE_POSITION]["y"]

    # some predefined poses
    robot_poses = {                                                                                     # coordinates via Polyscope/Move/ToolPosition (! Z is shifted by 400mm)
        'jaw': {'start':            [ start_release_x, start_release_y, 0.600 - cfg.Z_OFFSET, 3.141, 0.000, 0.000],
                'camera_center':    [-0.340, 0.730, 0.600 + cfg.ROBOT_TO_CAMERA_CORRECTION - cfg.Z_OFFSET, 2.247, -2.195, 0.000],
                'camera_center_release':    [-0.340, 0.730, 0.600 + cfg.ROBOT_TO_CAMERA_CORRECTION - cfg.Z_OFFSET, 3.141, 0.000, 0.000],
                'above_grasp_release':    [setp_x, setp_y, 0.600 + cfg.ROBOT_TO_CAMERA_CORRECTION - cfg.Z_OFFSET, 3.141, 0.000, 0.000], 
                'above_grasp':      [setp_x, setp_y, 0.600 + cfg.ROBOT_TO_CAMERA_CORRECTION - cfg.Z_OFFSET,  setp_rx, setp_ry, setp_rz],
                'above_grasp_rotated': [setp_x, setp_y, 0.600 + cfg.ROBOT_TO_CAMERA_CORRECTION - cfg.Z_OFFSET,  2.247, -2.195, 0.000],
                'grasp':            [setp_x, setp_y, setp_z, setp_rx, setp_ry, setp_rz],
                'rot_above_grasp_1':  [setp_x, setp_y, 0.600 + cfg.ROBOT_TO_CAMERA_CORRECTION - cfg.Z_OFFSET, setp_rx_rot1, setp_ry_rot1, 0.000],
                'rot_above_grasp_2':  [setp_x, setp_y, 0.600 + cfg.ROBOT_TO_CAMERA_CORRECTION - cfg.Z_OFFSET, setp_rx_rot2, setp_ry_rot2, 0.000],
                'mp_1_1':           [None, None, None, mp_1_1_rx, mp_1_1_ry, 0.0],
                'mp_1_2':           [None, None, None, mp_1_2_rx, mp_1_2_ry, 0.0],
                'above_release':    [ start_release_x, start_release_y, 0.600 - cfg.Z_OFFSET, 3.141, 0.000, 0.000],
                'release':          [ start_release_x, start_release_y, 0.450, 3.141, 0.000, 0.000],
                },  
        'vacuum':  {'start':            [0.200, 0.730, 0.660, 2.247, -2.195, 0.000],
                    'camera_center':    [-0.340, 0.730, 0.660, 2.247, -2.195, 0.000],
                    'above_grasp':      [setp_x, setp_y, 0.660,  setp_rx, setp_ry, setp_rz],
                    'grasp':            [setp_x, setp_y, setp_z, setp_rx, setp_ry, setp_rz],
                    'above_release':    [ 0.200, 0.730, 0.660, 2.247, -2.195, 0.000],
                    'release':          [ 0.200, 0.730, 0.450, 2.247, -2.195, 0.000],
                    'test_pose':        [ 0.0, 0.777, 0.771, 0.173, -3.138, 0]}  
    }
    # some predefined orientations (related to the poses from above)
    gripper_orientations = {
        'grasp':    robot_poses[gripper]['grasp'][3:],
        'above_grasp_rotated': robot_poses[gripper]['above_grasp_rotated'][3:],
        'above_grasp_release': robot_poses[gripper]['above_grasp_release'][3:],
        'release':  robot_poses[gripper]['release'][3:],
        'shake_off_dlo_1':robot_poses[gripper]['rot_above_grasp_1'][3:],
        'shake_off_dlo_2':robot_poses[gripper]['rot_above_grasp_2'][3:],
        'mp_1_1': robot_poses[gripper]['mp_1_1'][3:],
        'mp_1_2': robot_poses[gripper]['mp_1_2'][3:]
    }
    # gripper actuations in modbus protocol; more information in robotiq 2F-85 manual
    gripper_actuations = {
        'jaw_init':     b'\x09\x10\x03\xE8\x00\x03\x06\x00\x00\x00\x00\x00\x00\x73\x30',
        'jaw_dlo_tight':get_gripper_configuration(cfg.GRIPPER_FORCE, cfg.GRIPPER_OPENING, cfg.GRIPPER_SPEED),  # b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\xB4\xFF\xFF\x32\x3F',                # even tighter than jaw_quarter; for cluttered environments with bad collision avoidance
        'jaw_open':     b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\x00\xFF\xFF\x72\x19',
        'jaw_quarter':  b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\xA0\xFF\xFF\x72\x3B',                # between semi and quarter closed, this size is designed precisely to the thickness of cable, reduce collison with adjacent cables
        'jaw_close':    b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\xEE\x40\x40\x23\xAC',                # 1/8 closed with 1/4 speed and 1/4 force
        'slow_close':   b'\x09\x10\x03\xE8\x00\x03\x06\x09\x00\x00\xFF\x40\xFF\x32\x19',                # !TODO remove slow_close for USB? // Cong: slower is better for grasping USB
        'vacuum_on':    (48,48),        #   activate ports 4&5 by setting them to 4&5 (48=2⁴+2⁵)
        'vacuum_off':   (16,0)          # deactivate port  4   by setting it   to 0   (16=2⁴) 
    }
    
    ## ------------------- define trajectories -------------------
    # trajectories (not sorted!); corresponding number (1, 2, ...) is also called "i_mode" and corresponds to the "loop number" in the polyscope script!
    # the parameters of a trajectory are defined in the cartesian space; joint space movements are not implemented at the moment and have to be done via the polyscope (URScript).
    # q6_near and q5_near (unit: Rad) define where the inverse kinematics solver for the corresponding joint should start searching a solution. The solution will therefore be close to the specified angle. Cannot be None!
    # the starting point (p0) of a trajectory has to be the end point (p1) of the last trajectory!! Otherwise the robot will make jerky movements or throw an error
    trajectories = {
        2: {'t':    cfg.TRAJECTORY_SECONDS+2,
            'p0':   robot_poses[gripper]['start'],
            'p1':   robot_poses[gripper]['camera_center'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        gripper_actuations['jaw_dlo_tight'] if not (('Cylinder' in objectname) or ('Plate' in objectname)) else gripper_actuations['jaw_open'],
            'vacuum_actuation':     None,
            'q6_near':              1.57,
            'q5_near':              1.57
            },
        3: {'t':    cfg.TRAJECTORY_SECONDS+2,
            'p0':   robot_poses[gripper]['camera_center'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              1.57,
            'q5_near':              1.57
            },
        4: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['grasp'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        gripper_actuations['jaw_close'],
            'vacuum_actuation':     gripper_actuations['vacuum_on'],
            'q6_near':              1.57,
            'q5_near':              1.57
            },
        6: {'t':    6,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        7: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['above_release'],
            'p1':   robot_poses[gripper]['release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        gripper_actuations['jaw_open'],
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        8: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['release'],
            'p1':   robot_poses[gripper]['above_release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     gripper_actuations['vacuum_off'],
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        9: {'t':    cfg.TRAJECTORY_SECONDS,
            'p0':   robot_poses[gripper]['above_release'],
            'p1':   robot_poses[gripper]['start'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        10: {'t':    1.5,
            'p0':   robot_poses[gripper]['grasp'],
            'p1':   robot_poses[gripper]['rot_above_grasp_1'],
            'gripper_orientation':  gripper_orientations['shake_off_dlo_1'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              -1.57,
            'q5_near':              1.57
            },
        11: {'t':    1,
            'p0':   robot_poses[gripper]['rot_above_grasp_1'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['shake_off_dlo_2'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              -3.14,
            'q5_near':              1.57
            },
        13: {'t':    2,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        ## measuring poses
        14: {'t':    1 if cfg.ID_FT_SENSOR == 2 else 2,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              1.57,
            'q5_near':              1.57
            },
        15: {'t':   1 if cfg.ID_FT_SENSOR == 2 else 2, 
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        ## gripper opening and homing
        16: {'t':    0.25,
            'p0':   robot_poses[gripper]['grasp'],
            'p1':   robot_poses[gripper]['grasp'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              1.57,
            'q5_near':              1.57
            },
        17: {'t':    2,
            'p0':   robot_poses[gripper]['grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['grasp'],
            'jaw_actuation':        gripper_actuations['jaw_open'],
            'vacuum_actuation':     None,
            'q6_near':              1.57,
            'q5_near':              1.57
            },
        18: {'t':    6,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        gripper_actuations['jaw_open'],
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        ## motion primitive 1
        19: {'t':    2,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['mp_1_1'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              1.57,
            'q5_near':              1.57
            },
        20: {'t':    2,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['mp_1_2'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              3.14,
            'q5_near':              1.57
            },
        21: {'t':    1,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        ## gripper opening and homing
        22: {'t':    2,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_grasp'],  
            'gripper_orientation':  gripper_orientations['above_grasp_rotated'],  # has to be changed to release if internal FT sensor is used
            'jaw_actuation':        gripper_actuations['jaw_open'],
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        23: {'t':    5,
            'p0':   robot_poses[gripper]['above_grasp'],
            'p1':   robot_poses[gripper]['above_release'],  
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        gripper_actuations['jaw_open'],
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        ## homing after too high Fx
        27: {'t':    8,
            'p0':   robot_poses[gripper]['camera_center'],
            'p1':   robot_poses[gripper]['above_release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        None,
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
        ## open gripper at above release pose
        28: {'t':    2,
            'p0':   robot_poses[gripper]['above_release'],
            'p1':   robot_poses[gripper]['above_release'],
            'gripper_orientation':  gripper_orientations['release'],
            'jaw_actuation':        gripper_actuations['jaw_open'],
            'vacuum_actuation':     None,
            'q6_near':              0.0,
            'q5_near':              1.57
            },
    }
    ## ------------------------- helper for RTDE -------------------------
    # recipes are defined in data/gripper_configurations/
    # these functions set the values that are sent via RTDE
    def set_bota_ft(bota_ft, parameters):
        for i in range(0, 4):
            bota_ft.__dict__["input_double_register_%i" % i] = parameters[i]
        return bota_ft
    def set_pose(setp, parameters):
        for i in range(0, 6):
            setp.__dict__["input_double_register_%i" % i] = parameters[i]
        return setp
    def set_q6(setq6, parameter):
        setq6.__dict__["input_double_register_6"] = parameter
    def set_q5(setq5, parameter):
        setq5.__dict__["input_double_register_7"] = parameter
    def set_stop_move(stop_move, parameter):
        stop_move.__dict__["input_double_register_8"] = parameter
    def get_q6(state):
        return state.output_double_register_6
    def set_vacuum(setp, parameters):
        setp.__dict__["standard_digital_output_mask"] = parameters[0]
        setp.__dict__["standard_digital_output"] = parameters[1]
        return setp

    ## ------------------------- setup communication with robotiq_2f_gripper -------------------------
    if gripper=='jaw':
        ser = serial.Serial(port='/dev/ttyUSB0',
                            baudrate=115200,
                            timeout=1,
                            parity=serial.PARITY_NONE,
                            stopbits=serial.STOPBITS_ONE,
                            bytesize=serial.EIGHTBITS)
        ser.write(gripper_actuations['jaw_init'])
        time.sleep(0.01)

    ## ------------------------- setup communication with robot -------------------------
    ROBOT_HOST = '192.168.1.2'
    ROBOT_PORT = 30004
    logging.getLogger().setLevel(logging.INFO)
    conf = rtde_config.ConfigFile(config_filename)
    # recipes see data/gripper_configurations/
    state_names, state_types = conf.get_recipe('state')     # define recipe for access to robot output ex. joints,tcp etc.
    setp_names, setp_types = conf.get_recipe('setp')        # define recipe for access to robot input
    bota_ft_names, bota_ft_types = conf.get_recipe('bota_ft')       # define recipe for external FT sensor
    watchdog_names, watchdog_types= conf.get_recipe('watchdog')

    ## -------------------- establish connection with robot--------------------
    con = rtde.RTDE(ROBOT_HOST, ROBOT_PORT)
    connection_state = con.connect()
    con.get_controller_version()

    ## ------------------- setup recipes ----------------------------
    FREQUENCY = 500  # send data with 500 Hz (default: 125Hz)
    con.send_output_setup(state_names, state_types, FREQUENCY)
    setp = con.send_input_setup(setp_names, setp_types)     # configure an input package that the external application will send to the robot controller
    setp.input_double_register_0 = 0
    setp.input_double_register_1 = 0
    setp.input_double_register_2 = 0
    setp.input_double_register_3 = 0
    setp.input_double_register_4 = 0
    setp.input_double_register_5 = 0
    setp.input_double_register_6 = 0
    setp.input_bit_registers0_to_31 = 0
    if gripper=='vacuum':
        setp.standard_digital_output_mask = 0
        setp.standard_digital_output = 0
    watchdog = con.send_input_setup(watchdog_names, watchdog_types)
    watchdog.input_int_register_0 = 0
    bota_ft = con.send_input_setup(bota_ft_names, bota_ft_types)
    bota_ft.input_double_register_0 = 0
    bota_ft.input_double_register_1 = 0
    bota_ft.input_double_register_2 = 0
    bota_ft.input_double_register_3 = 0

    ## ------------------- start data synchronization -------------------
    if not con.send_start():
        sys.exit()
    
    ## ------------------- setup trajectories -------------------
    # waits until True is returned via Polyscope script (for syncronization)
    while True:
        state = con.receive()
        con.send(watchdog)
        if state.output_bit_registers0_to_31 == True:
            break
    
    # log wrench data (always active since internal FT sensor is never turned off)
    csvfile = open(cfg.LOGGING_PATH+"internal_ft_xyz_q.csv", "w")
    output_names = ["timestamp", "actual_TCP_force", "actual_TCP_pose", "actual_q"]  # define what should be logged (see recipe in data/gripper_configurations/); more loggable variables can be found in RTDE manual!
    output_types = ["DOUBLE", "VECTOR6D", "VECTOR6D", "VECTOR6D"]  # define data types of what should be logged
    writer = csv_writer.CSVWriter(csvfile, output_names, output_types)
    writer.writeheader()

    # log force data if external FT sensor is connected
    if cfg.ID_FT_SENSOR == 2:
        csvfile = open(cfg.LOGGING_PATH+"bota_f.csv", "w")
        output_names_bota_ft = ["input_double_register_0", "input_double_register_1", "input_double_register_2", "input_double_register_3"]  # time, Fx, Fy, Fz
        output_types_bota_ft = ["DOUBLE", "DOUBLE", "DOUBLE", "DOUBLE"]
        writer_bota_ft = csv_writer.CSVWriter(csvfile, output_names_bota_ft, output_types_bota_ft)
        writer_bota_ft.writeheader()
            
    ## init a debug list
    debug_list = list()
    success = False

    ## ------------------- trajectory 1 -------------------
    # moves the robot to a predefined pose (see loop 1 in poylscope script)
    watchdog.input_int_register_0 = 1  # set the loop number for the polyscope script
    con.send(watchdog)  # send trajectory ID (=i_mode = loop number) to robot
    set_pose(setp, robot_poses[gripper]['start'])  # set pose (defined before!)
    set_q6(setp, 0.0) # manually set q6_near ...
    set_q5(setp, 1.57)  # ... and q5_near
    con.send(setp)  # send pose to robot 
    while True:
        writer.writerow(state)  # logging of internal wrench
        ## refresh current state
        state = con.receive()
        con.send(watchdog)
        ## proceed only if pose is reached
        if state.output_bit_registers0_to_31 == False:  #  this value is sent by the polyscope script to signal that the URScript movement (moveJ) has finished
            break

    ## ------------------- trajectories -------------------
    traj_buffer = [2,3,14,4,16,10,11,13,15,6,7,8]  # sorted list of trajectories for the bin picking process; can be changed by the state machine
    
    # some initializations
    weight_before = 0
    weight_after = 0
    n_mp = 0  # number of the motion primitive
    homing = False  # only needed in case the maximum pulling force is exceeded

    if cfg.ID_FT_SENSOR == 2:
        ## Setup pipe for FT Sensor from BotaSys
        parent_conn,child_conn = Pipe()
        p = Process(target=get_data, args=(child_conn,))
        p.start()

    while len(traj_buffer) >= 1:  # execute this loop as long as there are values (=trajectories) in the buffers
        stop_trajectory = False  # set to True if the trajectory should be stopped, although the end point has not been reached yet
        ## get next mode and remove from buffer
        i_mode = traj_buffer[0]  # take the first mode in the buffer (=loop number in polyscope script)
        traj_buffer.pop(0)  # remove the first mode in the buffer
        ## send trajectory ID to robot
        watchdog.input_int_register_0 = i_mode  # the corresponding loop in the polyscope script will be entered
        con.send(watchdog)

        ## plan trajectory
        planner = PathPlanTranslation(trajectories[i_mode]['p0'],
                                    trajectories[i_mode]['p1'],
                                    trajectories[i_mode]['t'])
        ## execute trajectory
        t_start = time.time()
        dt_current = 0

        ## ------------------- Force filter (denoising) prerequisites -------------------
        Fxy = 0
        Fxy_filtered = 0
        Fxy_filtered_start = 0
        max_pull_force_exceeded = False
        Fz = 0
        Fz_filtered = 0
        if cfg.ID_FT_SENSOR == 1:
            alpha = 0.005
        elif cfg.ID_FT_SENSOR == 2:
            alpha = 0.05
        ## ------------------- -------------------
        
        ## ------------------- While loop for trajectory execution (incl. State Machine WHILE trajectory execution) -------------------
        while (time.time()-t_start) < trajectories[i_mode]['t']:
            ## get FT-Sensor values
            if cfg.ID_FT_SENSOR == 1:
                Fx = state.actual_TCP_force[0]
                Fy = state.actual_TCP_force[1]
                Fz = state.actual_TCP_force[2]
            elif cfg.ID_FT_SENSOR == 2:
                Fy, Fx, Fz = parent_conn.recv()  # BotaSys SensOne has different coordinate system
                Fz = -Fz
                set_bota_ft(bota_ft, [state.timestamp, Fx, Fy, Fz])
                # con.send(bota_ft) 
                writer_bota_ft.writerow(bota_ft)
            else:
                raise ValueError("Wrong value for ID_FT_SENSOR!")

            # choose which force is observed for movement to release pose
            Fxy = Fy if cfg.START_RELEASE_POSITION == 3 else Fx

            # logging
            writer.writerow(state)
            
            ## ------------------- Get and average/denoise force data -------------------
            if ((i_mode == 14 or i_mode == 15)):  
                if (time.time()-t_start) <= 0.05:
                    Fz_filtered = 0
                Fz_filtered = alpha * Fz + (1-alpha) * Fz_filtered
                if i_mode == 14:
                    weight_before = Fz_filtered
                elif i_mode == 15:
                    weight_after = Fz_filtered
            if (i_mode == 15):
                if (time.time()-t_start) <= 0.05:
                    Fxy_filtered = 0
                    Fxy_filtered_start = Fxy
                Fxy_filtered = alpha * Fxy + (1-alpha) * Fxy_filtered
            if i_mode == 6:
                if (time.time()-t_start) <= 0.05:
                    Fxy_filtered = 0
                    Fxy_filtered_start = Fxy
                Fxy_filtered = alpha * Fxy + (1-alpha) * Fxy_filtered
            ## ------------------- -------------------
                ## ------------------- Observe pulling force and gripper opening width for mode 6 -------------------
                if (abs(Fxy_filtered-Fxy_filtered_start) > cfg.MAX_PULL_FORCE) and not max_pull_force_exceeded and not homing and ((time.time()-t_start) >= 1.0):
                    max_pull_force_exceeded = True
                    debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "F_x_max exceeded (t=" + str(state.timestamp) + ")! Entangled cable was grasped. Drop cable and restart.")

                    ## stop execution of current trajectory
                    stop_trajectory = True

                    ## set the homing value to true -> no interventions from error handling until next trial
                    homing = True

                    ## Stop previous movement
                    set_stop_move(setp, 1)
                    con.send(setp) 
                    time.sleep(0.1)
                    set_stop_move(setp, 0)
                    con.send(setp) 

                    ## Move back to bin
                    watchdog.input_int_register_0 = 75
                    con.send(watchdog)  # send trajectory ID to robot
                    set_pose(setp, robot_poses[gripper]['camera_center'])
                    set_q6(setp, 1.57)
                    set_q5(setp, 1.57)
                    con.send(setp)  # send pose to robot 
                    time.sleep(0.1)
                    while True:
                        writer.writerow(state)  # continue logging in this while loop
                        ## refresh current state
                        state = con.receive()
                        con.send(watchdog)
                        ## proceed only if pose is reached
                        if state.output_bit_registers0_to_31 == False:
                            break

                    ## move to homing position to restart
                    traj_buffer = [27]
                ## check if DLO was grasped
                elif (ans[-4]/255) > (0.95*(1-cfg.DLO_DIAMETER/cfg.GRIPPER_MAX_OPENING_DIST)):  # 0.95 = uncertainty factor
                    traj_buffer = [28]
                    debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "Cable maybe lost (" + str((ans[-4]/255)) + " ;" + str(0.95*(1-cfg.DLO_DIAMETER/cfg.GRIPPER_MAX_OPENING_DIST)) +"). Restart.")
                ## ------------------- -------------------


            if i_mode == 27:
                ## drop the cable in the bin if the robot is homing
                if gripper=='jaw' and homing:
                    ser.write(gripper_actuations['jaw_open'])

            ## ------------------- Compute next desired pose -------------------
            ## refresh ellapsed time & state
            dt_current = time.time() - t_start
            state = con.receive()
            if state.runtime_state > 1 and not stop_trajectory:
                ## refresh desired pose
                if dt_current <= trajectories[i_mode]['t']:
                    [pos_ref, vel_ref, acc_ref] = planner.trajectory_planning(dt_current)
                ## set pose
                pose = pos_ref.tolist() + trajectories[i_mode]['gripper_orientation']
                set_pose(setp, pose)
                set_q6(setp, trajectories[i_mode]['q6_near'])
                set_q5(setp, trajectories[i_mode]['q5_near'])
                ## actuate vacuum gripper
                if gripper=='vacuum' and (trajectories[i_mode]['vacuum_actuation'] is not None):
                    set_vacuum(setp, trajectories[i_mode]['vacuum_actuation'])
                con.send(setp)
            ## ------------------- -------------------
        ## ------------------- -------------------

        ## ------------------- State Machine AFTER trajectory execution -------------------
        ## receive state
        state = con.receive()
        ## actuate jaw gripper
        if gripper=='jaw' and (trajectories[i_mode]['jaw_actuation'] is not None):
            ser.write(trajectories[i_mode]['jaw_actuation'])
        
        if i_mode==4:
            # Ensure good starting value for rotation movement (similar to mp1) 
            # adjust q6_near by considering the actual position of q6
            q6_offset = get_q6(state)
            trajectories[10]['q6_near'] += q6_offset
            trajectories[11]['q6_near'] += q6_offset
            time.sleep(0.1)  # wait to ensure successful grasping 
        
        ## ------------------- Check how many cables were picked and execute motion primitives if necessary -------------------
        if (i_mode == 15) and ((time.time()-t_start) >= 0.9):
            if (n_mp == 0) and (((weight_before - weight_after)) > (cfg.DLO_WEIGHT * 9.81 * cfg.DLO_WEIGHT_SAFETY_FACTOR)):  # only write this message once, because only one MP is executed
                debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "Motion primitive " + str(cfg.ID_MOP) + " selected.")
            # check if a motion primitive has already been executed AND if the weight of the DLO is higher than expected (weight is calculated as difference before vs after picking)
            if (((weight_before - weight_after)) > (cfg.DLO_WEIGHT * 9.81 * cfg.DLO_WEIGHT_SAFETY_FACTOR)) and n_mp == 0:
                debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "More than one DLO picket (actual:" + str((weight_before - weight_after)) + "; limit: " + str(cfg.DLO_WEIGHT * 9.81 * cfg.DLO_WEIGHT_SAFETY_FACTOR) + ")!")
                ## ------------------- differentiate between motion primitives -------------------
                if cfg.ID_MOP == 0:
                    traj_buffer = [6,7,8]  # =continue without change
                elif cfg.ID_MOP == 1:
                    traj_buffer = [19,20,21,15]
                elif cfg.ID_MOP == 2:
                    traj_buffer = [15]
                    #trajectories[15]['gripper_orientation'] = gripper_orientations['above_grasp_rotated']
                    ## ------------------- the following lines trigger moveJ commands in Polyscop scripts, because joint space movements are not implemented in the current setup -------------------
                    ## Move to pos where mp2 is executable
                    watchdog.input_int_register_0 = 48
                    con.send(watchdog)  # send trajectory ID to robot
                    set_pose(setp, robot_poses[gripper]['camera_center_release'])
                    set_q6(setp, 0.0)
                    set_q5(setp, 1.57)
                    con.send(setp)  # send pose to robot 
                    time.sleep(0.01)
                    while True:
                        writer.writerow(state)
                        ## refresh current state
                        state = con.receive()
                        con.send(watchdog)
                        ## proceed only if pose is reached
                        if state.output_bit_registers0_to_31 == False:
                            break

                    watchdog.input_int_register_0 = 49  # This is a moveJ command! -> Hardcoded in Polyscope
                    con.send(watchdog)
                    time.sleep(0.01)
                    while True:
                        writer.writerow(state)
                        ## refresh current state
                        state = con.receive()
                        con.send(watchdog)
                        ## proceed only if pose is reached
                        if state.output_bit_registers0_to_31 == False:
                            break

                    watchdog.input_int_register_0 = 50  # This is a moveJ command! -> Hardcoded in Polyscope
                    con.send(watchdog)
                    time.sleep(0.01)
                    while True:
                        writer.writerow(state)
                        ## refresh current state
                        state = con.receive()
                        con.send(watchdog)
                        ## proceed only if pose is reached
                        if state.output_bit_registers0_to_31 == False:
                            break
                    watchdog.input_int_register_0 = 51  # This is a moveJ command! -> Hardcoded in Polyscope
                    con.send(watchdog)
                    time.sleep(0.01)
                    while True:
                        writer.writerow(state)
                        ## refresh current state
                        state = con.receive()
                        con.send(watchdog)
                        ## proceed only if pose is reached
                        if state.output_bit_registers0_to_31 == False:
                            break
                    watchdog.input_int_register_0 = 52  # This is a moveJ command! -> Hardcoded in Polyscope
                    con.send(watchdog)
                    time.sleep(0.01)
                    while True:
                        writer.writerow(state)
                        ## refresh current state
                        state = con.receive()
                        con.send(watchdog)
                        ## proceed only if pose is reached
                        if state.output_bit_registers0_to_31 == False:
                            break

                    watchdog.input_int_register_0 = 53
                    con.send(watchdog)  # send trajectory ID to robot
                    set_pose(setp, robot_poses[gripper]['above_grasp_release'])
                    set_q6(setp, 0.0)
                    set_q5(setp, 1.57)
                    con.send(setp)  # send pose to robot 
                    time.sleep(0.01)
                    while True:
                        writer.writerow(state)
                        ## refresh current state
                        state = con.receive()
                        con.send(watchdog)
                        ## proceed only if pose is reached
                        if state.output_bit_registers0_to_31 == False:
                            break
                    ## ------------------- -------------------
                ## ------------------- -------------------
                n_mp = n_mp + 1
                weight_after = 0
            # not recovered
            elif (((weight_before - weight_after)) > (cfg.DLO_WEIGHT * 9.81 * cfg.DLO_WEIGHT_SAFETY_FACTOR)) and n_mp >= 1:
                traj_buffer = [22,23]
                debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "Motion primitive failed to recover error (actual:" + str((weight_before - weight_after)) + "; limit: " + str(cfg.DLO_WEIGHT * 9.81 * cfg.DLO_WEIGHT_SAFETY_FACTOR) + "). Drop DLO and restart.")
            # recovered
            elif (((weight_before - weight_after)) < (cfg.DLO_WEIGHT * 9.81 * cfg.DLO_WEIGHT_SAFETY_FACTOR)) and n_mp >= 1:
                traj_buffer = [6,7,8]
                debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "Motion primitive succeeded to recover error (actual:" + str((weight_before - weight_after)) + "; limit: " + str(cfg.DLO_WEIGHT * 9.81 * cfg.DLO_WEIGHT_SAFETY_FACTOR) +"). Resume.")
        ## ------------------- -------------------

        ## ------------------- check if gripper grasped dlo correctly -------------------
        if i_mode == 16 and gripper=='jaw':
            # Get gripper opening width
            ser.write(b'\x09\x03\x07\xD0\x00\x03\x04\x0E')
            time.sleep(0.01)
            ans = list(ser.readline())
            debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "Desired gripper closeing [in %]:" + str(ans[-5]/255*100))
            debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "Actual gripper closeing [in %]:" + str(ans[-4]/255*100))
            ## check if DLO was grasped
            if (ans[-4]/255) > (0.95*(1-cfg.DLO_DIAMETER/cfg.GRIPPER_MAX_OPENING_DIST)):  # 0.95 = uncertainty factor
                traj_buffer = [17,18]
                debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "No cable grasped (" + str((ans[-4]/255)) + ";" + str(0.95*(1-cfg.DLO_DIAMETER/cfg.GRIPPER_MAX_OPENING_DIST)) + "). Restart.")

        if i_mode == 15 and gripper=='jaw':
            # Get gripper opening width
            ser.write(b'\x09\x03\x07\xD0\x00\x03\x04\x0E')
            time.sleep(0.01)
            ans = list(ser.readline())
            ## check if DLO was grasped
            if (ans[-4]/255) > (0.95*(1-cfg.DLO_DIAMETER/cfg.GRIPPER_MAX_OPENING_DIST)):  # 0.95 = uncertainty factor
                traj_buffer = [18]
                debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "No cable grasped (" + str((ans[-4]/255)) + ";" + str(0.95*(1-cfg.DLO_DIAMETER/cfg.GRIPPER_MAX_OPENING_DIST)) + "). Restart.")
            ## check if more than 1 DLO was grasped
            elif (ans[-4]/255) < (0.8*(1-cfg.DLO_DIAMETER/cfg.GRIPPER_MAX_OPENING_DIST)):
                traj_buffer = [18]
                debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "Likely more than one cable grasped (" + str((ans[-4]/255)) + "; " + str(0.95*(1-cfg.DLO_DIAMETER/cfg.GRIPPER_MAX_OPENING_DIST)) + "). Restart.")
        ## ------------------- -------------------

        # If mode 8 is reached (release of cable) the SM considers the bp as successful
        if i_mode == 8:
            success = True
        
        if (i_mode == 15) and (n_mp == 0):
            debug_list.append("[[" + str(round(state.timestamp, 2)) + "]] " + "Measured DLO weight (without MP): " + str((weight_before - weight_after)) + ").")
    
    ## ------------------- disconnect -------------------
    watchdog.input_int_register_0 = 99
    con.send(watchdog)  # Make Program on teach panel go in wait mode

    # kill the subprocess for the external force sensor
    if cfg.ID_FT_SENSOR == 2:
        child_conn.close()
        p.kill()
        p.join()

    # print final time
    debug_list.append("Finishing time: " + str(round(state.timestamp, 2)))

    con.send_pause()
    con.disconnect()
    return debug_list, success

def print_wrench(gripperID):
    """
    Prints the wrench from the internal (!) FT-sensor to an xml-file.
    
    Args:
        gripperID: ID of the used gripper, e.g. vacuum or jaw

    Returns:
        -
    """
    ## use correct .xml file
    if gripperID==1:
        gripper = 'jaw'
        config_filename = 'data/gripper_configurations/configuration_jaw.xml'
    elif gripperID==2:
        gripper = 'vacuum'
        config_filename = 'data/gripper_configurations/configuration_vacuum.xml'
    else:
        return

    ## setup communication with robot
    ROBOT_HOST = '192.168.1.2'
    ROBOT_PORT = 30004
    logging.getLogger().setLevel(logging.INFO)
    conf = rtde_config.ConfigFile(config_filename)
    state_names, state_types = conf.get_recipe('state')

    ## establish connection with robot
    con = rtde.RTDE(ROBOT_HOST, ROBOT_PORT)
    con.connect()
    con.get_controller_version()

    ## setup recipes
    FREQUENCY = 500  # send data with 500 Hz (default: 125Hz)
    con.send_output_setup(state_names, state_types, FREQUENCY)

    ## start data synchronization
    if not con.send_start():
        sys.exit()

    ## receive state
    state = con.receive()

    print("Actual TCP wrench: ")
    for items in state.actual_TCP_force:
        print(items)


    con.send_pause()
    con.disconnect()