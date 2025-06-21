// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "zivid_interfaces/srv/detail/is_connected__struct.h"
#include "zivid_interfaces/srv/detail/is_connected__type_support.h"
#include "zivid_interfaces/srv/detail/is_connected__functions.h"
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

typedef struct _IsConnected_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _IsConnected_Request_type_support_ids_t;

static const _IsConnected_Request_type_support_ids_t _IsConnected_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _IsConnected_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _IsConnected_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _IsConnected_Request_type_support_symbol_names_t _IsConnected_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, IsConnected_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, IsConnected_Request)),
  }
};

typedef struct _IsConnected_Request_type_support_data_t
{
  void * data[2];
} _IsConnected_Request_type_support_data_t;

static _IsConnected_Request_type_support_data_t _IsConnected_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _IsConnected_Request_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_IsConnected_Request_message_typesupport_ids.typesupport_identifier[0],
  &_IsConnected_Request_message_typesupport_symbol_names.symbol_name[0],
  &_IsConnected_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t IsConnected_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_IsConnected_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &zivid_interfaces__srv__IsConnected_Request__get_type_hash,
  &zivid_interfaces__srv__IsConnected_Request__get_type_description,
  &zivid_interfaces__srv__IsConnected_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace zivid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, zivid_interfaces, srv, IsConnected_Request)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_c::IsConnected_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/is_connected__struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/is_connected__type_support.h"
// already included above
// #include "zivid_interfaces/srv/detail/is_connected__functions.h"
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

typedef struct _IsConnected_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _IsConnected_Response_type_support_ids_t;

static const _IsConnected_Response_type_support_ids_t _IsConnected_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _IsConnected_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _IsConnected_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _IsConnected_Response_type_support_symbol_names_t _IsConnected_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, IsConnected_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, IsConnected_Response)),
  }
};

typedef struct _IsConnected_Response_type_support_data_t
{
  void * data[2];
} _IsConnected_Response_type_support_data_t;

static _IsConnected_Response_type_support_data_t _IsConnected_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _IsConnected_Response_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_IsConnected_Response_message_typesupport_ids.typesupport_identifier[0],
  &_IsConnected_Response_message_typesupport_symbol_names.symbol_name[0],
  &_IsConnected_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t IsConnected_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_IsConnected_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &zivid_interfaces__srv__IsConnected_Response__get_type_hash,
  &zivid_interfaces__srv__IsConnected_Response__get_type_description,
  &zivid_interfaces__srv__IsConnected_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace zivid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, zivid_interfaces, srv, IsConnected_Response)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_c::IsConnected_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/is_connected__struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/is_connected__type_support.h"
// already included above
// #include "zivid_interfaces/srv/detail/is_connected__functions.h"
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

typedef struct _IsConnected_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _IsConnected_Event_type_support_ids_t;

static const _IsConnected_Event_type_support_ids_t _IsConnected_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _IsConnected_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _IsConnected_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _IsConnected_Event_type_support_symbol_names_t _IsConnected_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, IsConnected_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, IsConnected_Event)),
  }
};

typedef struct _IsConnected_Event_type_support_data_t
{
  void * data[2];
} _IsConnected_Event_type_support_data_t;

static _IsConnected_Event_type_support_data_t _IsConnected_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _IsConnected_Event_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_IsConnected_Event_message_typesupport_ids.typesupport_identifier[0],
  &_IsConnected_Event_message_typesupport_symbol_names.symbol_name[0],
  &_IsConnected_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t IsConnected_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_IsConnected_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &zivid_interfaces__srv__IsConnected_Event__get_type_hash,
  &zivid_interfaces__srv__IsConnected_Event__get_type_description,
  &zivid_interfaces__srv__IsConnected_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace zivid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, zivid_interfaces, srv, IsConnected_Event)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_c::IsConnected_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/is_connected__type_support.h"
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
typedef struct _IsConnected_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _IsConnected_type_support_ids_t;

static const _IsConnected_type_support_ids_t _IsConnected_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _IsConnected_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _IsConnected_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _IsConnected_type_support_symbol_names_t _IsConnected_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, zivid_interfaces, srv, IsConnected)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zivid_interfaces, srv, IsConnected)),
  }
};

typedef struct _IsConnected_type_support_data_t
{
  void * data[2];
} _IsConnected_type_support_data_t;

static _IsConnected_type_support_data_t _IsConnected_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _IsConnected_service_typesupport_map = {
  2,
  "zivid_interfaces",
  &_IsConnected_service_typesupport_ids.typesupport_identifier[0],
  &_IsConnected_service_typesupport_symbol_names.symbol_name[0],
  &_IsConnected_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t IsConnected_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_IsConnected_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &IsConnected_Request_message_type_support_handle,
  &IsConnected_Response_message_type_support_handle,
  &IsConnected_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    IsConnected
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    zivid_interfaces,
    srv,
    IsConnected
  ),
  &zivid_interfaces__srv__IsConnected__get_type_hash,
  &zivid_interfaces__srv__IsConnected__get_type_description,
  &zivid_interfaces__srv__IsConnected__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace zivid_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, zivid_interfaces, srv, IsConnected)() {
  return &::zivid_interfaces::srv::rosidl_typesupport_c::IsConnected_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
