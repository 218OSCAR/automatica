// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCapture.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__struct.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // robot_pose

// forward declare type support functions

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


using _HandEyeCalibrationCapture_Request__ros_msg_type = zivid_interfaces__srv__HandEyeCalibrationCapture_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->robot_pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request * ros_message)
{
  // Field name: robot_pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->robot_pose);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationCapture_Request__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationCapture_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->robot_pose), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
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

  // Field name: robot_pose
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
    using DataType = zivid_interfaces__srv__HandEyeCalibrationCapture_Request;
    is_plain =
      (
      offsetof(DataType, robot_pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->robot_pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationCapture_Request__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationCapture_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->robot_pose), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
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
  // Field name: robot_pose
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
    using DataType = zivid_interfaces__srv__HandEyeCalibrationCapture_Request;
    is_plain =
      (
      offsetof(DataType, robot_pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _HandEyeCalibrationCapture_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Request * ros_message = static_cast<const zivid_interfaces__srv__HandEyeCalibrationCapture_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(ros_message, cdr);
}

static bool _HandEyeCalibrationCapture_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request * ros_message = static_cast<zivid_interfaces__srv__HandEyeCalibrationCapture_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(cdr, ros_message);
}

static uint32_t _HandEyeCalibrationCapture_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
      untyped_ros_message, 0));
}

static size_t _HandEyeCalibrationCapture_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandEyeCalibrationCapture_Request = {
  "zivid_interfaces::srv",
  "HandEyeCalibrationCapture_Request",
  _HandEyeCalibrationCapture_Request__cdr_serialize,
  _HandEyeCalibrationCapture_Request__cdr_deserialize,
  _HandEyeCalibrationCapture_Request__get_serialized_size,
  _HandEyeCalibrationCapture_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandEyeCalibrationCapture_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandEyeCalibrationCapture_Request,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, HandEyeCalibrationCapture_Request)() {
  return &_HandEyeCalibrationCapture_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__functions.h"  // detection_result_calibration_board
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__functions.h"  // detection_result_fiducial_markers

// forward declare type support functions

bool cdr_serialize_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const zivid_interfaces__msg__DetectionResultCalibrationBoard * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__msg__DetectionResultCalibrationBoard * ros_message);

size_t get_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const zivid_interfaces__msg__DetectionResultCalibrationBoard * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, DetectionResultCalibrationBoard)();

bool cdr_serialize_zivid_interfaces__msg__DetectionResultFiducialMarkers(
  const zivid_interfaces__msg__DetectionResultFiducialMarkers * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_zivid_interfaces__msg__DetectionResultFiducialMarkers(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__msg__DetectionResultFiducialMarkers * ros_message);

size_t get_serialized_size_zivid_interfaces__msg__DetectionResultFiducialMarkers(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_zivid_interfaces__msg__DetectionResultFiducialMarkers(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_zivid_interfaces__msg__DetectionResultFiducialMarkers(
  const zivid_interfaces__msg__DetectionResultFiducialMarkers * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_zivid_interfaces__msg__DetectionResultFiducialMarkers(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_zivid_interfaces__msg__DetectionResultFiducialMarkers(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, msg, DetectionResultFiducialMarkers)();


using _HandEyeCalibrationCapture_Response__ros_msg_type = zivid_interfaces__srv__HandEyeCalibrationCapture_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  // Field name: capture_handle
  {
    cdr << ros_message->capture_handle;
  }

  // Field name: detection_result_calibration_board
  {
    cdr_serialize_zivid_interfaces__msg__DetectionResultCalibrationBoard(
      &ros_message->detection_result_calibration_board, cdr);
  }

  // Field name: detection_result_fiducial_markers
  {
    cdr_serialize_zivid_interfaces__msg__DetectionResultFiducialMarkers(
      &ros_message->detection_result_fiducial_markers, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: capture_handle
  {
    cdr >> ros_message->capture_handle;
  }

  // Field name: detection_result_calibration_board
  {
    cdr_deserialize_zivid_interfaces__msg__DetectionResultCalibrationBoard(cdr, &ros_message->detection_result_calibration_board);
  }

  // Field name: detection_result_fiducial_markers
  {
    cdr_deserialize_zivid_interfaces__msg__DetectionResultFiducialMarkers(cdr, &ros_message->detection_result_fiducial_markers);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationCapture_Response__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationCapture_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: capture_handle
  {
    size_t item_size = sizeof(ros_message->capture_handle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: detection_result_calibration_board
  current_alignment += get_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
    &(ros_message->detection_result_calibration_board), current_alignment);

  // Field name: detection_result_fiducial_markers
  current_alignment += get_serialized_size_zivid_interfaces__msg__DetectionResultFiducialMarkers(
    &(ros_message->detection_result_fiducial_markers), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
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

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
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

  // Field name: capture_handle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: detection_result_calibration_board
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_zivid_interfaces__msg__DetectionResultCalibrationBoard(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: detection_result_fiducial_markers
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_zivid_interfaces__msg__DetectionResultFiducialMarkers(
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
    using DataType = zivid_interfaces__srv__HandEyeCalibrationCapture_Response;
    is_plain =
      (
      offsetof(DataType, detection_result_fiducial_markers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  // Field name: capture_handle
  {
    cdr << ros_message->capture_handle;
  }

  // Field name: detection_result_calibration_board
  {
    cdr_serialize_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
      &ros_message->detection_result_calibration_board, cdr);
  }

  // Field name: detection_result_fiducial_markers
  {
    cdr_serialize_key_zivid_interfaces__msg__DetectionResultFiducialMarkers(
      &ros_message->detection_result_fiducial_markers, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationCapture_Response__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationCapture_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: capture_handle
  {
    size_t item_size = sizeof(ros_message->capture_handle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: detection_result_calibration_board
  current_alignment += get_serialized_size_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
    &(ros_message->detection_result_calibration_board), current_alignment);

  // Field name: detection_result_fiducial_markers
  current_alignment += get_serialized_size_key_zivid_interfaces__msg__DetectionResultFiducialMarkers(
    &(ros_message->detection_result_fiducial_markers), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
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
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
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

  // Field name: capture_handle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: detection_result_calibration_board
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_zivid_interfaces__msg__DetectionResultCalibrationBoard(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: detection_result_fiducial_markers
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_zivid_interfaces__msg__DetectionResultFiducialMarkers(
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
    using DataType = zivid_interfaces__srv__HandEyeCalibrationCapture_Response;
    is_plain =
      (
      offsetof(DataType, detection_result_fiducial_markers) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _HandEyeCalibrationCapture_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Response * ros_message = static_cast<const zivid_interfaces__srv__HandEyeCalibrationCapture_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(ros_message, cdr);
}

static bool _HandEyeCalibrationCapture_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response * ros_message = static_cast<zivid_interfaces__srv__HandEyeCalibrationCapture_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(cdr, ros_message);
}

static uint32_t _HandEyeCalibrationCapture_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
      untyped_ros_message, 0));
}

static size_t _HandEyeCalibrationCapture_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandEyeCalibrationCapture_Response = {
  "zivid_interfaces::srv",
  "HandEyeCalibrationCapture_Response",
  _HandEyeCalibrationCapture_Response__cdr_serialize,
  _HandEyeCalibrationCapture_Response__cdr_deserialize,
  _HandEyeCalibrationCapture_Response__get_serialized_size,
  _HandEyeCalibrationCapture_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandEyeCalibrationCapture_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandEyeCalibrationCapture_Response,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, HandEyeCalibrationCapture_Response)() {
  return &_HandEyeCalibrationCapture_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_zivid_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

bool cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request * ros_message);

size_t get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, HandEyeCalibrationCapture_Request)();

bool cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response * ros_message);

size_t get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, HandEyeCalibrationCapture_Response)();


using _HandEyeCalibrationCapture_Event__ros_msg_type = zivid_interfaces__srv__HandEyeCalibrationCapture_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
  eprosima::fastcdr::Cdr & cdr,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__fini(&ros_message->request);
    }
    if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__fini(&ros_message->response);
    }
    if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationCapture_Event__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationCapture_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
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
    using DataType = zivid_interfaces__srv__HandEyeCalibrationCapture_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
bool cdr_serialize_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t get_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandEyeCalibrationCapture_Event__ros_msg_type * ros_message = static_cast<const _HandEyeCalibrationCapture_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_zivid_interfaces
size_t max_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_zivid_interfaces__srv__HandEyeCalibrationCapture_Response(
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
    using DataType = zivid_interfaces__srv__HandEyeCalibrationCapture_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _HandEyeCalibrationCapture_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Event * ros_message = static_cast<const zivid_interfaces__srv__HandEyeCalibrationCapture_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(ros_message, cdr);
}

static bool _HandEyeCalibrationCapture_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event * ros_message = static_cast<zivid_interfaces__srv__HandEyeCalibrationCapture_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(cdr, ros_message);
}

static uint32_t _HandEyeCalibrationCapture_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
      untyped_ros_message, 0));
}

static size_t _HandEyeCalibrationCapture_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_zivid_interfaces__srv__HandEyeCalibrationCapture_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandEyeCalibrationCapture_Event = {
  "zivid_interfaces::srv",
  "HandEyeCalibrationCapture_Event",
  _HandEyeCalibrationCapture_Event__cdr_serialize,
  _HandEyeCalibrationCapture_Event__cdr_deserialize,
  _HandEyeCalibrationCapture_Event__get_serialized_size,
  _HandEyeCalibrationCapture_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandEyeCalibrationCapture_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandEyeCalibrationCapture_Event,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, HandEyeCalibrationCapture_Event)() {
  return &_HandEyeCalibrationCapture_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "zivid_interfaces/srv/hand_eye_calibration_capture.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t HandEyeCalibrationCapture__callbacks = {
  "zivid_interfaces::srv",
  "HandEyeCalibrationCapture",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, HandEyeCalibrationCapture_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, HandEyeCalibrationCapture_Response)(),
};

static rosidl_service_type_support_t HandEyeCalibrationCapture__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &HandEyeCalibrationCapture__callbacks,
  get_service_typesupport_handle_function,
  &_HandEyeCalibrationCapture_Request__type_support,
  &_HandEyeCalibrationCapture_Response__type_support,
  &_HandEyeCalibrationCapture_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    HandEyeCalibrationCapture
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    HandEyeCalibrationCapture
  ),
  &zivid_interfaces__srv__HandEyeCalibrationCapture__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationCapture__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationCapture__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, HandEyeCalibrationCapture)() {
  return &HandEyeCalibrationCapture__handle;
}

#if defined(__cplusplus)
}
#endif
