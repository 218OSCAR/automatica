// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__functions.h"
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.h"


// Include directives for member types
// Member `status_description`
#include "rosidl_runtime_c/string_functions.h"
// Member `centroid`
// Member `feature_points`
// Member `feature_points_2d`
#include "geometry_msgs/msg/point.h"
// Member `centroid`
// Member `feature_points`
// Member `feature_points_2d`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__msg__DetectionResultCalibrationBoard__init(message_memory);
}

void zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_fini_function(void * message_memory)
{
  zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(message_memory);
}

size_t zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__size_function__DetectionResultCalibrationBoard__feature_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_const_function__DetectionResultCalibrationBoard__feature_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_function__DetectionResultCalibrationBoard__feature_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__fetch_function__DetectionResultCalibrationBoard__feature_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_const_function__DetectionResultCalibrationBoard__feature_points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__assign_function__DetectionResultCalibrationBoard__feature_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_function__DetectionResultCalibrationBoard__feature_points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__resize_function__DetectionResultCalibrationBoard__feature_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__size_function__DetectionResultCalibrationBoard__feature_points_2d(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_const_function__DetectionResultCalibrationBoard__feature_points_2d(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_function__DetectionResultCalibrationBoard__feature_points_2d(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__fetch_function__DetectionResultCalibrationBoard__feature_points_2d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_const_function__DetectionResultCalibrationBoard__feature_points_2d(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__assign_function__DetectionResultCalibrationBoard__feature_points_2d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_function__DetectionResultCalibrationBoard__feature_points_2d(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__resize_function__DetectionResultCalibrationBoard__feature_points_2d(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_member_array[8] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultCalibrationBoard, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultCalibrationBoard, status_description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centroid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultCalibrationBoard, centroid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultCalibrationBoard, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultCalibrationBoard, feature_points),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__size_function__DetectionResultCalibrationBoard__feature_points,  // size() function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_const_function__DetectionResultCalibrationBoard__feature_points,  // get_const(index) function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_function__DetectionResultCalibrationBoard__feature_points,  // get(index) function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__fetch_function__DetectionResultCalibrationBoard__feature_points,  // fetch(index, &value) function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__assign_function__DetectionResultCalibrationBoard__feature_points,  // assign(index, value) function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__resize_function__DetectionResultCalibrationBoard__feature_points  // resize(index) function pointer
  },
  {
    "feature_points_2d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultCalibrationBoard, feature_points_2d),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__size_function__DetectionResultCalibrationBoard__feature_points_2d,  // size() function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_const_function__DetectionResultCalibrationBoard__feature_points_2d,  // get_const(index) function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__get_function__DetectionResultCalibrationBoard__feature_points_2d,  // get(index) function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__fetch_function__DetectionResultCalibrationBoard__feature_points_2d,  // fetch(index, &value) function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__assign_function__DetectionResultCalibrationBoard__feature_points_2d,  // assign(index, value) function pointer
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__resize_function__DetectionResultCalibrationBoard__feature_points_2d  // resize(index) function pointer
  },
  {
    "feature_points_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultCalibrationBoard, feature_points_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature_points_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__DetectionResultCalibrationBoard, feature_points_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_members = {
  "zivid_interfaces__msg",  // message namespace
  "DetectionResultCalibrationBoard",  // message name
  8,  // number of fields
  sizeof(zivid_interfaces__msg__DetectionResultCalibrationBoard),
  false,  // has_any_key_member_
  zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_member_array,  // message members
  zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_type_support_handle = {
  0,
  &zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_hash,
  &zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description,
  &zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, DetectionResultCalibrationBoard)() {
  zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__msg__DetectionResultCalibrationBoard__rosidl_typesupport_introspection_c__DetectionResultCalibrationBoard_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
