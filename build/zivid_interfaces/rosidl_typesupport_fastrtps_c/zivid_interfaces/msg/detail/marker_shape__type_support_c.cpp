// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/marker_shape__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/msg/detail/marker_shape__struct.h"
#include "zivid_interfaces/msg/detail/marker_shape__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // corners_in_camera_coordinates, corners_in_pixel_coordinates
#include "geometry_msgs/msg/detail/pose__functions.h"  // pose

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _MarkerShape__ros_msg_type = zivid_interfaces__msg__MarkerShape;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_zivid_interfaces__msg__MarkerShape(
  const zivid_interfaces__msg__MarkerShape * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: corners_in_pixel_coordinates
  {
    size_t size = 4;
    auto array_ptr = ros_message->corners_in_pixel_coordinates;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: corners_in_camera_coordinates
  {
    size_t size = 4;
    auto array_ptr = ros_message->corners_in_camera_coordinates;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_deserialize_zivid_interfaces__msg__MarkerShape(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__msg__MarkerShape * ros_message)
{
  // Field name: corners_in_pixel_coordinates
  {
    size_t size = 4;
    auto array_ptr = ros_message->corners_in_pixel_coordinates;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Point(cdr, &array_ptr[i]);
    }
  }

  // Field name: corners_in_camera_coordinates
  {
    size_t size = 4;
    auto array_ptr = ros_message->corners_in_camera_coordinates;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Point(cdr, &array_ptr[i]);
    }
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__msg__MarkerShape(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MarkerShape__ros_msg_type * ros_message = static_cast<const _MarkerShape__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: corners_in_pixel_coordinates
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->corners_in_pixel_coordinates;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: corners_in_camera_coordinates
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->corners_in_camera_coordinates;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__msg__MarkerShape(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: corners_in_pixel_coordinates
  {
    size_t array_size = 4;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: corners_in_camera_coordinates
  {
    size_t array_size = 4;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__msg__MarkerShape;
    is_plain =
      (
      offsetof(DataType, pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_key_zivid_interfaces__msg__MarkerShape(
  const zivid_interfaces__msg__MarkerShape * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: corners_in_pixel_coordinates
  {
    size_t size = 4;
    auto array_ptr = ros_message->corners_in_pixel_coordinates;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: corners_in_camera_coordinates
  {
    size_t size = 4;
    auto array_ptr = ros_message->corners_in_camera_coordinates;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_key_zivid_interfaces__msg__MarkerShape(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MarkerShape__ros_msg_type * ros_message = static_cast<const _MarkerShape__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: corners_in_pixel_coordinates
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->corners_in_pixel_coordinates;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: corners_in_camera_coordinates
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->corners_in_camera_coordinates;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_key_zivid_interfaces__msg__MarkerShape(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: corners_in_pixel_coordinates
  {
    size_t array_size = 4;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: corners_in_camera_coordinates
  {
    size_t array_size = 4;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__msg__MarkerShape;
    is_plain =
      (
      offsetof(DataType, pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MarkerShape__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const zivid_interfaces__msg__MarkerShape * ros_message = static_cast<const zivid_interfaces__msg__MarkerShape *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_zivid_interfaces__msg__MarkerShape(ros_message, cdr);
}

static bool _MarkerShape__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  zivid_interfaces__msg__MarkerShape * ros_message = static_cast<zivid_interfaces__msg__MarkerShape *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_zivid_interfaces__msg__MarkerShape(cdr, ros_message);
}

static uint32_t _MarkerShape__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__msg__MarkerShape(
      untyped_ros_message, 0));
}

static size_t _MarkerShape__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__msg__MarkerShape(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MarkerShape = {
  "zivid_interfaces::msg",
  "MarkerShape",
  _MarkerShape__cdr_serialize,
  _MarkerShape__cdr_deserialize,
  _MarkerShape__get_serialized_size,
  _MarkerShape__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MarkerShape__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MarkerShape,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__MarkerShape__get_type_hash,
  &zivid_interfaces__msg__MarkerShape__get_type_description,
  &zivid_interfaces__msg__MarkerShape__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, MarkerShape)() {
  return &_MarkerShape__type_support;
}

#if defined(__cplusplus)
}
#endif
