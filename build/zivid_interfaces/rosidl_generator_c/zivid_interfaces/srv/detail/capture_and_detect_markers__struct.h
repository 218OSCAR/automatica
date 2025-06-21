// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/CaptureAndDetectMarkers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/capture_and_detect_markers.h"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'marker_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'marker_dictionary'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CaptureAndDetectMarkers in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAndDetectMarkers_Request
{
  rosidl_runtime_c__int32__Sequence marker_ids;
  /// The marker dictionary that describes the appearance of each marker. Example: "aruco4x4_50".
  rosidl_runtime_c__String marker_dictionary;
} zivid_interfaces__srv__CaptureAndDetectMarkers_Request;

// Struct for a sequence of zivid_interfaces__srv__CaptureAndDetectMarkers_Request.
typedef struct zivid_interfaces__srv__CaptureAndDetectMarkers_Request__Sequence
{
  zivid_interfaces__srv__CaptureAndDetectMarkers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAndDetectMarkers_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'detection_result'
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__struct.h"

/// Struct defined in srv/CaptureAndDetectMarkers in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAndDetectMarkers_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// The result of the fiducial markers detection.
  zivid_interfaces__msg__DetectionResultFiducialMarkers detection_result;
} zivid_interfaces__srv__CaptureAndDetectMarkers_Response;

// Struct for a sequence of zivid_interfaces__srv__CaptureAndDetectMarkers_Response.
typedef struct zivid_interfaces__srv__CaptureAndDetectMarkers_Response__Sequence
{
  zivid_interfaces__srv__CaptureAndDetectMarkers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAndDetectMarkers_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  zivid_interfaces__srv__CaptureAndDetectMarkers_Event__request__MAX_SIZE = 1
};
// response
enum
{
  zivid_interfaces__srv__CaptureAndDetectMarkers_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CaptureAndDetectMarkers in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAndDetectMarkers_Event
{
  service_msgs__msg__ServiceEventInfo info;
  zivid_interfaces__srv__CaptureAndDetectMarkers_Request__Sequence request;
  zivid_interfaces__srv__CaptureAndDetectMarkers_Response__Sequence response;
} zivid_interfaces__srv__CaptureAndDetectMarkers_Event;

// Struct for a sequence of zivid_interfaces__srv__CaptureAndDetectMarkers_Event.
typedef struct zivid_interfaces__srv__CaptureAndDetectMarkers_Event__Sequence
{
  zivid_interfaces__srv__CaptureAndDetectMarkers_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAndDetectMarkers_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__STRUCT_H_
