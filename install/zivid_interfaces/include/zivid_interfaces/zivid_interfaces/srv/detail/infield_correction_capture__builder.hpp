// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/InfieldCorrectionCapture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/infield_correction_capture.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/infield_correction_capture__struct.hpp"
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
auto build<::zivid_interfaces::srv::InfieldCorrectionCapture_Request>()
{
  return ::zivid_interfaces::srv::InfieldCorrectionCapture_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_InfieldCorrectionCapture_Response_detection_result
{
public:
  explicit Init_InfieldCorrectionCapture_Response_detection_result(::zivid_interfaces::srv::InfieldCorrectionCapture_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Response detection_result(::zivid_interfaces::srv::InfieldCorrectionCapture_Response::_detection_result_type arg)
  {
    msg_.detection_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Response msg_;
};

class Init_InfieldCorrectionCapture_Response_number_of_captures
{
public:
  explicit Init_InfieldCorrectionCapture_Response_number_of_captures(::zivid_interfaces::srv::InfieldCorrectionCapture_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCapture_Response_detection_result number_of_captures(::zivid_interfaces::srv::InfieldCorrectionCapture_Response::_number_of_captures_type arg)
  {
    msg_.number_of_captures = std::move(arg);
    return Init_InfieldCorrectionCapture_Response_detection_result(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Response msg_;
};

class Init_InfieldCorrectionCapture_Response_status
{
public:
  explicit Init_InfieldCorrectionCapture_Response_status(::zivid_interfaces::srv::InfieldCorrectionCapture_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCapture_Response_number_of_captures status(::zivid_interfaces::srv::InfieldCorrectionCapture_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_InfieldCorrectionCapture_Response_number_of_captures(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Response msg_;
};

class Init_InfieldCorrectionCapture_Response_message
{
public:
  explicit Init_InfieldCorrectionCapture_Response_message(::zivid_interfaces::srv::InfieldCorrectionCapture_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCapture_Response_status message(::zivid_interfaces::srv::InfieldCorrectionCapture_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_InfieldCorrectionCapture_Response_status(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Response msg_;
};

class Init_InfieldCorrectionCapture_Response_success
{
public:
  Init_InfieldCorrectionCapture_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfieldCorrectionCapture_Response_message success(::zivid_interfaces::srv::InfieldCorrectionCapture_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_InfieldCorrectionCapture_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::InfieldCorrectionCapture_Response>()
{
  return zivid_interfaces::srv::builder::Init_InfieldCorrectionCapture_Response_success();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_InfieldCorrectionCapture_Event_response
{
public:
  explicit Init_InfieldCorrectionCapture_Event_response(::zivid_interfaces::srv::InfieldCorrectionCapture_Event & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Event response(::zivid_interfaces::srv::InfieldCorrectionCapture_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Event msg_;
};

class Init_InfieldCorrectionCapture_Event_request
{
public:
  explicit Init_InfieldCorrectionCapture_Event_request(::zivid_interfaces::srv::InfieldCorrectionCapture_Event & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCapture_Event_response request(::zivid_interfaces::srv::InfieldCorrectionCapture_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_InfieldCorrectionCapture_Event_response(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Event msg_;
};

class Init_InfieldCorrectionCapture_Event_info
{
public:
  Init_InfieldCorrectionCapture_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfieldCorrectionCapture_Event_request info(::zivid_interfaces::srv::InfieldCorrectionCapture_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_InfieldCorrectionCapture_Event_request(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCapture_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::InfieldCorrectionCapture_Event>()
{
  return zivid_interfaces::srv::builder::Init_InfieldCorrectionCapture_Event_info();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__BUILDER_HPP_
