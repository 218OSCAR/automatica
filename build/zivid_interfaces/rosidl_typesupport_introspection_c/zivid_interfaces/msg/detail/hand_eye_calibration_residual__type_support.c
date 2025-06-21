// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__functions.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__msg__HandEyeCalibrationResidual__init(message_memory);
}

void zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_fini_function(void * message_memory)
{
  zivid_interfaces__msg__HandEyeCalibrationResidual__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_message_member_array[2] = {
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__HandEyeCalibrationResidual, rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__HandEyeCalibrationResidual, translation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_message_members = {
  "zivid_interfaces__msg",  // message namespace
  "HandEyeCalibrationResidual",  // message name
  2,  // number of fields
  sizeof(zivid_interfaces__msg__HandEyeCalibrationResidual),
  false,  // has_any_key_member_
  zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_message_member_array,  // message members
  zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_message_type_support_handle = {
  0,
  &zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_hash,
  &zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description,
  &zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, HandEyeCalibrationResidual)() {
  if (!zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__msg__HandEyeCalibrationResidual__rosidl_typesupport_introspection_c__HandEyeCalibrationResidual_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
