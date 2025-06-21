// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:msg/DetectionResultFiducialMarkers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_fiducial_markers.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__STRUCT_H_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'detected_markers'
#include "zivid_interfaces/msg/detail/marker_shape__struct.h"
// Member 'allowed_marker_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DetectionResultFiducialMarkers in the package zivid_interfaces.
/**
  * The detected fiducial markers.
  * Only markers belonging to the dictionary that was used at detection are reported. Markers are filtered to only include
  * the ones with allowed ids, specified at detection. Markers can be detected multiple times if they are present on the
  * scene multiple times.
 */
typedef struct zivid_interfaces__msg__DetectionResultFiducialMarkers
{
  zivid_interfaces__msg__MarkerShape__Sequence detected_markers;
  /// The allowed marker ids this detection result was made with.
  rosidl_runtime_c__int32__Sequence allowed_marker_ids;
} zivid_interfaces__msg__DetectionResultFiducialMarkers;

// Struct for a sequence of zivid_interfaces__msg__DetectionResultFiducialMarkers.
typedef struct zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence
{
  zivid_interfaces__msg__DetectionResultFiducialMarkers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__STRUCT_H_
