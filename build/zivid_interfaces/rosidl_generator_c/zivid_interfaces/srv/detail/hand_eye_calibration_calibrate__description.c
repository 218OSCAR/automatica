// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationCalibrate__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x45, 0x95, 0x44, 0x98, 0x4f, 0xc3, 0xe7,
      0xb2, 0xe0, 0x32, 0x90, 0x31, 0x10, 0x68, 0x5b,
      0x98, 0xf1, 0xec, 0x77, 0xa4, 0x81, 0x86, 0x5d,
      0x25, 0x3e, 0x24, 0x3f, 0xac, 0xd8, 0xb3, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x0a, 0x3b, 0x59, 0x7d, 0x0e, 0xa0, 0xad,
      0x80, 0xc4, 0xf7, 0x1e, 0x1a, 0x00, 0xf1, 0x41,
      0xd3, 0x20, 0x9f, 0xdb, 0x91, 0x97, 0xa7, 0xb4,
      0x52, 0x87, 0x8d, 0x7a, 0xf1, 0x73, 0xa8, 0xd5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0xb9, 0xf7, 0x6e, 0x58, 0x9d, 0x82, 0x3c,
      0xd5, 0x40, 0x8c, 0x99, 0x18, 0x5b, 0x75, 0x71,
      0xee, 0x78, 0x3d, 0x69, 0x64, 0x52, 0x65, 0xee,
      0x07, 0x46, 0xba, 0xb8, 0x65, 0x62, 0x08, 0x3c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x5c, 0xcf, 0xf5, 0xe7, 0x7f, 0x03, 0xc9,
      0x26, 0xb5, 0xb3, 0xac, 0x29, 0x8e, 0xd8, 0xbf,
      0x74, 0x17, 0xf9, 0x48, 0xfe, 0x11, 0xbf, 0xd1,
      0x16, 0xae, 0x95, 0x73, 0x2a, 0xa4, 0x4c, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/transform__functions.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
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
static const rosidl_type_hash_t geometry_msgs__msg__Transform__EXPECTED_HASH = {1, {
    0xbe, 0xb8, 0x3f, 0xbe, 0x69, 0x86, 0x36, 0x35,
    0x14, 0x61, 0xf6, 0xf3, 0x5d, 0x1a, 0xbb, 0x20,
    0x01, 0x0c, 0x43, 0xd5, 0x53, 0x74, 0xd8, 0x1b,
    0xd0, 0x41, 0xf1, 0xba, 0x25, 0x81, 0xfd, 0xdc,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__EXPECTED_HASH = {1, {
    0xd3, 0xe0, 0x66, 0x7a, 0x90, 0x12, 0xd5, 0xe2,
    0x01, 0x18, 0x1d, 0xd0, 0xc3, 0x9d, 0x95, 0x7e,
    0x68, 0x99, 0xc2, 0x80, 0xdc, 0xeb, 0xb8, 0x18,
    0xf6, 0x33, 0x71, 0xfb, 0x6a, 0x1f, 0x2b, 0x56,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__EXPECTED_HASH = {1, {
    0x49, 0xa0, 0x3c, 0x63, 0x17, 0x65, 0x13, 0x0d,
    0xd6, 0x6c, 0x88, 0x5b, 0x3e, 0x8b, 0xce, 0x2e,
    0x5c, 0xff, 0x5d, 0x0a, 0x41, 0xdf, 0xeb, 0xd8,
    0xd5, 0x3c, 0xd7, 0xe3, 0x8c, 0xcf, 0xda, 0x1f,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__FixedPlacementOfFiducialMarker__EXPECTED_HASH = {1, {
    0x1d, 0x25, 0xb6, 0xee, 0xad, 0xcc, 0x25, 0x81,
    0xde, 0x59, 0x95, 0x4e, 0x6f, 0x8e, 0x66, 0x66,
    0x4d, 0xe4, 0x7e, 0xab, 0x7f, 0x50, 0xc0, 0x2b,
    0x51, 0xdf, 0x3f, 0x3d, 0x2c, 0xd2, 0xb7, 0xbe,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__HandEyeCalibrationResidual__EXPECTED_HASH = {1, {
    0xfb, 0xe5, 0xfd, 0x4d, 0x32, 0x10, 0xce, 0x60,
    0x5d, 0xf7, 0x33, 0x91, 0xa0, 0xb2, 0xd7, 0xd4,
    0x52, 0xa5, 0x37, 0x30, 0x86, 0xdc, 0x8f, 0xfb,
    0xb1, 0x63, 0x1b, 0x84, 0x7a, 0xb9, 0x41, 0xca,
  }};
#endif

static char zivid_interfaces__srv__HandEyeCalibrationCalibrate__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationCalibrate";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Transform__TYPE_NAME[] = "geometry_msgs/msg/Transform";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME[] = "zivid_interfaces/msg/FixedPlacementOfCalibrationBoard";
static char zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__TYPE_NAME[] = "zivid_interfaces/msg/FixedPlacementOfCalibrationObjects";
static char zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME[] = "zivid_interfaces/msg/FixedPlacementOfFiducialMarker";
static char zivid_interfaces__msg__HandEyeCalibrationResidual__TYPE_NAME[] = "zivid_interfaces/msg/HandEyeCalibrationResidual";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationCalibrate_Event";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationCalibrate_Request";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationCalibrate_Response";

// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate__FIELD_NAME__request_message[] = "request_message";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate__FIELD_NAME__response_message[] = "response_message";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationCalibrate__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationCalibrate__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
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
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__HandEyeCalibrationResidual__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationCalibrate__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate__TYPE_NAME, 48, 48},
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate__REFERENCED_TYPE_DESCRIPTIONS, 14, 14},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfFiducialMarker__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationResidual__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[11].fields = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[12].fields = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[13].fields = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__FIELD_NAME__configuration[] = "configuration";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__FIELD_NAME__capture_handles[] = "capture_handles";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__FIELD_NAME__fixed_objects[] = "fixed_objects";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__FIELD_NAME__configuration, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__FIELD_NAME__capture_handles, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__FIELD_NAME__fixed_objects, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__TYPE_NAME, 56, 56},
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
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
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfFiducialMarker__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELD_NAME__success[] = "success";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELD_NAME__message[] = "message";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELD_NAME__transform[] = "transform";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELD_NAME__residuals[] = "residuals";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELD_NAME__transform, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELD_NAME__residuals, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {zivid_interfaces__msg__HandEyeCalibrationResidual__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__HandEyeCalibrationResidual__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__TYPE_NAME, 57, 57},
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__FIELDS, 4, 4},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationResidual__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__FIELD_NAME__info[] = "info";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__FIELD_NAME__request[] = "request";
static char zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
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
    {geometry_msgs__msg__Transform__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__FixedPlacementOfFiducialMarker__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__HandEyeCalibrationResidual__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__TYPE_NAME, 54, 54},
      {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__REFERENCED_TYPE_DESCRIPTIONS, 13, 13},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Transform__EXPECTED_HASH, geometry_msgs__msg__Transform__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Transform__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__FixedPlacementOfFiducialMarker__EXPECTED_HASH, zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationResidual__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = zivid_interfaces__msg__HandEyeCalibrationResidual__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[11].fields = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[12].fields = zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 EYE_TO_HAND = 1\n"
  "uint8 EYE_IN_HAND = 2\n"
  "\n"
  "# The configuration to use for the hand-eye calibration: EYE_TO_HAND or EYE_IN_HAND\n"
  "uint8 configuration\n"
  "\n"
  "# Handles of hand-eye captures to use in this hand-eye calibration. Leave empty to use all captures.\n"
  "int32[] capture_handles\n"
  "\n"
  "# Optionally, add fixed objects for low degrees-of-freedom (DOF) hand-eye calibration. Leave default for regular (6-DOF)\n"
  "# calibration.\n"
  "FixedPlacementOfCalibrationObjects fixed_objects\n"
  "\n"
  "---\n"
  "bool success\n"
  "\n"
  "# Textual representation of the result. Any indices being referred to correspond to entries into the provided list of\n"
  "# capture handles.\n"
  "#\n"
  "# Note: Any reported lengths in this message are given in units of millimeter, which are used internally in the Zivid\n"
  "# driver. This applies only to the textual representation of the result, other returned numerical results are given in\n"
  "# the ROS convention of meter, as specified for each related field.\n"
  "string message\n"
  "\n"
  "# Computed hand-eye transform.\n"
  "#\n"
  "# The transform has the following meaning depending on the provided configuration:\n"
  "#\n"
  "#   - Eye-in-hand: Camera pose in robot end-effector frame.\n"
  "#   - Eye-to-hand: Camera pose in robot base frame.\n"
  "#\n"
  "# Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default\n"
  "# units of the Zivid point clouds in millimeter, to the ROS convention of meter.\n"
  "geometry_msgs/Transform transform\n"
  "\n"
  "# Hand-eye calibration residuals.\n"
  "#\n"
  "# Feature points (for each input pose) are transformed into a common frame. A rigid transform between feature points and\n"
  "# corresponding centroids are utilized to compute residuals for rotational and translational parts.\n"
  "#\n"
  "# The order and size of the list of residuals correspond to the provided list of capture handles.\n"
  "HandEyeCalibrationResidual[] residuals";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationCalibrate__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate__TYPE_NAME, 48, 48},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1805, 1805},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCalibrate__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[15];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 15, 15};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_individual_type_description_source(NULL);
    sources[9] = *zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_individual_type_description_source(NULL);
    sources[10] = *zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_individual_type_description_source(NULL);
    sources[11] = *zivid_interfaces__msg__HandEyeCalibrationResidual__get_individual_type_description_source(NULL);
    sources[12] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_individual_type_description_source(NULL);
    sources[13] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_individual_type_description_source(NULL);
    sources[14] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_individual_type_description_source(NULL);
    sources[6] = *zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__msg__HandEyeCalibrationResidual__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[14];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 14, 14};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Transform__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__get_individual_type_description_source(NULL);
    sources[9] = *zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__get_individual_type_description_source(NULL);
    sources[10] = *zivid_interfaces__msg__FixedPlacementOfFiducialMarker__get_individual_type_description_source(NULL);
    sources[11] = *zivid_interfaces__msg__HandEyeCalibrationResidual__get_individual_type_description_source(NULL);
    sources[12] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request__get_individual_type_description_source(NULL);
    sources[13] = *zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
