// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:srv/HandEyeCalibrationStart.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/srv/detail/hand_eye_calibration_start__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationStart__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xf3, 0xb7, 0x46, 0x56, 0x1c, 0x0e, 0xad,
      0x71, 0xa8, 0x61, 0xb1, 0x49, 0xc6, 0x7a, 0x6f,
      0x3d, 0x77, 0x18, 0x0d, 0xd9, 0xea, 0x3a, 0x86,
      0x93, 0xc3, 0x77, 0x17, 0x1c, 0x7f, 0xa5, 0x8a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0xf4, 0x39, 0x87, 0xd2, 0xf6, 0xec, 0x59,
      0x31, 0xeb, 0x0b, 0x1f, 0x0b, 0x8e, 0x8b, 0x14,
      0xac, 0x4b, 0x4d, 0x0c, 0x89, 0xe5, 0xb6, 0x62,
      0x5a, 0xd6, 0x47, 0xeb, 0xe6, 0x55, 0x78, 0x06,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x1f, 0xf0, 0xbb, 0x22, 0xcb, 0x80, 0x53,
      0x9a, 0x2a, 0x29, 0xda, 0x8a, 0x8a, 0x79, 0x09,
      0xd3, 0x3a, 0x9a, 0x43, 0x69, 0xba, 0x16, 0x14,
      0x7d, 0x3c, 0x25, 0x65, 0x7c, 0x96, 0xbc, 0x56,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x8b, 0x19, 0x1d, 0xf0, 0x89, 0x9b, 0x6b,
      0xa5, 0x1b, 0xe5, 0xc8, 0x57, 0x08, 0x8d, 0x27,
      0x9b, 0xf4, 0x33, 0x20, 0x94, 0x28, 0x9c, 0x37,
      0xf5, 0xbf, 0x1f, 0x8e, 0xa2, 0xf9, 0xdf, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t zivid_interfaces__msg__HandEyeCalibrationObjects__EXPECTED_HASH = {1, {
    0x92, 0x9f, 0xe7, 0x7c, 0xf4, 0x50, 0xec, 0x5e,
    0x9d, 0x74, 0xf2, 0xe5, 0x75, 0xbd, 0xff, 0xb2,
    0xfc, 0x33, 0xc0, 0x61, 0xc3, 0x44, 0x48, 0x6f,
    0x82, 0x5e, 0x47, 0x64, 0x2a, 0x8c, 0xcb, 0xc6,
  }};
#endif

static char zivid_interfaces__srv__HandEyeCalibrationStart__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationStart";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME[] = "zivid_interfaces/msg/HandEyeCalibrationObjects";
static char zivid_interfaces__srv__HandEyeCalibrationStart_Event__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationStart_Event";
static char zivid_interfaces__srv__HandEyeCalibrationStart_Request__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationStart_Request";
static char zivid_interfaces__srv__HandEyeCalibrationStart_Response__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationStart_Response";

// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationStart__FIELD_NAME__request_message[] = "request_message";
static char zivid_interfaces__srv__HandEyeCalibrationStart__FIELD_NAME__response_message[] = "response_message";
static char zivid_interfaces__srv__HandEyeCalibrationStart__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationStart__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationStart_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationStart_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationStart_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationStart__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationStart__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationStart__TYPE_NAME, 44, 44},
      {zivid_interfaces__srv__HandEyeCalibrationStart__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationStart__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationStart_Request__FIELD_NAME__working_directory[] = "working_directory";
static char zivid_interfaces__srv__HandEyeCalibrationStart_Request__FIELD_NAME__calibration_objects[] = "calibration_objects";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationStart_Request__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Request__FIELD_NAME__working_directory, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Request__FIELD_NAME__calibration_objects, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationStart_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationStart_Request__TYPE_NAME, 52, 52},
      {zivid_interfaces__srv__HandEyeCalibrationStart_Request__FIELDS, 2, 2},
    },
    {zivid_interfaces__srv__HandEyeCalibrationStart_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationStart_Response__FIELD_NAME__success[] = "success";
static char zivid_interfaces__srv__HandEyeCalibrationStart_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationStart_Response__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Response__FIELD_NAME__message, 7, 7},
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
zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationStart_Response__TYPE_NAME, 53, 53},
      {zivid_interfaces__srv__HandEyeCalibrationStart_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationStart_Event__FIELD_NAME__info[] = "info";
static char zivid_interfaces__srv__HandEyeCalibrationStart_Event__FIELD_NAME__request[] = "request";
static char zivid_interfaces__srv__HandEyeCalibrationStart_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationStart_Event__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationStart_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationStart_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationStart_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationStart_Event__TYPE_NAME, 50, 50},
      {zivid_interfaces__srv__HandEyeCalibrationStart_Event__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationStart_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Set working directory to store captures (ZDF) and robot poses (YAML) together as hand-eye captures are performed. The\n"
  "# data collected into the working directory can later be loaded and used again for calibration.\n"
  "#\n"
  "# Leave the working directory empty to not store any capture files or robot poses on disk. Any hand-eye calibration data\n"
  "# gathered will then be gone after shutting down the camera node.\n"
  "string working_directory\n"
  "\n"
  "# Specify the calibration object(s) to be used during this hand-eye calibration session.\n"
  "HandEyeCalibrationObjects calibration_objects\n"
  "\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationStart__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationStart__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 599, 599},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationStart_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationStart__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationStart__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__msg__HandEyeCalibrationObjects__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_individual_type_description_source(NULL);
    sources[6] = *zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_individual_type_description_source(NULL),
    sources[1] = *zivid_interfaces__msg__HandEyeCalibrationObjects__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__msg__HandEyeCalibrationObjects__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
