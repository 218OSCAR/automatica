// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/CaptureAssistantSuggestSettings.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/capture_assistant_suggest_settings.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/capture_assistant_suggest_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureAssistantSuggestSettings_Request_ambient_light_frequency
{
public:
  explicit Init_CaptureAssistantSuggestSettings_Request_ambient_light_frequency(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request ambient_light_frequency(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request::_ambient_light_frequency_type arg)
  {
    msg_.ambient_light_frequency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request msg_;
};

class Init_CaptureAssistantSuggestSettings_Request_max_capture_time
{
public:
  Init_CaptureAssistantSuggestSettings_Request_max_capture_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureAssistantSuggestSettings_Request_ambient_light_frequency max_capture_time(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request::_max_capture_time_type arg)
  {
    msg_.max_capture_time = std::move(arg);
    return Init_CaptureAssistantSuggestSettings_Request_ambient_light_frequency(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>()
{
  return zivid_interfaces::srv::builder::Init_CaptureAssistantSuggestSettings_Request_max_capture_time();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureAssistantSuggestSettings_Response_message
{
public:
  explicit Init_CaptureAssistantSuggestSettings_Response_message(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response message(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response msg_;
};

class Init_CaptureAssistantSuggestSettings_Response_success
{
public:
  explicit Init_CaptureAssistantSuggestSettings_Response_success(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response & msg)
  : msg_(msg)
  {}
  Init_CaptureAssistantSuggestSettings_Response_message success(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CaptureAssistantSuggestSettings_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response msg_;
};

class Init_CaptureAssistantSuggestSettings_Response_suggested_settings
{
public:
  Init_CaptureAssistantSuggestSettings_Response_suggested_settings()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureAssistantSuggestSettings_Response_success suggested_settings(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response::_suggested_settings_type arg)
  {
    msg_.suggested_settings = std::move(arg);
    return Init_CaptureAssistantSuggestSettings_Response_success(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>()
{
  return zivid_interfaces::srv::builder::Init_CaptureAssistantSuggestSettings_Response_suggested_settings();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureAssistantSuggestSettings_Event_response
{
public:
  explicit Init_CaptureAssistantSuggestSettings_Event_response(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event response(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event msg_;
};

class Init_CaptureAssistantSuggestSettings_Event_request
{
public:
  explicit Init_CaptureAssistantSuggestSettings_Event_request(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event & msg)
  : msg_(msg)
  {}
  Init_CaptureAssistantSuggestSettings_Event_response request(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CaptureAssistantSuggestSettings_Event_response(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event msg_;
};

class Init_CaptureAssistantSuggestSettings_Event_info
{
public:
  Init_CaptureAssistantSuggestSettings_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureAssistantSuggestSettings_Event_request info(::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CaptureAssistantSuggestSettings_Event_request(msg_);
  }

private:
  ::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event>()
{
  return zivid_interfaces::srv::builder::Init_CaptureAssistantSuggestSettings_Event_info();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__BUILDER_HPP_
