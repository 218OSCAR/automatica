// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:msg/DetectionResultFiducialMarkers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_fiducial_markers.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__BUILDER_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectionResultFiducialMarkers_allowed_marker_ids
{
public:
  explicit Init_DetectionResultFiducialMarkers_allowed_marker_ids(::zivid_interfaces::msg::DetectionResultFiducialMarkers & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::msg::DetectionResultFiducialMarkers allowed_marker_ids(::zivid_interfaces::msg::DetectionResultFiducialMarkers::_allowed_marker_ids_type arg)
  {
    msg_.allowed_marker_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultFiducialMarkers msg_;
};

class Init_DetectionResultFiducialMarkers_detected_markers
{
public:
  Init_DetectionResultFiducialMarkers_detected_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionResultFiducialMarkers_allowed_marker_ids detected_markers(::zivid_interfaces::msg::DetectionResultFiducialMarkers::_detected_markers_type arg)
  {
    msg_.detected_markers = std::move(arg);
    return Init_DetectionResultFiducialMarkers_allowed_marker_ids(msg_);
  }

private:
  ::zivid_interfaces::msg::DetectionResultFiducialMarkers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::msg::DetectionResultFiducialMarkers>()
{
  return zivid_interfaces::msg::builder::Init_DetectionResultFiducialMarkers_detected_markers();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__BUILDER_HPP_
