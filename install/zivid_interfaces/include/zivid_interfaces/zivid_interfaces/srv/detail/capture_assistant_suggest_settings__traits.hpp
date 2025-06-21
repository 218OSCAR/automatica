// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:srv/CaptureAssistantSuggestSettings.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/capture_assistant_suggest_settings.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__TRAITS_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/srv/detail/capture_assistant_suggest_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'max_capture_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureAssistantSuggestSettings_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: max_capture_time
  {
    out << "max_capture_time: ";
    to_flow_style_yaml(msg.max_capture_time, out);
    out << ", ";
  }

  // member: ambient_light_frequency
  {
    out << "ambient_light_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_light_frequency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureAssistantSuggestSettings_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: max_capture_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_capture_time:\n";
    to_block_style_yaml(msg.max_capture_time, out, indentation + 2);
  }

  // member: ambient_light_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ambient_light_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_light_frequency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureAssistantSuggestSettings_Request & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>()
{
  return "zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request";
}

template<>
inline const char * name<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>()
{
  return "zivid_interfaces/srv/CaptureAssistantSuggestSettings_Request";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureAssistantSuggestSettings_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: suggested_settings
  {
    out << "suggested_settings: ";
    rosidl_generator_traits::value_to_yaml(msg.suggested_settings, out);
    out << ", ";
  }

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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureAssistantSuggestSettings_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: suggested_settings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suggested_settings: ";
    rosidl_generator_traits::value_to_yaml(msg.suggested_settings, out);
    out << "\n";
  }

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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureAssistantSuggestSettings_Response & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>()
{
  return "zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response";
}

template<>
inline const char * name<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>()
{
  return "zivid_interfaces/srv/CaptureAssistantSuggestSettings_Response";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>
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
  const CaptureAssistantSuggestSettings_Event & msg,
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
  const CaptureAssistantSuggestSettings_Event & msg,
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

inline std::string to_yaml(const CaptureAssistantSuggestSettings_Event & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event>()
{
  return "zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event";
}

template<>
inline const char * name<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event>()
{
  return "zivid_interfaces/srv/CaptureAssistantSuggestSettings_Event";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>::value && has_bounded_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>::value> {};

template<>
struct is_message<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zivid_interfaces::srv::CaptureAssistantSuggestSettings>()
{
  return "zivid_interfaces::srv::CaptureAssistantSuggestSettings";
}

template<>
inline const char * name<zivid_interfaces::srv::CaptureAssistantSuggestSettings>()
{
  return "zivid_interfaces/srv/CaptureAssistantSuggestSettings";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings>
  : std::integral_constant<
    bool,
    has_fixed_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>::value &&
    has_fixed_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>::value
  >
{
};

template<>
struct has_bounded_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings>
  : std::integral_constant<
    bool,
    has_bounded_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>::value &&
    has_bounded_size<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>::value
  >
{
};

template<>
struct is_service<zivid_interfaces::srv::CaptureAssistantSuggestSettings>
  : std::true_type
{
};

template<>
struct is_service_request<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zivid_interfaces::srv::CaptureAssistantSuggestSettings_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_ASSISTANT_SUGGEST_SETTINGS__TRAITS_HPP_
