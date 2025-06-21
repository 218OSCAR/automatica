// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__rosidl_typesupport_fastrtps_cpp.hpp"
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__functions.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace zivid_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationBoard &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  zivid_interfaces::msg::FixedPlacementOfCalibrationBoard &);
size_t get_serialized_size(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationBoard &,
  size_t current_alignment);
size_t
max_serialized_size_FixedPlacementOfCalibrationBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationBoard &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationBoard &,
  size_t current_alignment);
size_t
max_serialized_size_key_FixedPlacementOfCalibrationBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace zivid_interfaces

namespace zivid_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const zivid_interfaces::msg::FixedPlacementOfFiducialMarker &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  zivid_interfaces::msg::FixedPlacementOfFiducialMarker &);
size_t get_serialized_size(
  const zivid_interfaces::msg::FixedPlacementOfFiducialMarker &,
  size_t current_alignment);
size_t
max_serialized_size_FixedPlacementOfFiducialMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const zivid_interfaces::msg::FixedPlacementOfFiducialMarker &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const zivid_interfaces::msg::FixedPlacementOfFiducialMarker &,
  size_t current_alignment);
size_t
max_serialized_size_key_FixedPlacementOfFiducialMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_serialize(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;

  // Member: calibration_board
  zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.calibration_board,
    cdr);

  // Member: marker_dictionary
  cdr << ros_message.marker_dictionary;

  // Member: markers
  {
    size_t size = ros_message.markers.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.markers[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: calibration_board
  zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.calibration_board);

  // Member: marker_dictionary
  cdr >> ros_message.marker_dictionary;

  // Member: markers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.markers.resize(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.markers[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
get_serialized_size(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: calibration_board
  current_alignment +=
    zivid_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.calibration_board, current_alignment);

  // Member: marker_dictionary
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.marker_dictionary.size() + 1);

  // Member: markers
  {
    size_t array_size = ros_message.markers.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        zivid_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.markers[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
max_serialized_size_FixedPlacementOfCalibrationObjects(
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

  // Member: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: calibration_board
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        zivid_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_FixedPlacementOfCalibrationBoard(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: marker_dictionary
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
  // Member: markers
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
      size_t inner_size =
        zivid_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_FixedPlacementOfFiducialMarker(
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
    using DataType = zivid_interfaces::msg::FixedPlacementOfCalibrationObjects;
    is_plain =
      (
      offsetof(DataType, markers) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_serialize_key(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;

  // Member: calibration_board
  zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.calibration_board,
    cdr);

  // Member: marker_dictionary
  cdr << ros_message.marker_dictionary;

  // Member: markers
  {
    size_t size = ros_message.markers.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.markers[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
get_serialized_size_key(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: calibration_board
  current_alignment +=
    zivid_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.calibration_board, current_alignment);

  // Member: marker_dictionary
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.marker_dictionary.size() + 1);

  // Member: markers
  {
    size_t array_size = ros_message.markers.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        zivid_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.markers[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
max_serialized_size_key_FixedPlacementOfCalibrationObjects(
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

  // Member: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: calibration_board
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        zivid_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_FixedPlacementOfCalibrationBoard(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: marker_dictionary
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

  // Member: markers
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
      size_t inner_size =
        zivid_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_FixedPlacementOfFiducialMarker(
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
    using DataType = zivid_interfaces::msg::FixedPlacementOfCalibrationObjects;
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
  auto typed_message =
    static_cast<const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FixedPlacementOfCalibrationObjects__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FixedPlacementOfCalibrationObjects__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FixedPlacementOfCalibrationObjects__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FixedPlacementOfCalibrationObjects(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FixedPlacementOfCalibrationObjects__callbacks = {
  "zivid_interfaces::msg",
  "FixedPlacementOfCalibrationObjects",
  _FixedPlacementOfCalibrationObjects__cdr_serialize,
  _FixedPlacementOfCalibrationObjects__cdr_deserialize,
  _FixedPlacementOfCalibrationObjects__get_serialized_size,
  _FixedPlacementOfCalibrationObjects__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FixedPlacementOfCalibrationObjects__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FixedPlacementOfCalibrationObjects__callbacks,
  get_message_typesupport_handle_function,
  &zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_hash,
  &zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description,
  &zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace zivid_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects>()
{
  return &zivid_interfaces::msg::typesupport_fastrtps_cpp::_FixedPlacementOfCalibrationObjects__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, msg, FixedPlacementOfCalibrationObjects)() {
  return &zivid_interfaces::msg::typesupport_fastrtps_cpp::_FixedPlacementOfCalibrationObjects__handle;
}

#ifdef __cplusplus
}
#endif
