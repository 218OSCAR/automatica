// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:msg/HandEyeCalibrationObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/hand_eye_calibration_objects.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__STRUCT_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__msg__HandEyeCalibrationObjects __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__msg__HandEyeCalibrationObjects __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationObjects_
{
  using Type = HandEyeCalibrationObjects_<ContainerAllocator>;

  explicit HandEyeCalibrationObjects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->marker_dictionary = "";
    }
  }

  explicit HandEyeCalibrationObjects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : marker_dictionary(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->marker_dictionary = "";
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _marker_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _marker_ids_type marker_ids;
  using _marker_dictionary_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _marker_dictionary_type marker_dictionary;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__marker_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->marker_ids = _arg;
    return *this;
  }
  Type & set__marker_dictionary(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->marker_dictionary = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CALIBRATION_BOARD =
    1u;
  static constexpr uint8_t FIDUCIAL_MARKERS =
    2u;

  // pointer types
  using RawPtr =
    zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__msg__HandEyeCalibrationObjects
    std::shared_ptr<zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__msg__HandEyeCalibrationObjects
    std::shared_ptr<zivid_interfaces::msg::HandEyeCalibrationObjects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationObjects_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->marker_ids != other.marker_ids) {
      return false;
    }
    if (this->marker_dictionary != other.marker_dictionary) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationObjects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationObjects_

// alias to use template instance with default allocator
using HandEyeCalibrationObjects =
  zivid_interfaces::msg::HandEyeCalibrationObjects_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandEyeCalibrationObjects_<ContainerAllocator>::CALIBRATION_BOARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandEyeCalibrationObjects_<ContainerAllocator>::FIDUCIAL_MARKERS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__HAND_EYE_CALIBRATION_OBJECTS__STRUCT_HPP_
