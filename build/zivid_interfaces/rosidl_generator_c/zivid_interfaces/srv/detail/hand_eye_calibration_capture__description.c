// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCapture.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationCapture__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0xde, 0x18, 0xce, 0x06, 0x3f, 0x67, 0x2a,
      0xd9, 0xa4, 0xf1, 0x3b, 0xba, 0xe1, 0x92, 0xeb,
      0xc9, 0x8b, 0xf6, 0x80, 0x56, 0xd3, 0x03, 0x0e,
      0x83, 0x6e, 0x15, 0x2d, 0x3b, 0x8c, 0x5d, 0x61,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0xde, 0xde, 0x48, 0x49, 0xf4, 0x4c, 0x33,
      0x89, 0x2f, 0x94, 0x86, 0x85, 0xd6, 0x43, 0x0e,
      0x4c, 0x62, 0x2b, 0x45, 0xeb, 0xbf, 0xf6, 0x5a,
      0x0d, 0x84, 0xce, 0x20, 0x0d, 0x95, 0x73, 0x0c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0xda, 0x57, 0x35, 0x08, 0xc8, 0xb8, 0xd2,
      0x05, 0xeb, 0xf6, 0x59, 0x03, 0x31, 0x25, 0xc0,
      0x0c, 0x95, 0x09, 0xcf, 0x24, 0xdf, 0x6e, 0x3d,
      0x4f, 0x19, 0x77, 0xf9, 0x95, 0x18, 0x62, 0xc7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3f, 0x3c, 0xa6, 0x61, 0x02, 0x79, 0xf7, 0x00,
      0x1e, 0x8c, 0xcd, 0xd8, 0x81, 0x87, 0xaa, 0x79,
      0xaf, 0xfd, 0x39, 0xab, 0x22, 0xc1, 0xa0, 0x5c,
      0x2a, 0xf3, 0x1c, 0xe3, 0x74, 0x9b, 0x1f, 0x5e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "zivid_interfaces/msg/detail/marker_shape__functions.h"
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__functions.h"
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
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__DetectionResultCalibrationBoard__EXPECTED_HASH = {1, {
    0xc8, 0x92, 0xd7, 0x3a, 0xcc, 0x57, 0x37, 0x32,
    0xf0, 0x9a, 0x96, 0x69, 0x4a, 0x76, 0x7c, 0x7a,
    0x5b, 0x8a, 0xe6, 0x9a, 0x13, 0x47, 0xf1, 0xb1,
    0x2d, 0x68, 0x61, 0x18, 0x0b, 0xff, 0x7c, 0x8d,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__DetectionResultFiducialMarkers__EXPECTED_HASH = {1, {
    0x80, 0x29, 0x13, 0xcd, 0x90, 0x25, 0x10, 0xde,
    0x85, 0x52, 0xfe, 0x28, 0xbf, 0xee, 0x84, 0x87,
    0xf4, 0x5a, 0xb1, 0x47, 0x8b, 0xf6, 0xd5, 0xf2,
    0x69, 0xea, 0x68, 0xb1, 0xb8, 0x34, 0xe9, 0x5a,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__MarkerShape__EXPECTED_HASH = {1, {
    0xcb, 0xed, 0xf5, 0x65, 0xaf, 0x7c, 0xa3, 0x21,
    0x4f, 0x08, 0x52, 0x12, 0xb3, 0xf0, 0x77, 0x4f,
    0xa3, 0xef, 0xa7, 0x09, 0x49, 0x5a, 0x8d, 0x40,
    0x95, 0x14, 0xec, 0x0e, 0x39, 0x44, 0xe8, 0x9b,
  }};
#endif

static char zivid_interfaces__srv__HandEyeCalibrationCapture__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationCapture";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char zivid_interfaces__msg__DetectionResultCalibrationBoard__TYPE_NAME[] = "zivid_interfaces/msg/DetectionResultCalibrationBoard";
static char zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME[] = "zivid_interfaces/msg/DetectionResultFiducialMarkers";
static char zivid_interfaces__msg__MarkerShape__TYPE_NAME[] = "zivid_interfaces/msg/MarkerShape";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Event__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationCapture_Event";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Request__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationCapture_Request";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Response__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationCapture_Response";

// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationCapture__FIELD_NAME__request_message[] = "request_message";
static char zivid_interfaces__srv__HandEyeCalibrationCapture__FIELD_NAME__response_message[] = "response_message";
static char zivid_interfaces__srv__HandEyeCalibrationCapture__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationCapture__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationCapture__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__MarkerShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationCapture__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationCapture__TYPE_NAME, 46, 46},
      {zivid_interfaces__srv__HandEyeCalibrationCapture__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCapture__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
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
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultCalibrationBoard__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultFiducialMarkers__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__MarkerShape__EXPECTED_HASH, zivid_interfaces__msg__MarkerShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = zivid_interfaces__msg__MarkerShape__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[10].fields = zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Request__FIELD_NAME__robot_pose[] = "robot_pose";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationCapture_Request__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__FIELD_NAME__robot_pose, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationCapture_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__TYPE_NAME, 54, 54},
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__FIELDS, 1, 1},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
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
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__success[] = "success";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__message[] = "message";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__capture_handle[] = "capture_handle";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Response__DEFAULT_VALUE__capture_handle[] = "-1";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__detection_result_calibration_board[] = "detection_result_calibration_board";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__detection_result_fiducial_markers[] = "detection_result_fiducial_markers";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__capture_handle, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__DEFAULT_VALUE__capture_handle, 2, 2},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__detection_result_calibration_board, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__msg__DetectionResultCalibrationBoard__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELD_NAME__detection_result_fiducial_markers, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationCapture_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__MarkerShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__TYPE_NAME, 55, 55},
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__FIELDS, 5, 5},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultCalibrationBoard__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultFiducialMarkers__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__MarkerShape__EXPECTED_HASH, zivid_interfaces__msg__MarkerShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = zivid_interfaces__msg__MarkerShape__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Event__FIELD_NAME__info[] = "info";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Event__FIELD_NAME__request[] = "request";
static char zivid_interfaces__srv__HandEyeCalibrationCapture_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationCapture_Event__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationCapture_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultCalibrationBoard__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__MarkerShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__TYPE_NAME, 52, 52},
      {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
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
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultCalibrationBoard__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultFiducialMarkers__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__MarkerShape__EXPECTED_HASH, zivid_interfaces__msg__MarkerShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = zivid_interfaces__msg__MarkerShape__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The current pose of the robot.\n"
  "#\n"
  "# Note: Lengths should be given in units of meter. In the Zivid driver, this is converted internally to match the\n"
  "# default units of Zivid point clouds which are given in millimeter.\n"
  "geometry_msgs/Pose robot_pose\n"
  "\n"
  "---\n"
  "bool success\n"
  "string message\n"
  "\n"
  "# Capture handle which uniquely identifies this hand-eye capture for the current session. Returns -1 if the capture was\n"
  "# not successful. Existing handles are invalidated when a new session is started.\n"
  "int32 capture_handle -1\n"
  "\n"
  "# The result of any calibration board detection. Only filled if the current hand-eye calibration session was started\n"
  "# with a calibration board as the calibration object.\n"
  "DetectionResultCalibrationBoard detection_result_calibration_board\n"
  "\n"
  "# The result of any fiducial markers detection. Only filled if the current hand-eye calibration session was started\n"
  "# with fiducial markers as the calibration objects.\n"
  "DetectionResultFiducialMarkers detection_result_fiducial_markers";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationCapture__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationCapture__TYPE_NAME, 46, 46},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 981, 981},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Request__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Response__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationCapture_Event__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCapture__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationCapture__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *zivid_interfaces__msg__DetectionResultCalibrationBoard__get_individual_type_description_source(NULL);
    sources[7] = *zivid_interfaces__msg__DetectionResultFiducialMarkers__get_individual_type_description_source(NULL);
    sources[8] = *zivid_interfaces__msg__MarkerShape__get_individual_type_description_source(NULL);
    sources[9] = *zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_individual_type_description_source(NULL);
    sources[10] = *zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_individual_type_description_source(NULL);
    sources[11] = *zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__msg__DetectionResultCalibrationBoard__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__msg__DetectionResultFiducialMarkers__get_individual_type_description_source(NULL);
    sources[6] = *zivid_interfaces__msg__MarkerShape__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationCapture_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *zivid_interfaces__msg__DetectionResultCalibrationBoard__get_individual_type_description_source(NULL);
    sources[7] = *zivid_interfaces__msg__DetectionResultFiducialMarkers__get_individual_type_description_source(NULL);
    sources[8] = *zivid_interfaces__msg__MarkerShape__get_individual_type_description_source(NULL);
    sources[9] = *zivid_interfaces__srv__HandEyeCalibrationCapture_Request__get_individual_type_description_source(NULL);
    sources[10] = *zivid_interfaces__srv__HandEyeCalibrationCapture_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
