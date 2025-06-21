// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:srv/HandEyeCalibrationLoad.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/srv/detail/hand_eye_calibration_load__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationLoad__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x46, 0xb5, 0xd7, 0x0f, 0xac, 0x41, 0x82,
      0xa6, 0xb3, 0x24, 0x19, 0xac, 0xc9, 0x5b, 0x19,
      0x85, 0x5e, 0xb1, 0xc4, 0xb8, 0x66, 0xe4, 0x83,
      0x39, 0x55, 0x2e, 0x50, 0x81, 0xe8, 0x56, 0xb8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0xb6, 0xc1, 0xda, 0x06, 0xbd, 0x1f, 0x16,
      0x3f, 0x29, 0x83, 0x0c, 0x69, 0x49, 0xae, 0x2c,
      0x8f, 0x6d, 0x93, 0xa1, 0x8b, 0x82, 0xe9, 0xf2,
      0x80, 0xf0, 0x4a, 0xa3, 0x46, 0x37, 0x99, 0xeb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x86, 0xf4, 0x4e, 0x67, 0x76, 0x67, 0x38,
      0xc7, 0xb3, 0xf6, 0x68, 0xdf, 0x4c, 0x83, 0x82,
      0x71, 0xc2, 0xa7, 0x62, 0x7a, 0xb7, 0xa2, 0x2b,
      0x57, 0xf9, 0xaa, 0x78, 0x42, 0xc8, 0xbb, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0xbd, 0xb6, 0x7e, 0xaa, 0x1d, 0xc7, 0x59,
      0x48, 0x9b, 0x87, 0x25, 0x18, 0x48, 0x7e, 0x76,
      0x43, 0x91, 0xf5, 0x47, 0x7d, 0xc7, 0xee, 0x53,
      0x53, 0x08, 0xa6, 0x10, 0x68, 0x09, 0xec, 0x39,
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

static char zivid_interfaces__srv__HandEyeCalibrationLoad__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationLoad";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME[] = "zivid_interfaces/msg/HandEyeCalibrationObjects";
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Event__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationLoad_Event";
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Request__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationLoad_Request";
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Response__TYPE_NAME[] = "zivid_interfaces/srv/HandEyeCalibrationLoad_Response";

// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationLoad__FIELD_NAME__request_message[] = "request_message";
static char zivid_interfaces__srv__HandEyeCalibrationLoad__FIELD_NAME__response_message[] = "response_message";
static char zivid_interfaces__srv__HandEyeCalibrationLoad__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationLoad__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationLoad__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationLoad__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationLoad__TYPE_NAME, 43, 43},
      {zivid_interfaces__srv__HandEyeCalibrationLoad__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationLoad__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Request__FIELD_NAME__working_directory[] = "working_directory";
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Request__FIELD_NAME__calibration_objects[] = "calibration_objects";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationLoad_Request__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__FIELD_NAME__working_directory, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__FIELD_NAME__calibration_objects, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationLoad_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {zivid_interfaces__msg__HandEyeCalibrationObjects__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__TYPE_NAME, 51, 51},
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__FIELDS, 2, 2},
    },
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Response__FIELD_NAME__success[] = "success";
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationLoad_Response__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__FIELD_NAME__message, 7, 7},
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
zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__TYPE_NAME, 52, 52},
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Event__FIELD_NAME__info[] = "info";
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Event__FIELD_NAME__request[] = "request";
static char zivid_interfaces__srv__HandEyeCalibrationLoad_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__HandEyeCalibrationLoad_Event__FIELDS[] = {
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__HandEyeCalibrationLoad_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__TYPE_NAME, 49, 49},
      {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&zivid_interfaces__msg__HandEyeCalibrationObjects__EXPECTED_HASH, zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__msg__HandEyeCalibrationObjects__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Specify the working directory to load captures (ZDF) and robot poses (YAML) from a previous hand-eye calibration\n"
  "# session. The hand-eye calibration will be started in a read-only mode. No new captures can be made, but calibration\n"
  "# can be done on the existing files in the workspace.\n"
  "string working_directory\n"
  "\n"
  "# Specify the calibration object(s) used during the hand-eye calibration session.\n"
  "HandEyeCalibrationObjects calibration_objects\n"
  "\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationLoad__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationLoad__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 474, 474},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__HandEyeCalibrationLoad_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationLoad__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationLoad__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__msg__HandEyeCalibrationObjects__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_individual_type_description_source(NULL);
    sources[6] = *zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_individual_type_description_source(NULL),
    sources[1] = *zivid_interfaces__msg__HandEyeCalibrationObjects__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__msg__HandEyeCalibrationObjects__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
