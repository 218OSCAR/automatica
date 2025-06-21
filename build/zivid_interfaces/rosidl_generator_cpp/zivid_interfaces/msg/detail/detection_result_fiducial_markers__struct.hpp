// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:msg/DetectionResultFiducialMarkers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_fiducial_markers.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__STRUCT_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'detected_markers'
#include "zivid_interfaces/msg/detail/marker_shape__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__msg__DetectionResultFiducialMarkers __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__msg__DetectionResultFiducialMarkers __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionResultFiducialMarkers_
{
  using Type = DetectionResultFiducialMarkers_<ContainerAllocator>;

  explicit DetectionResultFiducialMarkers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DetectionResultFiducialMarkers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _detected_markers_type =
    std::vector<zivid_interfaces::msg::MarkerShape_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::msg::MarkerShape_<ContainerAllocator>>>;
  _detected_markers_type detected_markers;
  using _allowed_marker_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _allowed_marker_ids_type allowed_marker_ids;

  // setters for named parameter idiom
  Type & set__detected_markers(
    const std::vector<zivid_interfaces::msg::MarkerShape_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::msg::MarkerShape_<ContainerAllocator>>> & _arg)
  {
    this->detected_markers = _arg;
    return *this;
  }
  Type & set__allowed_marker_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->allowed_marker_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__msg__DetectionResultFiducialMarkers
    std::shared_ptr<zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__msg__DetectionResultFiducialMarkers
    std::shared_ptr<zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionResultFiducialMarkers_ & other) const
  {
    if (this->detected_markers != other.detected_markers) {
      return false;
    }
    if (this->allowed_marker_ids != other.allowed_marker_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionResultFiducialMarkers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionResultFiducialMarkers_

// alias to use template instance with default allocator
using DetectionResultFiducialMarkers =
  zivid_interfaces::msg::DetectionResultFiducialMarkers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_FIDUCIAL_MARKERS__STRUCT_HPP_
