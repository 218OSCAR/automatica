// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationStart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_start.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__TRAITS_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/srv/detail/hand_eye_calibration_start__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'calibration_objects'
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HandEyeCalibrationStart_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: working_directory
  {
    out << "working_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.working_directory, out);
    out << ", ";
  }

  // member: calibration_objects
  {
    out << "calibration_objects: ";
    to_flow_style_yaml(msg.calibration_objects, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandEyeCalibrationStart_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: working_directory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "working_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.working_directory, out);
    out << "\n";
  }

  // member: calibration_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_objects:\n";
    to_block_style_yaml(msg.calibration_objects, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandEyeCalibrationStart_Request & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::HandEyeCalibrationStart_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::HandEyeCalibrationStart_Request & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationStart_Request>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationStart_Request";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationStart_Request>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationStart_Request";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationStart_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationStart_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::HandEyeCalibrationStart_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HandEyeCalibrationStart_Response & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandEyeCalibrationStart_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandEyeCalibrationStart_Response & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::HandEyeCalibrationStart_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::HandEyeCalibrationStart_Response & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationStart_Response>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationStart_Response";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationStart_Response>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationStart_Response";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationStart_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationStart_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::HandEyeCalibrationStart_Response>
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
  const HandEyeCalibrationStart_Event & msg,
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
  const HandEyeCalibrationStart_Event & msg,
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

inline std::string to_yaml(const HandEyeCalibrationStart_Event & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::HandEyeCalibrationStart_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::HandEyeCalibrationStart_Event & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationStart_Event>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationStart_Event";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationStart_Event>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationStart_Event";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationStart_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationStart_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationStart_Request>::value && has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationStart_Response>::value> {};

template<>
struct is_message<zivid_interfaces::srv::HandEyeCalibrationStart_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationStart>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationStart";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationStart>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationStart";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationStart>
  : std::integral_constant<
    bool,
    has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationStart_Request>::value &&
    has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationStart_Response>::value
  >
{
};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationStart>
  : std::integral_constant<
    bool,
    has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationStart_Request>::value &&
    has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationStart_Response>::value
  >
{
};

template<>
struct is_service<zivid_interfaces::srv::HandEyeCalibrationStart>
  : std::true_type
{
};

template<>
struct is_service_request<zivid_interfaces::srv::HandEyeCalibrationStart_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zivid_interfaces::srv::HandEyeCalibrationStart_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_START__TRAITS_HPP_
