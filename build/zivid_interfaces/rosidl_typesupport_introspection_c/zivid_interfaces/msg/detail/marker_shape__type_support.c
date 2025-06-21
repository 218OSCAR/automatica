// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/msg/detail/marker_shape__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/msg/detail/marker_shape__functions.h"
#include "zivid_interfaces/msg/detail/marker_shape__struct.h"


// Include directives for member types
// Member `corners_in_pixel_coordinates`
// Member `corners_in_camera_coordinates`
#include "geometry_msgs/msg/point.h"
// Member `corners_in_pixel_coordinates`
// Member `corners_in_camera_coordinates`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__msg__MarkerShape__init(message_memory);
}

void zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_fini_function(void * message_memory)
{
  zivid_interfaces__msg__MarkerShape__fini(message_memory);
}

size_t zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__size_function__MarkerShape__corners_in_pixel_coordinates(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_const_function__MarkerShape__corners_in_pixel_coordinates(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point * member =
    (const geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void * zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_function__MarkerShape__corners_in_pixel_coordinates(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point * member =
    (geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__fetch_function__MarkerShape__corners_in_pixel_coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_const_function__MarkerShape__corners_in_pixel_coordinates(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__assign_function__MarkerShape__corners_in_pixel_coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_function__MarkerShape__corners_in_pixel_coordinates(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

size_t zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__size_function__MarkerShape__corners_in_camera_coordinates(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_const_function__MarkerShape__corners_in_camera_coordinates(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point * member =
    (const geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void * zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_function__MarkerShape__corners_in_camera_coordinates(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point * member =
    (geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__fetch_function__MarkerShape__corners_in_camera_coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_const_function__MarkerShape__corners_in_camera_coordinates(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__assign_function__MarkerShape__corners_in_camera_coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_function__MarkerShape__corners_in_camera_coordinates(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_member_array[4] = {
  {
    "corners_in_pixel_coordinates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__MarkerShape, corners_in_pixel_coordinates),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__size_function__MarkerShape__corners_in_pixel_coordinates,  // size() function pointer
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_const_function__MarkerShape__corners_in_pixel_coordinates,  // get_const(index) function pointer
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_function__MarkerShape__corners_in_pixel_coordinates,  // get(index) function pointer
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__fetch_function__MarkerShape__corners_in_pixel_coordinates,  // fetch(index, &value) function pointer
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__assign_function__MarkerShape__corners_in_pixel_coordinates,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corners_in_camera_coordinates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__MarkerShape, corners_in_camera_coordinates),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__size_function__MarkerShape__corners_in_camera_coordinates,  // size() function pointer
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_const_function__MarkerShape__corners_in_camera_coordinates,  // get_const(index) function pointer
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__get_function__MarkerShape__corners_in_camera_coordinates,  // get(index) function pointer
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__fetch_function__MarkerShape__corners_in_camera_coordinates,  // fetch(index, &value) function pointer
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__assign_function__MarkerShape__corners_in_camera_coordinates,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__msg__MarkerShape, id),  // bytes offset in struct
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
    offsetof(zivid_interfaces__msg__MarkerShape, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_members = {
  "zivid_interfaces__msg",  // message namespace
  "MarkerShape",  // message name
  4,  // number of fields
  sizeof(zivid_interfaces__msg__MarkerShape),
  false,  // has_any_key_member_
  zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_member_array,  // message members
  zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_type_support_handle = {
  0,
  &zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__MarkerShape__get_type_hash,
  &zivid_interfaces__msg__MarkerShape__get_type_description,
  &zivid_interfaces__msg__MarkerShape__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, MarkerShape)() {
  zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__msg__MarkerShape__rosidl_typesupport_introspection_c__MarkerShape_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
