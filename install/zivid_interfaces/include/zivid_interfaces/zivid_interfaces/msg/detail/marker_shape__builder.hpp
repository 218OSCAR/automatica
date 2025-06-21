// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/marker_shape.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__BUILDER_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zivid_interfaces/msg/detail/marker_shape__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zivid_interfaces
{

namespace msg
{

namespace builder
{

class Init_MarkerShape_pose
{
public:
  explicit Init_MarkerShape_pose(::zivid_interfaces::msg::MarkerShape & msg)
  : msg_(msg)
  {}
  ::zivid_interfaces::msg::MarkerShape pose(::zivid_interfaces::msg::MarkerShape::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zivid_interfaces::msg::MarkerShape msg_;
};

class Init_MarkerShape_id
{
public:
  explicit Init_MarkerShape_id(::zivid_interfaces::msg::MarkerShape & msg)
  : msg_(msg)
  {}
  Init_MarkerShape_pose id(::zivid_interfaces::msg::MarkerShape::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MarkerShape_pose(msg_);
  }

private:
  ::zivid_interfaces::msg::MarkerShape msg_;
};

class Init_MarkerShape_corners_in_camera_coordinates
{
public:
  explicit Init_MarkerShape_corners_in_camera_coordinates(::zivid_interfaces::msg::MarkerShape & msg)
  : msg_(msg)
  {}
  Init_MarkerShape_id corners_in_camera_coordinates(::zivid_interfaces::msg::MarkerShape::_corners_in_camera_coordinates_type arg)
  {
    msg_.corners_in_camera_coordinates = std::move(arg);
    return Init_MarkerShape_id(msg_);
  }

private:
  ::zivid_interfaces::msg::MarkerShape msg_;
};

class Init_MarkerShape_corners_in_pixel_coordinates
{
public:
  Init_MarkerShape_corners_in_pixel_coordinates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarkerShape_corners_in_camera_coordinates corners_in_pixel_coordinates(::zivid_interfaces::msg::MarkerShape::_corners_in_pixel_coordinates_type arg)
  {
    msg_.corners_in_pixel_coordinates = std::move(arg);
    return Init_MarkerShape_corners_in_camera_coordinates(msg_);
  }

private:
  ::zivid_interfaces::msg::MarkerShape msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zivid_interfaces::msg::MarkerShape>()
{
  return zivid_interfaces::msg::builder::Init_MarkerShape_corners_in_pixel_coordinates();
}

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__BUILDER_HPP_
