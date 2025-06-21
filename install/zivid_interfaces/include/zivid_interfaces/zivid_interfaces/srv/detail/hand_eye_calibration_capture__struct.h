// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCapture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_capture.h"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/HandEyeCalibrationCapture in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCapture_Request
{
  geometry_msgs__msg__Pose robot_pose;
} zivid_interfaces__srv__HandEyeCalibrationCapture_Request;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationCapture_Request.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'detection_result_calibration_board'
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.h"
// Member 'detection_result_fiducial_markers'
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__struct.h"

/// Struct defined in srv/HandEyeCalibrationCapture in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCapture_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// Capture handle which uniquely identifies this hand-eye capture for the current session. Returns -1 if the capture was
  /// not successful. Existing handles are invalidated when a new session is started.
  int32_t capture_handle;
  /// The result of any calibration board detection. Only filled if the current hand-eye calibration session was started
  /// with a calibration board as the calibration object.
  zivid_interfaces__msg__DetectionResultCalibrationBoard detection_result_calibration_board;
  /// The result of any fiducial markers detection. Only filled if the current hand-eye calibration session was started
  /// with fiducial markers as the calibration objects.
  zivid_interfaces__msg__DetectionResultFiducialMarkers detection_result_fiducial_markers;
} zivid_interfaces__srv__HandEyeCalibrationCapture_Response;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationCapture_Response.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event__request__MAX_SIZE = 1
};
// response
enum
{
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/HandEyeCalibrationCapture in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCapture_Event
{
  service_msgs__msg__ServiceEventInfo info;
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence request;
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence response;
} zivid_interfaces__srv__HandEyeCalibrationCapture_Event;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationCapture_Event.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__STRUCT_H_
