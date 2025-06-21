// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:srv/CaptureAndSave.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/srv/detail/capture_and_save__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__CaptureAndSave__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0xbc, 0x9a, 0x4c, 0x58, 0xbd, 0xc3, 0x4e,
      0x06, 0x0c, 0xed, 0xae, 0xe2, 0xfd, 0xe9, 0x5f,
      0xde, 0xfb, 0x06, 0x6a, 0x98, 0x95, 0x0f, 0x73,
      0x03, 0x89, 0xd9, 0x18, 0x16, 0xfa, 0x45, 0x3c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__CaptureAndSave_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x86, 0x0a, 0xb2, 0x43, 0xb2, 0xf0, 0xe0,
      0x65, 0x11, 0xe7, 0xee, 0xa2, 0x5b, 0x20, 0x8f,
      0x14, 0x05, 0xbe, 0xb8, 0xb5, 0xcb, 0x51, 0x4e,
      0xe6, 0x1d, 0xee, 0xa6, 0xc6, 0x32, 0x6f, 0x4c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__CaptureAndSave_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0x60, 0xdc, 0x27, 0x40, 0x69, 0x89, 0xde,
      0x0d, 0xc4, 0x24, 0x03, 0xf9, 0xc3, 0x55, 0x57,
      0x0e, 0x43, 0xf3, 0x5e, 0xe9, 0x18, 0x76, 0x4c,
      0xbe, 0x71, 0x7d, 0xb1, 0xb9, 0x79, 0xa9, 0xe4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__CaptureAndSave_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x95, 0x4a, 0x84, 0x5c, 0x06, 0xa4, 0xb4,
      0x1a, 0x77, 0x59, 0xd7, 0x58, 0x72, 0xd7, 0x6d,
      0x74, 0xed, 0x4b, 0x65, 0x5e, 0xe9, 0xd9, 0x89,
      0xf8, 0x8c, 0xa2, 0x6e, 0x64, 0x62, 0xc4, 0xbf,
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

static char zivid_interfaces__srv__CaptureAndSave__TYPE_NAME[] = "zivid_interfaces/srv/CaptureAndSave";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char zivid_interfaces__srv__CaptureAndSave_Event__TYPE_NAME[] = "zivid_interfaces/srv/CaptureAndSave_Event";
static char zivid_interfaces__srv__CaptureAndSave_Request__TYPE_NAME[] = "zivid_interfaces/srv/CaptureAndSave_Request";
static char zivid_interfaces__srv__CaptureAndSave_Response__TYPE_NAME[] = "zivid_interfaces/srv/CaptureAndSave_Response";

// Define type names, field names, and default values
static char zivid_interfaces__srv__CaptureAndSave__FIELD_NAME__request_message[] = "request_message";
static char zivid_interfaces__srv__CaptureAndSave__FIELD_NAME__response_message[] = "response_message";
static char zivid_interfaces__srv__CaptureAndSave__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__CaptureAndSave__FIELDS[] = {
  {
    {zivid_interfaces__srv__CaptureAndSave__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__CaptureAndSave_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__CaptureAndSave_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__CaptureAndSave_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__CaptureAndSave__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__CaptureAndSave__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__CaptureAndSave__TYPE_NAME, 35, 35},
      {zivid_interfaces__srv__CaptureAndSave__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__CaptureAndSave__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__srv__CaptureAndSave_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__CaptureAndSave_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__srv__CaptureAndSave_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__CaptureAndSave_Request__FIELD_NAME__file_path[] = "file_path";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__CaptureAndSave_Request__FIELDS[] = {
  {
    {zivid_interfaces__srv__CaptureAndSave_Request__FIELD_NAME__file_path, 9, 9},
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
zivid_interfaces__srv__CaptureAndSave_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__CaptureAndSave_Request__TYPE_NAME, 43, 43},
      {zivid_interfaces__srv__CaptureAndSave_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__CaptureAndSave_Response__FIELD_NAME__success[] = "success";
static char zivid_interfaces__srv__CaptureAndSave_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__CaptureAndSave_Response__FIELDS[] = {
  {
    {zivid_interfaces__srv__CaptureAndSave_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave_Response__FIELD_NAME__message, 7, 7},
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
zivid_interfaces__srv__CaptureAndSave_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__CaptureAndSave_Response__TYPE_NAME, 44, 44},
      {zivid_interfaces__srv__CaptureAndSave_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__CaptureAndSave_Event__FIELD_NAME__info[] = "info";
static char zivid_interfaces__srv__CaptureAndSave_Event__FIELD_NAME__request[] = "request";
static char zivid_interfaces__srv__CaptureAndSave_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__CaptureAndSave_Event__FIELDS[] = {
  {
    {zivid_interfaces__srv__CaptureAndSave_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__CaptureAndSave_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__CaptureAndSave_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__CaptureAndSave_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__CaptureAndSave_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__CaptureAndSave_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__CaptureAndSave_Event__TYPE_NAME, 41, 41},
      {zivid_interfaces__srv__CaptureAndSave_Event__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__CaptureAndSave_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__srv__CaptureAndSave_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__CaptureAndSave_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string file_path\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__CaptureAndSave__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__CaptureAndSave__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__CaptureAndSave_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__CaptureAndSave_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__CaptureAndSave_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__CaptureAndSave_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__CaptureAndSave_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__CaptureAndSave_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__CaptureAndSave__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__CaptureAndSave__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__srv__CaptureAndSave_Event__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__CaptureAndSave_Request__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__srv__CaptureAndSave_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__CaptureAndSave_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__CaptureAndSave_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__CaptureAndSave_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__CaptureAndSave_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__CaptureAndSave_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__CaptureAndSave_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__srv__CaptureAndSave_Request__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__CaptureAndSave_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
