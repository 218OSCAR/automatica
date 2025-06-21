// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_calibration_board.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__BUILDER_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectionResultCalibrationBoard_feature_points_height
{
public:
  explicit Init_DetectionResultCalibrationBoard_feature_points_height(::zivid_interfaces::msg::DetectionResultCalibrationBoard & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard feature_points_height(::zivid_interfaces::msg::DetectionResultCalibrationBoard::_feature_points_height_type arg)
  {
    msg_.feature_points_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard msg_;
};

class Init_DetectionResultCalibrationBoard_feature_points_width
{
public:
  explicit Init_DetectionResultCalibrationBoard_feature_points_width(::zivid_interfaces::msg::DetectionResultCalibrationBoard & msg)
  : msg_(msg)
  {}
  Init_DetectionResultCalibrationBoard_feature_points_height feature_points_width(::zivid_interfaces::msg::DetectionResultCalibrationBoard::_feature_points_width_type arg)
  {
    msg_.feature_points_width = std::move(arg);
    return Init_DetectionResultCalibrationBoard_feature_points_height(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard msg_;
};

class Init_DetectionResultCalibrationBoard_feature_points_2d
{
public:
  explicit Init_DetectionResultCalibrationBoard_feature_points_2d(::zivid_interfaces::msg::DetectionResultCalibrationBoard & msg)
  : msg_(msg)
  {}
  Init_DetectionResultCalibrationBoard_feature_points_width feature_points_2d(::zivid_interfaces::msg::DetectionResultCalibrationBoard::_feature_points_2d_type arg)
  {
    msg_.feature_points_2d = std::move(arg);
    return Init_DetectionResultCalibrationBoard_feature_points_width(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard msg_;
};

class Init_DetectionResultCalibrationBoard_feature_points
{
public:
  explicit Init_DetectionResultCalibrationBoard_feature_points(::zivid_interfaces::msg::DetectionResultCalibrationBoard & msg)
  : msg_(msg)
  {}
  Init_DetectionResultCalibrationBoard_feature_points_2d feature_points(::zivid_interfaces::msg::DetectionResultCalibrationBoard::_feature_points_type arg)
  {
    msg_.feature_points = std::move(arg);
    return Init_DetectionResultCalibrationBoard_feature_points_2d(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard msg_;
};

class Init_DetectionResultCalibrationBoard_pose
{
public:
  explicit Init_DetectionResultCalibrationBoard_pose(::zivid_interfaces::msg::DetectionResultCalibrationBoard & msg)
  : msg_(msg)
  {}
  Init_DetectionResultCalibrationBoard_feature_points pose(::zivid_interfaces::msg::DetectionResultCalibrationBoard::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DetectionResultCalibrationBoard_feature_points(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard msg_;
};

class Init_DetectionResultCalibrationBoard_centroid
{
public:
  explicit Init_DetectionResultCalibrationBoard_centroid(::zivid_interfaces::msg::DetectionResultCalibrationBoard & msg)
  : msg_(msg)
  {}
  Init_DetectionResultCalibrationBoard_pose centroid(::zivid_interfaces::msg::DetectionResultCalibrationBoard::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return Init_DetectionResultCalibrationBoard_pose(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard msg_;
};

class Init_DetectionResultCalibrationBoard_status_description
{
public:
  explicit Init_DetectionResultCalibrationBoard_status_description(::zivid_interfaces::msg::DetectionResultCalibrationBoard & msg)
  : msg_(msg)
  {}
  Init_DetectionResultCalibrationBoard_centroid status_description(::zivid_interfaces::msg::DetectionResultCalibrationBoard::_status_description_type arg)
  {
    msg_.status_description = std::move(arg);
    return Init_DetectionResultCalibrationBoard_centroid(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard msg_;
};

class Init_DetectionResultCalibrationBoard_status
{
public:
  Init_DetectionResultCalibrationBoard_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionResultCalibrationBoard_status_description status(::zivid_interfaces::msg::DetectionResultCalibrationBoard::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DetectionResultCalibrationBoard_status_description(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultCalibrationBoard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::msg::DetectionResultCalibrationBoard>()
{
  return zivid_interfaces::msg::builder::Init_DetectionResultCalibrationBoard_status();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__BUILDER_HPP_
