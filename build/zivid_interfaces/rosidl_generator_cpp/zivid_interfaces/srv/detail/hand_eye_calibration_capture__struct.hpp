// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCapture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_capture.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robot_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationCapture_Request_
{
  using Type = HandEyeCalibrationCapture_Request_<ContainerAllocator>;

  explicit HandEyeCalibrationCapture_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_pose(_init)
  {
    (void)_init;
  }

  explicit HandEyeCalibrationCapture_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robot_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _robot_pose_type robot_pose;

  // setters for named parameter idiom
  Type & set__robot_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->robot_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Request
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Request
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationCapture_Request_ & other) const
  {
    if (this->robot_pose != other.robot_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationCapture_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationCapture_Request_

// alias to use template instance with default allocator
using HandEyeCalibrationCapture_Request =
  zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'detection_result_calibration_board'
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.hpp"
// Member 'detection_result_fiducial_markers'
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationCapture_Response_
{
  using Type = HandEyeCalibrationCapture_Response_<ContainerAllocator>;

  explicit HandEyeCalibrationCapture_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection_result_calibration_board(_init),
    detection_result_fiducial_markers(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->capture_handle = -1l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->success = false;
      this->message = "";
      this->capture_handle = 0l;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit HandEyeCalibrationCapture_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    detection_result_calibration_board(_alloc, _init),
    detection_result_fiducial_markers(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->capture_handle = -1l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->success = false;
      this->message = "";
      this->capture_handle = 0l;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _capture_handle_type =
    int32_t;
  _capture_handle_type capture_handle;
  using _detection_result_calibration_board_type =
    zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator>;
  _detection_result_calibration_board_type detection_result_calibration_board;
  using _detection_result_fiducial_markers_type =
    zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator>;
  _detection_result_fiducial_markers_type detection_result_fiducial_markers;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__capture_handle(
    const int32_t & _arg)
  {
    this->capture_handle = _arg;
    return *this;
  }
  Type & set__detection_result_calibration_board(
    const zivid_interfaces::msg::DetectionResultCalibrationBoard_<ContainerAllocator> & _arg)
  {
    this->detection_result_calibration_board = _arg;
    return *this;
  }
  Type & set__detection_result_fiducial_markers(
    const zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator> & _arg)
  {
    this->detection_result_fiducial_markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Response
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Response
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationCapture_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->capture_handle != other.capture_handle) {
      return false;
    }
    if (this->detection_result_calibration_board != other.detection_result_calibration_board) {
      return false;
    }
    if (this->detection_result_fiducial_markers != other.detection_result_fiducial_markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationCapture_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationCapture_Response_

// alias to use template instance with default allocator
using HandEyeCalibrationCapture_Response =
  zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Event __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Event __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationCapture_Event_
{
  using Type = HandEyeCalibrationCapture_Event_<ContainerAllocator>;

  explicit HandEyeCalibrationCapture_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit HandEyeCalibrationCapture_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::HandEyeCalibrationCapture_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::HandEyeCalibrationCapture_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Event
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCapture_Event
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationCapture_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationCapture_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationCapture_Event_

// alias to use template instance with default allocator
using HandEyeCalibrationCapture_Event =
  zivid_interfaces::srv::HandEyeCalibrationCapture_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct HandEyeCalibrationCapture
{
  using Request = zivid_interfaces::srv::HandEyeCalibrationCapture_Request;
  using Response = zivid_interfaces::srv::HandEyeCalibrationCapture_Response;
  using Event = zivid_interfaces::srv::HandEyeCalibrationCapture_Event;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CAPTURE__STRUCT_HPP_
