// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:srv/InfieldCorrectionCompute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/infield_correction_compute.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__BUILDER_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/srv/detail/infield_correction_compute__struct.hpp"
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
auto build<::zivid_interfaces::srv::InfieldCorrectionCompute_Request>()
{
  return ::zivid_interfaces::srv::InfieldCorrectionCompute_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_InfieldCorrectionCompute_Response_z_max
{
public:
  explicit Init_InfieldCorrectionCompute_Response_z_max(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response z_max(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_z_max_type arg)
  {
    msg_.z_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_z_min
{
public:
  explicit Init_InfieldCorrectionCompute_Response_z_min(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Response_z_max z_min(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_z_min_type arg)
  {
    msg_.z_min = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_z_max(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_dimension_accuracy
{
public:
  explicit Init_InfieldCorrectionCompute_Response_dimension_accuracy(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Response_z_min dimension_accuracy(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_dimension_accuracy_type arg)
  {
    msg_.dimension_accuracy = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_z_min(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_maximum_trueness_error
{
public:
  explicit Init_InfieldCorrectionCompute_Response_maximum_trueness_error(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Response_dimension_accuracy maximum_trueness_error(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_maximum_trueness_error_type arg)
  {
    msg_.maximum_trueness_error = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_dimension_accuracy(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_average_trueness_error
{
public:
  explicit Init_InfieldCorrectionCompute_Response_average_trueness_error(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Response_maximum_trueness_error average_trueness_error(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_average_trueness_error_type arg)
  {
    msg_.average_trueness_error = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_maximum_trueness_error(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_trueness_errors
{
public:
  explicit Init_InfieldCorrectionCompute_Response_trueness_errors(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Response_average_trueness_error trueness_errors(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_trueness_errors_type arg)
  {
    msg_.trueness_errors = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_average_trueness_error(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_number_of_captures
{
public:
  explicit Init_InfieldCorrectionCompute_Response_number_of_captures(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Response_trueness_errors number_of_captures(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_number_of_captures_type arg)
  {
    msg_.number_of_captures = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_trueness_errors(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_infield_correction_started
{
public:
  explicit Init_InfieldCorrectionCompute_Response_infield_correction_started(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Response_number_of_captures infield_correction_started(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_infield_correction_started_type arg)
  {
    msg_.infield_correction_started = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_number_of_captures(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_message
{
public:
  explicit Init_InfieldCorrectionCompute_Response_message(::zivid_interfaces::srv::InfieldCorrectionCompute_Response & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Response_infield_correction_started message(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_infield_correction_started(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

class Init_InfieldCorrectionCompute_Response_success
{
public:
  Init_InfieldCorrectionCompute_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfieldCorrectionCompute_Response_message success(::zivid_interfaces::srv::InfieldCorrectionCompute_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_InfieldCorrectionCompute_Response_message(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::InfieldCorrectionCompute_Response>()
{
  return zivid_interfaces::srv::builder::Init_InfieldCorrectionCompute_Response_success();
}

}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace builder
{

class Init_InfieldCorrectionCompute_Event_response
{
public:
  explicit Init_InfieldCorrectionCompute_Event_response(::zivid_interfaces::srv::InfieldCorrectionCompute_Event & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Event response(::zivid_interfaces::srv::InfieldCorrectionCompute_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Event msg_;
};

class Init_InfieldCorrectionCompute_Event_request
{
public:
  explicit Init_InfieldCorrectionCompute_Event_request(::zivid_interfaces::srv::InfieldCorrectionCompute_Event & msg)
  : msg_(msg)
  {}
  Init_InfieldCorrectionCompute_Event_response request(::zivid_interfaces::srv::InfieldCorrectionCompute_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_InfieldCorrectionCompute_Event_response(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Event msg_;
};

class Init_InfieldCorrectionCompute_Event_info
{
public:
  Init_InfieldCorrectionCompute_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfieldCorrectionCompute_Event_request info(::zivid_interfaces::srv::InfieldCorrectionCompute_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_InfieldCorrectionCompute_Event_request(msg_);
  }

private:
  ::zivid_interfaces::srv::InfieldCorrectionCompute_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::srv::InfieldCorrectionCompute_Event>()
{
  return zivid_interfaces::srv::builder::Init_InfieldCorrectionCompute_Event_info();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__BUILDER_HPP_
