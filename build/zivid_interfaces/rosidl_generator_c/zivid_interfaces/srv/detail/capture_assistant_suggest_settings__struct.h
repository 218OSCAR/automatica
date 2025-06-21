// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zivid_interfaces:srv/CaptureAssistantSuggestSettings.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/capture_assistant_suggest_settings.h"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__STRUCT_H_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AMBIENT_LIGHT_FREQUENCY_NONE'.
enum
{
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request__AMBIENT_LIGHT_FREQUENCY_NONE = 0
};

/// Constant 'AMBIENT_LIGHT_FREQUENCY_50HZ'.
enum
{
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request__AMBIENT_LIGHT_FREQUENCY_50HZ = 1
};

/// Constant 'AMBIENT_LIGHT_FREQUENCY_60HZ'.
enum
{
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request__AMBIENT_LIGHT_FREQUENCY_60HZ = 2
};

// Include directives for member types
// Member 'max_capture_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/CaptureAssistantSuggestSettings in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request
{
  builtin_interfaces__msg__Duration max_capture_time;
  uint8_t ambient_light_frequency;
} zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request;

// Struct for a sequence of zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request.
typedef struct zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request__Sequence
{
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'suggested_settings'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CaptureAssistantSuggestSettings in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response
{
  rosidl_runtime_c__String suggested_settings;
  bool success;
  rosidl_runtime_c__String message;
} zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response;

// Struct for a sequence of zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response.
typedef struct zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response__Sequence
{
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Event__request__MAX_SIZE = 1
};
// response
enum
{
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CaptureAssistantSuggestSettings in the package zivid_interfaces.
typedef struct zivid_interfaces__srv__CaptureAssistantSuggestSettings_Event
{
  service_msgs__msg__ServiceEventInfo info;
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Request__Sequence request;
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Response__Sequence response;
} zivid_interfaces__srv__CaptureAssistantSuggestSettings_Event;

// Struct for a sequence of zivid_interfaces__srv__CaptureAssistantSuggestSettings_Event.
typedef struct zivid_interfaces__srv__CaptureAssistantSuggestSettings_Event__Sequence
{
  zivid_interfaces__srv__CaptureAssistantSuggestSettings_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zivid_interfaces__srv__CaptureAssistantSuggestSettings_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__STRUCT_H_
