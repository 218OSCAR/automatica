// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_calibration_board.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__STRUCT_H_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'POSITION'.
enum
{
  zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__POSITION = 1
};

/// Constant 'POSE'.
enum
{
  zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__POSE = 2
};

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/FixedPlacementOfCalibrationBoard in the package zivid_interfaces.
typedef struct zivid_interfaces__msg__FixedPlacementOfCalibrationBoard
{
  /// The representation to use for the placement of the fixed calibration board: POSITION or POSE
  uint8_t representation;
  /// For POSITION representation
  /// Position of the calibration board's origin.
  ///
  /// The origin is the top left inner corner of the calibration board.
  ///
  /// For eye-in-hand calibration, the position should be given in the robot's base frame. For eye-to-hand calibration, the
  /// position should be given in the robot's end-effector frame.
  ///
  /// Note: Lengths should be given in units of meter. In the Zivid driver, this is converted internally to match the
  /// default units of Zivid point clouds which are given in millimeter.
  geometry_msgs__msg__Point position;
  /// For POSE representation
  /// Pose of the calibration board.
  ///
  /// Using a pose instead of a position can improve accuracy of the hand-eye calibration in some situations. For
  /// eye-in-hand calibration, the pose should be given in the robot's base frame. For eye-to-hand calibration, the pose
  /// should be given in the robot's end-effector frame.
  ///
  /// Note: Lengths should be given in units of meter. In the Zivid driver, this is converted internally to match the
  /// default units of Zivid point clouds which are given in millimeter.
  geometry_msgs__msg__Pose pose;
} zivid_interfaces__msg__FixedPlacementOfCalibrationBoard;

// Struct for a sequence of zivid_interfaces__msg__FixedPlacementOfCalibrationBoard.
typedef struct zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__Sequence
{
  zivid_interfaces__msg__FixedPlacementOfCalibrationBoard * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__STRUCT_H_
