// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/hand_eye_calibration_residual.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__STRUCT_H_
#define ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/HandEyeCalibrationResidual in the package zivid_interfaces.
/**
  * Rotational residual in degrees.
 */
typedef struct zivid_interfaces__msg__HandEyeCalibrationResidual
{
  float rotation;
  /// Translational residual.
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  float translation;
} zivid_interfaces__msg__HandEyeCalibrationResidual;

// Struct for a sequence of zivid_interfaces__msg__HandEyeCalibrationResidual.
typedef struct zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence
{
  zivid_interfaces__msg__HandEyeCalibrationResidual * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__msg__HandEyeCalibrationResidual__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__STRUCT_H_
