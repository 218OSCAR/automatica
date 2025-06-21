// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_calibration_board.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__TRAITS_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'centroid'
// Member 'feature_points'
// Member 'feature_points_2d'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace zivid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionResultCalibrationBoard & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: status_description
  {
    out << "status_description: ";
    rosidl_generator_traits::value_to_yaml(msg.status_description, out);
    out << ", ";
  }

  // member: centroid
  {
    out << "centroid: ";
    to_flow_style_yaml(msg.centroid, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: feature_points
  {
    if (msg.feature_points.size() == 0) {
      out << "feature_points: []";
    } else {
      out << "feature_points: [";
      size_t pending_items = msg.feature_points.size();
      for (auto item : msg.feature_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: feature_points_2d
  {
    if (msg.feature_points_2d.size() == 0) {
      out << "feature_points_2d: []";
    } else {
      out << "feature_points_2d: [";
      size_t pending_items = msg.feature_points_2d.size();
      for (auto item : msg.feature_points_2d) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: feature_points_width
  {
    out << "feature_points_width: ";
    rosidl_generator_traits::value_to_yaml(msg.feature_points_width, out);
    out << ", ";
  }

  // member: feature_points_height
  {
    out << "feature_points_height: ";
    rosidl_generator_traits::value_to_yaml(msg.feature_points_height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionResultCalibrationBoard & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: status_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_description: ";
    rosidl_generator_traits::value_to_yaml(msg.status_description, out);
    out << "\n";
  }

  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_block_style_yaml(msg.centroid, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: feature_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_points.size() == 0) {
      out << "feature_points: []\n";
    } else {
      out << "feature_points:\n";
      for (auto item : msg.feature_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: feature_points_2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_points_2d.size() == 0) {
      out << "feature_points_2d: []\n";
    } else {
      out << "feature_points_2d:\n";
      for (auto item : msg.feature_points_2d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: feature_points_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature_points_width: ";
    rosidl_generator_traits::value_to_yaml(msg.feature_points_width, out);
    out << "\n";
  }

  // member: feature_points_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature_points_height: ";
    rosidl_generator_traits::value_to_yaml(msg.feature_points_height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionResultCalibrationBoard & msg, bool use_flow_style = false)
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
  const zivid_interfaces::msg::DetectionResultCalibrationBoard & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::msg::DetectionResultCalibrationBoard & msg)
{
  return zivid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::msg::DetectionResultCalibrationBoard>()
{
  return "zivid_interfaces::msg::DetectionResultCalibrationBoard";
}

template<>
inline const char * name<zivid_interfaces::msg::DetectionResultCalibrationBoard>()
{
  return "zivid_interfaces/msg/DetectionResultCalibrationBoard";
}

template<>
struct has_fixed_size<zivid_interfaces::msg::DetectionResultCalibrationBoard>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::msg::DetectionResultCalibrationBoard>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::msg::DetectionResultCalibrationBoard>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__TRAITS_HPP_
