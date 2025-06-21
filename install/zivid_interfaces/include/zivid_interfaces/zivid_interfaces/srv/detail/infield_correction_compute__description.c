// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from zivid_interfaces:srv/InfieldCorrectionCompute.idl
// generated code does not contain a copyright notice

#include "zivid_interfaces/srv/detail/infield_correction_compute__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__InfieldCorrectionCompute__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x2a, 0x4f, 0xa2, 0xfe, 0x59, 0x4d, 0x51,
      0x2f, 0xf2, 0x56, 0xf2, 0x65, 0x8a, 0x8c, 0x61,
      0x89, 0x6a, 0x1f, 0x85, 0x8f, 0xb2, 0xca, 0x1f,
      0x90, 0xe0, 0x41, 0x86, 0xcb, 0x06, 0xea, 0x7a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x52, 0xc1, 0x62, 0x9a, 0xb8, 0x4e, 0x3e,
      0x73, 0x34, 0x44, 0xda, 0xfb, 0x08, 0xb4, 0xba,
      0x8c, 0xec, 0xe9, 0x13, 0xce, 0x7d, 0x1b, 0xc6,
      0x2e, 0x2e, 0x1e, 0xa4, 0x76, 0xd2, 0xf1, 0xea,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x8c, 0x18, 0xdd, 0xe9, 0x91, 0x00, 0x3d,
      0xdf, 0xcc, 0xa8, 0xc6, 0x63, 0xb6, 0x72, 0x0d,
      0x68, 0x8d, 0xb0, 0x9a, 0x01, 0x90, 0xc6, 0x93,
      0x6d, 0x83, 0xaa, 0x38, 0x5c, 0xce, 0x0b, 0x2f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x7f, 0x13, 0x40, 0x93, 0xff, 0xef, 0xeb,
      0x6b, 0x4b, 0x9e, 0x2f, 0x01, 0xe3, 0x95, 0x87,
      0xe3, 0x09, 0xaf, 0xc6, 0x3e, 0xda, 0xaa, 0x2a,
      0x61, 0xb1, 0xab, 0x86, 0x37, 0xf8, 0x0f, 0x54,
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

static char zivid_interfaces__srv__InfieldCorrectionCompute__TYPE_NAME[] = "zivid_interfaces/srv/InfieldCorrectionCompute";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Event__TYPE_NAME[] = "zivid_interfaces/srv/InfieldCorrectionCompute_Event";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Request__TYPE_NAME[] = "zivid_interfaces/srv/InfieldCorrectionCompute_Request";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__TYPE_NAME[] = "zivid_interfaces/srv/InfieldCorrectionCompute_Response";

// Define type names, field names, and default values
static char zivid_interfaces__srv__InfieldCorrectionCompute__FIELD_NAME__request_message[] = "request_message";
static char zivid_interfaces__srv__InfieldCorrectionCompute__FIELD_NAME__response_message[] = "response_message";
static char zivid_interfaces__srv__InfieldCorrectionCompute__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__InfieldCorrectionCompute__FIELDS[] = {
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__InfieldCorrectionCompute_Request__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__InfieldCorrectionCompute_Response__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {zivid_interfaces__srv__InfieldCorrectionCompute_Event__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__InfieldCorrectionCompute__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Event__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Request__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__InfieldCorrectionCompute__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__InfieldCorrectionCompute__TYPE_NAME, 45, 45},
      {zivid_interfaces__srv__InfieldCorrectionCompute__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__InfieldCorrectionCompute__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__InfieldCorrectionCompute_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__InfieldCorrectionCompute_Request__FIELDS[] = {
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__InfieldCorrectionCompute_Request__TYPE_NAME, 53, 53},
      {zivid_interfaces__srv__InfieldCorrectionCompute_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__success[] = "success";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__message[] = "message";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__infield_correction_started[] = "infield_correction_started";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__number_of_captures[] = "number_of_captures";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__trueness_errors[] = "trueness_errors";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__average_trueness_error[] = "average_trueness_error";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__maximum_trueness_error[] = "maximum_trueness_error";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__dimension_accuracy[] = "dimension_accuracy";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__z_min[] = "z_min";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__z_max[] = "z_max";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELDS[] = {
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__infield_correction_started, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__number_of_captures, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__trueness_errors, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__average_trueness_error, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__maximum_trueness_error, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__dimension_accuracy, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__z_min, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELD_NAME__z_max, 5, 5},
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
zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__InfieldCorrectionCompute_Response__TYPE_NAME, 54, 54},
      {zivid_interfaces__srv__InfieldCorrectionCompute_Response__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char zivid_interfaces__srv__InfieldCorrectionCompute_Event__FIELD_NAME__info[] = "info";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Event__FIELD_NAME__request[] = "request";
static char zivid_interfaces__srv__InfieldCorrectionCompute_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field zivid_interfaces__srv__InfieldCorrectionCompute_Event__FIELDS[] = {
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__InfieldCorrectionCompute_Request__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {zivid_interfaces__srv__InfieldCorrectionCompute_Response__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription zivid_interfaces__srv__InfieldCorrectionCompute_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Request__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {zivid_interfaces__srv__InfieldCorrectionCompute_Event__TYPE_NAME, 51, 51},
      {zivid_interfaces__srv__InfieldCorrectionCompute_Event__FIELDS, 3, 3},
    },
    {zivid_interfaces__srv__InfieldCorrectionCompute_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "bool success\n"
  "string message\n"
  "\n"
  "# Returns true if infield correction has been started on the target node. It needs to be started before capturing and\n"
  "# computing.\n"
  "bool infield_correction_started\n"
  "\n"
  "# Number of successful infield correction captures. We recommend multiple captures with different board positions.\n"
  "int32 number_of_captures\n"
  "\n"
  "# The list of estimated local dimension trueness error for each capture in this infield correction session. The\n"
  "# dimension trueness represents the relative deviation between the measured size of the calibration object and the true\n"
  "# size of the calibration object, including the effects of any in-field correction stored on the camera at the time of\n"
  "# capture. Note that this estimate is local, i.e. only valid for the region of space very close to the calibration\n"
  "# object.\n"
  "#\n"
  "# The value is a fraction (relative trueness error). Multiply by 100 to get trueness error in percent.\n"
  "float32[] trueness_errors\n"
  "\n"
  "# The average local dimension trueness error for the captures in this session. See 'trueness_errors' for more\n"
  "# information on this measure.\n"
  "float32 average_trueness_error\n"
  "\n"
  "# The maximum local dimension trueness error for the captures in this session. See 'trueness_errors' for more\n"
  "# information on this measure.\n"
  "float32 maximum_trueness_error\n"
  "\n"
  "# The estimated dimension accuracy error obtained if the correction is applied.\n"
  "#\n"
  "# This number represents a 1-sigma (68% confidence) upper bound for dimension trueness error in the working volume\n"
  "# (z=z_min to z=z_max, across the entire field of view). In other words, it represents the expected distribution of\n"
  "# local dimension trueness measurements (see `trueness_errors`) that can be expected if measuring throughout the working\n"
  "# volume.\n"
  "#\n"
  "# The value is a fraction (relative trueness error). Multiply by 100 to get trueness in percent.\n"
  "#\n"
  "# Note that the accuracy close to where the original data was captured is likely much better than what is implied by\n"
  "# this number. This number is rather an accuracy estimate for the entire extrapolated working volume.\n"
  "float32 dimension_accuracy\n"
  "\n"
  "# The range of validity of the accuracy estimate (lower end).\n"
  "#\n"
  "# Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default\n"
  "# units of the Zivid point clouds in millimeter, to the ROS convention of meter.\n"
  "float32 z_min\n"
  "\n"
  "# The range of validity of the accuracy estimate (upper end).\n"
  "#\n"
  "# Note: Lengths are given in units of meter. In the Zivid driver, the units are automatically converted from the default\n"
  "# units of the Zivid point clouds in millimeter, to the ROS convention of meter.\n"
  "float32 z_max";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__InfieldCorrectionCompute__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__InfieldCorrectionCompute__TYPE_NAME, 45, 45},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 2645, 2645},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Request__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Response__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {zivid_interfaces__srv__InfieldCorrectionCompute_Event__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__InfieldCorrectionCompute__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__InfieldCorrectionCompute__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_individual_type_description_source(NULL);
    sources[5] = *zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *zivid_interfaces__srv__InfieldCorrectionCompute_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *zivid_interfaces__srv__InfieldCorrectionCompute_Request__get_individual_type_description_source(NULL);
    sources[4] = *zivid_interfaces__srv__InfieldCorrectionCompute_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
