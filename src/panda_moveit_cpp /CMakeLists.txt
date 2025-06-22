cmake_minimum_required(VERSION 3.10)
project(panda_moveit_cpp)


find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(Boost REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_core REQUIRED)
find_package(pluginlib REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(graph_msgs REQUIRED)
find_package(moveit_visual_tools REQUIRED)
find_package(rviz_visual_tools REQUIRED)




add_executable(moveit_cpp_tutorial src/moveit_cpp_tutorial.cpp)

ament_target_dependencies(moveit_cpp_tutorial
  rclcpp
  Boost
  moveit_ros_planning_interface
  moveit_core
  pluginlib
  tf2_ros
  graph_msgs
  moveit_visual_tools       
  rviz_visual_tools         
)

install(TARGETS moveit_cpp_tutorial
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
