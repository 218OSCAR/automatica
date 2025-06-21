// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/hand_eye_calibration_residual.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__STRUCT_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__msg__HandEyeCalibrationResidual __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__msg__HandEyeCalibrationResidual __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationResidual_
{
  using Type = HandEyeCalibrationResidual_<ContainerAllocator>;

  explicit HandEyeCalibrationResidual_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rotation = 0.0f;
      this->translation = 0.0f;
    }
  }

  explicit HandEyeCalibrationResidual_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rotation = 0.0f;
      this->translation = 0.0f;
    }
  }

  // field types and members
  using _rotation_type =
    float;
  _rotation_type rotation;
  using _translation_type =
    float;
  _translation_type translation;

  // setters for named parameter idiom
  Type & set__rotation(
    const float & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__translation(
    const float & _arg)
  {
    this->translation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__msg__HandEyeCalibrationResidual
    std::shared_ptr<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__msg__HandEyeCalibrationResidual
    std::shared_ptr<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationResidual_ & other) const
  {
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->translation != other.translation) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationResidual_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationResidual_

// alias to use template instance with default allocator
using HandEyeCalibrationResidual =
  zivid_interfaces::msg::HandEyeCalibrationResidual_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_RESIDUAL__STRUCT_HPP_
