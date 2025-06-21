// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCalibrate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/hand_eye_calibration_calibrate.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fixed_objects'
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationCalibrate_Request_
{
  using Type = HandEyeCalibrationCalibrate_Request_<ContainerAllocator>;

  explicit HandEyeCalibrationCalibrate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fixed_objects(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->configuration = 0;
    }
  }

  explicit HandEyeCalibrationCalibrate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fixed_objects(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->configuration = 0;
    }
  }

  // field types and members
  using _configuration_type =
    uint8_t;
  _configuration_type configuration;
  using _capture_handles_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _capture_handles_type capture_handles;
  using _fixed_objects_type =
    zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator>;
  _fixed_objects_type fixed_objects;

  // setters for named parameter idiom
  Type & set__configuration(
    const uint8_t & _arg)
  {
    this->configuration = _arg;
    return *this;
  }
  Type & set__capture_handles(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->capture_handles = _arg;
    return *this;
  }
  Type & set__fixed_objects(
    const zivid_interfaces::msg::FixedPlacementOfCalibrationObjects_<ContainerAllocator> & _arg)
  {
    this->fixed_objects = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EYE_TO_HAND =
    1u;
  static constexpr uint8_t EYE_IN_HAND =
    2u;

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Request
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationCalibrate_Request_ & other) const
  {
    if (this->configuration != other.configuration) {
      return false;
    }
    if (this->capture_handles != other.capture_handles) {
      return false;
    }
    if (this->fixed_objects != other.fixed_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationCalibrate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationCalibrate_Request_

// alias to use template instance with default allocator
using HandEyeCalibrationCalibrate_Request =
  zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandEyeCalibrationCalibrate_Request_<ContainerAllocator>::EYE_TO_HAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HandEyeCalibrationCalibrate_Request_<ContainerAllocator>::EYE_IN_HAND;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"
// Member 'residuals'
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationCalibrate_Response_
{
  using Type = HandEyeCalibrationCalibrate_Response_<ContainerAllocator>;

  explicit HandEyeCalibrationCalibrate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit HandEyeCalibrationCalibrate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    transform(_alloc, _init)
  {
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
  using _transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _transform_type transform;
  using _residuals_type =
    std::vector<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>>>;
  _residuals_type residuals;

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
  Type & set__transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }
  Type & set__residuals(
    const std::vector<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::msg::HandEyeCalibrationResidual_<ContainerAllocator>>> & _arg)
  {
    this->residuals = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Response
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationCalibrate_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->transform != other.transform) {
      return false;
    }
    if (this->residuals != other.residuals) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandEyeCalibrationCalibrate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationCalibrate_Response_

// alias to use template instance with default allocator
using HandEyeCalibrationCalibrate_Response =
  zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HandEyeCalibrationCalibrate_Event_
{
  using Type = HandEyeCalibrationCalibrate_Event_<ContainerAllocator>;

  explicit HandEyeCalibrationCalibrate_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit HandEyeCalibrationCalibrate_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__HandEyeCalibrationCalibrate_Event
    std::shared_ptr<zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandEyeCalibrationCalibrate_Event_ & other) const
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
  bool operator!=(const HandEyeCalibrationCalibrate_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandEyeCalibrationCalibrate_Event_

// alias to use template instance with default allocator
using HandEyeCalibrationCalibrate_Event =
  zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct HandEyeCalibrationCalibrate
{
  using Request = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Request;
  using Response = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Response;
  using Event = zivid_interfaces::srv::HandEyeCalibrationCalibrate_Event;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__HAND_EYE_CALIBRATION_CALIBRATE__STRUCT_HPP_
