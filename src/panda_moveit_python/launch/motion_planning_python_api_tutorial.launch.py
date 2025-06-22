"""
A launch file for running the motion planning python api tutorial
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration
from moveit_configs_utils import MoveItConfigsBuilder
from ament_index_python.packages import get_package_share_directory
from pathlib import Path


def generate_launch_description():

    mode_arg = DeclareLaunchArgument(
        "mode",
        default_value="pre_grasp",
        description="Execution mode: pre_grasp or grasp"
    )
    
    moveit_config = (
        MoveItConfigsBuilder(
            # robot_name="panda", package_name="moveit_resources_panda_moveit_config"
            robot_name="panda", package_name="moveit_resources_panda_camera_moveit_config"
        )
        .robot_description(file_path="config/panda.urdf.xacro")
        .robot_description_semantic(file_path="config/panda_arm_hand.srdf.xacro") 
        .trajectory_execution(file_path="config/gripper_moveit_controllers.yaml")
        .moveit_cpp(
            file_path=get_package_share_directory("panda_moveit_python")
            + "/config/motion_planning_python_api_tutorial.yaml"
        )
        .planning_pipelines(pipelines=["ompl"])
        .to_moveit_configs()
    )

    
    motion_planning_node = Node(
        package="panda_moveit_python",
        executable="motion_planning_python_api_tutorial",
        name="moveit_py",
        output="screen",
        parameters=[
            moveit_config.to_dict(),
            {"use_sim_time": False},
            {"mode": LaunchConfiguration("mode")}
        ]
    )
    # Publish TF
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="both",
        parameters=[moveit_config.robot_description],
    )

    # robot_state_publisher = Node(
    #     package="robot_state_publisher",
    #     executable="robot_state_publisher",
    #     name="robot_state_publisher",
    #     output="log",
    #     parameters=[moveit_config.robot_description],
    # )

    

    return LaunchDescription(
        [
            mode_arg,
            motion_planning_node,
            robot_state_publisher,

        ]

    )