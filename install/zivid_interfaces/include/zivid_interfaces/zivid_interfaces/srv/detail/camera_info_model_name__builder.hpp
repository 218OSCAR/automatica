// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/CameraInfoModelName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/camera_info_model_name.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/camera_info_model_name__struct.hpp"
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
auto build<::zivid_interfaces::srv::CameraInfoModelName_Request>()
{
  return ::zivid_interfaces::srv::CameraInfoModelName_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CameraInfoModelName_Response_model_name
{
public:
  Init_CameraInfoModelName_Response_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zivid_interfaces::srv::CameraInfoModelName_Response model_name(::zivid_interfaces::srv::CameraInfoModelName_Response::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CameraInfoModelName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CameraInfoModelName_Response>()
{
  return zivid_interfaces::srv::builder::Init_CameraInfoModelName_Response_model_name();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CameraInfoModelName_Event_response
{
public:
  explicit Init_CameraInfoModelName_Event_response(::zivid_interfaces::srv::CameraInfoModelName_Event & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::CameraInfoModelName_Event response(::zivid_interfaces::srv::CameraInfoModelName_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CameraInfoModelName_Event msg_;
};

class Init_CameraInfoModelName_Event_request
{
public:
  explicit Init_CameraInfoModelName_Event_request(::zivid_interfaces::srv::CameraInfoModelName_Event & msg)
  : msg_(msg)
  {}
  Init_CameraInfoModelName_Event_response request(::zivid_interfaces::srv::CameraInfoModelName_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CameraInfoModelName_Event_response(msg_);
  }

private:
  ::zivid_interfaces::srv::CameraInfoModelName_Event msg_;
};

class Init_CameraInfoModelName_Event_info
{
public:
  Init_CameraInfoModelName_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraInfoModelName_Event_request info(::zivid_interfaces::srv::CameraInfoModelName_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CameraInfoModelName_Event_request(msg_);
  }

private:
  ::zivid_interfaces::srv::CameraInfoModelName_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CameraInfoModelName_Event>()
{
  return zivid_interfaces::srv::builder::Init_CameraInfoModelName_Event_info();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAMERA_INFO_MODEL_NAME__BUILDER_HPP_
