// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_calibration_board.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__BUILDER_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace msg
{

namespace builder
{

class Init_FixedPlacementOfCalibrationBoard_pose
{
public:
  explicit Init_FixedPlacementOfCalibrationBoard_pose(::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard pose(::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard msg_;
};

class Init_FixedPlacementOfCalibrationBoard_position
{
public:
  explicit Init_FixedPlacementOfCalibrationBoard_position(::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard & msg)
  : msg_(msg)
  {}
  Init_FixedPlacementOfCalibrationBoard_pose position(::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_FixedPlacementOfCalibrationBoard_pose(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard msg_;
};

class Init_FixedPlacementOfCalibrationBoard_representation
{
public:
  Init_FixedPlacementOfCalibrationBoard_representation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedPlacementOfCalibrationBoard_position representation(::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard::_representation_type arg)
  {
    msg_.representation = std::move(arg);
    return Init_FixedPlacementOfCalibrationBoard_position(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::msg::FixedPlacementOfCalibrationBoard>()
{
  return zivid_interfaces::msg::builder::Init_FixedPlacementOfCalibrationBoard_representation();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__BUILDER_HPP_
