// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/marker_shape.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__STRUCT_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'corners_in_pixel_coordinates'
// Member 'corners_in_camera_coordinates'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__msg__MarkerShape __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__msg__MarkerShape __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarkerShape_
{
  using Type = MarkerShape_<ContainerAllocator>;

  explicit MarkerShape_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->corners_in_pixel_coordinates.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_init});
      this->corners_in_camera_coordinates.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_init});
      this->id = 0l;
    }
  }

  explicit MarkerShape_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : corners_in_pixel_coordinates(_alloc),
    corners_in_camera_coordinates(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->corners_in_pixel_coordinates.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_alloc, _init});
      this->corners_in_camera_coordinates.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_alloc, _init});
      this->id = 0l;
    }
  }

  // field types and members
  using _corners_in_pixel_coordinates_type =
    std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 4>;
  _corners_in_pixel_coordinates_type corners_in_pixel_coordinates;
  using _corners_in_camera_coordinates_type =
    std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 4>;
  _corners_in_camera_coordinates_type corners_in_camera_coordinates;
  using _id_type =
    int32_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__corners_in_pixel_coordinates(
    const std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 4> & _arg)
  {
    this->corners_in_pixel_coordinates = _arg;
    return *this;
  }
  Type & set__corners_in_camera_coordinates(
    const std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 4> & _arg)
  {
    this->corners_in_camera_coordinates = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::msg::MarkerShape_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::msg::MarkerShape_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::msg::MarkerShape_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::msg::MarkerShape_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::MarkerShape_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::MarkerShape_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::MarkerShape_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::MarkerShape_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::msg::MarkerShape_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::msg::MarkerShape_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__msg__MarkerShape
    std::shared_ptr<zivid_interfaces::msg::MarkerShape_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__msg__MarkerShape
    std::shared_ptr<zivid_interfaces::msg::MarkerShape_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkerShape_ & other) const
  {
    if (this->corners_in_pixel_coordinates != other.corners_in_pixel_coordinates) {
      return false;
    }
    if (this->corners_in_camera_coordinates != other.corners_in_camera_coordinates) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkerShape_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkerShape_

// alias to use template instance with default allocator
using MarkerShape =
  zivid_interfaces::msg::MarkerShape_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__MARKER_SHAPE__STRUCT_HPP_
