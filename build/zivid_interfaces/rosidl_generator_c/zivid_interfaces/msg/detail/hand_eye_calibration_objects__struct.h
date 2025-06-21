// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:msg/HandEyeCalibrationObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/hand_eye_calibration_objects.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__STRUCT_H_
#define ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CALIBRATION_BOARD'.
enum
{
  zivid_interfaces__msg__HandEyeCalibrationObjects__CALIBRATION_BOARD = 1
};

/// Constant 'FIDUCIAL_MARKERS'.
enum
{
  zivid_interfaces__msg__HandEyeCalibrationObjects__FIDUCIAL_MARKERS = 2
};

// Include directives for member types
// Member 'marker_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'marker_dictionary'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HandEyeCalibrationObjects in the package zivid_interfaces.
typedef struct zivid_interfaces__msg__HandEyeCalibrationObjects
{
  /// The type of calibration object to use: CALIBRATION_BOARD or FIDUCIAL_MARKERS
  uint8_t type;
  /// For FIDUCIAL_MARKERS type
  /// A list of the IDs of markers to be detected.
  rosidl_runtime_c__int32__Sequence marker_ids;
  /// The marker dictionary that describes the appearance of each marker. Example: "aruco4x4_50".
  rosidl_runtime_c__String marker_dictionary;
} zivid_interfaces__msg__HandEyeCalibrationObjects;

// Struct for a sequence of zivid_interfaces__msg__HandEyeCalibrationObjects.
typedef struct zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence
{
  zivid_interfaces__msg__HandEyeCalibrationObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__STRUCT_H_
