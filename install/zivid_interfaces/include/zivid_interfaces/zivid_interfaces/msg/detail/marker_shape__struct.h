// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/marker_shape.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__STRUCT_H_
#define ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'corners_in_pixel_coordinates'
// Member 'corners_in_camera_coordinates'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/MarkerShape in the package zivid_interfaces.
/**
  * The 2D image coordinates of the corners of the detected marker.
 */
typedef struct zivid_interfaces__msg__MarkerShape
{
  geometry_msgs__msg__Point corners_in_pixel_coordinates[4];
  /// The 3D spatial coordinates of the corners of the detected marker.
  ///
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  geometry_msgs__msg__Point corners_in_camera_coordinates[4];
  /// The id of the detected marker.
  int32_t id;
  /// The 3D pose of the marker. The returned pose will be positioned at the center of the marker, and have an orientation
  /// such that its z-axis points perpendicularly into the face of the marker.
  ///
  /// Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default
  /// units of the Zivid point clouds in millimeter, to the ROS convention of meter.
  geometry_msgs__msg__Pose pose;
} zivid_interfaces__msg__MarkerShape;

// Struct for a sequence of zivid_interfaces__msg__MarkerShape.
typedef struct zivid_interfaces__msg__MarkerShape__Sequence
{
  zivid_interfaces__msg__MarkerShape * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__msg__MarkerShape__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__STRUCT_H_
