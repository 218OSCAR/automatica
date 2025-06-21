// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:msg/FixedPlacementOfFiducialMarker.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x25, 0xb6, 0xee, 0xad, 0xcc, 0x25, 0x81,
      0xde, 0x59, 0x95, 0x4e, 0x6f, 0x8e, 0x66, 0x66,
      0x4d, 0xe4, 0x7e, 0xab, 0x7f, 0x50, 0xc0, 0x2b,
      0x51, 0xdf, 0x3f, 0x3d, 0x2c, 0xd2, 0xb7, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME[] = "zivid_interfaces/msg/FixedPlacementOfFiducialMarker";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char zivid_interfaces__msg__FixedPlacementOfFiducialMarker__FIELD_NAME__marker_id[] = "marker_id";
static char zivid_interfaces__msg__FixedPlacementOfFiducialMarker__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field zivid_interfaces__msg__FixedPlacementOfFiducialMarker__FIELDS[] = {
  {
    {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__FIELD_NAME__marker_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__msg__FixedPlacementOfFiducialMarker__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME, 51, 51},
      {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__FIELDS, 2, 2},
    },
    {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The ID of the fiducial marker to specify a position for.\n"
  "int32 marker_id\n"
  "\n"
  "# The position of the fiducial marker, specified at the center of the marker.\n"
  "#\n"
  "# For eye-in-hand calibration, positions should be given in the robot's base frame. For eye-to-hand calibration,\n"
  "# positions should be given in the robot's end-effector frame.\n"
  "#\n"
  "# Note: Lengths should be given in units of meter. In the Zivid driver, this is converted internally to match the\n"
  "# default units of Zivid point clouds which are given in millimeter.\n"
  "geometry_msgs/Point position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME, 51, 51},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 546, 546},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
