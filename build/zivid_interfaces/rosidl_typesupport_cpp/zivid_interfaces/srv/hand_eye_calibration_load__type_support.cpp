// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationLoad.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_load__functions.h"
#include "zivid_interfaces/srv/detail/hand_eye_calibration_load__struct.hpp"
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

typedef struct _HandEyeCalibrationLoad_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HandEyeCalibrationLoad_Request_type_support_ids_t;

static const _HandEyeCalibrationLoad_Request_type_support_ids_t _HandEyeCalibrationLoad_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HandEyeCalibrationLoad_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HandEyeCalibrationLoad_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HandEyeCalibrationLoad_Request_type_support_symbol_names_t _HandEyeCalibrationLoad_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Request)),
  }
};

typedef struct _HandEyeCalibrationLoad_Request_type_support_data_t
{
  void * data[2];
} _HandEyeCalibrationLoad_Request_type_support_data_t;

static _HandEyeCalibrationLoad_Request_type_support_data_t _HandEyeCalibrationLoad_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HandEyeCalibrationLoad_Request_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_HandEyeCalibrationLoad_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HandEyeCalibrationLoad_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HandEyeCalibrationLoad_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HandEyeCalibrationLoad_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HandEyeCalibrationLoad_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::HandEyeCalibrationLoad_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Request)() {
  return get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>();
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
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_load__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_load__struct.hpp"
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

typedef struct _HandEyeCalibrationLoad_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HandEyeCalibrationLoad_Response_type_support_ids_t;

static const _HandEyeCalibrationLoad_Response_type_support_ids_t _HandEyeCalibrationLoad_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HandEyeCalibrationLoad_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HandEyeCalibrationLoad_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HandEyeCalibrationLoad_Response_type_support_symbol_names_t _HandEyeCalibrationLoad_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Response)),
  }
};

typedef struct _HandEyeCalibrationLoad_Response_type_support_data_t
{
  void * data[2];
} _HandEyeCalibrationLoad_Response_type_support_data_t;

static _HandEyeCalibrationLoad_Response_type_support_data_t _HandEyeCalibrationLoad_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HandEyeCalibrationLoad_Response_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_HandEyeCalibrationLoad_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HandEyeCalibrationLoad_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HandEyeCalibrationLoad_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HandEyeCalibrationLoad_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HandEyeCalibrationLoad_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::HandEyeCalibrationLoad_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Response)() {
  return get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>();
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
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_load__functions.h"
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_load__struct.hpp"
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

typedef struct _HandEyeCalibrationLoad_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HandEyeCalibrationLoad_Event_type_support_ids_t;

static const _HandEyeCalibrationLoad_Event_type_support_ids_t _HandEyeCalibrationLoad_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HandEyeCalibrationLoad_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HandEyeCalibrationLoad_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HandEyeCalibrationLoad_Event_type_support_symbol_names_t _HandEyeCalibrationLoad_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Event)),
  }
};

typedef struct _HandEyeCalibrationLoad_Event_type_support_data_t
{
  void * data[2];
} _HandEyeCalibrationLoad_Event_type_support_data_t;

static _HandEyeCalibrationLoad_Event_type_support_data_t _HandEyeCalibrationLoad_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HandEyeCalibrationLoad_Event_message_typesupport_map = {
  2,
  "zivid_interfaces",
  &_HandEyeCalibrationLoad_Event_message_typesupport_ids.typesupport_identifier[0],
  &_HandEyeCalibrationLoad_Event_message_typesupport_symbol_names.symbol_name[0],
  &_HandEyeCalibrationLoad_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HandEyeCalibrationLoad_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HandEyeCalibrationLoad_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationLoad_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Event>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::HandEyeCalibrationLoad_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad_Event)() {
  return get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Event>();
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
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_load__struct.hpp"
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

typedef struct _HandEyeCalibrationLoad_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HandEyeCalibrationLoad_type_support_ids_t;

static const _HandEyeCalibrationLoad_type_support_ids_t _HandEyeCalibrationLoad_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HandEyeCalibrationLoad_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HandEyeCalibrationLoad_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HandEyeCalibrationLoad_type_support_symbol_names_t _HandEyeCalibrationLoad_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad)),
  }
};

typedef struct _HandEyeCalibrationLoad_type_support_data_t
{
  void * data[2];
} _HandEyeCalibrationLoad_type_support_data_t;

static _HandEyeCalibrationLoad_type_support_data_t _HandEyeCalibrationLoad_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HandEyeCalibrationLoad_service_typesupport_map = {
  2,
  "zivid_interfaces",
  &_HandEyeCalibrationLoad_service_typesupport_ids.typesupport_identifier[0],
  &_HandEyeCalibrationLoad_service_typesupport_symbol_names.symbol_name[0],
  &_HandEyeCalibrationLoad_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HandEyeCalibrationLoad_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HandEyeCalibrationLoad_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<zivid_interfaces::srv::HandEyeCalibrationLoad>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<zivid_interfaces::srv::HandEyeCalibrationLoad>,
  &zivid_interfaces__srv__HandEyeCalibrationLoad__get_type_hash,
  &zivid_interfaces__srv__HandEyeCalibrationLoad__get_type_description,
  &zivid_interfaces__srv__HandEyeCalibrationLoad__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad>()
{
  return &::zivid_interfaces::srv::rosidl_typesupport_cpp::HandEyeCalibrationLoad_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, zivid_interfaces, srv, HandEyeCalibrationLoad)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<zivid_interfaces::srv::HandEyeCalibrationLoad>();
}

#ifdef __cplusplus
}
#endif
