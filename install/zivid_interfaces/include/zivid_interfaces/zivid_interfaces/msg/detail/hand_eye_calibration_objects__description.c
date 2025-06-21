// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:msg/HandEyeCalibrationObjects.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x9f, 0xe7, 0x7c, 0xf4, 0x50, 0xec, 0x5e,
      0x9d, 0x74, 0xf2, 0xe5, 0x75, 0xbd, 0xff, 0xb2,
      0xfc, 0x33, 0xc0, 0x61, 0xc3, 0x44, 0x48, 0x6f,
      0x82, 0x5e, 0x47, 0x64, 0x2a, 0x8c, 0xcb, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME[] = "zivid_interfaces/msg/HandEyeCalibrationObjects";

// Define type names, field names, and default values
static char zivid_interfaces__msg__HandEyeCalibrationObjects__FIELD_NAME__type[] = "type";
static char zivid_interfaces__msg__HandEyeCalibrationObjects__FIELD_NAME__marker_ids[] = "marker_ids";
static char zivid_interfaces__msg__HandEyeCalibrationObjects__FIELD_NAME__marker_dictionary[] = "marker_dictionary";

static rosidl_runtime_c__type_description__Field zivid_interfaces__msg__HandEyeCalibrationObjects__FIELDS[] = {
  {
    {zivid_interfaces__msg__HandEyeCalibrationObjects__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__HandEyeCalibrationObjects__FIELD_NAME__marker_ids, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__HandEyeCalibrationObjects__FIELD_NAME__marker_dictionary, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME, 46, 46},
      {zivid_interfaces__msg__HandEyeCalibrationObjects__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 CALIBRATION_BOARD = 1\n"
  "uint8 FIDUCIAL_MARKERS = 2\n"
  "\n"
  "# The type of calibration object to use: CALIBRATION_BOARD or FIDUCIAL_MARKERS\n"
  "uint8 type\n"
  "\n"
  "\n"
  "### For FIDUCIAL_MARKERS type\n"
  "\n"
  "# A list of the IDs of markers to be detected.\n"
  "int32[] marker_ids\n"
  "\n"
  "# The marker dictionary that describes the appearance of each marker. Example: \"aruco4x4_50\".\n"
  "string marker_dictionary";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__msg__HandEyeCalibrationObjects__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 365, 365},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__msg__HandEyeCalibrationObjects__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
