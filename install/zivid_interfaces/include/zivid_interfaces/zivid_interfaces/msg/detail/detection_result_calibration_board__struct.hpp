// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_calibration_board.hpp"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__STRUCT_HPP_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'centroid'
// Member 'feature_points'
// Member 'feature_points_2d'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__msg__DetectionResultCalibrationBoard __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__msg__DetectionResultCalibrationBoard __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionResultCalibrationBoard_
{
  using Type = DetectionResultCalibrationBoard_<ContainerAllocator>;

  explicit DetectionResultCalibrationBoard_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->status_description = "";
      this->feature_points_width = 0ull;
      this->feature_points_height = 0ull;
    }
  }

  explicit DetectionResultCalibrationBoard_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_description(_alloc),
    centroid(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->status_description = "";
      this->feature_points_width = 0ull;
      this->feature_points_height = 0ull;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _status_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_description_type status_description;
  using _centroid_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _centroid_type centroid;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _feature_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _feature_points_type feature_points;
  using _feature_points_2d_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _feature_points_2d_type feature_points_2d;
  using _feature_points_width_type =
    uint64_t;
  _feature_points_width_type feature_points_width;
  using _feature_points_height_type =
    uint64_t;
  _feature_points_height_type feature_points_height;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__status_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_description = _arg;
    return *this;
  }
  Type & set__centroid(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__feature_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->feature_points = _arg;
    return *this;
  }
  Type & set__feature_points_2d(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->feature_points_2d = _arg;
    return *this;
  }
  Type & set__feature_points_width(
    const uint64_t & _arg)
  {
    this->feature_points_width = _arg;
    return *this;
  }
  Type & set__feature_points_height(
    const uint64_t & _arg)
  {
    this->feature_points_height = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_NOT_SET =
    0u;
  static constexpr uint8_t STATUS_OK =
    1u;
  static constexpr uint8_t STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED =
    2u;
  static constexpr uint8_t STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED =
    3u;
  static constexpr uint8_t STATUS_BOARD_DETECTION_FAILED =
    4u;
  static constexpr uint8_t STATUS_INSUFFICIENT_3D_QUALITY =
    5u;

  // pointer types
  using RawPtr =
    zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__msg__DetectionResultCalibrationBoard
    std::shared_ptr<zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__msg__DetectionResultCalibrationBoard
    std::shared_ptr<zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionResultCalibrationBoard_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->status_description != other.status_description) {
      return false;
    }
    if (this->centroid != other.centroid) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->feature_points != other.feature_points) {
      return false;
    }
    if (this->feature_points_2d != other.feature_points_2d) {
      return false;
    }
    if (this->feature_points_width != other.feature_points_width) {
      return false;
    }
    if (this->feature_points_height != other.feature_points_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionResultCalibrationBoard_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionResultCalibrationBoard_

// alias to use template instance with default allocator
using DetectionResultCalibrationBoard =
  zivid_interfaces::msg::DetectionResultCalibrationBoard_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionResultCalibrationBoard_<ContainerAllocator>::STATUS_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionResultCalibrationBoard_<ContainerAllocator>::STATUS_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionResultCalibrationBoard_<ContainerAllocator>::STATUS_NO_VALID_FIDUCIAL_MARKER_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionResultCalibrationBoard_<ContainerAllocator>::STATUS_MULTIPLE_VALID_FIDUCIAL_MARKERS_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionResultCalibrationBoard_<ContainerAllocator>::STATUS_BOARD_DETECTION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionResultCalibrationBoard_<ContainerAllocator>::STATUS_INSUFFICIENT_3D_QUALITY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__STRUCT_HPP_
