#!/usr/bin/env python3
"""
A script to outline the fundamentals of the moveit_py motion planning API.
"""

import time

# generic ros libraries
import rclpy
from rclpy.node import Node
import os
import yaml
import sys
from rclpy.logging import get_logger


# moveit python library
# from moveit.core.robot_state import RobotState
from moveit.planning import (
    MoveItPy,
    MultiPipelinePlanRequestParameters,
)
from geometry_msgs.msg import PoseStamped
import faulthandler
from scipy.spatial.transform import Rotation as R
from moveit.core.robot_state import RobotState
from std_msgs.msg import String
from pathlib import Path
from ament_index_python.packages import get_package_share_directory
import tf_transformations
import math
from geometry_msgs.msg import Pose
import numpy as np

from geometry_msgs.msg import PoseStamped
from tf_transformations import quaternion_from_euler
from tf_transformations import euler_from_matrix

from roboticstoolbox import tools as rtb_tools
import socket



def plan_and_execute(
    robot,
    planning_component,
    logger,
    single_plan_parameters=None,
    multi_plan_parameters=None,
    sleep_time=0.0,
    send_udp=True,
):
    """Helper function to plan and execute a motion."""
    # plan to goal
    logger.info("Planning trajectory")
    if multi_plan_parameters is not None:
        plan_result = planning_component.plan(
            multi_plan_parameters=multi_plan_parameters
        )
    elif single_plan_parameters is not None:
        plan_result = planning_component.plan(
            single_plan_parameters=single_plan_parameters
        )
    else:
        plan_result = planning_component.plan()

    # execute the plan
    if plan_result:
        logger.info("Executing plan")
        robot_trajectory = plan_result.trajectory
        logger.info(f"Trajectory object: {robot_trajectory}")
        robot_trajectory_msg = robot_trajectory.get_robot_trajectory_msg()
        if send_udp:
            points = robot_trajectory_msg.joint_trajectory.points
            logger.info(f"trajectory points: {points}")
            
            
            
            joint_trajectory = [list(point.positions) for point in robot_trajectory_msg.joint_trajectory.points]
            joint_trajectory_np = np.array(joint_trajectory)
            # logger.info(f"First 17 points:\n{joint_trajectory_np[:17]}")
            TARGET_UDP_IP = "192.168.50.89"
            TARGET_UDP_PORT = 12345
            traj = joint_trajectory_np
            smooth_traj = rtb_tools.mstraj(traj, dt=0.001, tacc=0.1, qdmax=0.5)
            sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
            for point in smooth_traj.q:  # shape: (M, 7)
                
                message = ",".join(f"{val:.6f}" for val in point)

                
                sock.sendto(message.encode(), (TARGET_UDP_IP, TARGET_UDP_PORT))

                
                time.sleep(0.001)
                
            # send END after finishing
            end_signal = "END"
            sock.sendto(end_signal.encode(), (TARGET_UDP_IP, TARGET_UDP_PORT))
            sock.close()
            logger.info("UDP trajectory sent.")
        
        robot.execute(robot_trajectory, controllers=[])
        
    else:
        logger.error("Planning failed")

    time.sleep(sleep_time)


def main():

    ###################################################################
    # MoveItPy Setup
    ###################################################################
    rclpy.init()
    from rclpy.parameter import Parameter
    node = rclpy.create_node("moveit_py")
    logger = get_logger("moveit_py.pose_goal")
    
    move_done_pub = node.create_publisher(String, 'move_done', 10)

    # instantiate MoveItPy instance and get planning component
    # Grab mode parameters (default is pre_grasp)
    mode = node.declare_parameter("mode", "pre_grasp").value
    logger.info(f"Running in mode: {mode}")
    panda = MoveItPy(node_name="moveit_py")
    panda_arm = panda.get_planning_component("panda_arm")
    panda_hand = panda.get_planning_component("hand")
    logger.info("MoveItPy instance created")

    planning_scene_monitor = panda.get_planning_scene_monitor()  # TODO: The planner does not really consider the planning scene and collides with it -> Maybe because it is not correctly added/defined here, but loaded from a file
    if planning_scene_monitor is not None:
        logger.info("Planning scene monitor found. Waiting a moment for it to update...")
        time.sleep(2.0)
    else:
        logger.warn("No planning scene monitor found. Make sure your launch file starts one.")

    # Set the start state to the current state
    panda_arm.set_start_state_to_current_state()
    # # set plan start state using predefined state
    # panda_arm.set_start_state(configuration_name="ready")

    if mode == "pre_grasp":
        # Set a goal pose using a PoseStamped message
        pose_goal = PoseStamped()
        #joint space planning
        robot_model = panda.get_robot_model()
        robot_state = RobotState(robot_model)
        robot_state.set_to_default_values()
        
        # check
        eef_link = "panda_hand"
        eef_transform = robot_state.get_global_link_transform(eef_link)
        roll, pitch, yaw = euler_from_matrix(eef_transform[:3, :3])  

        #logger
        logger.info(f"End Effector RPY (rad): roll={roll:.4f}, pitch={pitch:.4f}, yaw={yaw:.4f}")
        logger.info(f"End Effector RPY (deg): roll={np.degrees(roll):.2f}°, pitch={np.degrees(pitch):.2f}°, yaw={np.degrees(yaw):.2f}°")
        
        
        
        # robot_state.set_joint_group_positions("panda_arm", [math.radians(0), math.radians(-30), math.radians(0),
        #                    math.radians(-90), math.radians(0), math.radians(60), math.radians(45)])

        # robot_state.set_joint_group_positions("panda_arm", [-0.0612325, -0.381275, 0.0385231,
        #                                             -1.85326, 0.0164849, 1.45509, 1.52881])
        # robot_state.set_joint_group_positions("panda_arm", [0.617129,-0.616103,-0.288041,-2.05334,-0.239419,1.47059,-2.8019])
        
        
        robot_state.set_joint_group_positions("panda_arm", [1.502642, 0.032775, 0.427527, -1.846388, -0.006882, 1.868646, 0.342083])
        panda_arm.set_goal_state(robot_state=robot_state)

        logger.info("Planning and executing joint space goal...")
        plan_and_execute(panda, panda_arm, logger, sleep_time=3.0, send_udp=True)
        
        # check
        eef_link = "panda_hand"
        with planning_scene_monitor.read_only() as scene:
            robot_state = scene.current_state 
            eef_transform = robot_state.get_global_link_transform(eef_link)
            roll, pitch, yaw = euler_from_matrix(eef_transform[:3, :3]) 

            # logger
            logger.info(f"End Effector RPY (rad): roll={roll:.4f}, pitch={pitch:.4f}, yaw={yaw:.4f}")
            logger.info(f"End Effector RPY (deg): roll={np.degrees(roll):.2f}°, pitch={np.degrees(pitch):.2f}°, yaw={np.degrees(yaw):.2f}°")
        
        # # strictly perpenticular to the ground
        # eef_link = "panda_hand" 
        # with planning_scene_monitor.read_only() as scene:
        #     robot_state = scene.current_state 
        #     eef_pose = robot_state.get_global_link_transform(eef_link)
        #     pos = tf_transformations.translation_from_matrix(eef_pose)
        #     rot_matrix = eef_pose[:3, :3]  
        #     roll, pitch, yaw = euler_from_matrix(rot_matrix) 
            
        # new_roll = -3.1416
        # new_pitch = 0.0
        # new_yaw = yaw
        
        # qx, qy, qz, qw = quaternion_from_euler(new_roll, new_pitch, new_yaw)

        # pose_goal = PoseStamped()
        # pose_goal.header.frame_id = "panda_link0"
        # pose_goal.pose.position.x = pos[0]
        # pose_goal.pose.position.y = pos[1]
        # pose_goal.pose.position.z = pos[2]

        # # qx, qy, qz, qw = quaternion_from_euler(-3.1416, 0.0, -3.1416)
        # # qx, qy, qz, qw = quaternion_from_euler(-3.1416, 0.0, -2.3433)
        # pose_goal.pose.orientation.x = qx
        # pose_goal.pose.orientation.y = qy
        # pose_goal.pose.orientation.z = qz
        # pose_goal.pose.orientation.w = qw

        # # set the perpenticular goal
        # panda_arm.set_start_state_to_current_state()
        # panda_arm.set_goal_state(pose_stamped_msg=pose_goal, pose_link="panda_hand")
        # plan_and_execute(panda, panda_arm, logger, sleep_time=3.0)
        
        
        # # publish joint positions
        # with planning_scene_monitor.read_only() as scene:
        #     robot_state = scene.current_state
        #     joint_positions = robot_state.get_joint_group_positions("panda_arm")
        #     joint_list_str = "[" + ", ".join([f"{pos:.6f}" for pos in joint_positions]) + "]"
        #     logger.info(f"Joint positions after reaching vertical pose:\n{joint_list_str}")
        
        # #open the hand
        # robot_state.set_joint_group_positions("hand", [0.04])  
        # panda_hand.set_goal_state(robot_state=robot_state)
        
        
        # logger.info("Planning and executing hand open/close...")
        # plan_and_execute(panda, panda_hand, logger, sleep_time=2.0, send_udp=False)
        
    
    elif mode == "grasp":
        # Waiting for grasp pose file to be generated
        # grasp_pose_file = "/home/tailai/ros2_ws/src/cable_detection_picking/data/transformation_data/grasp_pose_base_frame.yaml"

        current_file = Path(__file__).resolve()
        ros2_ws_root = current_file.parents[6]
        grasp_pose_file = ros2_ws_root / 'src' / 'cable_detection_picking' / 'data' / 'transformation_data' / 'grasp_pose_base_frame_panda.yaml'
        # package_share_directory = get_package_share_directory('cable_detection_picking')
        # grasp_pose_file = os.path.join(
        # package_share_directory,
        # 'data', 'transformation_data', 'grasp_pose_base_frame.yaml'
        # )
        logger.info(f"Waiting for grasp pose file: {grasp_pose_file}")
        while not os.path.exists(grasp_pose_file):
            time.sleep(0.5)

        with open(grasp_pose_file, "r") as f:
            grasp_data = yaml.safe_load(f)
        logger.info(f"Grasp pose loaded: position={grasp_data['position']}, orientation={grasp_data['orientation']}")


        # pose_goal = PoseStamped()
        # pose_goal.header.frame_id = "panda_link0"
        # pose_goal.pose.position.x = grasp_data["position"]["x"]
        # pose_goal.pose.position.y = grasp_data["position"]["y"]
        # pose_goal.pose.position.z = grasp_data["position"]["z"]
        # pose_goal.pose.orientation.x = grasp_data["orientation"]["x"]
        # pose_goal.pose.orientation.y = grasp_data["orientation"]["y"]
        # pose_goal.pose.orientation.z = grasp_data["orientation"]["z"]
        # pose_goal.pose.orientation.w = grasp_data["orientation"]["w"]

        T_goal = tf_transformations.concatenate_matrices(
        tf_transformations.translation_matrix([
            grasp_data["position"]["x"],
            grasp_data["position"]["y"],
            grasp_data["position"]["z"]
        ]),
        tf_transformations.quaternion_matrix([
            grasp_data["orientation"]["x"],
            grasp_data["orientation"]["y"],
            grasp_data["orientation"]["z"],
            grasp_data["orientation"]["w"]
        ])
        )

        # #Before rotate 90 degrees, the hand frame is the same with the grasp direction(in the sam21_gp.png), so we need to rotate for the panda hand to grasp the cable
        # R_z_neg_90 = tf_transformations.rotation_matrix(-np.pi / 2, (0, 0, 1))
        # T_goal = T_goal @ R_z_neg_90

        # there is also a rotation from flange to the hand frame, but we use the hand frame here. we can consider the rotation in transform the frame from camera to hand frame.
        translation = tf_transformations.translation_matrix([0, 0, -0.119])#should be measured...  the original panda hand; also after install the adapter and camera. because the offset is already add in the urdf file
        # translation = tf_transformations.translation_matrix([0, 0, -0.1834])# after install the adapter and camera
        # rotation = tf_transformations.rotation_matrix(np.deg2rad(45), (0, 0, 1))
        rotation = tf_transformations.rotation_matrix(np.deg2rad(0), (0, 0, 1))# after install the adapter and camera
        T_tcp_to_hand = np.dot(translation, rotation)
        # tell hand where to go
        T_hand = T_goal @ T_tcp_to_hand

        pos = tf_transformations.translation_from_matrix(T_hand)
        quat = tf_transformations.quaternion_from_matrix(T_hand)

        pose_goal = PoseStamped()
        pose_goal.header.frame_id = "panda_link0"
        pose_goal.pose.position.x = pos[0]
        pose_goal.pose.position.y = pos[1]
        pose_goal.pose.position.z = pos[2]
        pose_goal.pose.orientation.x = quat[0]
        pose_goal.pose.orientation.y = quat[1]
        pose_goal.pose.orientation.z = quat[2]
        pose_goal.pose.orientation.w = quat[3]


        # panda_arm.set_goal_state(pose_stamped_msg=pose_goal, pose_link="panda_link8")##flange frame
        panda_arm.set_goal_state(pose_stamped_msg=pose_goal, pose_link="panda_hand")##hand frame
        logger.info("Planning and executing grasp pose goal...")
        logger.info(f"Expected grasp z: {grasp_data['position']['z']:.4f}")
        logger.info(f"Hand frame x: {tf_transformations.translation_from_matrix(T_hand)[0]:.4f}")
        logger.info(f"Hand frame y: {tf_transformations.translation_from_matrix(T_hand)[1]:.4f}")
        logger.info(f"Hand frame z: {tf_transformations.translation_from_matrix(T_hand)[2]:.4f}")
        plan_and_execute(panda, panda_arm, logger, sleep_time=3.0, send_udp=True)
        
        # 输出当前 joint positions
        with planning_scene_monitor.read_only() as scene:
            robot_state = scene.current_state
            joint_positions = robot_state.get_joint_group_positions("panda_arm")
            joint_list_str = "[" + ", ".join([f"{pos:.6f}" for pos in joint_positions]) + "]"
            logger.info(f"Joint positions after reaching vertical pose:\n{joint_list_str}")

        

        # close the hand
        # robot_model = panda.get_robot_model()
        # robot_state = RobotState(robot_model)
        # robot_state.set_to_default_values()
        # robot_state.set_joint_group_positions("hand", [0.00])  
        # panda_hand.set_goal_state(robot_state=robot_state)
        with planning_scene_monitor.read_only() as scene:
            current_state = scene.current_state
        current_state.set_joint_group_positions("hand", [0.00]) 
        panda_hand.set_goal_state(robot_state=current_state)


        logger.info("Planning and executing hand open/close...")
        plan_and_execute(panda, panda_hand, logger, sleep_time=2.0, send_udp=False)

    else:
        logger.error(f"Invalid mode parameter: {mode}")
        move_done_pub = node.create_publisher(String, '/move_done', 10)

    # pose_goal = PoseStamped()
    # pose_goal.header.frame_id = "panda_link0"
    # pose_goal.pose.orientation.w = 1.0
    # pose_goal.pose.position.x = 0.28
    # pose_goal.pose.position.y = -0.2
    # pose_goal.pose.position.z = 0.5
    # panda_arm.set_goal_state(pose_stamped_msg=pose_goal, pose_link="panda_link8")

    # # plan to goal
    # plan_and_execute(panda, panda_arm, logger, sleep_time=3.0)

    # # plan to goal
    # plan_and_execute(
    #     panda,
    #     panda_arm,
    #     logger,
    #     sleep_time=3.0,
    # )

    # Clean up
    move_done_pub.publish(String(data="done"))  
    logger.info("Move completed, 'done' signal sent.")
    del panda
    rclpy.shutdown()


if __name__ == "__main__":
    main()


