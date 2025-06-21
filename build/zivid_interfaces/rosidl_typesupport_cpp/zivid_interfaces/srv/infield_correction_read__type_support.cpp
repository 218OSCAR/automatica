// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:srv/InfieldCorrectionRead.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"
#include "zivid_interfaces/srv/detail/infield_correction_read__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InfieldCorrectionRead_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InfieldCorrectionRead_Request_type_support_ids_t;

static const _InfieldCorrectionRead_Request_type_support_ids_t _InfieldCorrectionRead_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InfieldCorrectionRead_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InfieldCorrectionRead_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InfieldCorrectionRead_Request_type_support_symbol_names_t _InfieldCorrectionRead_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Request)),
  }
};

typedef struct _InfieldCorrectionRead_Request_type_support_data_t
{
  void * data[2];
} _InfieldCorrectionRead_Request_type_support_data_t;

static _InfieldCorrectionRead_Request_type_support_data_t _InfieldCorrectionRead_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InfieldCorrectionRead_Request_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_InfieldCorrectionRead_Request_message_typesupport_ids.typesupport_identifier[0],
  &_InfieldCorrectionRead_Request_message_typesupport_symbol_names.symbol_name[0],
  &_InfieldCorrectionRead_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InfieldCorrectionRead_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InfieldCorrectionRead_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionRead_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Request>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::InfieldCorrectionRead_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Request)() {
  return get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InfieldCorrectionRead_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InfieldCorrectionRead_Response_type_support_ids_t;

static const _InfieldCorrectionRead_Response_type_support_ids_t _InfieldCorrectionRead_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InfieldCorrectionRead_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InfieldCorrectionRead_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InfieldCorrectionRead_Response_type_support_symbol_names_t _InfieldCorrectionRead_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Response)),
  }
};

typedef struct _InfieldCorrectionRead_Response_type_support_data_t
{
  void * data[2];
} _InfieldCorrectionRead_Response_type_support_data_t;

static _InfieldCorrectionRead_Response_type_support_data_t _InfieldCorrectionRead_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InfieldCorrectionRead_Response_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_InfieldCorrectionRead_Response_message_typesupport_ids.typesupport_identifier[0],
  &_InfieldCorrectionRead_Response_message_typesupport_symbol_names.symbol_name[0],
  &_InfieldCorrectionRead_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InfieldCorrectionRead_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InfieldCorrectionRead_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionRead_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Response>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::InfieldCorrectionRead_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Response)() {
  return get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InfieldCorrectionRead_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InfieldCorrectionRead_Event_type_support_ids_t;

static const _InfieldCorrectionRead_Event_type_support_ids_t _InfieldCorrectionRead_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InfieldCorrectionRead_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InfieldCorrectionRead_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InfieldCorrectionRead_Event_type_support_symbol_names_t _InfieldCorrectionRead_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Event)),
  }
};

typedef struct _InfieldCorrectionRead_Event_type_support_data_t
{
  void * data[2];
} _InfieldCorrectionRead_Event_type_support_data_t;

static _InfieldCorrectionRead_Event_type_support_data_t _InfieldCorrectionRead_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InfieldCorrectionRead_Event_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_InfieldCorrectionRead_Event_message_typesupport_ids.typesupport_identifier[0],
  &_InfieldCorrectionRead_Event_message_typesupport_symbol_names.symbol_name[0],
  &_InfieldCorrectionRead_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InfieldCorrectionRead_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InfieldCorrectionRead_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionRead_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Event>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::InfieldCorrectionRead_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, InfieldCorrectionRead_Event)() {
  return get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "zivid_interfaces/srv/detail/infield_correction_read__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace zivid_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InfieldCorrectionRead_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InfieldCorrectionRead_type_support_ids_t;

static const _InfieldCorrectionRead_type_support_ids_t _InfieldCorrectionRead_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InfieldCorrectionRead_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InfieldCorrectionRead_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InfieldCorrectionRead_type_support_symbol_names_t _InfieldCorrectionRead_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, InfieldCorrectionRead)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, InfieldCorrectionRead)),
  }
};

typedef struct _InfieldCorrectionRead_type_support_data_t
{
  void * data[2];
} _InfieldCorrectionRead_type_support_data_t;

static _InfieldCorrectionRead_type_support_data_t _InfieldCorrectionRead_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InfieldCorrectionRead_service_typesupport_map = {
  2,
  "zivid_interfaces",
  &_InfieldCorrectionRead_service_typesupport_ids.typesupport_identifier[0],
  &_InfieldCorrectionRead_service_typesupport_symbol_names.symbol_name[0],
  &_InfieldCorrectionRead_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t InfieldCorrectionRead_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InfieldCorrectionRead_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<zivid_interfaces::srv::InfieldCorrectionRead>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<zivid_interfaces::srv::InfieldCorrectionRead>,
  &zivid_interfaces__srv__InfieldCorrectionRead__get_type_hash,
  &zivid_interfaces__srv__InfieldCorrectionRead__get_type_description,
  &zivid_interfaces__srv__InfieldCorrectionRead__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::InfieldCorrectionRead_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, InfieldCorrectionRead)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<zivid_interfaces::srv::InfieldCorrectionRead>();
}

#ifdef __cplusplus
}
#endif
