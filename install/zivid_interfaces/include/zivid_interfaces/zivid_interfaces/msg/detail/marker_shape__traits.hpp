// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/marker_shape.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__TRAITS_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/msg/detail/marker_shape__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'corners_in_pixel_coordinates'
// Member 'corners_in_camera_coordinates'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace zivid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MarkerShape & msg,
  std::ostream & out)
{
  out << "{";
  // member: corners_in_pixel_coordinates
  {
    if (msg.corners_in_pixel_coordinates.size() == 0) {
      out << "corners_in_pixel_coordinates: []";
    } else {
      out << "corners_in_pixel_coordinates: [";
      size_t pending_items = msg.corners_in_pixel_coordinates.size();
      for (auto item : msg.corners_in_pixel_coordinates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corners_in_camera_coordinates
  {
    if (msg.corners_in_camera_coordinates.size() == 0) {
      out << "corners_in_camera_coordinates: []";
    } else {
      out << "corners_in_camera_coordinates: [";
      size_t pending_items = msg.corners_in_camera_coordinates.size();
      for (auto item : msg.corners_in_camera_coordinates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
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
  const MarkerShape & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: corners_in_pixel_coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners_in_pixel_coordinates.size() == 0) {
      out << "corners_in_pixel_coordinates: []\n";
    } else {
      out << "corners_in_pixel_coordinates:\n";
      for (auto item : msg.corners_in_pixel_coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: corners_in_camera_coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners_in_camera_coordinates.size() == 0) {
      out << "corners_in_camera_coordinates: []\n";
    } else {
      out << "corners_in_camera_coordinates:\n";
      for (auto item : msg.corners_in_camera_coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
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

inline std::string to_yaml(const MarkerShape & msg, bool use_flow_style = false)
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
  const zivid_interfaces::msg::MarkerShape & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::msg::MarkerShape & msg)
{
  return zivid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::msg::MarkerShape>()
{
  return "zivid_interfaces::msg::MarkerShape";
}

template<>
inline const char * name<zivid_interfaces::msg::MarkerShape>()
{
  return "zivid_interfaces/msg/MarkerShape";
}

template<>
struct has_fixed_size<zivid_interfaces::msg::MarkerShape>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<zivid_interfaces::msg::MarkerShape>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<zivid_interfaces::msg::MarkerShape>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__TRAITS_HPP_
