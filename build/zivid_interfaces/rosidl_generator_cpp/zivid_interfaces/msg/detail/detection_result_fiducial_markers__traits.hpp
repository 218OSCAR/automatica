// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:msg/DetectionResultFiducialMarkers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_fiducial_markers.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__TRAITS_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'detected_markers'
#include "zivid_interfaces/msg/detail/marker_shape__traits.hpp"

namespace zivid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionResultFiducialMarkers & msg,
  std::ostream & out)
{
  out << "{";
  // member: detected_markers
  {
    if (msg.detected_markers.size() == 0) {
      out << "detected_markers: []";
    } else {
      out << "detected_markers: [";
      size_t pending_items = msg.detected_markers.size();
      for (auto item : msg.detected_markers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: allowed_marker_ids
  {
    if (msg.allowed_marker_ids.size() == 0) {
      out << "allowed_marker_ids: []";
    } else {
      out << "allowed_marker_ids: [";
      size_t pending_items = msg.allowed_marker_ids.size();
      for (auto item : msg.allowed_marker_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionResultFiducialMarkers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detected_markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detected_markers.size() == 0) {
      out << "detected_markers: []\n";
    } else {
      out << "detected_markers:\n";
      for (auto item : msg.detected_markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: allowed_marker_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.allowed_marker_ids.size() == 0) {
      out << "allowed_marker_ids: []\n";
    } else {
      out << "allowed_marker_ids:\n";
      for (auto item : msg.allowed_marker_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionResultFiducialMarkers & msg, bool use_flow_style = false)
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
  const zivid_interfaces::msg::DetectionResultFiducialMarkers & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::msg::DetectionResultFiducialMarkers & msg)
{
  return zivid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::msg::DetectionResultFiducialMarkers>()
{
  return "zivid_interfaces::msg::DetectionResultFiducialMarkers";
}

template<>
inline const char * name<zivid_interfaces::msg::DetectionResultFiducialMarkers>()
{
  return "zivid_interfaces/msg/DetectionResultFiducialMarkers";
}

template<>
struct has_fixed_size<zivid_interfaces::msg::DetectionResultFiducialMarkers>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::msg::DetectionResultFiducialMarkers>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::msg::DetectionResultFiducialMarkers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__TRAITS_HPP_
