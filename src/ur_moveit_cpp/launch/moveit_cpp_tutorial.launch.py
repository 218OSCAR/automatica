import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from ament_index_python.packages import get_package_share_directory
from moveit_configs_utils import MoveItConfigsBuilder
from pathlib import Path


def generate_launch_description():
    moveit_config = (
        MoveItConfigsBuilder("ur", package_name="universal_robots_ur10e")
        .robot_description(Path("config") / "ur.urdf.xacro")
        .robot_description_semantic(Path("config") / "ur.srdf.xacro")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        # .planning_pipelines("ompl", ["ompl"])
        .moveit_cpp(
            file_path=os.path.join(
                get_package_share_directory("ur_moveit_cpp"),
                "config",
                "moveit_cpp.yaml",
            )
        )
        .to_moveit_configs()
    )

    # MoveItCpp demo executable
    moveit_cpp_node = Node(
        name="moveit_cpp_tutorial",
        package="ur_moveit_cpp",
        executable="moveit_cpp_tutorial",
        output="screen",
        parameters=[moveit_config.to_dict()],
    )

    # RViz
    rviz_config_file = os.path.join(
        get_package_share_directory("ur_moveit_cpp"),
        "launch",
        "moveit_cpp_tutorial.rviz",
    )
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
        ],
    )

    # Static TF
    static_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_transform_publisher",
        output="log",
        arguments=["--frame-id", "world", "--child-frame-id", "panda_link0"],
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

    


    return LaunchDescription(
        [
            static_tf,
            robot_state_publisher,
            rviz_node,
            moveit_cpp_node,
            # joint_state_publisher,
        ]
    )
