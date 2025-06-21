// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:msg/DetectionResultFiducialMarkers.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0x29, 0x13, 0xcd, 0x90, 0x25, 0x10, 0xde,
      0x85, 0x52, 0xfe, 0x28, 0xbf, 0xee, 0x84, 0x87,
      0xf4, 0x5a, 0xb1, 0x47, 0x8b, 0xf6, 0xd5, 0xf2,
      0x69, 0xea, 0x68, 0xb1, 0xb8, 0x34, 0xe9, 0x5a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "zivid_interfaces/msg/detail/marker_shape__functions.h"
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
static const rosidl_type_hash_t zivid_interfaces__msg__MarkerShape__EXPECTED_HASH = {1, {
    0xcb, 0xed, 0xf5, 0x65, 0xaf, 0x7c, 0xa3, 0x21,
    0x4f, 0x08, 0x52, 0x12, 0xb3, 0xf0, 0x77, 0x4f,
    0xa3, 0xef, 0xa7, 0x09, 0x49, 0x5a, 0x8d, 0x40,
    0x95, 0x14, 0xec, 0x0e, 0x39, 0x44, 0xe8, 0x9b,
  }};
#endif

static char zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME[] = "zivid_interfaces/msg/DetectionResultFiducialMarkers";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char zivid_interfaces__msg__MarkerShape__TYPE_NAME[] = "zivid_interfaces/msg/MarkerShape";

// Define type names, field names, and default values
static char zivid_interfaces__msg__DetectionResultFiducialMarkers__FIELD_NAME__detected_markers[] = "detected_markers";
static char zivid_interfaces__msg__DetectionResultFiducialMarkers__FIELD_NAME__allowed_marker_ids[] = "allowed_marker_ids";

static rosidl_runtime_c__type_description__Field zivid_interfaces__msg__DetectionResultFiducialMarkers__FIELDS[] = {
  {
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__FIELD_NAME__detected_markers, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {zivid_interfaces__msg__MarkerShape__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__FIELD_NAME__allowed_marker_ids, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__msg__DetectionResultFiducialMarkers__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {zivid_interfaces__msg__MarkerShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
      {zivid_interfaces__msg__DetectionResultFiducialMarkers__FIELDS, 2, 2},
    },
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__MarkerShape__EXPECTED_HASH, zivid_interfaces__msg__MarkerShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__msg__MarkerShape__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The detected fiducial markers.\n"
  "# Only markers belonging to the dictionary that was used at detection are reported. Markers are filtered to only include\n"
  "# the ones with allowed ids, specified at detection. Markers can be detected multiple times if they are present on the\n"
  "# scene multiple times.\n"
  "MarkerShape[] detected_markers\n"
  "\n"
  "# The allowed marker ids this detection result was made with.\n"
  "int32[] allowed_marker_ids";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__msg__DetectionResultFiducialMarkers__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 418, 418},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__msg__DetectionResultFiducialMarkers__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__msg__MarkerShape__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
