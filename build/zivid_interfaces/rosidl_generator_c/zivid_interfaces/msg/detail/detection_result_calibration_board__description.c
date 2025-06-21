// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/msg/detail/detection_result_calibration_board__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x92, 0xd7, 0x3a, 0xcc, 0x57, 0x37, 0x32,
      0xf0, 0x9a, 0x96, 0x69, 0x4a, 0x76, 0x7c, 0x7a,
      0x5b, 0x8a, 0xe6, 0x9a, 0x13, 0x47, 0xf1, 0xb1,
      0x2d, 0x68, 0x61, 0x18, 0x0b, 0xff, 0x7c, 0x8d,
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

static char zivid_interfaces__msg__DetectionResultCalibrationBoard__TYPE_NAME[] = "zivid_interfaces/msg/DetectionResultCalibrationBoard";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";

// Define type names, field names, and default values
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__status[] = "status";
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__status_description[] = "status_description";
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__centroid[] = "centroid";
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__pose[] = "pose";
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__feature_points[] = "feature_points";
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__feature_points_2d[] = "feature_points_2d";
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__feature_points_width[] = "feature_points_width";
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__feature_points_height[] = "feature_points_height";

static rosidl_runtime_c__type_description__Field zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELDS[] = {
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__status_description, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__centroid, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__feature_points, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__feature_points_2d, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__feature_points_width, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELD_NAME__feature_points_height, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__msg__DetectionResultCalibrationBoard__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__msg__DetectionResultCalibrationBoard__TYPE_NAME, 52, 52},
      {zivid_interfaces__msg__DetectionResultCalibrationBoard__FIELDS, 8, 8},
    },
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
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
  "uint8 STATUS_NOT_SET = 0\n"
  "uint8 STATUS_OK = 1\n"
  "uint8 STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED = 2\n"
  "uint8 STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED = 3\n"
  "uint8 STATUS_BOARD_DETECTION_FAILED = 4\n"
  "uint8 STATUS_INSUFFICIENT_3D_QUALITY = 5\n"
  "\n"
  "# Get the detection status/validity as one of the above numeric status values.\n"
  "uint8 status\n"
  "\n"
  "# A human-readable description of the status.\n"
  "string status_description\n"
  "\n"
  "# The centroid of the detected feature points in camera-space.\n"
  "#\n"
  "# Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default\n"
  "# units of the Zivid point clouds in millimeter, to the ROS convention of meter.\n"
  "geometry_msgs/Point centroid\n"
  "\n"
  "# The position and orientation of the top left detected corner in the camera coordinate system.\n"
  "#\n"
  "# Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default\n"
  "# units of the Zivid point clouds in millimeter, to the ROS convention of meter.\n"
  "geometry_msgs/Pose pose\n"
  "\n"
  "# The detected feature points in camera-space.\n"
  "#\n"
  "# Represents a list of 3D coordinates representing the centers of the calibration board squares. The points are arranged\n"
  "# in a 2D grid corresponding to the calibration board, with a size given by `feature_points_width` and\n"
  "# `feature_points_height`. The first element corresponds to the physical top-left corner of the board. Incrementing\n"
  "# indices first move to the right on the physical board and then wraps down.\n"
  "#\n"
  "# Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default\n"
  "# units of the Zivid point clouds in millimeter, to the ROS convention of meter.\n"
  "geometry_msgs/Point[] feature_points\n"
  "\n"
  "# Get the detected feature points in pixel-space.\n"
  "#\n"
  "# Same as `feature_points`, but with 2D coordinates instead of 3D coordinates. The points are reported at subpixel\n"
  "# accuracy. The third dimension (`z`) of each point is set to zero.\n"
  "geometry_msgs/Point[] feature_points_2d\n"
  "\n"
  "# The width (number of columns) of the feature points.\n"
  "uint64 feature_points_width\n"
  "\n"
  "# The height (number of rows) of the feature points.\n"
  "uint64 feature_points_height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__msg__DetectionResultCalibrationBoard__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__TYPE_NAME, 52, 52},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2174, 2174},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__msg__DetectionResultCalibrationBoard__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
