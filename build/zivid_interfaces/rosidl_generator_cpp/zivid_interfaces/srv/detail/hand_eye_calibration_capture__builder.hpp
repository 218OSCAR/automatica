// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCapture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_capture.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_HandEyeCalibrationCapture_Request_robot_pose
{
public:
  Init_HandEyeCalibrationCapture_Request_robot_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Request robot_pose(::zivid_interfaces::srv::HandEyeCalibrationCapture_Request::_robot_pose_type arg)
  {
    msg_.robot_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::HandEyeCalibrationCapture_Request>()
{
  return zivid_interfaces::srv::builder::Init_HandEyeCalibrationCapture_Request_robot_pose();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_HandEyeCalibrationCapture_Response_detection_result_fiducial_markers
{
public:
  explicit Init_HandEyeCalibrationCapture_Response_detection_result_fiducial_markers(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Response detection_result_fiducial_markers(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response::_detection_result_fiducial_markers_type arg)
  {
    msg_.detection_result_fiducial_markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Response msg_;
};

class Init_HandEyeCalibrationCapture_Response_detection_result_calibration_board
{
public:
  explicit Init_HandEyeCalibrationCapture_Response_detection_result_calibration_board(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationCapture_Response_detection_result_fiducial_markers detection_result_calibration_board(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response::_detection_result_calibration_board_type arg)
  {
    msg_.detection_result_calibration_board = std::move(arg);
    return Init_HandEyeCalibrationCapture_Response_detection_result_fiducial_markers(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Response msg_;
};

class Init_HandEyeCalibrationCapture_Response_capture_handle
{
public:
  explicit Init_HandEyeCalibrationCapture_Response_capture_handle(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationCapture_Response_detection_result_calibration_board capture_handle(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response::_capture_handle_type arg)
  {
    msg_.capture_handle = std::move(arg);
    return Init_HandEyeCalibrationCapture_Response_detection_result_calibration_board(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Response msg_;
};

class Init_HandEyeCalibrationCapture_Response_message
{
public:
  explicit Init_HandEyeCalibrationCapture_Response_message(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationCapture_Response_capture_handle message(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_HandEyeCalibrationCapture_Response_capture_handle(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Response msg_;
};

class Init_HandEyeCalibrationCapture_Response_success
{
public:
  Init_HandEyeCalibrationCapture_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationCapture_Response_message success(::zivid_interfaces::srv::HandEyeCalibrationCapture_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HandEyeCalibrationCapture_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::HandEyeCalibrationCapture_Response>()
{
  return zivid_interfaces::srv::builder::Init_HandEyeCalibrationCapture_Response_success();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_HandEyeCalibrationCapture_Event_response
{
public:
  explicit Init_HandEyeCalibrationCapture_Event_response(::zivid_interfaces::srv::HandEyeCalibrationCapture_Event & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Event response(::zivid_interfaces::srv::HandEyeCalibrationCapture_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Event msg_;
};

class Init_HandEyeCalibrationCapture_Event_request
{
public:
  explicit Init_HandEyeCalibrationCapture_Event_request(::zivid_interfaces::srv::HandEyeCalibrationCapture_Event & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationCapture_Event_response request(::zivid_interfaces::srv::HandEyeCalibrationCapture_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_HandEyeCalibrationCapture_Event_response(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Event msg_;
};

class Init_HandEyeCalibrationCapture_Event_info
{
public:
  Init_HandEyeCalibrationCapture_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationCapture_Event_request info(::zivid_interfaces::srv::HandEyeCalibrationCapture_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_HandEyeCalibrationCapture_Event_request(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCapture_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::HandEyeCalibrationCapture_Event>()
{
  return zivid_interfaces::srv::builder::Init_HandEyeCalibrationCapture_Event_info();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__BUILDER_HPP_
