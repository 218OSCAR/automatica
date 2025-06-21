// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_calibrate.h"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EYE_TO_HAND'.
enum
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__EYE_TO_HAND = 1
};

/// Constant 'EYE_IN_HAND'.
enum
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__EYE_IN_HAND = 2
};

// Include directives for member types
// Member 'capture_handles'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'fixed_objects'
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__struct.h"

/// Struct defined in srv/HandEyeCalibrationCalibrate in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request
{
  /// The configuration to use for the hand-eye calibration: EYE_TO_HAND or EYE_IN_HAND
  uint8_t configuration;
  /// Handles of hand-eye captures to use in this hand-eye calibration. Leave empty to use all captures.
  rosidl_runtime_c__int32__Sequence capture_handles;
  /// Optionally, add fixed objects for low degrees-of-freedom (DOF) hand-eye calibration. Leave default for regular (6-DOF)
  /// calibration.
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects fixed_objects;
} zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.h"
// Member 'residuals'
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__struct.h"

/// Struct defined in srv/HandEyeCalibrationCalibrate in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response
{
  bool success;
  /// Textual representation of the result. Any indices being referred to correspond to entries into the provided list of
  /// capture handles.
  ///
  /// Note: Any reported lengths in this message are given in units of millimeter, which are used internally in the Zivid
  /// driver. This applies only to the textual representation of the result, other returned numerical results are given in
  /// the ROS convention of meter, as specified for each related field.
  rosidl_runtime_c__String message;
  /// Computed hand-eye transform.
  ///
  /// The transform has the following meaning depending on the provided configuration:
  ///
  ///   - Eye-in-hand: Camera pose in robot end-effector frame.
  ///   - Eye-to-hand: Camera pose in robot base frame.
  ///
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  geometry_msgs__msg__Transform transform;
  /// Hand-eye calibration residuals.
  ///
  /// Feature points (for each input pose) are transformed into a common frame. A rigid transform between feature points and
  /// corresponding centroids are utilized to compute residuals for rotational and translational parts.
  ///
  /// The order and size of the list of residuals correspond to the provided list of capture handles.
  zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence residuals;
} zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__request__MAX_SIZE = 1
};
// response
enum
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/HandEyeCalibrationCalibrate in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event
{
  service_msgs__msg__ServiceEventInfo info;
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__Sequence request;
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__Sequence response;
} zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event;

// Struct for a sequence of zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event.
typedef struct zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__Sequence
{
  zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__STRUCT_H_
