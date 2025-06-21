#!/usr/bin/env python3
"""
A simple MoveItPy example that uses the planning scene.
This version checks for the planning scene monitor and then plans a trajectory.
"""

import time
import rclpy
from rclpy.node import Node
import os
import yaml
import sys
from rclpy.logging import get_logger
from moveit.planning import MoveItPy, MultiPipelinePlanRequestParameters
from geometry_msgs.msg import PoseStamped
import faulthandler
from scipy.spatial.transform import Rotation as R
from moveit.core.robot_state import RobotState
from std_msgs.msg import String
from pathlib import Path
from ament_index_python.packages import get_package_share_directory

import math


faulthandler.enable()
def plan_and_execute(robot, planning_component, logger, single_plan_parameters=None, multi_plan_parameters=None, sleep_time=0.0):
    logger.info("Planning trajectory")
    # plan_result = planning_component.plan()
    # if plan_result:
    #     logger.info("Executing plan")
    #     robot.execute(plan_result.trajectory, controllers=[])
    # else:
    #     logger.error("Planning failed")
    # time.sleep(sleep_time)
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
        robot.execute(robot_trajectory, controllers=[])
    else:
        logger.error("Planning failed")

    time.sleep(sleep_time)


def main():
    rclpy.init()
    from rclpy.parameter import Parameter
    node = rclpy.create_node("moveit_py")
    logger = get_logger("moveit_py.pose_goal")
    

    # Grab mode parameters (default is pre_grasp)
    mode = node.declare_parameter("mode", "pre_grasp").value
    logger.info(f"Running in mode: {mode}")
    
    # Create the MoveItPy instance. It will load the robot description and SRDF
    ur = MoveItPy(node_name="moveit_py")
    
    # Get the planning component for your planning group
    ur_manipulator = ur.get_planning_component("ur_manipulator")
    logger.info("MoveItPy instance created")
    
    # Try to retrieve the planning scene monitor (if available)
    planning_scene_monitor = ur.get_planning_scene_monitor()  # TODO: The planner does not really consider the planning scene and collides with it -> Maybe because it is not correctly added/defined here, but loaded from a file
    if planning_scene_monitor is not None:
        logger.info("Planning scene monitor found. Waiting a moment for it to update...")
        time.sleep(2.0)
    else:
        logger.warn("No planning scene monitor found. Make sure your launch file starts one.")
    
    # Set the start state to the current state
    ur_manipulator.set_start_state_to_current_state()

    if mode == "pre_grasp":
        # Set a goal pose using a PoseStamped message
        pose_goal = PoseStamped()
        #joint space planning
        robot_model = ur.get_robot_model()
        robot_state = RobotState(robot_model)
        robot_state.set_to_default_values()
        robot_state.set_joint_group_positions("ur_manipulator", [ math.radians(125.28),   
                                                                math.radians(-88.87),   
                                                                math.radians(-90.47),   
                                                                math.radians(-81.05),   
                                                                math.radians(86.65),   
                                                                math.radians(126.03)    ])
        ur_manipulator.set_goal_state(robot_state=robot_state)

        logger.info("Planning and executing joint space goal...")
        plan_and_execute(ur, ur_manipulator, logger, sleep_time=3.0)
        
    
    elif mode == "grasp":
        # Waiting for grasp pose file to be generated
        # grasp_pose_file = "/home/tailai/ros2_ws/src/cable_detection_picking/data/transformation_data/grasp_pose_base_frame.yaml"

        current_file = Path(__file__).resolve()
        ros2_ws_root = current_file.parents[6]
        grasp_pose_file = ros2_ws_root / 'src' / 'cable_detection_picking' / 'data' / 'transformation_data' / 'grasp_pose_base_frame.yaml'
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
        pose_goal = PoseStamped()
        pose_goal.header.frame_id = "base_link"
        pose_goal.pose.position.x = grasp_data["position"]["x"]
        pose_goal.pose.position.y = grasp_data["position"]["y"]
        pose_goal.pose.position.z = grasp_data["position"]["z"]
        pose_goal.pose.orientation.x = grasp_data["orientation"]["x"]
        pose_goal.pose.orientation.y = grasp_data["orientation"]["y"]
        pose_goal.pose.orientation.z = grasp_data["orientation"]["z"]
        pose_goal.pose.orientation.w = grasp_data["orientation"]["w"]

        ur_manipulator.set_goal_state(pose_stamped_msg=pose_goal, pose_link="tool0")
        logger.info("Planning and executing grasp pose goal...")
        plan_and_execute(ur, ur_manipulator, logger, sleep_time=3.0)

    else:
        logger.error(f"Invalid mode parameter: {mode}")
    move_done_pub = node.create_publisher(String, '/move_done', 10)

    
    # # Optionally, log the planning scene (for debugging)
    # # You can use planning_scene_monitor.read_only() here if desired.
    

    # pose_goal = PoseStamped()
    # pose_goal.header.frame_id = "base_link"
    # pose_goal.pose.position.x = 0.15
    # pose_goal.pose.position.y = -0.70
    # pose_goal.pose.position.z = 0.90
    # pose_goal.pose.orientation.w = 1.0
    # ur_manipulator.set_goal_state(pose_stamped_msg=pose_goal, pose_link="tool0")
    
    
    # # Optionally, log the planning scene (for debugging)
    # # You can use planning_scene_monitor.read_only() here if desired.
    
    # # Plan and execute
    # plan_and_execute(ur, ur_manipulator, logger, sleep_time=3.0)
    
    # Clean up
    move_done_pub.publish(String(data="done"))  
    logger.info("Move completed, 'done' signal sent.")
    del ur
    rclpy.shutdown()

if __name__ == "__main__":
    main()

