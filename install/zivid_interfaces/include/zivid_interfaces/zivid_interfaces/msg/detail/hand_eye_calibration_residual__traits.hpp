// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/hand_eye_calibration_residual.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__TRAITS_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zivid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandEyeCalibrationResidual & msg,
  std::ostream & out)
{
  out << "{";
  // member: rotation
  {
    out << "rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation, out);
    out << ", ";
  }

  // member: translation
  {
    out << "translation: ";
    rosidl_generator_traits::value_to_yaml(msg.translation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandEyeCalibrationResidual & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation, out);
    out << "\n";
  }

  // member: translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation: ";
    rosidl_generator_traits::value_to_yaml(msg.translation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandEyeCalibrationResidual & msg, bool use_flow_style = false)
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
  const zivid_interfaces::msg::HandEyeCalibrationResidual & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::msg::HandEyeCalibrationResidual & msg)
{
  return zivid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::msg::HandEyeCalibrationResidual>()
{
  return "zivid_interfaces::msg::HandEyeCalibrationResidual";
}

template<>
inline const char * name<zivid_interfaces::msg::HandEyeCalibrationResidual>()
{
  return "zivid_interfaces/msg/HandEyeCalibrationResidual";
}

template<>
struct has_fixed_size<zivid_interfaces::msg::HandEyeCalibrationResidual>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<zivid_interfaces::msg::HandEyeCalibrationResidual>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<zivid_interfaces::msg::HandEyeCalibrationResidual>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__TRAITS_HPP_
