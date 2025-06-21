// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_calibration_objects.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__STRUCT_H_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
enum
{
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__NONE = 0
};

/// Constant 'CALIBRATION_BOARD'.
enum
{
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__CALIBRATION_BOARD = 1
};

/// Constant 'FIDUCIAL_MARKERS'.
enum
{
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIDUCIAL_MARKERS = 2
};

// Include directives for member types
// Member 'calibration_board'
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__struct.h"
// Member 'marker_dictionary'
#include "rosidl_runtime_c/string.h"
// Member 'markers'
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__struct.h"

/// Struct defined in msg/FixedPlacementOfCalibrationObjects in the package zivid_interfaces.
typedef struct zivid_interfaces__msg__FixedPlacementOfCalibrationObjects
{
  /// The type of calibration objects to use for low degrees-of-freedom (DOF) hand-eye calibration, if any:
  /// NONE (default) or CALIBRATION_BOARD or FIDUCIAL_MARKERS
  /// If set to NONE, regular (6-DOF) hand-eye calibration is performed.
  uint8_t type;
  /// For CALIBRATION_BOARD type
  /// Specifies the fixed placement of a Zivid calibration board for low degrees-of-freedom hand-eye calibration.
  /// This field is not needed for regular (6-DOF) hand-eye calibration.
  zivid_interfaces__msg__FixedPlacementOfCalibrationBoard calibration_board;
  /// For FIDUCIAL_MARKERS type
  /// The dictionary that describes the appearance of the markers specified below. Example: "aruco4x4_50". Only applies to
  /// low degrees-of-freedom hand-eye calibration. This field is not needed for regular (6-DOF) hand-eye calibration.
  rosidl_runtime_c__String marker_dictionary;
  /// A list describing the fixed placement of fiducial markers for low degrees-of-freedom hand-eye calibration.
  /// This field is not needed for regular (6-DOF) hand-eye calibration.
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence markers;
} zivid_interfaces__msg__FixedPlacementOfCalibrationObjects;

// Struct for a sequence of zivid_interfaces__msg__FixedPlacementOfCalibrationObjects.
typedef struct zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence
{
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__STRUCT_H_
