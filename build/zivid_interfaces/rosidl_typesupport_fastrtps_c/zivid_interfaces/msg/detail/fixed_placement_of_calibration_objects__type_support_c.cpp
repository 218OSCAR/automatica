// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__struct.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__functions.h"
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

#include "rosidl_runtime_c/string.h"  // marker_dictionary
#include "rosidl_runtime_c/string_functions.h"  // marker_dictionary
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__functions.h"  // calibration_board
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__functions.h"  // markers

// forward declare type support functions

bool cdr_serialize_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
  const zivid_interfaces__msg__FixedPlacementOfCalibrationBoard * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__msg__FixedPlacementOfCalibrationBoard * ros_message);

size_t get_serialized_size_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
  const zivid_interfaces__msg__FixedPlacementOfCalibrationBoard * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, FixedPlacementOfCalibrationBoard)();

bool cdr_serialize_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
  const zivid_interfaces__msg__FixedPlacementOfFiducialMarker * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker * ros_message);

size_t get_serialized_size_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
  const zivid_interfaces__msg__FixedPlacementOfFiducialMarker * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, FixedPlacementOfFiducialMarker)();


using _FixedPlacementOfCalibrationObjects__ros_msg_type = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
  const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: calibration_board
  {
    cdr_serialize_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
      &ros_message->calibration_board, cdr);
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

  // Field name: markers
  {
    size_t size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_deserialize_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * ros_message)
{
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: calibration_board
  {
    cdr_deserialize_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(cdr, &ros_message->calibration_board);
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

  // Field name: markers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->markers.data) {
      zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__fini(&ros_message->markers);
    }
    if (!zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__init(&ros_message->markers, size)) {
      fprintf(stderr, "failed to create array for field 'markers'");
      return false;
    }
    auto array_ptr = ros_message->markers.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FixedPlacementOfCalibrationObjects__ros_msg_type * ros_message = static_cast<const _FixedPlacementOfCalibrationObjects__ros_msg_type *>(untyped_ros_message);
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

  // Field name: calibration_board
  current_alignment += get_serialized_size_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
    &(ros_message->calibration_board), current_alignment);

  // Field name: marker_dictionary
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->marker_dictionary.size + 1);

  // Field name: markers
  {
    size_t array_size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
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

  // Field name: calibration_board
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
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

  // Field name: markers
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
        max_serialized_size_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
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
    using DataType = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects;
    is_plain =
      (
      offsetof(DataType, markers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_key_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
  const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: calibration_board
  {
    cdr_serialize_key_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
      &ros_message->calibration_board, cdr);
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

  // Field name: markers
  {
    size_t size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FixedPlacementOfCalibrationObjects__ros_msg_type * ros_message = static_cast<const _FixedPlacementOfCalibrationObjects__ros_msg_type *>(untyped_ros_message);
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

  // Field name: calibration_board
  current_alignment += get_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
    &(ros_message->calibration_board), current_alignment);

  // Field name: marker_dictionary
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->marker_dictionary.size + 1);

  // Field name: markers
  {
    size_t array_size = ros_message->markers.size;
    auto array_ptr = ros_message->markers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
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

  // Field name: calibration_board
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfCalibrationBoard(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
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

  // Field name: markers
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
        max_serialized_size_key_zivid_interfaces__msg__FixedPlacementOfFiducialMarker(
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
    using DataType = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects;
    is_plain =
      (
      offsetof(DataType, markers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FixedPlacementOfCalibrationObjects__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * ros_message = static_cast<const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(ros_message, cdr);
}

static bool _FixedPlacementOfCalibrationObjects__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * ros_message = static_cast<zivid_interfaces__msg__FixedPlacementOfCalibrationObjects *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(cdr, ros_message);
}

static uint32_t _FixedPlacementOfCalibrationObjects__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
      untyped_ros_message, 0));
}

static size_t _FixedPlacementOfCalibrationObjects__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__msg__FixedPlacementOfCalibrationObjects(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FixedPlacementOfCalibrationObjects = {
  "zivid_interfaces::msg",
  "FixedPlacementOfCalibrationObjects",
  _FixedPlacementOfCalibrationObjects__cdr_serialize,
  _FixedPlacementOfCalibrationObjects__cdr_deserialize,
  _FixedPlacementOfCalibrationObjects__get_serialized_size,
  _FixedPlacementOfCalibrationObjects__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FixedPlacementOfCalibrationObjects__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FixedPlacementOfCalibrationObjects,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_hash,
  &zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description,
  &zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, FixedPlacementOfCalibrationObjects)() {
  return &_FixedPlacementOfCalibrationObjects__type_support;
}

#if defined(__cplusplus)
}
#endif
