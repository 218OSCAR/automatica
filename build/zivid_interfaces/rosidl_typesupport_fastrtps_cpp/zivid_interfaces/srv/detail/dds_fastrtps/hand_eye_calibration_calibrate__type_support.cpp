// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__rosidl_typesupport_fastrtps_cpp.hpp"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__functions.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__struct.hpp"

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
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  zivid_interfaces::msg::FixedPlacementOfCalibrationObjects &);
size_t get_serialized_size(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects &,
  size_t current_alignment);
size_t
max_serialized_size_FixedPlacementOfCalibrationObjects(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects &,
  size_t current_alignment);
size_t
max_serialized_size_key_FixedPlacementOfCalibrationObjects(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_serialize(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: configuration
  cdr << ros_message.configuration;

  // Member: capture_handles
  {
    cdr << ros_message.capture_handles;
  }

  // Member: fixed_objects
  zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fixed_objects,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & ros_message)
{
  // Member: configuration
  cdr >> ros_message.configuration;

  // Member: capture_handles
  {
    cdr >> ros_message.capture_handles;
  }

  // Member: fixed_objects
  zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fixed_objects);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
get_serialized_size(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: configuration
  {
    size_t item_size = sizeof(ros_message.configuration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: capture_handles
  {
    size_t array_size = ros_message.capture_handles.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.capture_handles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fixed_objects
  current_alignment +=
    zivid_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fixed_objects, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
max_serialized_size_HandEyeCalibrationCalibrate_Request(
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

  // Member: configuration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: capture_handles
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
  // Member: fixed_objects
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        zivid_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_FixedPlacementOfCalibrationObjects(
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
    using DataType = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request;
    is_plain =
      (
      offsetof(DataType, fixed_objects) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_serialize_key(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: configuration
  cdr << ros_message.configuration;

  // Member: capture_handles
  {
    cdr << ros_message.capture_handles;
  }

  // Member: fixed_objects
  zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.fixed_objects,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
get_serialized_size_key(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: configuration
  {
    size_t item_size = sizeof(ros_message.configuration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: capture_handles
  {
    size_t array_size = ros_message.capture_handles.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.capture_handles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fixed_objects
  current_alignment +=
    zivid_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.fixed_objects, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
max_serialized_size_key_HandEyeCalibrationCalibrate_Request(
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

  // Member: configuration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: capture_handles
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

  // Member: fixed_objects
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        zivid_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_FixedPlacementOfCalibrationObjects(
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
    using DataType = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request;
    is_plain =
      (
      offsetof(DataType, fixed_objects) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HandEyeCalibrationCalibrate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HandEyeCalibrationCalibrate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HandEyeCalibrationCalibrate_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HandEyeCalibrationCalibrate_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HandEyeCalibrationCalibrate_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HandEyeCalibrationCalibrate_Request__callbacks = {
  "zivid_interfaces::srv",
  "HandEyeCalibrationCalibrate_Request",
  _HandEyeCalibrationCalibrate_Request__cdr_serialize,
  _HandEyeCalibrationCalibrate_Request__cdr_deserialize,
  _HandEyeCalibrationCalibrate_Request__get_serialized_size,
  _HandEyeCalibrationCalibrate_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandEyeCalibrationCalibrate_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HandEyeCalibrationCalibrate_Request__callbacks,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>()
{
  return &zivid_interfaces::srv::typesupport_fastrtps_cpp::_HandEyeCalibrationCalibrate_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Request)() {
  return &zivid_interfaces::srv::typesupport_fastrtps_cpp::_HandEyeCalibrationCalibrate_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Transform &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Transform &);
size_t get_serialized_size(
  const geometry_msgs::msg::Transform &,
  size_t current_alignment);
size_t
max_serialized_size_Transform(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const geometry_msgs::msg::Transform &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const geometry_msgs::msg::Transform &,
  size_t current_alignment);
size_t
max_serialized_size_key_Transform(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace zivid_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const zivid_interfaces::msg::HandEyeCalibrationResidual &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  zivid_interfaces::msg::HandEyeCalibrationResidual &);
size_t get_serialized_size(
  const zivid_interfaces::msg::HandEyeCalibrationResidual &,
  size_t current_alignment);
size_t
max_serialized_size_HandEyeCalibrationResidual(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const zivid_interfaces::msg::HandEyeCalibrationResidual &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const zivid_interfaces::msg::HandEyeCalibrationResidual &,
  size_t current_alignment);
size_t
max_serialized_size_key_HandEyeCalibrationResidual(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace zivid_interfaces


namespace zivid_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_serialize(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);

  // Member: message
  cdr << ros_message.message;

  // Member: transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.transform,
    cdr);

  // Member: residuals
  {
    size_t size = ros_message.residuals.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.residuals[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  // Member: transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.transform);

  // Member: residuals
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.residuals.resize(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.residuals[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
get_serialized_size(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  // Member: transform
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.transform, current_alignment);

  // Member: residuals
  {
    size_t array_size = ros_message.residuals.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        zivid_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.residuals[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
max_serialized_size_HandEyeCalibrationCalibrate_Response(
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

  // Member: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: message
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
  // Member: transform
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: residuals
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
        zivid_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_HandEyeCalibrationResidual(
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
    using DataType = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response;
    is_plain =
      (
      offsetof(DataType, residuals) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_serialize_key(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);

  // Member: message
  cdr << ros_message.message;

  // Member: transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.transform,
    cdr);

  // Member: residuals
  {
    size_t size = ros_message.residuals.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.residuals[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
get_serialized_size_key(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  // Member: transform
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.transform, current_alignment);

  // Member: residuals
  {
    size_t array_size = ros_message.residuals.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        zivid_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.residuals[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
max_serialized_size_key_HandEyeCalibrationCalibrate_Response(
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

  // Member: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
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

  // Member: transform
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: residuals
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
        zivid_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_HandEyeCalibrationResidual(
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
    using DataType = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response;
    is_plain =
      (
      offsetof(DataType, residuals) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HandEyeCalibrationCalibrate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HandEyeCalibrationCalibrate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HandEyeCalibrationCalibrate_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HandEyeCalibrationCalibrate_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HandEyeCalibrationCalibrate_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HandEyeCalibrationCalibrate_Response__callbacks = {
  "zivid_interfaces::srv",
  "HandEyeCalibrationCalibrate_Response",
  _HandEyeCalibrationCalibrate_Response__cdr_serialize,
  _HandEyeCalibrationCalibrate_Response__cdr_deserialize,
  _HandEyeCalibrationCalibrate_Response__get_serialized_size,
  _HandEyeCalibrationCalibrate_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandEyeCalibrationCalibrate_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HandEyeCalibrationCalibrate_Response__callbacks,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>()
{
  return &zivid_interfaces::srv::typesupport_fastrtps_cpp::_HandEyeCalibrationCalibrate_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Response)() {
  return &zivid_interfaces::srv::typesupport_fastrtps_cpp::_HandEyeCalibrationCalibrate_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace service_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  service_msgs::msg::ServiceEventInfo &);
size_t get_serialized_size(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_key_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace service_msgs

// functions for zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request already declared above

// functions for zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response already declared above


namespace zivid_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_serialize(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
get_serialized_size(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        zivid_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        zivid_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
max_serialized_size_HandEyeCalibrationCalibrate_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        zivid_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_HandEyeCalibrationCalibrate_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        zivid_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_HandEyeCalibrationCalibrate_Response(
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
    using DataType = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
cdr_serialize_key(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      zivid_interfaces::srv::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
get_serialized_size_key(
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        zivid_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        zivid_interfaces::srv::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_zivid_interfaces
max_serialized_size_key_HandEyeCalibrationCalibrate_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        zivid_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_key_HandEyeCalibrationCalibrate_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        zivid_interfaces::srv::typesupport_fastrtps_cpp::max_serialized_size_key_HandEyeCalibrationCalibrate_Response(
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
    using DataType = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HandEyeCalibrationCalibrate_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HandEyeCalibrationCalibrate_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HandEyeCalibrationCalibrate_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HandEyeCalibrationCalibrate_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HandEyeCalibrationCalibrate_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HandEyeCalibrationCalibrate_Event__callbacks = {
  "zivid_interfaces::srv",
  "HandEyeCalibrationCalibrate_Event",
  _HandEyeCalibrationCalibrate_Event__cdr_serialize,
  _HandEyeCalibrationCalibrate_Event__cdr_deserialize,
  _HandEyeCalibrationCalibrate_Event__get_serialized_size,
  _HandEyeCalibrationCalibrate_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandEyeCalibrationCalibrate_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HandEyeCalibrationCalibrate_Event__callbacks,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event>()
{
  return &zivid_interfaces::srv::typesupport_fastrtps_cpp::_HandEyeCalibrationCalibrate_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Event)() {
  return &zivid_interfaces::srv::typesupport_fastrtps_cpp::_HandEyeCalibrationCalibrate_Event__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace zivid_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _HandEyeCalibrationCalibrate__callbacks = {
  "zivid_interfaces::srv",
  "HandEyeCalibrationCalibrate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationCalibrate_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _HandEyeCalibrationCalibrate__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HandEyeCalibrationCalibrate__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<zivid_interfaces::srv::HandEyeCalibrationCalibrate>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<zivid_interfaces::srv::HandEyeCalibrationCalibrate>,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationCalibrate__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_zivid_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationCalibrate>()
{
  return &zivid_interfaces::srv::typesupport_fastrtps_cpp::_HandEyeCalibrationCalibrate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationCalibrate)() {
  return &zivid_interfaces::srv::typesupport_fastrtps_cpp::_HandEyeCalibrationCalibrate__handle;
}

#ifdef __cplusplus
}
#endif
