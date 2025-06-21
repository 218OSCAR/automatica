// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cable_detection_picking:action/RunPipeline.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cable_detection_picking/action/run_pipeline.h"


#ifndef CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__STRUCT_H_
#define CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_Goal
{
  bool start;
} cable_detection_picking__action__RunPipeline_Goal;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_Goal.
typedef struct cable_detection_picking__action__RunPipeline_Goal__Sequence
{
  cable_detection_picking__action__RunPipeline_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_Result
{
  bool success;
  rosidl_runtime_c__String message;
} cable_detection_picking__action__RunPipeline_Result;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_Result.
typedef struct cable_detection_picking__action__RunPipeline_Result__Sequence
{
  cable_detection_picking__action__RunPipeline_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_step'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_Feedback
{
  rosidl_runtime_c__String current_step;
} cable_detection_picking__action__RunPipeline_Feedback;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_Feedback.
typedef struct cable_detection_picking__action__RunPipeline_Feedback__Sequence
{
  cable_detection_picking__action__RunPipeline_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "cable_detection_picking/action/detail/run_pipeline__struct.h"

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cable_detection_picking__action__RunPipeline_Goal goal;
} cable_detection_picking__action__RunPipeline_SendGoal_Request;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_SendGoal_Request.
typedef struct cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence
{
  cable_detection_picking__action__RunPipeline_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cable_detection_picking__action__RunPipeline_SendGoal_Response;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_SendGoal_Response.
typedef struct cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence
{
  cable_detection_picking__action__RunPipeline_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  cable_detection_picking__action__RunPipeline_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  cable_detection_picking__action__RunPipeline_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence request;
  cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence response;
} cable_detection_picking__action__RunPipeline_SendGoal_Event;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_SendGoal_Event.
typedef struct cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence
{
  cable_detection_picking__action__RunPipeline_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cable_detection_picking__action__RunPipeline_GetResult_Request;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_GetResult_Request.
typedef struct cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence
{
  cable_detection_picking__action__RunPipeline_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cable_detection_picking/action/detail/run_pipeline__struct.h"

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_GetResult_Response
{
  int8_t status;
  cable_detection_picking__action__RunPipeline_Result result;
} cable_detection_picking__action__RunPipeline_GetResult_Response;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_GetResult_Response.
typedef struct cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence
{
  cable_detection_picking__action__RunPipeline_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  cable_detection_picking__action__RunPipeline_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  cable_detection_picking__action__RunPipeline_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence request;
  cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence response;
} cable_detection_picking__action__RunPipeline_GetResult_Event;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_GetResult_Event.
typedef struct cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence
{
  cable_detection_picking__action__RunPipeline_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cable_detection_picking/action/detail/run_pipeline__struct.h"

/// Struct defined in action/RunPipeline in the package cable_detection_picking.
typedef struct cable_detection_picking__action__RunPipeline_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cable_detection_picking__action__RunPipeline_Feedback feedback;
} cable_detection_picking__action__RunPipeline_FeedbackMessage;

// Struct for a sequence of cable_detection_picking__action__RunPipeline_FeedbackMessage.
typedef struct cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence
{
  cable_detection_picking__action__RunPipeline_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__STRUCT_H_
