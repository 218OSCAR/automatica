// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/InfieldCorrectionCompute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/infield_correction_compute.h"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InfieldCorrectionCompute in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__InfieldCorrectionCompute_Request
{
  uint8_t structure_needs_at_least_one_member;
} zivid_interfaces__srv__InfieldCorrectionCompute_Request;

// Struct for a sequence of zivid_interfaces__srv__InfieldCorrectionCompute_Request.
typedef struct zivid_interfaces__srv__InfieldCorrectionCompute_Request__Sequence
{
  zivid_interfaces__srv__InfieldCorrectionCompute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__InfieldCorrectionCompute_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'trueness_errors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/InfieldCorrectionCompute in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__InfieldCorrectionCompute_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// Returns true if infield correction has been started on the target node. It needs to be started before capturing and
  /// computing.
  bool infield_correction_started;
  /// Number of successful infield correction captures. We recommend multiple captures with different board positions.
  int32_t number_of_captures;
  /// The list of estimated local dimension trueness error for each capture in this infield correction session. The
  /// dimension trueness represents the relative deviation between the measured size of the calibration object and the true
  /// size of the calibration object, including the effects of any in-field correction stored on the camera at the time of
  /// capture. Note that this estimate is local, i.e. only valid for the region of space very close to the calibration
  /// object.
  ///
  /// The value is a fraction (relative trueness error). Multiply by 100 to get trueness error in percent.
  rosidl_runtime_c__float__Sequence trueness_errors;
  /// The average local dimension trueness error for the captures in this session. See 'trueness_errors' for more
  /// information on this measure.
  float average_trueness_error;
  /// The maximum local dimension trueness error for the captures in this session. See 'trueness_errors' for more
  /// information on this measure.
  float maximum_trueness_error;
  /// The estimated dimension accuracy error obtained if the correction is applied.
  ///
  /// This number represents a 1-sigma (68% confidence) upper bound for dimension trueness error in the working volume
  /// (z=z_min to z=z_max, across the entire field of view). In other words, it represents the expected distribution of
  /// local dimension trueness measurements (see `trueness_errors`) that can be expected if measuring throughout the working
  /// volume.
  ///
  /// The value is a fraction (relative trueness error). Multiply by 100 to get trueness in percent.
  ///
  /// Note that the accuracy close to where the original data was captured is likely much better than what is implied by
  /// this number. This number is rather an accuracy estimate for the entire extrapolated working volume.
  float dimension_accuracy;
  /// The range of validity of the accuracy estimate (lower end).
  ///
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  float z_min;
  /// The range of validity of the accuracy estimate (upper end).
  ///
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  float z_max;
} zivid_interfaces__srv__InfieldCorrectionCompute_Response;

// Struct for a sequence of zivid_interfaces__srv__InfieldCorrectionCompute_Response.
typedef struct zivid_interfaces__srv__InfieldCorrectionCompute_Response__Sequence
{
  zivid_interfaces__srv__InfieldCorrectionCompute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__InfieldCorrectionCompute_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  zivid_interfaces__srv__InfieldCorrectionCompute_Event__request__MAX_SIZE = 1
};
// response
enum
{
  zivid_interfaces__srv__InfieldCorrectionCompute_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/InfieldCorrectionCompute in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__InfieldCorrectionCompute_Event
{
  service_msgs__msg__ServiceEventInfo info;
  zivid_interfaces__srv__InfieldCorrectionCompute_Request__Sequence request;
  zivid_interfaces__srv__InfieldCorrectionCompute_Response__Sequence response;
} zivid_interfaces__srv__InfieldCorrectionCompute_Event;

// Struct for a sequence of zivid_interfaces__srv__InfieldCorrectionCompute_Event.
typedef struct zivid_interfaces__srv__InfieldCorrectionCompute_Event__Sequence
{
  zivid_interfaces__srv__InfieldCorrectionCompute_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__InfieldCorrectionCompute_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__INFIELD_CORRECTION_COMPUTE__STRUCT_H_
