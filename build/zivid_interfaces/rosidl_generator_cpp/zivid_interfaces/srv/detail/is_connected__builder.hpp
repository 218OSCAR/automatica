// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/is_connected.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/is_connected__struct.hpp"
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
auto build<::zivid_interfaces::srv::IsConnected_Request>()
{
  return ::zivid_interfaces::srv::IsConnected_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_IsConnected_Response_is_connected
{
public:
  Init_IsConnected_Response_is_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zivid_interfaces::srv::IsConnected_Response is_connected(::zivid_interfaces::srv::IsConnected_Response::_is_connected_type arg)
  {
    msg_.is_connected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::IsConnected_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::IsConnected_Response>()
{
  return zivid_interfaces::srv::builder::Init_IsConnected_Response_is_connected();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_IsConnected_Event_response
{
public:
  explicit Init_IsConnected_Event_response(::zivid_interfaces::srv::IsConnected_Event & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::IsConnected_Event response(::zivid_interfaces::srv::IsConnected_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::IsConnected_Event msg_;
};

class Init_IsConnected_Event_request
{
public:
  explicit Init_IsConnected_Event_request(::zivid_interfaces::srv::IsConnected_Event & msg)
  : msg_(msg)
  {}
  Init_IsConnected_Event_response request(::zivid_interfaces::srv::IsConnected_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_IsConnected_Event_response(msg_);
  }

private:
  ::zivid_interfaces::srv::IsConnected_Event msg_;
};

class Init_IsConnected_Event_info
{
public:
  Init_IsConnected_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsConnected_Event_request info(::zivid_interfaces::srv::IsConnected_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_IsConnected_Event_request(msg_);
  }

private:
  ::zivid_interfaces::srv::IsConnected_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::IsConnected_Event>()
{
  return zivid_interfaces::srv::builder::Init_IsConnected_Event_info();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_
