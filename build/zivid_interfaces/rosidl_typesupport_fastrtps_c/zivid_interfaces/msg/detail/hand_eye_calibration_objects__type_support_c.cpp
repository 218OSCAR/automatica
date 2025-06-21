// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationObjects.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__struct.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // marker_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // marker_ids
#include "rosidl_runtime_c/string.h"  // marker_dictionary
#include "rosidl_runtime_c/string_functions.h"  // marker_dictionary

// forward declare type support functions


using _HandEyeCalibrationObjects__ros_msg_type = zivid_interfaces__msg__HandEyeCalibrationObjects;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_zivid_interfaces__msg__HandEyeCalibrationObjects(
  const zivid_interfaces__msg__HandEyeCalibrationObjects * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: marker_ids
  {
    size_t size = ros_message->marker_ids.size;
    auto array_ptr = ros_message->marker_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: marker_dictionary
  {
    const rosidl_runtime_c__String * str = &ros_message->marker_dictionary;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_deserialize_zivid_interfaces__msg__HandEyeCalibrationObjects(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__msg__HandEyeCalibrationObjects * ros_message)
{
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: marker_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->marker_ids.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->marker_ids);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->marker_ids, size)) {
      fprintf(stderr, "failed to create array for field 'marker_ids'");
      return false;
    }
    auto array_ptr = ros_message->marker_ids.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: marker_dictionary
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->marker_dictionary.data) {
      rosidl_runtime_c__String__init(&ros_message->marker_dictionary);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->marker_dictionary,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'marker_dictionary'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__msg__HandEyeCalibrationObjects(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationObjects__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationObjects__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: marker_ids
  {
    size_t array_size = ros_message->marker_ids.size;
    auto array_ptr = ros_message->marker_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: marker_dictionary
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->marker_dictionary.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__msg__HandEyeCalibrationObjects(
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

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: marker_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: marker_dictionary
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__msg__HandEyeCalibrationObjects;
    is_plain =
      (
      offsetof(DataType, marker_dictionary) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_key_zivid_interfaces__msg__HandEyeCalibrationObjects(
  const zivid_interfaces__msg__HandEyeCalibrationObjects * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: marker_ids
  {
    size_t size = ros_message->marker_ids.size;
    auto array_ptr = ros_message->marker_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: marker_dictionary
  {
    const rosidl_runtime_c__String * str = &ros_message->marker_dictionary;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_key_zivid_interfaces__msg__HandEyeCalibrationObjects(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationObjects__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationObjects__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: marker_ids
  {
    size_t array_size = ros_message->marker_ids.size;
    auto array_ptr = ros_message->marker_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: marker_dictionary
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->marker_dictionary.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_key_zivid_interfaces__msg__HandEyeCalibrationObjects(
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
  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: marker_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: marker_dictionary
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = zivid_interfaces__msg__HandEyeCalibrationObjects;
    is_plain =
      (
      offsetof(DataType, marker_dictionary) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _HandEyeCalibrationObjects__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const zivid_interfaces__msg__HandEyeCalibrationObjects * ros_message = static_cast<const zivid_interfaces__msg__HandEyeCalibrationObjects *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_zivid_interfaces__msg__HandEyeCalibrationObjects(ros_message, cdr);
}

static bool _HandEyeCalibrationObjects__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  zivid_interfaces__msg__HandEyeCalibrationObjects * ros_message = static_cast<zivid_interfaces__msg__HandEyeCalibrationObjects *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_zivid_interfaces__msg__HandEyeCalibrationObjects(cdr, ros_message);
}

static uint32_t _HandEyeCalibrationObjects__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__msg__HandEyeCalibrationObjects(
      untyped_ros_message, 0));
}

static size_t _HandEyeCalibrationObjects__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__msg__HandEyeCalibrationObjects(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandEyeCalibrationObjects = {
  "zivid_interfaces::msg",
  "HandEyeCalibrationObjects",
  _HandEyeCalibrationObjects__cdr_serialize,
  _HandEyeCalibrationObjects__cdr_deserialize,
  _HandEyeCalibrationObjects__get_serialized_size,
  _HandEyeCalibrationObjects__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandEyeCalibrationObjects__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandEyeCalibrationObjects,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_hash,
  &zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description,
  &zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, HandEyeCalibrationObjects)() {
  return &_HandEyeCalibrationObjects__type_support;
}

#if defined(__cplusplus)
}
#endif
