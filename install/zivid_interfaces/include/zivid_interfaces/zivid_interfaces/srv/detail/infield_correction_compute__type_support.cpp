// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:srv/InfieldCorrectionCompute.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "zivid_interfaces/srv/detail/infield_correction_compute__functions.h"
#include "zivid_interfaces/srv/detail/infield_correction_compute__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void InfieldCorrectionCompute_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::srv::InfieldCorrectionCompute_Request(_init);
}

void InfieldCorrectionCompute_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::srv::InfieldCorrectionCompute_Request *>(message_memory);
  typed_message->~InfieldCorrectionCompute_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InfieldCorrectionCompute_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InfieldCorrectionCompute_Request_message_members = {
  "zivid_interfaces::srv",  // message namespace
  "InfieldCorrectionCompute_Request",  // message name
  1,  // number of fields
  sizeof(zivid_interfaces::srv::InfieldCorrectionCompute_Request),
  false,  // has_any_key_member_
  InfieldCorrectionCompute_Request_message_member_array,  // message members
  InfieldCorrectionCompute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  InfieldCorrectionCompute_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InfieldCorrectionCompute_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InfieldCorrectionCompute_Request_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute_Request>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::InfieldCorrectionCompute_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, InfieldCorrectionCompute_Request)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::InfieldCorrectionCompute_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_compute__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_compute__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void InfieldCorrectionCompute_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::srv::InfieldCorrectionCompute_Response(_init);
}

void InfieldCorrectionCompute_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::srv::InfieldCorrectionCompute_Response *>(message_memory);
  typed_message->~InfieldCorrectionCompute_Response();
}

size_t size_function__InfieldCorrectionCompute_Response__trueness_errors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InfieldCorrectionCompute_Response__trueness_errors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__InfieldCorrectionCompute_Response__trueness_errors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__InfieldCorrectionCompute_Response__trueness_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__InfieldCorrectionCompute_Response__trueness_errors(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__InfieldCorrectionCompute_Response__trueness_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__InfieldCorrectionCompute_Response__trueness_errors(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__InfieldCorrectionCompute_Response__trueness_errors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InfieldCorrectionCompute_Response_message_member_array[10] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "infield_correction_started",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, infield_correction_started),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "number_of_captures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, number_of_captures),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trueness_errors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, trueness_errors),  // bytes offset in struct
    nullptr,  // default value
    size_function__InfieldCorrectionCompute_Response__trueness_errors,  // size() function pointer
    get_const_function__InfieldCorrectionCompute_Response__trueness_errors,  // get_const(index) function pointer
    get_function__InfieldCorrectionCompute_Response__trueness_errors,  // get(index) function pointer
    fetch_function__InfieldCorrectionCompute_Response__trueness_errors,  // fetch(index, &value) function pointer
    assign_function__InfieldCorrectionCompute_Response__trueness_errors,  // assign(index, value) function pointer
    resize_function__InfieldCorrectionCompute_Response__trueness_errors  // resize(index) function pointer
  },
  {
    "average_trueness_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, average_trueness_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "maximum_trueness_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, maximum_trueness_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dimension_accuracy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, dimension_accuracy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z_min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, z_min),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z_max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Response, z_max),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InfieldCorrectionCompute_Response_message_members = {
  "zivid_interfaces::srv",  // message namespace
  "InfieldCorrectionCompute_Response",  // message name
  10,  // number of fields
  sizeof(zivid_interfaces::srv::InfieldCorrectionCompute_Response),
  false,  // has_any_key_member_
  InfieldCorrectionCompute_Response_message_member_array,  // message members
  InfieldCorrectionCompute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  InfieldCorrectionCompute_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InfieldCorrectionCompute_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InfieldCorrectionCompute_Response_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute_Response>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::InfieldCorrectionCompute_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, InfieldCorrectionCompute_Response)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::InfieldCorrectionCompute_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_compute__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_compute__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void InfieldCorrectionCompute_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::srv::InfieldCorrectionCompute_Event(_init);
}

void InfieldCorrectionCompute_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::srv::InfieldCorrectionCompute_Event *>(message_memory);
  typed_message->~InfieldCorrectionCompute_Event();
}

size_t size_function__InfieldCorrectionCompute_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<zivid_interfaces::srv::InfieldCorrectionCompute_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InfieldCorrectionCompute_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<zivid_interfaces::srv::InfieldCorrectionCompute_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__InfieldCorrectionCompute_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<zivid_interfaces::srv::InfieldCorrectionCompute_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__InfieldCorrectionCompute_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const zivid_interfaces::srv::InfieldCorrectionCompute_Request *>(
    get_const_function__InfieldCorrectionCompute_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<zivid_interfaces::srv::InfieldCorrectionCompute_Request *>(untyped_value);
  value = item;
}

void assign_function__InfieldCorrectionCompute_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<zivid_interfaces::srv::InfieldCorrectionCompute_Request *>(
    get_function__InfieldCorrectionCompute_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const zivid_interfaces::srv::InfieldCorrectionCompute_Request *>(untyped_value);
  item = value;
}

void resize_function__InfieldCorrectionCompute_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<zivid_interfaces::srv::InfieldCorrectionCompute_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__InfieldCorrectionCompute_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<zivid_interfaces::srv::InfieldCorrectionCompute_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InfieldCorrectionCompute_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<zivid_interfaces::srv::InfieldCorrectionCompute_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__InfieldCorrectionCompute_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<zivid_interfaces::srv::InfieldCorrectionCompute_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__InfieldCorrectionCompute_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const zivid_interfaces::srv::InfieldCorrectionCompute_Response *>(
    get_const_function__InfieldCorrectionCompute_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<zivid_interfaces::srv::InfieldCorrectionCompute_Response *>(untyped_value);
  value = item;
}

void assign_function__InfieldCorrectionCompute_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<zivid_interfaces::srv::InfieldCorrectionCompute_Response *>(
    get_function__InfieldCorrectionCompute_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const zivid_interfaces::srv::InfieldCorrectionCompute_Response *>(untyped_value);
  item = value;
}

void resize_function__InfieldCorrectionCompute_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<zivid_interfaces::srv::InfieldCorrectionCompute_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InfieldCorrectionCompute_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__InfieldCorrectionCompute_Event__request,  // size() function pointer
    get_const_function__InfieldCorrectionCompute_Event__request,  // get_const(index) function pointer
    get_function__InfieldCorrectionCompute_Event__request,  // get(index) function pointer
    fetch_function__InfieldCorrectionCompute_Event__request,  // fetch(index, &value) function pointer
    assign_function__InfieldCorrectionCompute_Event__request,  // assign(index, value) function pointer
    resize_function__InfieldCorrectionCompute_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(zivid_interfaces::srv::InfieldCorrectionCompute_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__InfieldCorrectionCompute_Event__response,  // size() function pointer
    get_const_function__InfieldCorrectionCompute_Event__response,  // get_const(index) function pointer
    get_function__InfieldCorrectionCompute_Event__response,  // get(index) function pointer
    fetch_function__InfieldCorrectionCompute_Event__response,  // fetch(index, &value) function pointer
    assign_function__InfieldCorrectionCompute_Event__response,  // assign(index, value) function pointer
    resize_function__InfieldCorrectionCompute_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InfieldCorrectionCompute_Event_message_members = {
  "zivid_interfaces::srv",  // message namespace
  "InfieldCorrectionCompute_Event",  // message name
  3,  // number of fields
  sizeof(zivid_interfaces::srv::InfieldCorrectionCompute_Event),
  false,  // has_any_key_member_
  InfieldCorrectionCompute_Event_message_member_array,  // message members
  InfieldCorrectionCompute_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  InfieldCorrectionCompute_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InfieldCorrectionCompute_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InfieldCorrectionCompute_Event_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute_Event>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::InfieldCorrectionCompute_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, InfieldCorrectionCompute_Event)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::InfieldCorrectionCompute_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_compute__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_compute__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers InfieldCorrectionCompute_service_members = {
  "zivid_interfaces::srv",  // service namespace
  "InfieldCorrectionCompute",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t InfieldCorrectionCompute_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InfieldCorrectionCompute_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<zivid_interfaces::srv::InfieldCorrectionCompute>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<zivid_interfaces::srv::InfieldCorrectionCompute>,
  &zivid_interfaces__srv__InfieldCorrectionCompute__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionCompute__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionCompute__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::zivid_interfaces::srv::rosidl_typesupport_introspection_cpp::InfieldCorrectionCompute_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::zivid_interfaces::srv::InfieldCorrectionCompute_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::zivid_interfaces::srv::InfieldCorrectionCompute_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::zivid_interfaces::srv::InfieldCorrectionCompute_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, InfieldCorrectionCompute)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<zivid_interfaces::srv::InfieldCorrectionCompute>();
}

#ifdef __cplusplus
}
#endif
