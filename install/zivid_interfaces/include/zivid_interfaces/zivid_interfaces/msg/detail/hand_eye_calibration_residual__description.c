// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xe5, 0xfd, 0x4d, 0x32, 0x10, 0xce, 0x60,
      0x5d, 0xf7, 0x33, 0x91, 0xa0, 0xb2, 0xd7, 0xd4,
      0x52, 0xa5, 0x37, 0x30, 0x86, 0xdc, 0x8f, 0xfb,
      0xb1, 0x63, 0x1b, 0x84, 0x7a, 0xb9, 0x41, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char zivid_interfaces__msg__HandEyeCalibrationResidual__TYPE_NAME[] = "zivid_interfaces/msg/HandEyeCalibrationResidual";

// Define type names, field names, and default values
static char zivid_interfaces__msg__HandEyeCalibrationResidual__FIELD_NAME__rotation[] = "rotation";
static char zivid_interfaces__msg__HandEyeCalibrationResidual__FIELD_NAME__translation[] = "translation";

static rosidl_runtime_c__type_description__Field zivid_interfaces__msg__HandEyeCalibrationResidual__FIELDS[] = {
  {
    {zivid_interfaces__msg__HandEyeCalibrationResidual__FIELD_NAME__rotation, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__HandEyeCalibrationResidual__FIELD_NAME__translation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__msg__HandEyeCalibrationResidual__TYPE_NAME, 47, 47},
      {zivid_interfaces__msg__HandEyeCalibrationResidual__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Rotational residual in degrees.\n"
  "float32 rotation\n"
  "\n"
  "# Translational residual.\n"
  "# Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default\n"
  "# units of the Zivid point clouds in millimeter, to the ROS convention of meter.\n"
  "float32 translation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__msg__HandEyeCalibrationResidual__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__msg__HandEyeCalibrationResidual__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 300, 300},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__msg__HandEyeCalibrationResidual__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
