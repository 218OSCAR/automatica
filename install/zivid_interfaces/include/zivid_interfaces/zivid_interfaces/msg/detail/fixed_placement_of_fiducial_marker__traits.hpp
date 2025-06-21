// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfFiducialMarker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_fiducial_marker.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__TRAITS_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace zivid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FixedPlacementOfFiducialMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: marker_id
  {
    out << "marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FixedPlacementOfFiducialMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: marker_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FixedPlacementOfFiducialMarker & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace zivid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use zivid_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const zivid_interfaces::msg::FixedPlacementOfFiducialMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  zivid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use zivid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const zivid_interfaces::msg::FixedPlacementOfFiducialMarker & msg)
{
  return zivid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<zivid_interfaces::msg::FixedPlacementOfFiducialMarker>()
{
  return "zivid_interfaces::msg::FixedPlacementOfFiducialMarker";
}

template<>
inline const char * name<zivid_interfaces::msg::FixedPlacementOfFiducialMarker>()
{
  return "zivid_interfaces/msg/FixedPlacementOfFiducialMarker";
}

template<>
struct has_fixed_size<zivid_interfaces::msg::FixedPlacementOfFiducialMarker>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<zivid_interfaces::msg::FixedPlacementOfFiducialMarker>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<zivid_interfaces::msg::FixedPlacementOfFiducialMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__TRAITS_HPP_
