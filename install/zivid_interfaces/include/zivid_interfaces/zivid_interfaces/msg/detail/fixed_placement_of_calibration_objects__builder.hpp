// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_calibration_objects.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__BUILDER_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace msg
{

namespace builder
{

class Init_FixedPlacementOfCalibrationObjects_markers
{
public:
  explicit Init_FixedPlacementOfCalibrationObjects_markers(::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects markers(::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects msg_;
};

class Init_FixedPlacementOfCalibrationObjects_marker_dictionary
{
public:
  explicit Init_FixedPlacementOfCalibrationObjects_marker_dictionary(::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & msg)
  : msg_(msg)
  {}
  Init_FixedPlacementOfCalibrationObjects_markers marker_dictionary(::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects::_marker_dictionary_type arg)
  {
    msg_.marker_dictionary = std::move(arg);
    return Init_FixedPlacementOfCalibrationObjects_markers(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects msg_;
};

class Init_FixedPlacementOfCalibrationObjects_calibration_board
{
public:
  explicit Init_FixedPlacementOfCalibrationObjects_calibration_board(::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & msg)
  : msg_(msg)
  {}
  Init_FixedPlacementOfCalibrationObjects_marker_dictionary calibration_board(::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects::_calibration_board_type arg)
  {
    msg_.calibration_board = std::move(arg);
    return Init_FixedPlacementOfCalibrationObjects_marker_dictionary(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects msg_;
};

class Init_FixedPlacementOfCalibrationObjects_type
{
public:
  Init_FixedPlacementOfCalibrationObjects_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedPlacementOfCalibrationObjects_calibration_board type(::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_FixedPlacementOfCalibrationObjects_calibration_board(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::msg::FixedPlacementOfCalibrationObjects>()
{
  return zivid_interfaces::msg::builder::Init_FixedPlacementOfCalibrationObjects_type();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__BUILDER_HPP_
