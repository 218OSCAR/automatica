// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationBoard.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0xe0, 0x66, 0x7a, 0x90, 0x12, 0xd5, 0xe2,
      0x01, 0x18, 0x1d, 0xd0, 0xc3, 0x9d, 0x95, 0x7e,
      0x68, 0x99, 0xc2, 0x80, 0xdc, 0xeb, 0xb8, 0x18,
      0xf6, 0x33, 0x71, 0xfb, 0x6a, 0x1f, 0x2b, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

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
#endif

static char zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME[] = "zivid_interfaces/msg/FixedPlacementOfCalibrationBoard";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";

// Define type names, field names, and default values
static char zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__FIELD_NAME__representation[] = "representation";
static char zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__FIELD_NAME__position[] = "position";
static char zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__FIELD_NAME__pose[] = "pose";

static rosidl_runtime_c__type_description__Field zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__FIELDS[] = {
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__FIELD_NAME__representation, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME, 53, 53},
      {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__FIELDS, 3, 3},
    },
    {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 POSITION = 1\n"
  "uint8 POSE = 2\n"
  "\n"
  "# The representation to use for the placement of the fixed calibration board: POSITION or POSE\n"
  "uint8 representation\n"
  "\n"
  "\n"
  "### For POSITION representation\n"
  "\n"
  "# Position of the calibration board's origin.\n"
  "#\n"
  "# The origin is the top left inner corner of the calibration board.\n"
  "#\n"
  "# For eye-in-hand calibration, the position should be given in the robot's base frame. For eye-to-hand calibration, the\n"
  "# position should be given in the robot's end-effector frame.\n"
  "#\n"
  "# Note: Lengths should be given in units of meter. In the Zivid driver, this is converted internally to match the\n"
  "# default units of Zivid point clouds which are given in millimeter.\n"
  "geometry_msgs/Point position\n"
  "\n"
  "\n"
  "### For POSE representation\n"
  "\n"
  "# Pose of the calibration board.\n"
  "#\n"
  "# Using a pose instead of a position can improve accuracy of the hand-eye calibration in some situations. For\n"
  "# eye-in-hand calibration, the pose should be given in the robot's base frame. For eye-to-hand calibration, the pose\n"
  "# should be given in the robot's end-effector frame.\n"
  "#\n"
  "# Note: Lengths should be given in units of meter. In the Zivid driver, this is converted internally to match the\n"
  "# default units of Zivid point clouds which are given in millimeter.\n"
  "geometry_msgs/Pose pose";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME, 53, 53},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1255, 1255},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
