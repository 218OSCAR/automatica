// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_calibration_board.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__STRUCT_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__msg__FixedPlacementOfCalibrationBoard __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__msg__FixedPlacementOfCalibrationBoard __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedPlacementOfCalibrationBoard_
{
  using Type = FixedPlacementOfCalibrationBoard_<ContainerAllocator>;

  explicit FixedPlacementOfCalibrationBoard_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->representation = 0;
    }
  }

  explicit FixedPlacementOfCalibrationBoard_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->representation = 0;
    }
  }

  // field types and members
  using _representation_type =
    uint8_t;
  _representation_type representation;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__representation(
    const uint8_t & _arg)
  {
    this->representation = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POSITION =
    1u;
  static constexpr uint8_t POSE =
    2u;

  // pointer types
  using RawPtr =
    zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__msg__FixedPlacementOfCalibrationBoard
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__msg__FixedPlacementOfCalibrationBoard
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedPlacementOfCalibrationBoard_ & other) const
  {
    if (this->representation != other.representation) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedPlacementOfCalibrationBoard_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedPlacementOfCalibrationBoard_

// alias to use template instance with default allocator
using FixedPlacementOfCalibrationBoard =
  zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedPlacementOfCalibrationBoard_<ContainerAllocator>::POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedPlacementOfCalibrationBoard_<ContainerAllocator>::POSE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_BOARD__STRUCT_HPP_
