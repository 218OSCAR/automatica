// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:srv/CaptureAndDetectMarkers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/capture_and_detect_markers.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__TRAITS_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/srv/detail/capture_and_detect_markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureAndDetectMarkers_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: marker_ids
  {
    if (msg.marker_ids.size() == 0) {
      out << "marker_ids: []";
    } else {
      out << "marker_ids: [";
      size_t pending_items = msg.marker_ids.size();
      for (auto item : msg.marker_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: marker_dictionary
  {
    out << "marker_dictionary: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_dictionary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureAndDetectMarkers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: marker_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.marker_ids.size() == 0) {
      out << "marker_ids: []\n";
    } else {
      out << "marker_ids:\n";
      for (auto item : msg.marker_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: marker_dictionary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_dictionary: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_dictionary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureAndDetectMarkers_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zivid_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zivid_interfaces::srv::CaptureAndDetectMarkers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::CaptureAndDetectMarkers_Request & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>()
{
  return "zivid_interfaces::srv::CaptureAndDetectMarkers_Request";
}

template<>
inline const char * name<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>()
{
  return "zivid_interfaces/srv/CaptureAndDetectMarkers_Request";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'detection_result'
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureAndDetectMarkers_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: detection_result
  {
    out << "detection_result: ";
    to_flow_style_yaml(msg.detection_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureAndDetectMarkers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: detection_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_result:\n";
    to_block_style_yaml(msg.detection_result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureAndDetectMarkers_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zivid_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zivid_interfaces::srv::CaptureAndDetectMarkers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::CaptureAndDetectMarkers_Response & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>()
{
  return "zivid_interfaces::srv::CaptureAndDetectMarkers_Response";
}

template<>
inline const char * name<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>()
{
  return "zivid_interfaces/srv/CaptureAndDetectMarkers_Response";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureAndDetectMarkers_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureAndDetectMarkers_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureAndDetectMarkers_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace zivid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zivid_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zivid_interfaces::srv::CaptureAndDetectMarkers_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::CaptureAndDetectMarkers_Event & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::CaptureAndDetectMarkers_Event>()
{
  return "zivid_interfaces::srv::CaptureAndDetectMarkers_Event";
}

template<>
inline const char * name<zivid_interfaces::srv::CaptureAndDetectMarkers_Event>()
{
  return "zivid_interfaces/srv/CaptureAndDetectMarkers_Event";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>::value && has_bounded_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>::value> {};

template<>
struct is_message<zivid_interfaces::srv::CaptureAndDetectMarkers_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zivid_interfaces::srv::CaptureAndDetectMarkers>()
{
  return "zivid_interfaces::srv::CaptureAndDetectMarkers";
}

template<>
inline const char * name<zivid_interfaces::srv::CaptureAndDetectMarkers>()
{
  return "zivid_interfaces/srv/CaptureAndDetectMarkers";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CaptureAndDetectMarkers>
  : std::integral_constant<
    bool,
    has_fixed_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>::value &&
    has_fixed_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>::value
  >
{
};

template<>
struct has_bounded_size<zivid_interfaces::srv::CaptureAndDetectMarkers>
  : std::integral_constant<
    bool,
    has_bounded_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>::value &&
    has_bounded_size<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>::value
  >
{
};

template<>
struct is_service<zivid_interfaces::srv::CaptureAndDetectMarkers>
  : std::true_type
{
};

template<>
struct is_service_request<zivid_interfaces::srv::CaptureAndDetectMarkers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zivid_interfaces::srv::CaptureAndDetectMarkers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__TRAITS_HPP_
