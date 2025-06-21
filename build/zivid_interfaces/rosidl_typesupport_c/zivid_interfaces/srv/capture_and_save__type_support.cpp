// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:srv/CaptureAndSave.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "zivid_interfaces/srv/detail/capture_and_save__struct.h"
#include "zivid_interfaces/srv/detail/capture_and_save__type_support.h"
#include "zivid_interfaces/srv/detail/capture_and_save__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CaptureAndSave_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureAndSave_Request_type_support_ids_t;

static const _CaptureAndSave_Request_type_support_ids_t _CaptureAndSave_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CaptureAndSave_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureAndSave_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureAndSave_Request_type_support_symbol_names_t _CaptureAndSave_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndSave_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, CaptureAndSave_Request)),
  }
};

typedef struct _CaptureAndSave_Request_type_support_data_t
{
  void * data[2];
} _CaptureAndSave_Request_type_support_data_t;

static _CaptureAndSave_Request_type_support_data_t _CaptureAndSave_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureAndSave_Request_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_CaptureAndSave_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CaptureAndSave_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CaptureAndSave_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CaptureAndSave_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureAndSave_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &zivid_interfaces__srv__CaptureAndSave_Request__get_type_hash,
  &zivid_interfaces__srv__CaptureAndSave_Request__get_type_description,
  &zivid_interfaces__srv__CaptureAndSave_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace zivid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, zivid_interfaces, srv, CaptureAndSave_Request)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_c::CaptureAndSave_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__type_support.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CaptureAndSave_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureAndSave_Response_type_support_ids_t;

static const _CaptureAndSave_Response_type_support_ids_t _CaptureAndSave_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CaptureAndSave_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureAndSave_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureAndSave_Response_type_support_symbol_names_t _CaptureAndSave_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndSave_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, CaptureAndSave_Response)),
  }
};

typedef struct _CaptureAndSave_Response_type_support_data_t
{
  void * data[2];
} _CaptureAndSave_Response_type_support_data_t;

static _CaptureAndSave_Response_type_support_data_t _CaptureAndSave_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureAndSave_Response_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_CaptureAndSave_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CaptureAndSave_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CaptureAndSave_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CaptureAndSave_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureAndSave_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &zivid_interfaces__srv__CaptureAndSave_Response__get_type_hash,
  &zivid_interfaces__srv__CaptureAndSave_Response__get_type_description,
  &zivid_interfaces__srv__CaptureAndSave_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace zivid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, zivid_interfaces, srv, CaptureAndSave_Response)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_c::CaptureAndSave_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__type_support.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CaptureAndSave_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureAndSave_Event_type_support_ids_t;

static const _CaptureAndSave_Event_type_support_ids_t _CaptureAndSave_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CaptureAndSave_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureAndSave_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureAndSave_Event_type_support_symbol_names_t _CaptureAndSave_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndSave_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, CaptureAndSave_Event)),
  }
};

typedef struct _CaptureAndSave_Event_type_support_data_t
{
  void * data[2];
} _CaptureAndSave_Event_type_support_data_t;

static _CaptureAndSave_Event_type_support_data_t _CaptureAndSave_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureAndSave_Event_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_CaptureAndSave_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CaptureAndSave_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CaptureAndSave_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CaptureAndSave_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureAndSave_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &zivid_interfaces__srv__CaptureAndSave_Event__get_type_hash,
  &zivid_interfaces__srv__CaptureAndSave_Event__get_type_description,
  &zivid_interfaces__srv__CaptureAndSave_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace zivid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, zivid_interfaces, srv, CaptureAndSave_Event)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_c::CaptureAndSave_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _CaptureAndSave_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureAndSave_type_support_ids_t;

static const _CaptureAndSave_type_support_ids_t _CaptureAndSave_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CaptureAndSave_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureAndSave_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureAndSave_type_support_symbol_names_t _CaptureAndSave_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, CaptureAndSave)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, CaptureAndSave)),
  }
};

typedef struct _CaptureAndSave_type_support_data_t
{
  void * data[2];
} _CaptureAndSave_type_support_data_t;

static _CaptureAndSave_type_support_data_t _CaptureAndSave_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureAndSave_service_typesupport_map = {
  2,
  "zivid_interfaces",
  &_CaptureAndSave_service_typesupport_ids.typesupport_identifier[0],
  &_CaptureAndSave_service_typesupport_symbol_names.symbol_name[0],
  &_CaptureAndSave_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CaptureAndSave_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureAndSave_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CaptureAndSave_Request_message_type_support_handle,
  &CaptureAndSave_Response_message_type_support_handle,
  &CaptureAndSave_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    CaptureAndSave
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    CaptureAndSave
  ),
  &zivid_interfaces__srv__CaptureAndSave__get_type_hash,
  &zivid_interfaces__srv__CaptureAndSave__get_type_description,
  &zivid_interfaces__srv__CaptureAndSave__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace zivid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, zivid_interfaces, srv, CaptureAndSave)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_c::CaptureAndSave_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
