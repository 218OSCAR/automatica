// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/InfieldCorrectionCapture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/infield_correction_capture.h"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InfieldCorrectionCapture in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__InfieldCorrectionCapture_Request
{
  uint8_t structure_needs_at_least_one_member;
} zivid_interfaces__srv__InfieldCorrectionCapture_Request;

// Struct for a sequence of zivid_interfaces__srv__InfieldCorrectionCapture_Request.
typedef struct zivid_interfaces__srv__InfieldCorrectionCapture_Request__Sequence
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__InfieldCorrectionCapture_Request__Sequence;

// Constants defined in the message

/// Constant 'STATUS_NOT_SET'.
enum
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Response__STATUS_NOT_SET = 0
};

/// Constant 'STATUS_OK'.
enum
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Response__STATUS_OK = 1
};

/// Constant 'STATUS_DETECTION_FAILED'.
enum
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Response__STATUS_DETECTION_FAILED = 2
};

/// Constant 'STATUS_INVALID_CAPTURE_METHOD'.
enum
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Response__STATUS_INVALID_CAPTURE_METHOD = 3
};

/// Constant 'STATUS_INVALID_ALIGNMENT'.
enum
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Response__STATUS_INVALID_ALIGNMENT = 4
};

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'detection_result'
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.h"

/// Struct defined in srv/InfieldCorrectionCapture in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__InfieldCorrectionCapture_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// Get the detection status/validity as one of the above numeric status values. The above message will include a
  /// human-readable description of the status.
  uint8_t status;
  /// Number of successful infield correction captures. We recommend multiple captures with different board positions.
  int32_t number_of_captures;
  /// The result of the calibration board detection.
  zivid_interfaces__msg__DetectionResultCalibrationBoard detection_result;
} zivid_interfaces__srv__InfieldCorrectionCapture_Response;

// Struct for a sequence of zivid_interfaces__srv__InfieldCorrectionCapture_Response.
typedef struct zivid_interfaces__srv__InfieldCorrectionCapture_Response__Sequence
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__InfieldCorrectionCapture_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Event__request__MAX_SIZE = 1
};
// response
enum
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/InfieldCorrectionCapture in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__InfieldCorrectionCapture_Event
{
  service_msgs__msg__ServiceEventInfo info;
  zivid_interfaces__srv__InfieldCorrectionCapture_Request__Sequence request;
  zivid_interfaces__srv__InfieldCorrectionCapture_Response__Sequence response;
} zivid_interfaces__srv__InfieldCorrectionCapture_Event;

// Struct for a sequence of zivid_interfaces__srv__InfieldCorrectionCapture_Event.
typedef struct zivid_interfaces__srv__InfieldCorrectionCapture_Event__Sequence
{
  zivid_interfaces__srv__InfieldCorrectionCapture_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__InfieldCorrectionCapture_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_CAPTURE__STRUCT_H_
