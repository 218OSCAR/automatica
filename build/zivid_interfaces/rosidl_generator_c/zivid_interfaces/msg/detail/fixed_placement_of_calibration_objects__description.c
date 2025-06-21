// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0xa0, 0x3c, 0x63, 0x17, 0x65, 0x13, 0x0d,
      0xd6, 0x6c, 0x88, 0x5b, 0x3e, 0x8b, 0xce, 0x2e,
      0x5c, 0xff, 0x5d, 0x0a, 0x41, 0xdf, 0xeb, 0xd8,
      0xd5, 0x3c, 0xd7, 0xe3, 0x8c, 0xcf, 0xda, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__functions.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__EXPECTED_HASH = {1, {
    0xd3, 0xe0, 0x66, 0x7a, 0x90, 0x12, 0xd5, 0xe2,
    0x01, 0x18, 0x1d, 0xd0, 0xc3, 0x9d, 0x95, 0x7e,
    0x68, 0x99, 0xc2, 0x80, 0xdc, 0xeb, 0xb8, 0x18,
    0xf6, 0x33, 0x71, 0xfb, 0x6a, 0x1f, 0x2b, 0x56,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__FixedPlacementOfFiducialMarker__EXPECTED_HASH = {1, {
    0x1d, 0x25, 0xb6, 0xee, 0xad, 0xcc, 0x25, 0x81,
    0xde, 0x59, 0x95, 0x4e, 0x6f, 0x8e, 0x66, 0x66,
    0x4d, 0xe4, 0x7e, 0xab, 0x7f, 0x50, 0xc0, 0x2b,
    0x51, 0xdf, 0x3f, 0x3d, 0x2c, 0xd2, 0xb7, 0xbe,
  }};
#endif

static char zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__TYPE_NAME[] = "zivid_interfaces/msg/FixedPlacementOfCalibrationObjects";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME[] = "zivid_interfaces/msg/FixedPlacementOfCalibrationBoard";
static char zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME[] = "zivid_interfaces/msg/FixedPlacementOfFiducialMarker";

// Define type names, field names, and default values
static char zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELD_NAME__type[] = "type";
static char zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELD_NAME__calibration_board[] = "calibration_board";
static char zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELD_NAME__marker_dictionary[] = "marker_dictionary";
static char zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELD_NAME__markers[] = "markers";

static rosidl_runtime_c__type_description__Field zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELDS[] = {
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELD_NAME__calibration_board, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELD_NAME__marker_dictionary, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELD_NAME__markers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__TYPE_NAME, 55, 55},
      {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__FIELDS, 4, 4},
    },
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfFiducialMarker__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 NONE = 0\n"
  "uint8 CALIBRATION_BOARD = 1\n"
  "uint8 FIDUCIAL_MARKERS = 2\n"
  "\n"
  "# The type of calibration objects to use for low degrees-of-freedom (DOF) hand-eye calibration, if any:\n"
  "# NONE (default) or CALIBRATION_BOARD or FIDUCIAL_MARKERS\n"
  "# If set to NONE, regular (6-DOF) hand-eye calibration is performed.\n"
  "uint8 type\n"
  "\n"
  "\n"
  "### For CALIBRATION_BOARD type\n"
  "\n"
  "# Specifies the fixed placement of a Zivid calibration board for low degrees-of-freedom hand-eye calibration.\n"
  "# This field is not needed for regular (6-DOF) hand-eye calibration.\n"
  "FixedPlacementOfCalibrationBoard calibration_board\n"
  "\n"
  "\n"
  "### For FIDUCIAL_MARKERS type\n"
  "\n"
  "# The dictionary that describes the appearance of the markers specified below. Example: \"aruco4x4_50\". Only applies to\n"
  "# low degrees-of-freedom hand-eye calibration. This field is not needed for regular (6-DOF) hand-eye calibration.\n"
  "string marker_dictionary\n"
  "\n"
  "# A list describing the fixed placement of fiducial markers for low degrees-of-freedom hand-eye calibration.\n"
  "# This field is not needed for regular (6-DOF) hand-eye calibration.\n"
  "FixedPlacementOfFiducialMarker[] markers";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__TYPE_NAME, 55, 55},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1088, 1088},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
