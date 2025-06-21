// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:msg/DetectionResultFiducialMarkers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__functions.h"
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__struct.h"


// Include directives for member types
// Member `detected_markers`
#include "zivid_interfaces/msg/marker_shape.h"
// Member `detected_markers`
#include "zivid_interfaces/msg/detail/marker_shape__rosidl_typesupport_introspection_c.h"
// Member `allowed_marker_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__msg__DetectionResultFiducialMarkers__init(message_memory);
}

void zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_fini_function(void * message_memory)
{
  zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(message_memory);
}

size_t zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__size_function__DetectionResultFiducialMarkers__detected_markers(
  const void * untyped_member)
{
  const zivid_interfaces__msg__MarkerShape__Sequence * member =
    (const zivid_interfaces__msg__MarkerShape__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_const_function__DetectionResultFiducialMarkers__detected_markers(
  const void * untyped_member, size_t index)
{
  const zivid_interfaces__msg__MarkerShape__Sequence * member =
    (const zivid_interfaces__msg__MarkerShape__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_function__DetectionResultFiducialMarkers__detected_markers(
  void * untyped_member, size_t index)
{
  zivid_interfaces__msg__MarkerShape__Sequence * member =
    (zivid_interfaces__msg__MarkerShape__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__fetch_function__DetectionResultFiducialMarkers__detected_markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const zivid_interfaces__msg__MarkerShape * item =
    ((const zivid_interfaces__msg__MarkerShape *)
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_const_function__DetectionResultFiducialMarkers__detected_markers(untyped_member, index));
  zivid_interfaces__msg__MarkerShape * value =
    (zivid_interfaces__msg__MarkerShape *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__assign_function__DetectionResultFiducialMarkers__detected_markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  zivid_interfaces__msg__MarkerShape * item =
    ((zivid_interfaces__msg__MarkerShape *)
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_function__DetectionResultFiducialMarkers__detected_markers(untyped_member, index));
  const zivid_interfaces__msg__MarkerShape * value =
    (const zivid_interfaces__msg__MarkerShape *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__resize_function__DetectionResultFiducialMarkers__detected_markers(
  void * untyped_member, size_t size)
{
  zivid_interfaces__msg__MarkerShape__Sequence * member =
    (zivid_interfaces__msg__MarkerShape__Sequence *)(untyped_member);
  zivid_interfaces__msg__MarkerShape__Sequence__fini(member);
  return zivid_interfaces__msg__MarkerShape__Sequence__init(member, size);
}

size_t zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__size_function__DetectionResultFiducialMarkers__allowed_marker_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_const_function__DetectionResultFiducialMarkers__allowed_marker_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_function__DetectionResultFiducialMarkers__allowed_marker_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__fetch_function__DetectionResultFiducialMarkers__allowed_marker_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_const_function__DetectionResultFiducialMarkers__allowed_marker_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__assign_function__DetectionResultFiducialMarkers__allowed_marker_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_function__DetectionResultFiducialMarkers__allowed_marker_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__resize_function__DetectionResultFiducialMarkers__allowed_marker_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_member_array[2] = {
  {
    "detected_markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultFiducialMarkers, detected_markers),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__size_function__DetectionResultFiducialMarkers__detected_markers,  // size() function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_const_function__DetectionResultFiducialMarkers__detected_markers,  // get_const(index) function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_function__DetectionResultFiducialMarkers__detected_markers,  // get(index) function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__fetch_function__DetectionResultFiducialMarkers__detected_markers,  // fetch(index, &value) function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__assign_function__DetectionResultFiducialMarkers__detected_markers,  // assign(index, value) function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__resize_function__DetectionResultFiducialMarkers__detected_markers  // resize(index) function pointer
  },
  {
    "allowed_marker_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultFiducialMarkers, allowed_marker_ids),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__size_function__DetectionResultFiducialMarkers__allowed_marker_ids,  // size() function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_const_function__DetectionResultFiducialMarkers__allowed_marker_ids,  // get_const(index) function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__get_function__DetectionResultFiducialMarkers__allowed_marker_ids,  // get(index) function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__fetch_function__DetectionResultFiducialMarkers__allowed_marker_ids,  // fetch(index, &value) function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__assign_function__DetectionResultFiducialMarkers__allowed_marker_ids,  // assign(index, value) function pointer
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__resize_function__DetectionResultFiducialMarkers__allowed_marker_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_members = {
  "zivid_interfaces__msg",  // message namespace
  "DetectionResultFiducialMarkers",  // message name
  2,  // number of fields
  sizeof(zivid_interfaces__msg__DetectionResultFiducialMarkers),
  false,  // has_any_key_member_
  zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_member_array,  // message members
  zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_type_support_handle = {
  0,
  &zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_hash,
  &zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description,
  &zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, DetectionResultFiducialMarkers)() {
  zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, MarkerShape)();
  if (!zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__msg__DetectionResultFiducialMarkers__rosidl_typesupport_introspection_c__DetectionResultFiducialMarkers_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
