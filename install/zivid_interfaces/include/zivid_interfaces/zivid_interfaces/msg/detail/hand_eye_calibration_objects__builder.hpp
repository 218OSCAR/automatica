// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/hand_eye_calibration_objects.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__BUILDER_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace msg
{

namespace builder
{

class Init_HandEyeCalibrationObjects_marker_dictionary
{
public:
  explicit Init_HandEyeCalibrationObjects_marker_dictionary(::zivid_interfaces::msg::HandEyeCalibrationObjects & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::msg::HandEyeCalibrationObjects marker_dictionary(::zivid_interfaces::msg::HandEyeCalibrationObjects::_marker_dictionary_type arg)
  {
    msg_.marker_dictionary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::msg::HandEyeCalibrationObjects msg_;
};

class Init_HandEyeCalibrationObjects_marker_ids
{
public:
  explicit Init_HandEyeCalibrationObjects_marker_ids(::zivid_interfaces::msg::HandEyeCalibrationObjects & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationObjects_marker_dictionary marker_ids(::zivid_interfaces::msg::HandEyeCalibrationObjects::_marker_ids_type arg)
  {
    msg_.marker_ids = std::move(arg);
    return Init_HandEyeCalibrationObjects_marker_dictionary(msg_);
  }

private:
  ::zivid_interfaces::msg::HandEyeCalibrationObjects msg_;
};

class Init_HandEyeCalibrationObjects_type
{
public:
  Init_HandEyeCalibrationObjects_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationObjects_marker_ids type(::zivid_interfaces::msg::HandEyeCalibrationObjects::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_HandEyeCalibrationObjects_marker_ids(msg_);
  }

private:
  ::zivid_interfaces::msg::HandEyeCalibrationObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::msg::HandEyeCalibrationObjects>()
{
  return zivid_interfaces::msg::builder::Init_HandEyeCalibrationObjects_type();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__BUILDER_HPP_
