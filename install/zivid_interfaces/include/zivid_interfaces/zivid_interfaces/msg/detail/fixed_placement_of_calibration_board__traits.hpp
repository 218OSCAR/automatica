// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_calibration_board.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__TRAITS_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace zivid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FixedPlacementOfCalibrationBoard & msg,
  std::ostream & out)
{
  out << "{";
  // member: representation
  {
    out << "representation: ";
    rosidl_generator_traits::value_to_yaml(msg.representation, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FixedPlacementOfCalibrationBoard & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: representation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "representation: ";
    rosidl_generator_traits::value_to_yaml(msg.representation, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FixedPlacementOfCalibrationBoard & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace zivid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zivid_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationBoard & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::msg::FixedPlacementOfCalibrationBoard & msg)
{
  return zivid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard>()
{
  return "zivid_interfaces::msg::FixedPlacementOfCalibrationBoard";
}

template<>
inline const char * name<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard>()
{
  return "zivid_interfaces/msg/FixedPlacementOfCalibrationBoard";
}

template<>
struct has_fixed_size<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__TRAITS_HPP_
