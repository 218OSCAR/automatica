// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice
#ifndef ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/msg/detail/marker_shape__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_zivid_interfaces__msg__MarkerShape(
  const zivid_interfaces__msg__MarkerShape * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_deserialize_zivid_interfaces__msg__MarkerShape(
  eprosima::fastcdr::Cdr &,
  zivid_interfaces__msg__MarkerShape * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__msg__MarkerShape(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__msg__MarkerShape(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_key_zivid_interfaces__msg__MarkerShape(
  const zivid_interfaces__msg__MarkerShape * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_key_zivid_interfaces__msg__MarkerShape(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_key_zivid_interfaces__msg__MarkerShape(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, MarkerShape)();

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
