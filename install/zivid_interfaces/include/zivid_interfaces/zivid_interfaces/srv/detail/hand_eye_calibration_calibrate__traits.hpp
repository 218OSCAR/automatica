// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_calibrate.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__TRAITS_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/srv/detail/hand_eye_calibration_calibrate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fixed_objects'
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HandEyeCalibrationCalibrate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: configuration
  {
    out << "configuration: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration, out);
    out << ", ";
  }

  // member: capture_handles
  {
    if (msg.capture_handles.size() == 0) {
      out << "capture_handles: []";
    } else {
      out << "capture_handles: [";
      size_t pending_items = msg.capture_handles.size();
      for (auto item : msg.capture_handles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fixed_objects
  {
    out << "fixed_objects: ";
    to_flow_style_yaml(msg.fixed_objects, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandEyeCalibrationCalibrate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "configuration: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration, out);
    out << "\n";
  }

  // member: capture_handles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.capture_handles.size() == 0) {
      out << "capture_handles: []\n";
    } else {
      out << "capture_handles:\n";
      for (auto item : msg.capture_handles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fixed_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_objects:\n";
    to_block_style_yaml(msg.fixed_objects, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandEyeCalibrationCalibrate_Request & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationCalibrate_Request";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"
// Member 'residuals'
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__traits.hpp"

namespace zivid_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HandEyeCalibrationCalibrate_Response & msg,
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

  // member: transform
  {
    out << "transform: ";
    to_flow_style_yaml(msg.transform, out);
    out << ", ";
  }

  // member: residuals
  {
    if (msg.residuals.size() == 0) {
      out << "residuals: []";
    } else {
      out << "residuals: [";
      size_t pending_items = msg.residuals.size();
      for (auto item : msg.residuals) {
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
  const HandEyeCalibrationCalibrate_Response & msg,
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

  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform:\n";
    to_block_style_yaml(msg.transform, out, indentation + 2);
  }

  // member: residuals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.residuals.size() == 0) {
      out << "residuals: []\n";
    } else {
      out << "residuals:\n";
      for (auto item : msg.residuals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandEyeCalibrationCalibrate_Response & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationCalibrate_Response";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>
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
  const HandEyeCalibrationCalibrate_Event & msg,
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
  const HandEyeCalibrationCalibrate_Event & msg,
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

inline std::string to_yaml(const HandEyeCalibrationCalibrate_Event & msg, bool use_flow_style = false)
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
  const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event & msg)
{
  return zivid_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationCalibrate_Event";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>::value && has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>::value> {};

template<>
struct is_message<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<zivid_interfaces::srv::HandEyeCalibrationCalibrate>()
{
  return "zivid_interfaces::srv::HandEyeCalibrationCalibrate";
}

template<>
inline const char * name<zivid_interfaces::srv::HandEyeCalibrationCalibrate>()
{
  return "zivid_interfaces/srv/HandEyeCalibrationCalibrate";
}

template<>
struct has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate>
  : std::integral_constant<
    bool,
    has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>::value &&
    has_fixed_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>::value
  >
{
};

template<>
struct has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate>
  : std::integral_constant<
    bool,
    has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>::value &&
    has_bounded_size<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>::value
  >
{
};

template<>
struct is_service<zivid_interfaces::srv::HandEyeCalibrationCalibrate>
  : std::true_type
{
};

template<>
struct is_service_request<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__TRAITS_HPP_
