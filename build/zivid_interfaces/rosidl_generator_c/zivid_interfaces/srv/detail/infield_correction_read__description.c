// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:srv/InfieldCorrectionRead.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__InfieldCorrectionRead__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x59, 0xe3, 0x0b, 0xfb, 0xfa, 0xb7, 0x86,
      0x80, 0x32, 0x19, 0xb3, 0xb3, 0x50, 0xf5, 0xc7,
      0x0e, 0x92, 0xd0, 0x63, 0x2e, 0x86, 0xc7, 0x71,
      0xa6, 0xf6, 0xac, 0x65, 0x06, 0x94, 0x3d, 0x37,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0xc0, 0xdd, 0x4e, 0xb4, 0x29, 0xb1, 0x08,
      0x90, 0x18, 0x22, 0xf7, 0x2f, 0x34, 0x56, 0x63,
      0x2e, 0x90, 0xc5, 0xd2, 0xb1, 0xb2, 0xeb, 0xb5,
      0x65, 0x0b, 0xfe, 0xf5, 0xaf, 0x76, 0xd0, 0xea,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0x7c, 0xa3, 0x2c, 0xef, 0xcc, 0x66, 0x70,
      0xc3, 0x06, 0x17, 0xbe, 0x31, 0x6d, 0xb3, 0xb4,
      0x92, 0x49, 0xf5, 0xfd, 0xa5, 0x5f, 0x2e, 0x3b,
      0x15, 0x3b, 0x27, 0x4d, 0x14, 0x51, 0x2d, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0xbd, 0xe9, 0x45, 0x91, 0x42, 0xd4, 0xd1,
      0xb3, 0xfe, 0x3a, 0x53, 0x4f, 0xb2, 0xa2, 0x2d,
      0x9d, 0xb8, 0x94, 0x1d, 0xd5, 0xb9, 0x66, 0x65,
      0x18, 0xd3, 0x36, 0xc0, 0xff, 0x92, 0xce, 0x2e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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
#endif

static char zivid_interfaces__srv__InfieldCorrectionRead__TYPE_NAME[] = "zivid_interfaces/srv/InfieldCorrectionRead";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char zivid_interfaces__srv__InfieldCorrectionRead_Event__TYPE_NAME[] = "zivid_interfaces/srv/InfieldCorrectionRead_Event";
static char zivid_interfaces__srv__InfieldCorrectionRead_Request__TYPE_NAME[] = "zivid_interfaces/srv/InfieldCorrectionRead_Request";
static char zivid_interfaces__srv__InfieldCorrectionRead_Response__TYPE_NAME[] = "zivid_interfaces/srv/InfieldCorrectionRead_Response";

// Define type names, field names, and default values
static char zivid_interfaces__srv__InfieldCorrectionRead__FIELD_NAME__request_message[] = "request_message";
static char zivid_interfaces__srv__InfieldCorrectionRead__FIELD_NAME__response_message[] = "response_message";
static char zivid_interfaces__srv__InfieldCorrectionRead__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__InfieldCorrectionRead__FIELDS[] = {
  {
    {zivid_interfaces__srv__InfieldCorrectionRead__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__InfieldCorrectionRead_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__InfieldCorrectionRead_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__InfieldCorrectionRead_Event__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__InfieldCorrectionRead__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Event__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__InfieldCorrectionRead__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__InfieldCorrectionRead__TYPE_NAME, 42, 42},
      {zivid_interfaces__srv__InfieldCorrectionRead__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__InfieldCorrectionRead__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__InfieldCorrectionRead_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__InfieldCorrectionRead_Request__FIELDS[] = {
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__InfieldCorrectionRead_Request__TYPE_NAME, 50, 50},
      {zivid_interfaces__srv__InfieldCorrectionRead_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELD_NAME__success[] = "success";
static char zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELD_NAME__message[] = "message";
static char zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELD_NAME__has_camera_correction[] = "has_camera_correction";
static char zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELD_NAME__camera_correction_timestamp[] = "camera_correction_timestamp";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELDS[] = {
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELD_NAME__has_camera_correction, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELD_NAME__camera_correction_timestamp, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__InfieldCorrectionRead_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__InfieldCorrectionRead_Response__TYPE_NAME, 51, 51},
      {zivid_interfaces__srv__InfieldCorrectionRead_Response__FIELDS, 4, 4},
    },
    {zivid_interfaces__srv__InfieldCorrectionRead_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__InfieldCorrectionRead_Event__FIELD_NAME__info[] = "info";
static char zivid_interfaces__srv__InfieldCorrectionRead_Event__FIELD_NAME__request[] = "request";
static char zivid_interfaces__srv__InfieldCorrectionRead_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__InfieldCorrectionRead_Event__FIELDS[] = {
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__InfieldCorrectionRead_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__InfieldCorrectionRead_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__InfieldCorrectionRead_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionRead_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__InfieldCorrectionRead_Event__TYPE_NAME, 48, 48},
      {zivid_interfaces__srv__InfieldCorrectionRead_Event__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__InfieldCorrectionRead_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "bool success\n"
  "string message\n"
  "\n"
  "# True if the camera has a stored correction.\n"
  "bool has_camera_correction\n"
  "\n"
  "# The calendar time of the current camera correction, or zero if no correction is stored on the camera.\n"
  "builtin_interfaces/Time camera_correction_timestamp";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__InfieldCorrectionRead__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__InfieldCorrectionRead__TYPE_NAME, 42, 42},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 263, 263},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__InfieldCorrectionRead_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__InfieldCorrectionRead_Request__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__InfieldCorrectionRead_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__InfieldCorrectionRead_Response__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__InfieldCorrectionRead_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__InfieldCorrectionRead_Event__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__InfieldCorrectionRead__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__InfieldCorrectionRead__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__srv__InfieldCorrectionRead_Event__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__InfieldCorrectionRead_Request__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__srv__InfieldCorrectionRead_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__InfieldCorrectionRead_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__InfieldCorrectionRead_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__InfieldCorrectionRead_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__srv__InfieldCorrectionRead_Request__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__InfieldCorrectionRead_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
