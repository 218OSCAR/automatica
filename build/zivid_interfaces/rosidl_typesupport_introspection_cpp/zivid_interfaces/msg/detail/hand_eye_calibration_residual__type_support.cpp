// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__functions.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__struct.hpp"
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

void HandEyeCalibrationResidual_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zivid_interfaces::msg::HandEyeCalibrationResidual(_init);
}

void HandEyeCalibrationResidual_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zivid_interfaces::msg::HandEyeCalibrationResidual *>(message_memory);
  typed_message->~HandEyeCalibrationResidual();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HandEyeCalibrationResidual_message_member_array[2] = {
  {
    "rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::HandEyeCalibrationResidual, rotation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "translation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces::msg::HandEyeCalibrationResidual, translation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HandEyeCalibrationResidual_message_members = {
  "zivid_interfaces::msg",  // message namespace
  "HandEyeCalibrationResidual",  // message name
  2,  // number of fields
  sizeof(zivid_interfaces::msg::HandEyeCalibrationResidual),
  false,  // has_any_key_member_
  HandEyeCalibrationResidual_message_member_array,  // message members
  HandEyeCalibrationResidual_init_function,  // function to initialize message memory (memory has to be allocated)
  HandEyeCalibrationResidual_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HandEyeCalibrationResidual_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HandEyeCalibrationResidual_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_hash,
  &zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description,
  &zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace zivid_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::msg::HandEyeCalibrationResidual>()
{
  return &::zivid_interfaces::msg::rosidl_typesupport_introspection_cpp::HandEyeCalibrationResidual_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, msg, HandEyeCalibrationResidual)() {
  return &::zivid_interfaces::msg::rosidl_typesupport_introspection_cpp::HandEyeCalibrationResidual_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
