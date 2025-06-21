// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:msg/FixedPlacementOfFiducialMarker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_fiducial_marker.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__STRUCT_H_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/FixedPlacementOfFiducialMarker in the package zivid_interfaces.
/**
  * The ID of the fiducial marker to specify a position for.
 */
typedef struct zivid_interfaces__msg__FixedPlacementOfFiducialMarker
{
  int32_t marker_id;
  /// The position of the fiducial marker, specified at the center of the marker.
  ///
  /// For eye-in-hand calibration, positions should be given in the robot's base frame. For eye-to-hand calibration,
  /// positions should be given in the robot's end-effector frame.
  ///
  /// Note: Lengths should be given in units of meter. In the Zivid driver, this is converted internally to match the
  /// default units of Zivid point clouds which are given in millimeter.
  geometry_msgs__msg__Point position;
} zivid_interfaces__msg__FixedPlacementOfFiducialMarker;

// Struct for a sequence of zivid_interfaces__msg__FixedPlacementOfFiducialMarker.
typedef struct zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence
{
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__STRUCT_H_
