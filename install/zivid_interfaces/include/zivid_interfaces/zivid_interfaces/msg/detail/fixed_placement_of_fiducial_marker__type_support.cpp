// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfFiducialMarker.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__functions.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace zivid_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FixedPlacementOfFiducialMarker_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::msg::FixedPlacementOfFiducialMarker(_init);
}

void FixedPlacementOfFiducialMarker_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::msg::FixedPlacementOfFiducialMarker *>(message_memory);
  typed_message->~FixedPlacementOfFiducialMarker();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FixedPlacementOfFiducialMarker_message_member_array[2] = {
  {
    "marker_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::FixedPlacementOfFiducialMarker, marker_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::FixedPlacementOfFiducialMarker, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FixedPlacementOfFiducialMarker_message_members = {
  "zivid_interfaces::msg",  // message namespace
  "FixedPlacementOfFiducialMarker",  // message name
  2,  // number of fields
  sizeof(zivid_interfaces::msg::FixedPlacementOfFiducialMarker),
  false,  // has_any_key_member_
  FixedPlacementOfFiducialMarker_message_member_array,  // message members
  FixedPlacementOfFiducialMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  FixedPlacementOfFiducialMarker_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FixedPlacementOfFiducialMarker_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FixedPlacementOfFiducialMarker_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_hash,
  &zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_description,
  &zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::msg::FixedPlacementOfFiducialMarker>()
{
  return &::zivid_interfaces::msg::rosidl_typesupport_introspection_cpp::FixedPlacementOfFiducialMarker_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, msg, FixedPlacementOfFiducialMarker)() {
  return &::zivid_interfaces::msg::rosidl_typesupport_introspection_cpp::FixedPlacementOfFiducialMarker_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
