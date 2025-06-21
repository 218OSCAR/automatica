// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zivid_interfaces:srv/InfieldCorrectionRead.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zivid_interfaces/srv/detail/infield_correction_read__rosidl_typesupport_introspection_c.h"
#include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"
#include "zivid_interfaces/srv/detail/infield_correction_read__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__InfieldCorrectionRead_Request__init(message_memory);
}

void zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_fini_function(void * message_memory)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "InfieldCorrectionRead_Request",  // message name
  1,  // number of fields
  sizeof(zivid_interfaces__srv__InfieldCorrectionRead_Request),
  false,  // has_any_key_member_
  zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_member_array,  // message members
  zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Request)() {
  if (!zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__rosidl_typesupport_introspection_c.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_correction_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `camera_correction_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__InfieldCorrectionRead_Response__init(message_memory);
}

void zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_fini_function(void * message_memory)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Response, success),  // bytes offset in struct
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
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_camera_correction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Response, has_camera_correction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_correction_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Response, camera_correction_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "InfieldCorrectionRead_Response",  // message name
  4,  // number of fields
  sizeof(zivid_interfaces__srv__InfieldCorrectionRead_Response),
  false,  // has_any_key_member_
  zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_member_array,  // message members
  zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Response)() {
  zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__rosidl_typesupport_introspection_c.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "zivid_interfaces/srv/infield_correction_read.h"
// Member `request`
// Member `response`
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zivid_interfaces__srv__InfieldCorrectionRead_Event__init(message_memory);
}

void zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_fini_function(void * message_memory)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Event__fini(message_memory);
}

size_t zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__size_function__InfieldCorrectionRead_Event__request(
  const void * untyped_member)
{
  const zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence * member =
    (const zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_const_function__InfieldCorrectionRead_Event__request(
  const void * untyped_member, size_t index)
{
  const zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence * member =
    (const zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_function__InfieldCorrectionRead_Event__request(
  void * untyped_member, size_t index)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence * member =
    (zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__fetch_function__InfieldCorrectionRead_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const zivid_interfaces__srv__InfieldCorrectionRead_Request * item =
    ((const zivid_interfaces__srv__InfieldCorrectionRead_Request *)
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_const_function__InfieldCorrectionRead_Event__request(untyped_member, index));
  zivid_interfaces__srv__InfieldCorrectionRead_Request * value =
    (zivid_interfaces__srv__InfieldCorrectionRead_Request *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__assign_function__InfieldCorrectionRead_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Request * item =
    ((zivid_interfaces__srv__InfieldCorrectionRead_Request *)
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_function__InfieldCorrectionRead_Event__request(untyped_member, index));
  const zivid_interfaces__srv__InfieldCorrectionRead_Request * value =
    (const zivid_interfaces__srv__InfieldCorrectionRead_Request *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__resize_function__InfieldCorrectionRead_Event__request(
  void * untyped_member, size_t size)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence * member =
    (zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence *)(untyped_member);
  zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence__fini(member);
  return zivid_interfaces__srv__InfieldCorrectionRead_Request__Sequence__init(member, size);
}

size_t zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__size_function__InfieldCorrectionRead_Event__response(
  const void * untyped_member)
{
  const zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence * member =
    (const zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_const_function__InfieldCorrectionRead_Event__response(
  const void * untyped_member, size_t index)
{
  const zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence * member =
    (const zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_function__InfieldCorrectionRead_Event__response(
  void * untyped_member, size_t index)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence * member =
    (zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__fetch_function__InfieldCorrectionRead_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const zivid_interfaces__srv__InfieldCorrectionRead_Response * item =
    ((const zivid_interfaces__srv__InfieldCorrectionRead_Response *)
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_const_function__InfieldCorrectionRead_Event__response(untyped_member, index));
  zivid_interfaces__srv__InfieldCorrectionRead_Response * value =
    (zivid_interfaces__srv__InfieldCorrectionRead_Response *)(untyped_value);
  *value = *item;
}

void zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__assign_function__InfieldCorrectionRead_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Response * item =
    ((zivid_interfaces__srv__InfieldCorrectionRead_Response *)
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_function__InfieldCorrectionRead_Event__response(untyped_member, index));
  const zivid_interfaces__srv__InfieldCorrectionRead_Response * value =
    (const zivid_interfaces__srv__InfieldCorrectionRead_Response *)(untyped_value);
  *item = *value;
}

bool zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__resize_function__InfieldCorrectionRead_Event__response(
  void * untyped_member, size_t size)
{
  zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence * member =
    (zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence *)(untyped_member);
  zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence__fini(member);
  return zivid_interfaces__srv__InfieldCorrectionRead_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Event, info),  // bytes offset in struct
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
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Event, request),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__size_function__InfieldCorrectionRead_Event__request,  // size() function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_const_function__InfieldCorrectionRead_Event__request,  // get_const(index) function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_function__InfieldCorrectionRead_Event__request,  // get(index) function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__fetch_function__InfieldCorrectionRead_Event__request,  // fetch(index, &value) function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__assign_function__InfieldCorrectionRead_Event__request,  // assign(index, value) function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__resize_function__InfieldCorrectionRead_Event__request  // resize(index) function pointer
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
    offsetof(zivid_interfaces__srv__InfieldCorrectionRead_Event, response),  // bytes offset in struct
    NULL,  // default value
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__size_function__InfieldCorrectionRead_Event__response,  // size() function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_const_function__InfieldCorrectionRead_Event__response,  // get_const(index) function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__get_function__InfieldCorrectionRead_Event__response,  // get(index) function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__fetch_function__InfieldCorrectionRead_Event__response,  // fetch(index, &value) function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__assign_function__InfieldCorrectionRead_Event__response,  // assign(index, value) function pointer
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__resize_function__InfieldCorrectionRead_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_members = {
  "zivid_interfaces__srv",  // message namespace
  "InfieldCorrectionRead_Event",  // message name
  3,  // number of fields
  sizeof(zivid_interfaces__srv__InfieldCorrectionRead_Event),
  false,  // has_any_key_member_
  zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_member_array,  // message members
  zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_type_support_handle = {
  0,
  &zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_members,
  get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Event)() {
  zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Request)();
  zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Response)();
  if (!zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "zivid_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_members = {
  "zivid_interfaces__srv",  // service namespace
  "InfieldCorrectionRead",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle,
  NULL,  // response message
  // zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle
  NULL  // event_message
  // zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle
};


static rosidl_service_type_support_t zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle = {
  0,
  &zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_members,
  get_service_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Request_message_type_support_handle,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Response_message_type_support_handle,
  &zivid_interfaces__srv__InfieldCorrectionRead_Event__rosidl_typesupport_introspection_c__InfieldCorrectionRead_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    InfieldCorrectionRead
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    InfieldCorrectionRead
  ),
  &zivid_interfaces__srv__InfieldCorrectionRead__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionRead__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionRead__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zivid_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead)(void) {
  if (!zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle.typesupport_identifier) {
    zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, InfieldCorrectionRead_Event)()->data;
  }

  return &zivid_interfaces__srv__detail__infield_correction_read__rosidl_typesupport_introspection_c__InfieldCorrectionRead_service_type_support_handle;
}
