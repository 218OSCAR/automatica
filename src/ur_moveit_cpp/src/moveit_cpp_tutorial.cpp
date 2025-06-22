
#include <rclcpp/rclcpp.hpp>
#include <memory>
#include <moveit/moveit_cpp/moveit_cpp.hpp>
#include <moveit/moveit_cpp/planning_component.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("moveit_cpp_ptp");

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("run_moveit_cpp", "", node_options);

  // Spin a thread to handle ROS callbacks
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(node);
  std::thread([&executor]() { executor.spin(); }).detach();

  rclcpp::sleep_for(std::chrono::seconds(1));
  RCLCPP_INFO(LOGGER, "Starting Point-to-Point Planning...");

  // Initialize MoveItCpp and PlanningComponent
  static const std::string PLANNING_GROUP = "ur_manipulator";
  auto moveit_cpp_ptr = std::make_shared<moveit_cpp::MoveItCpp>(node);
  // moveit_cpp_ptr->getPlanningSceneMonitorNonConst()->providePlanningSceneService();

  auto planning_components = std::make_shared<moveit_cpp::PlanningComponent>(PLANNING_GROUP, moveit_cpp_ptr);
  auto robot_model_ptr = moveit_cpp_ptr->getRobotModel();
  auto joint_model_group_ptr = robot_model_ptr->getJointModelGroup(PLANNING_GROUP);

  // Set start state to current state
  planning_components->setStartStateToCurrentState();

  // Define a goal pose for the end effector
  geometry_msgs::msg::PoseStamped target_pose;
  target_pose.header.frame_id = "base_link";
  target_pose.pose.position.x = 0.15;
  target_pose.pose.position.y = -0.63;
  target_pose.pose.position.z = 0.78;
  target_pose.pose.orientation.w = 1.0;

  const std::string ee_link = joint_model_group_ptr->getLinkModelNames().back();
  planning_components->setGoal(target_pose, ee_link);

  // Plan
  const planning_interface::MotionPlanResponse plan_solution = planning_components->plan();
  if (plan_solution)
  {
    RCLCPP_INFO(LOGGER, "Planning succeeded. Executing the plan...");
    bool blocking = true;
    moveit_cpp_ptr->execute(plan_solution.trajectory, blocking);
  }
  else
  {
    RCLCPP_ERROR(LOGGER, "Planning failed.");
  }

  planning_components->setStartStateToCurrentState();  

  geometry_msgs::msg::PoseStamped second_pose;
  second_pose.header.frame_id = "base_link";
  second_pose.pose.position.x = 0.15;
  second_pose.pose.position.y = -0.80;
  second_pose.pose.position.z = 0.88;
  second_pose.pose.orientation.w = 1.0;

  planning_components->setGoal(second_pose, ee_link);

  const planning_interface::MotionPlanResponse plan_solution_2 = planning_components->plan();
  if (plan_solution_2)
  {
    RCLCPP_INFO(LOGGER, "Planning to second point succeeded. Executing...");
    moveit_cpp_ptr->execute(plan_solution_2.trajectory, true);
  }
  else
  {
    RCLCPP_ERROR(LOGGER, "Planning to second point failed.");
  }

  rclcpp::shutdown();
  return 0;
}
