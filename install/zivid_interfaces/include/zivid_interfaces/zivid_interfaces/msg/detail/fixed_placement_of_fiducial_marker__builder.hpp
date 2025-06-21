// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfFiducialMarker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_fiducial_marker.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__BUILDER_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace msg
{

namespace builder
{

class Init_FixedPlacementOfFiducialMarker_position
{
public:
  explicit Init_FixedPlacementOfFiducialMarker_position(::zivid_interfaces::msg::FixedPlacementOfFiducialMarker & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::msg::FixedPlacementOfFiducialMarker position(::zivid_interfaces::msg::FixedPlacementOfFiducialMarker::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfFiducialMarker msg_;
};

class Init_FixedPlacementOfFiducialMarker_marker_id
{
public:
  Init_FixedPlacementOfFiducialMarker_marker_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedPlacementOfFiducialMarker_position marker_id(::zivid_interfaces::msg::FixedPlacementOfFiducialMarker::_marker_id_type arg)
  {
    msg_.marker_id = std::move(arg);
    return Init_FixedPlacementOfFiducialMarker_position(msg_);
  }

private:
  ::zivid_interfaces::msg::FixedPlacementOfFiducialMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::msg::FixedPlacementOfFiducialMarker>()
{
  return zivid_interfaces::msg::builder::Init_FixedPlacementOfFiducialMarker_marker_id();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__BUILDER_HPP_
