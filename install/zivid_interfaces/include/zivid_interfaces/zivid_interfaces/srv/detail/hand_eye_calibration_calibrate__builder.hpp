// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_calibrate.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_HandEyeCalibrationCalibrate_Request_fixed_objects
{
public:
  explicit Init_HandEyeCalibrationCalibrate_Request_fixed_objects(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request fixed_objects(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request::_fixed_objects_type arg)
  {
    msg_.fixed_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request msg_;
};

class Init_HandEyeCalibrationCalibrate_Request_capture_handles
{
public:
  explicit Init_HandEyeCalibrationCalibrate_Request_capture_handles(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationCalibrate_Request_fixed_objects capture_handles(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request::_capture_handles_type arg)
  {
    msg_.capture_handles = std::move(arg);
    return Init_HandEyeCalibrationCalibrate_Request_fixed_objects(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request msg_;
};

class Init_HandEyeCalibrationCalibrate_Request_configuration
{
public:
  Init_HandEyeCalibrationCalibrate_Request_configuration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationCalibrate_Request_capture_handles configuration(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request::_configuration_type arg)
  {
    msg_.configuration = std::move(arg);
    return Init_HandEyeCalibrationCalibrate_Request_capture_handles(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>()
{
  return zivid_interfaces::srv::builder::Init_HandEyeCalibrationCalibrate_Request_configuration();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_HandEyeCalibrationCalibrate_Response_residuals
{
public:
  explicit Init_HandEyeCalibrationCalibrate_Response_residuals(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response residuals(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response::_residuals_type arg)
  {
    msg_.residuals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response msg_;
};

class Init_HandEyeCalibrationCalibrate_Response_transform
{
public:
  explicit Init_HandEyeCalibrationCalibrate_Response_transform(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationCalibrate_Response_residuals transform(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_HandEyeCalibrationCalibrate_Response_residuals(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response msg_;
};

class Init_HandEyeCalibrationCalibrate_Response_message
{
public:
  explicit Init_HandEyeCalibrationCalibrate_Response_message(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationCalibrate_Response_transform message(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_HandEyeCalibrationCalibrate_Response_transform(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response msg_;
};

class Init_HandEyeCalibrationCalibrate_Response_success
{
public:
  Init_HandEyeCalibrationCalibrate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationCalibrate_Response_message success(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HandEyeCalibrationCalibrate_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>()
{
  return zivid_interfaces::srv::builder::Init_HandEyeCalibrationCalibrate_Response_success();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_HandEyeCalibrationCalibrate_Event_response
{
public:
  explicit Init_HandEyeCalibrationCalibrate_Event_response(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event response(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event msg_;
};

class Init_HandEyeCalibrationCalibrate_Event_request
{
public:
  explicit Init_HandEyeCalibrationCalibrate_Event_request(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & msg)
  : msg_(msg)
  {}
  Init_HandEyeCalibrationCalibrate_Event_response request(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_HandEyeCalibrationCalibrate_Event_response(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event msg_;
};

class Init_HandEyeCalibrationCalibrate_Event_info
{
public:
  Init_HandEyeCalibrationCalibrate_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandEyeCalibrationCalibrate_Event_request info(::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_HandEyeCalibrationCalibrate_Event_request(msg_);
  }

private:
  ::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event>()
{
  return zivid_interfaces::srv::builder::Init_HandEyeCalibrationCalibrate_Event_info();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__BUILDER_HPP_
