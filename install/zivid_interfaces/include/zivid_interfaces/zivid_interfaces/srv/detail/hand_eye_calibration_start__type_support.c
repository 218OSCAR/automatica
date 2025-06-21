// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:srv/HandEyeCalibrationStart.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/srv/detail/hand_eye_calibration_start__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_start__functions.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_start__struct.h"


// Include directives for member types
// Member `working_directory`
#include "rosidl_runtime_c/string_functions.h"
// Member `calibration_objects`
#include "zivid_interfaces/msg/hand_eye_calibration_objects.h"
// Member `calibration_objects`
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__init(message_memory);
}

void zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_fini_function(void * message_memory)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_member_array[2] = {
  {
    "working_directory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationStart_Request, working_directory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationStart_Request, calibration_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "HandEyeCalibrationStart_Request",  // message name
  2,  // number of fields
  sizeof(zivid_interfaces__srv__HandEyeCalibrationStart_Request),
  false,  // has_any_key_member_
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_member_array,  // message members
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Request)() {
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, msg, HandEyeCalibrationObjects)();
  if (!zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_start__rosidl_typesupport_introspection_c.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_start__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_start__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__init(message_memory);
}

void zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_fini_function(void * message_memory)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationStart_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationStart_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "HandEyeCalibrationStart_Response",  // message name
  2,  // number of fields
  sizeof(zivid_interfaces__srv__HandEyeCalibrationStart_Response),
  false,  // has_any_key_member_
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_member_array,  // message members
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Response)() {
  if (!zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_start__rosidl_typesupport_introspection_c.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_start__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_start__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "zivid_interfaces/srv/hand_eye_calibration_start.h"
// Member `request`
// Member `response`
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_start__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__init(message_memory);
}

void zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_fini_function(void * message_memory)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__fini(message_memory);
}

size_t zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__size_function__HandEyeCalibrationStart_Event__request(
  const void * untyped_member)
{
  const zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence * member =
    (const zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationStart_Event__request(
  const void * untyped_member, size_t index)
{
  const zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence * member =
    (const zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationStart_Event__request(
  void * untyped_member, size_t index)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence * member =
    (zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__fetch_function__HandEyeCalibrationStart_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const zivid_interfaces__srv__HandEyeCalibrationStart_Request * item =
    ((const zivid_interfaces__srv__HandEyeCalibrationStart_Request *)
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationStart_Event__request(untyped_member, index));
  zivid_interfaces__srv__HandEyeCalibrationStart_Request * value =
    (zivid_interfaces__srv__HandEyeCalibrationStart_Request *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__assign_function__HandEyeCalibrationStart_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Request * item =
    ((zivid_interfaces__srv__HandEyeCalibrationStart_Request *)
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationStart_Event__request(untyped_member, index));
  const zivid_interfaces__srv__HandEyeCalibrationStart_Request * value =
    (const zivid_interfaces__srv__HandEyeCalibrationStart_Request *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__resize_function__HandEyeCalibrationStart_Event__request(
  void * untyped_member, size_t size)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence * member =
    (zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence *)(untyped_member);
  zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence__fini(member);
  return zivid_interfaces__srv__HandEyeCalibrationStart_Request__Sequence__init(member, size);
}

size_t zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__size_function__HandEyeCalibrationStart_Event__response(
  const void * untyped_member)
{
  const zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence * member =
    (const zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationStart_Event__response(
  const void * untyped_member, size_t index)
{
  const zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence * member =
    (const zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationStart_Event__response(
  void * untyped_member, size_t index)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence * member =
    (zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__fetch_function__HandEyeCalibrationStart_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const zivid_interfaces__srv__HandEyeCalibrationStart_Response * item =
    ((const zivid_interfaces__srv__HandEyeCalibrationStart_Response *)
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationStart_Event__response(untyped_member, index));
  zivid_interfaces__srv__HandEyeCalibrationStart_Response * value =
    (zivid_interfaces__srv__HandEyeCalibrationStart_Response *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__assign_function__HandEyeCalibrationStart_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Response * item =
    ((zivid_interfaces__srv__HandEyeCalibrationStart_Response *)
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationStart_Event__response(untyped_member, index));
  const zivid_interfaces__srv__HandEyeCalibrationStart_Response * value =
    (const zivid_interfaces__srv__HandEyeCalibrationStart_Response *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__resize_function__HandEyeCalibrationStart_Event__response(
  void * untyped_member, size_t size)
{
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence * member =
    (zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence *)(untyped_member);
  zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence__fini(member);
  return zivid_interfaces__srv__HandEyeCalibrationStart_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationStart_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationStart_Event, request),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__size_function__HandEyeCalibrationStart_Event__request,  // size() function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationStart_Event__request,  // get_const(index) function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationStart_Event__request,  // get(index) function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__fetch_function__HandEyeCalibrationStart_Event__request,  // fetch(index, &value) function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__assign_function__HandEyeCalibrationStart_Event__request,  // assign(index, value) function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__resize_function__HandEyeCalibrationStart_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(zivid_interfaces__srv__HandEyeCalibrationStart_Event, response),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__size_function__HandEyeCalibrationStart_Event__response,  // size() function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_const_function__HandEyeCalibrationStart_Event__response,  // get_const(index) function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__get_function__HandEyeCalibrationStart_Event__response,  // get(index) function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__fetch_function__HandEyeCalibrationStart_Event__response,  // fetch(index, &value) function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__assign_function__HandEyeCalibrationStart_Event__response,  // assign(index, value) function pointer
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__resize_function__HandEyeCalibrationStart_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "HandEyeCalibrationStart_Event",  // message name
  3,  // number of fields
  sizeof(zivid_interfaces__srv__HandEyeCalibrationStart_Event),
  false,  // has_any_key_member_
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_member_array,  // message members
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Event)() {
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Request)();
  zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Response)();
  if (!zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_start__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_service_members = {
  "zivid_interfaces__srv",  // service namespace
  "HandEyeCalibrationStart",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_type_support_handle,
  NULL,  // response message
  // zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_type_support_handle
  NULL  // event_message
  // zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_type_support_handle
};


static rosidl_service_type_support_t zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_service_type_support_handle = {
  0,
  &zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_service_members,
  get_service_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Request__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Request_message_type_support_handle,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Response__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Response_message_type_support_handle,
  &zivid_interfaces__srv__HandEyeCalibrationStart_Event__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    HandEyeCalibrationStart
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    HandEyeCalibrationStart
  ),
  &zivid_interfaces__srv__HandEyeCalibrationStart__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationStart__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationStart__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart)(void) {
  if (!zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_service_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, HandEyeCalibrationStart_Event)()->data;
  }

  return &zivid_interfaces__srv__detail__hand_eye_calibration_start__rosidl_typesupport_introspection_c__HandEyeCalibrationStart_service_type_support_handle;
}
