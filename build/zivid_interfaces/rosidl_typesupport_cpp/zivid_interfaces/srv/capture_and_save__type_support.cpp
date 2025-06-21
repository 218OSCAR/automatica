// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:srv/CaptureAndSave.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "zivid_interfaces/srv/detail/capture_and_save__functions.h"
#include "zivid_interfaces/srv/detail/capture_and_save__struct.hpp"
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

typedef struct _CaptureAndSave_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureAndSave_Request_type_support_ids_t;

static const _CaptureAndSave_Request_type_support_ids_t _CaptureAndSave_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, CaptureAndSave_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, CaptureAndSave_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureAndSave_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__CaptureAndSave_Request__get_type_hash,
  &zivid_interfaces__srv__CaptureAndSave_Request__get_type_description,
  &zivid_interfaces__srv__CaptureAndSave_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Request>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::CaptureAndSave_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, CaptureAndSave_Request)() {
  return get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Request>();
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
// #include "zivid_interfaces/srv/detail/capture_and_save__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__struct.hpp"
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

typedef struct _CaptureAndSave_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureAndSave_Response_type_support_ids_t;

static const _CaptureAndSave_Response_type_support_ids_t _CaptureAndSave_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, CaptureAndSave_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, CaptureAndSave_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureAndSave_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__CaptureAndSave_Response__get_type_hash,
  &zivid_interfaces__srv__CaptureAndSave_Response__get_type_description,
  &zivid_interfaces__srv__CaptureAndSave_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Response>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::CaptureAndSave_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, CaptureAndSave_Response)() {
  return get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Response>();
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
// #include "zivid_interfaces/srv/detail/capture_and_save__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/capture_and_save__struct.hpp"
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

typedef struct _CaptureAndSave_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureAndSave_Event_type_support_ids_t;

static const _CaptureAndSave_Event_type_support_ids_t _CaptureAndSave_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, CaptureAndSave_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, CaptureAndSave_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureAndSave_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__CaptureAndSave_Event__get_type_hash,
  &zivid_interfaces__srv__CaptureAndSave_Event__get_type_description,
  &zivid_interfaces__srv__CaptureAndSave_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Event>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::CaptureAndSave_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, CaptureAndSave_Event)() {
  return get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Event>();
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
// #include "zivid_interfaces/srv/detail/capture_and_save__struct.hpp"
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

typedef struct _CaptureAndSave_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureAndSave_type_support_ids_t;

static const _CaptureAndSave_type_support_ids_t _CaptureAndSave_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, CaptureAndSave)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, CaptureAndSave)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureAndSave_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::CaptureAndSave_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<zivid_interfaces::srv::CaptureAndSave>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<zivid_interfaces::srv::CaptureAndSave>,
  &zivid_interfaces__srv__CaptureAndSave__get_type_hash,
  &zivid_interfaces__srv__CaptureAndSave__get_type_description,
  &zivid_interfaces__srv__CaptureAndSave__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<zivid_interfaces::srv::CaptureAndSave>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::CaptureAndSave_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, CaptureAndSave)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<zivid_interfaces::srv::CaptureAndSave>();
}

#ifdef __cplusplus
}
#endif
