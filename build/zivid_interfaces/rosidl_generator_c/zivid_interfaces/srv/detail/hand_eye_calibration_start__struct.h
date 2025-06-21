// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/HandEyeCalibrationStart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_start.h"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'working_directory'
#include "rosidl_runtime_c/string.h"
// Member 'calibration_objects'
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__struct.h"

/// Struct defined in srv/HandEyeCalibrationStart in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationStart_Request
{
  rosidl_runtime_c__String working_directory;
  /// Specify the calibration object(s) to be used during this hand-eye calibration session.
  zivid_interfaces__msg__HandEyeCalibrationObjects calibration_objects;
} zivid_interfaces__srv__HandEyeCalibrationStart_Request;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationStart_Request.
typedef struct zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HandEyeCalibrationStart in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationStart_Response
{
  bool success;
  rosidl_runtime_c__String message;
} zivid_interfaces__srv__HandEyeCalibrationStart_Response;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationStart_Response.
typedef struct zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__request__MAX_SIZE = 1
};
// response
enum
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/HandEyeCalibrationStart in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationStart_Event
{
  service_msgs__msg__ServiceEventInfo info;
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence request;
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence response;
} zivid_interfaces__srv__HandEyeCalibrationStart_Event;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationStart_Event.
typedef struct zivid_interfaces__srv__HandEyeCalibrationStart_Event__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationStart_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__STRUCT_H_
