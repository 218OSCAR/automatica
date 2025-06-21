import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
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
        MoveItConfigsBuilder("ur", package_name="universal_robots_ur10e")
        .robot_description(Path("config") / "ur.urdf.xacro")
        .robot_description_semantic(Path("config") / "ur.srdf.xacro") 
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .moveit_cpp(file_path=os.path.join(get_package_share_directory("simple_moveit_app"),
            "config",
            "planning_python_api.yaml"
            ))
        .to_moveit_configs()
    )

    simple_moveit_app = Node(
        package="simple_moveit_app",
        executable="simple_moveit_app",
        parameters=[moveit_config.to_dict(),
                    {"use_sim_time": False},
                    {"mode": LaunchConfiguration("mode")} ]
    )
    # Publish TF
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="both",
        parameters=[moveit_config.robot_description],
    )

    # joint_state_publisher = Node(
    #     package="joint_state_publisher",
    #     executable="joint_state_publisher",
    #     name="joint_state_publisher",
    #     output="screen",
    # )

    return LaunchDescription([
        mode_arg,
        simple_moveit_app,
        robot_state_publisher,
        # joint_state_publisher
    ])