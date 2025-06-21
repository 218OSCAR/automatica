// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/hand_eye_calibration_residual.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__BUILDER_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace msg
{

namespace builder
{

class Init_HandEyeCalibrationResidual_translation
{
public:
  explicit Init_HandEyeCalibrationResidual_translation(::zivid_interfaces::msg::HandEyeCalibrationResidual & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::msg::HandEyeCalibrationResidual translation(::zivid_interfaces::msg::HandEyeCalibrationResidual::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::msg::HandEyeCalibrationResidual msg_;
};

class Init_HandEyeCalibrationResidual_rotation
{
public:
  Init_HandEyeCalibrationResidual_rotation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationResidual_translation rotation(::zivid_interfaces::msg::HandEyeCalibrationResidual::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_HandEyeCalibrationResidual_translation(msg_);
  }

private:
  ::zivid_interfaces::msg::HandEyeCalibrationResidual msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::msg::HandEyeCalibrationResidual>()
{
  return zivid_interfaces::msg::builder::Init_HandEyeCalibrationResidual_rotation();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__BUILDER_HPP_
