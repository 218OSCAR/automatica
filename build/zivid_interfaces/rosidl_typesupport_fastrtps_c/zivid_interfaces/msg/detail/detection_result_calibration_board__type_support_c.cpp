// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.h"
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // centroid, feature_points, feature_points_2d
#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "rosidl_runtime_c/string.h"  // status_description
#include "rosidl_runtime_c/string_functions.h"  // status_description

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


using _DetectionResultCalibrationBoard__ros_msg_type = zivid_interfaces__msg__DetectionResultCalibrationBoard;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const zivid_interfaces__msg__DetectionResultCalibrationBoard * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: status_description
  {
    const rosidl_runtime_c__String * str = &ros_message->status_description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: centroid
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->centroid, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: feature_points
  {
    size_t size = ros_message->feature_points.size;
    auto array_ptr = ros_message->feature_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: feature_points_2d
  {
    size_t size = ros_message->feature_points_2d.size;
    auto array_ptr = ros_message->feature_points_2d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: feature_points_width
  {
    cdr << ros_message->feature_points_width;
  }

  // Field name: feature_points_height
  {
    cdr << ros_message->feature_points_height;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_deserialize_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__msg__DetectionResultCalibrationBoard * ros_message)
{
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: status_description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status_description.data) {
      rosidl_runtime_c__String__init(&ros_message->status_description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status_description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status_description'\n");
      return false;
    }
  }

  // Field name: centroid
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->centroid);
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  // Field name: feature_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->feature_points.data) {
      geometry_msgs__msg__Point__Sequence__fini(&ros_message->feature_points);
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&ros_message->feature_points, size)) {
      fprintf(stderr, "failed to create array for field 'feature_points'");
      return false;
    }
    auto array_ptr = ros_message->feature_points.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Point(cdr, &array_ptr[i]);
    }
  }

  // Field name: feature_points_2d
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->feature_points_2d.data) {
      geometry_msgs__msg__Point__Sequence__fini(&ros_message->feature_points_2d);
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&ros_message->feature_points_2d, size)) {
      fprintf(stderr, "failed to create array for field 'feature_points_2d'");
      return false;
    }
    auto array_ptr = ros_message->feature_points_2d.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Point(cdr, &array_ptr[i]);
    }
  }

  // Field name: feature_points_width
  {
    cdr >> ros_message->feature_points_width;
  }

  // Field name: feature_points_height
  {
    cdr >> ros_message->feature_points_height;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectionResultCalibrationBoard__ros_msg_type * ros_message = static_cast<const _DetectionResultCalibrationBoard__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status_description.size + 1);

  // Field name: centroid
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->centroid), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: feature_points
  {
    size_t array_size = ros_message->feature_points.size;
    auto array_ptr = ros_message->feature_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: feature_points_2d
  {
    size_t array_size = ros_message->feature_points_2d.size;
    auto array_ptr = ros_message->feature_points_2d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: feature_points_width
  {
    size_t item_size = sizeof(ros_message->feature_points_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: feature_points_height
  {
    size_t item_size = sizeof(ros_message->feature_points_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
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

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: status_description
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: centroid
  {
    size_t array_size = 1;
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

  // Field name: feature_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: feature_points_2d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: feature_points_width
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: feature_points_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__msg__DetectionResultCalibrationBoard;
    is_plain =
      (
      offsetof(DataType, feature_points_height) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const zivid_interfaces__msg__DetectionResultCalibrationBoard * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: status_description
  {
    const rosidl_runtime_c__String * str = &ros_message->status_description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: centroid
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->centroid, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: feature_points
  {
    size_t size = ros_message->feature_points.size;
    auto array_ptr = ros_message->feature_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: feature_points_2d
  {
    size_t size = ros_message->feature_points_2d.size;
    auto array_ptr = ros_message->feature_points_2d.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Point(
        &array_ptr[i], cdr);
    }
  }

  // Field name: feature_points_width
  {
    cdr << ros_message->feature_points_width;
  }

  // Field name: feature_points_height
  {
    cdr << ros_message->feature_points_height;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectionResultCalibrationBoard__ros_msg_type * ros_message = static_cast<const _DetectionResultCalibrationBoard__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: status_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status_description.size + 1);

  // Field name: centroid
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->centroid), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: feature_points
  {
    size_t array_size = ros_message->feature_points.size;
    auto array_ptr = ros_message->feature_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: feature_points_2d
  {
    size_t array_size = ros_message->feature_points_2d.size;
    auto array_ptr = ros_message->feature_points_2d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: feature_points_width
  {
    size_t item_size = sizeof(ros_message->feature_points_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: feature_points_height
  {
    size_t item_size = sizeof(ros_message->feature_points_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
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
  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: status_description
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: centroid
  {
    size_t array_size = 1;
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

  // Field name: feature_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: feature_points_2d
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: feature_points_width
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: feature_points_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__msg__DetectionResultCalibrationBoard;
    is_plain =
      (
      offsetof(DataType, feature_points_height) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DetectionResultCalibrationBoard__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const zivid_interfaces__msg__DetectionResultCalibrationBoard * ros_message = static_cast<const zivid_interfaces__msg__DetectionResultCalibrationBoard *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_zivid_interfaces__msg__DetectionResultCalibrationBoard(ros_message, cdr);
}

static bool _DetectionResultCalibrationBoard__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  zivid_interfaces__msg__DetectionResultCalibrationBoard * ros_message = static_cast<zivid_interfaces__msg__DetectionResultCalibrationBoard *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_zivid_interfaces__msg__DetectionResultCalibrationBoard(cdr, ros_message);
}

static uint32_t _DetectionResultCalibrationBoard__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
      untyped_ros_message, 0));
}

static size_t _DetectionResultCalibrationBoard__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DetectionResultCalibrationBoard = {
  "zivid_interfaces::msg",
  "DetectionResultCalibrationBoard",
  _DetectionResultCalibrationBoard__cdr_serialize,
  _DetectionResultCalibrationBoard__cdr_deserialize,
  _DetectionResultCalibrationBoard__get_serialized_size,
  _DetectionResultCalibrationBoard__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DetectionResultCalibrationBoard__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectionResultCalibrationBoard,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_hash,
  &zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description,
  &zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, DetectionResultCalibrationBoard)() {
  return &_DetectionResultCalibrationBoard__type_support;
}

#if defined(__cplusplus)
}
#endif
