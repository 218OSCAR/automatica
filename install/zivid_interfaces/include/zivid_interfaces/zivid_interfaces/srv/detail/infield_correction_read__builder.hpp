// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/InfieldCorrectionRead.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/infield_correction_read.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/infield_correction_read__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::InfieldCorrectionRead_Request>()
{
  return ::zivid_interfaces::srv::InfieldCorrectionRead_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_InfieldCorrectionRead_Response_camera_correction_timestamp
{
public:
  explicit Init_InfieldCorrectionRead_Response_camera_correction_timestamp(::zivid_interfaces::srv::InfieldCorrectionRead_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::InfieldCorrectionRead_Response camera_correction_timestamp(::zivid_interfaces::srv::InfieldCorrectionRead_Response::_camera_correction_timestamp_type arg)
  {
    msg_.camera_correction_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionRead_Response msg_;
};

class Init_InfieldCorrectionRead_Response_has_camera_correction
{
public:
  explicit Init_InfieldCorrectionRead_Response_has_camera_correction(::zivid_interfaces::srv::InfieldCorrectionRead_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionRead_Response_camera_correction_timestamp has_camera_correction(::zivid_interfaces::srv::InfieldCorrectionRead_Response::_has_camera_correction_type arg)
  {
    msg_.has_camera_correction = std::move(arg);
    return Init_InfieldCorrectionRead_Response_camera_correction_timestamp(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionRead_Response msg_;
};

class Init_InfieldCorrectionRead_Response_message
{
public:
  explicit Init_InfieldCorrectionRead_Response_message(::zivid_interfaces::srv::InfieldCorrectionRead_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionRead_Response_has_camera_correction message(::zivid_interfaces::srv::InfieldCorrectionRead_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_InfieldCorrectionRead_Response_has_camera_correction(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionRead_Response msg_;
};

class Init_InfieldCorrectionRead_Response_success
{
public:
  Init_InfieldCorrectionRead_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfieldCorrectionRead_Response_message success(::zivid_interfaces::srv::InfieldCorrectionRead_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_InfieldCorrectionRead_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionRead_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::InfieldCorrectionRead_Response>()
{
  return zivid_interfaces::srv::builder::Init_InfieldCorrectionRead_Response_success();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_InfieldCorrectionRead_Event_response
{
public:
  explicit Init_InfieldCorrectionRead_Event_response(::zivid_interfaces::srv::InfieldCorrectionRead_Event & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::InfieldCorrectionRead_Event response(::zivid_interfaces::srv::InfieldCorrectionRead_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionRead_Event msg_;
};

class Init_InfieldCorrectionRead_Event_request
{
public:
  explicit Init_InfieldCorrectionRead_Event_request(::zivid_interfaces::srv::InfieldCorrectionRead_Event & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionRead_Event_response request(::zivid_interfaces::srv::InfieldCorrectionRead_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_InfieldCorrectionRead_Event_response(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionRead_Event msg_;
};

class Init_InfieldCorrectionRead_Event_info
{
public:
  Init_InfieldCorrectionRead_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfieldCorrectionRead_Event_request info(::zivid_interfaces::srv::InfieldCorrectionRead_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_InfieldCorrectionRead_Event_request(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionRead_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::InfieldCorrectionRead_Event>()
{
  return zivid_interfaces::srv::builder::Init_InfieldCorrectionRead_Event_info();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_READ__BUILDER_HPP_
