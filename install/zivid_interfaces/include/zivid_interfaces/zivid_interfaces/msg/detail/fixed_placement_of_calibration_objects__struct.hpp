// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/fixed_placement_of_calibration_objects.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__STRUCT_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'calibration_board'
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__struct.hpp"
// Member 'markers'
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__msg__FixedPlacementOfCalibrationObjects __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__msg__FixedPlacementOfCalibrationObjects __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedPlacementOfCalibrationObjects_
{
  using Type = FixedPlacementOfCalibrationObjects_<ContainerAllocator>;

  explicit FixedPlacementOfCalibrationObjects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : calibration_board(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->marker_dictionary = "";
    }
  }

  explicit FixedPlacementOfCalibrationObjects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : calibration_board(_alloc, _init),
    marker_dictionary(_alloc)
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
  using _calibration_board_type =
    zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator>;
  _calibration_board_type calibration_board;
  using _marker_dictionary_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _marker_dictionary_type marker_dictionary;
  using _markers_type =
    std::vector<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>>>;
  _markers_type markers;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__calibration_board(
    const zivid_interfaces::msg::FixedPlacementOfCalibrationBoard_<ContainerAllocator> & _arg)
  {
    this->calibration_board = _arg;
    return *this;
  }
  Type & set__marker_dictionary(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->marker_dictionary = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::msg::FixedPlacementOfFiducialMarker_<ContainerAllocator>>> & _arg)
  {
    this->markers = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t CALIBRATION_BOARD =
    1u;
  static constexpr uint8_t FIDUCIAL_MARKERS =
    2u;

  // pointer types
  using RawPtr =
    zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__msg__FixedPlacementOfCalibrationObjects
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__msg__FixedPlacementOfCalibrationObjects
    std::shared_ptr<zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedPlacementOfCalibrationObjects_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->calibration_board != other.calibration_board) {
      return false;
    }
    if (this->marker_dictionary != other.marker_dictionary) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedPlacementOfCalibrationObjects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedPlacementOfCalibrationObjects_

// alias to use template instance with default allocator
using FixedPlacementOfCalibrationObjects =
  zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedPlacementOfCalibrationObjects_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedPlacementOfCalibrationObjects_<ContainerAllocator>::CALIBRATION_BOARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedPlacementOfCalibrationObjects_<ContainerAllocator>::FIDUCIAL_MARKERS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__FIXED_PLACEMENT_OF_CALIBRATION_OBJECTS__STRUCT_HPP_
