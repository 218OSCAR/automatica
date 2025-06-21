// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_calibration_board.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__STRUCT_H_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATUS_NOT_SET'.
enum
{
  zivid_interfaces__msg__DetectionResultCalibrationBoard__STATUS_NOT_SET = 0
};

/// Constant 'STATUS_OK'.
enum
{
  zivid_interfaces__msg__DetectionResultCalibrationBoard__STATUS_OK = 1
};

/// Constant 'STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED'.
enum
{
  zivid_interfaces__msg__DetectionResultCalibrationBoard__STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED = 2
};

/// Constant 'STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED'.
enum
{
  zivid_interfaces__msg__DetectionResultCalibrationBoard__STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED = 3
};

/// Constant 'STATUS_BOARD_DETECTION_FAILED'.
enum
{
  zivid_interfaces__msg__DetectionResultCalibrationBoard__STATUS_BOARD_DETECTION_FAILED = 4
};

/// Constant 'STATUS_INSUFFICIENT_3D_QUALITY'.
enum
{
  zivid_interfaces__msg__DetectionResultCalibrationBoard__STATUS_INSUFFICIENT_3D_QUALITY = 5
};

// Include directives for member types
// Member 'status_description'
#include "rosidl_runtime_c/string.h"
// Member 'centroid'
// Member 'feature_points'
// Member 'feature_points_2d'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/DetectionResultCalibrationBoard in the package zivid_interfaces.
typedef struct zivid_interfaces__msg__DetectionResultCalibrationBoard
{
  /// Get the detection status/validity as one of the above numeric status values.
  uint8_t status;
  /// A human-readable description of the status.
  rosidl_runtime_c__String status_description;
  /// The centroid of the detected feature points in camera-space.
  ///
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  geometry_msgs__msg__Point centroid;
  /// The position and orientation of the top left detected corner in the camera coordinate system.
  ///
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  geometry_msgs__msg__Pose pose;
  /// The detected feature points in camera-space.
  ///
  /// Represents a list of 3D coordinates representing the centers of the calibration board squares. The points are arranged
  /// in a 2D grid corresponding to the calibration board, with a size given by `feature_points_width` and
  /// `feature_points_height`. The first element corresponds to the physical top-left corner of the board. Incrementing
  /// indices first move to the right on the physical board and then wraps down.
  ///
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  geometry_msgs__msg__Point__Sequence feature_points;
  /// Get the detected feature points in pixel-space.
  ///
  /// Same as `feature_points`, but with 2D coordinates instead of 3D coordinates. The points are reported at subpixel
  /// accuracy. The third dimension (`z`) of each point is set to zero.
  geometry_msgs__msg__Point__Sequence feature_points_2d;
  /// The width (number of columns) of the feature points.
  uint64_t feature_points_width;
  /// The height (number of rows) of the feature points.
  uint64_t feature_points_height;
} zivid_interfaces__msg__DetectionResultCalibrationBoard;

// Struct for a sequence of zivid_interfaces__msg__DetectionResultCalibrationBoard.
typedef struct zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence
{
  zivid_interfaces__msg__DetectionResultCalibrationBoard * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__STRUCT_H_
