// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:srv/CaptureAndDetectMarkers.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/srv/detail/capture_and_detect_markers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__CaptureAndDetectMarkers__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0x4d, 0xc3, 0x85, 0xa9, 0xe1, 0xe7, 0x5a,
      0x40, 0xa7, 0xb3, 0x21, 0x0d, 0x7f, 0xd7, 0x19,
      0xf7, 0xa0, 0x68, 0xf2, 0xea, 0xd7, 0x01, 0xd9,
      0xa6, 0x1c, 0x0e, 0x5f, 0xf3, 0xf4, 0x1a, 0x8c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0xf2, 0xac, 0x80, 0xcd, 0x7b, 0x5e, 0xec,
      0x69, 0xb4, 0xa9, 0x6f, 0x9c, 0x22, 0x11, 0x82,
      0x53, 0x84, 0x42, 0xc5, 0xc2, 0xaa, 0xb3, 0x7d,
      0xc5, 0x9d, 0x0d, 0xa3, 0xa5, 0x0b, 0x1d, 0x75,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0xa5, 0x0a, 0xa4, 0xc4, 0x2d, 0x01, 0xc3,
      0x6f, 0x78, 0x8f, 0xf3, 0x9a, 0x8b, 0x51, 0xfe,
      0x13, 0x91, 0x0d, 0xb2, 0x4f, 0x1e, 0x1e, 0xec,
      0xab, 0x87, 0xa3, 0xee, 0xb7, 0x56, 0x79, 0x13,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__CaptureAndDetectMarkers_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x0d, 0x62, 0x8a, 0x2a, 0x46, 0xe8, 0x0d,
      0xaa, 0x7d, 0x9e, 0x1c, 0xd5, 0xd4, 0x31, 0x82,
      0x65, 0x03, 0x4d, 0x77, 0x7e, 0xac, 0xb6, 0x66,
      0xc3, 0x6f, 0x1e, 0x32, 0xa5, 0x93, 0x22, 0x5b,
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

static char zivid_interfaces__srv__CaptureAndDetectMarkers__TYPE_NAME[] = "zivid_interfaces/srv/CaptureAndDetectMarkers";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME[] = "zivid_interfaces/msg/DetectionResultFiducialMarkers";
static char zivid_interfaces__msg__MarkerShape__TYPE_NAME[] = "zivid_interfaces/msg/MarkerShape";
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Event__TYPE_NAME[] = "zivid_interfaces/srv/CaptureAndDetectMarkers_Event";
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Request__TYPE_NAME[] = "zivid_interfaces/srv/CaptureAndDetectMarkers_Request";
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Response__TYPE_NAME[] = "zivid_interfaces/srv/CaptureAndDetectMarkers_Response";

// Define type names, field names, and default values
static char zivid_interfaces__srv__CaptureAndDetectMarkers__FIELD_NAME__request_message[] = "request_message";
static char zivid_interfaces__srv__CaptureAndDetectMarkers__FIELD_NAME__response_message[] = "response_message";
static char zivid_interfaces__srv__CaptureAndDetectMarkers__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__CaptureAndDetectMarkers__FIELDS[] = {
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__CaptureAndDetectMarkers__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__MarkerShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__CaptureAndDetectMarkers__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__CaptureAndDetectMarkers__TYPE_NAME, 44, 44},
      {zivid_interfaces__srv__CaptureAndDetectMarkers__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__CaptureAndDetectMarkers__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
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
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultFiducialMarkers__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__MarkerShape__EXPECTED_HASH, zivid_interfaces__msg__MarkerShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = zivid_interfaces__msg__MarkerShape__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = zivid_interfaces__srv__CaptureAndDetectMarkers_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Request__FIELD_NAME__marker_ids[] = "marker_ids";
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Request__FIELD_NAME__marker_dictionary[] = "marker_dictionary";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__CaptureAndDetectMarkers_Request__FIELDS[] = {
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__FIELD_NAME__marker_ids, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__FIELD_NAME__marker_dictionary, 17, 17},
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
zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__TYPE_NAME, 52, 52},
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Response__FIELD_NAME__success[] = "success";
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Response__FIELD_NAME__message[] = "message";
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Response__FIELD_NAME__detection_result[] = "detection_result";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__CaptureAndDetectMarkers_Response__FIELDS[] = {
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__FIELD_NAME__detection_result, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__CaptureAndDetectMarkers_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__MarkerShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__TYPE_NAME, 53, 53},
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultFiducialMarkers__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__MarkerShape__EXPECTED_HASH, zivid_interfaces__msg__MarkerShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__msg__MarkerShape__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Event__FIELD_NAME__info[] = "info";
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Event__FIELD_NAME__request[] = "request";
static char zivid_interfaces__srv__CaptureAndDetectMarkers_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__CaptureAndDetectMarkers_Event__FIELDS[] = {
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__CaptureAndDetectMarkers_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {zivid_interfaces__msg__DetectionResultFiducialMarkers__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__MarkerShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__CaptureAndDetectMarkers_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__TYPE_NAME, 50, 50},
      {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
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
    assert(0 == memcmp(&zivid_interfaces__msg__DetectionResultFiducialMarkers__EXPECTED_HASH, zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = zivid_interfaces__msg__DetectionResultFiducialMarkers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__MarkerShape__EXPECTED_HASH, zivid_interfaces__msg__MarkerShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = zivid_interfaces__msg__MarkerShape__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A list of the IDs of markers to be detected.\n"
  "int32[] marker_ids\n"
  "\n"
  "# The marker dictionary that describes the appearance of each marker. Example: \"aruco4x4_50\".\n"
  "string marker_dictionary\n"
  "\n"
  "---\n"
  "bool success\n"
  "string message\n"
  "\n"
  "# The result of the fiducial markers detection.\n"
  "DetectionResultFiducialMarkers detection_result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__CaptureAndDetectMarkers__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__CaptureAndDetectMarkers__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 316, 316},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__CaptureAndDetectMarkers_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__CaptureAndDetectMarkers_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__CaptureAndDetectMarkers__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__CaptureAndDetectMarkers__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *zivid_interfaces__msg__DetectionResultFiducialMarkers__get_individual_type_description_source(NULL);
    sources[7] = *zivid_interfaces__msg__MarkerShape__get_individual_type_description_source(NULL);
    sources[8] = *zivid_interfaces__srv__CaptureAndDetectMarkers_Event__get_individual_type_description_source(NULL);
    sources[9] = *zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_individual_type_description_source(NULL);
    sources[10] = *zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__msg__DetectionResultFiducialMarkers__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__msg__MarkerShape__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__CaptureAndDetectMarkers_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__CaptureAndDetectMarkers_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *zivid_interfaces__msg__DetectionResultFiducialMarkers__get_individual_type_description_source(NULL);
    sources[7] = *zivid_interfaces__msg__MarkerShape__get_individual_type_description_source(NULL);
    sources[8] = *zivid_interfaces__srv__CaptureAndDetectMarkers_Request__get_individual_type_description_source(NULL);
    sources[9] = *zivid_interfaces__srv__CaptureAndDetectMarkers_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
