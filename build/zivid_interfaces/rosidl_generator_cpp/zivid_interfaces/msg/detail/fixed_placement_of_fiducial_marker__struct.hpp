// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfFiducialMarker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_fiducial_marker.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__STRUCT_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__msg__FixedPlacementOfFiducialMarker __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__msg__FixedPlacementOfFiducialMarker __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedPlacementOfFiducialMarker_
{
  using Type = FixedPlacementOfFiducialMarker_<ContainerAllocator>;

  explicit FixedPlacementOfFiducialMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_id = 0l;
    }
  }

  explicit FixedPlacementOfFiducialMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_id = 0l;
    }
  }

  // field types and members
  using _marker_id_type =
    int32_t;
  _marker_id_type marker_id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__marker_id(
    const int32_t & _arg)
  {
    this->marker_id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__msg__FixedPlacementOfFiducialMarker
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__msg__FixedPlacementOfFiducialMarker
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedPlacementOfFiducialMarker_ & other) const
  {
    if (this->marker_id != other.marker_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedPlacementOfFiducialMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedPlacementOfFiducialMarker_

// alias to use template instance with default allocator
using FixedPlacementOfFiducialMarker =
  zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_FIDUCIAL_MARKER__STRUCT_HPP_
