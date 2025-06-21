// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/hand_eye_calibration_objects.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__TRAITS_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zivid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandEyeCalibrationObjects & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: marker_ids
  {
    if (msg.marker_ids.size() == 0) {
      out << "marker_ids: []";
    } else {
      out << "marker_ids: [";
      size_t pending_items = msg.marker_ids.size();
      for (auto item : msg.marker_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: marker_dictionary
  {
    out << "marker_dictionary: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_dictionary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandEyeCalibrationObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: marker_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.marker_ids.size() == 0) {
      out << "marker_ids: []\n";
    } else {
      out << "marker_ids:\n";
      for (auto item : msg.marker_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: marker_dictionary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_dictionary: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_dictionary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandEyeCalibrationObjects & msg, bool use_flow_style = false)
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
  const zivid_interfaces::msg::HandEyeCalibrationObjects & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::msg::HandEyeCalibrationObjects & msg)
{
  return zivid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::msg::HandEyeCalibrationObjects>()
{
  return "zivid_interfaces::msg::HandEyeCalibrationObjects";
}

template<>
inline const char * name<zivid_interfaces::msg::HandEyeCalibrationObjects>()
{
  return "zivid_interfaces/msg/HandEyeCalibrationObjects";
}

template<>
struct has_fixed_size<zivid_interfaces::msg::HandEyeCalibrationObjects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::msg::HandEyeCalibrationObjects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::msg::HandEyeCalibrationObjects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__TRAITS_HPP_
