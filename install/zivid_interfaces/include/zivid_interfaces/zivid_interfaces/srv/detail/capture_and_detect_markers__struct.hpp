// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/CaptureAndDetectMarkers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/capture_and_detect_markers.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureAndDetectMarkers_Request_
{
  using Type = CaptureAndDetectMarkers_Request_<ContainerAllocator>;

  explicit CaptureAndDetectMarkers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_dictionary = "";
    }
  }

  explicit CaptureAndDetectMarkers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : marker_dictionary(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_dictionary = "";
    }
  }

  // field types and members
  using _marker_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _marker_ids_type marker_ids;
  using _marker_dictionary_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _marker_dictionary_type marker_dictionary;

  // setters for named parameter idiom
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

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Request
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Request
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureAndDetectMarkers_Request_ & other) const
  {
    if (this->marker_ids != other.marker_ids) {
      return false;
    }
    if (this->marker_dictionary != other.marker_dictionary) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureAndDetectMarkers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureAndDetectMarkers_Request_

// alias to use template instance with default allocator
using CaptureAndDetectMarkers_Request =
  zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'detection_result'
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureAndDetectMarkers_Response_
{
  using Type = CaptureAndDetectMarkers_Response_<ContainerAllocator>;

  explicit CaptureAndDetectMarkers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection_result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CaptureAndDetectMarkers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    detection_result(_alloc, _init)
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
  using _detection_result_type =
    zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator>;
  _detection_result_type detection_result;

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
  Type & set__detection_result(
    const zivid_interfaces::msg::DetectionResultFiducialMarkers_<ContainerAllocator> & _arg)
  {
    this->detection_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Response
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Response
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureAndDetectMarkers_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->detection_result != other.detection_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureAndDetectMarkers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureAndDetectMarkers_Response_

// alias to use template instance with default allocator
using CaptureAndDetectMarkers_Response =
  zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Event __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Event __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureAndDetectMarkers_Event_
{
  using Type = CaptureAndDetectMarkers_Event_<ContainerAllocator>;

  explicit CaptureAndDetectMarkers_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CaptureAndDetectMarkers_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::CaptureAndDetectMarkers_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::CaptureAndDetectMarkers_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Event
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__CaptureAndDetectMarkers_Event
    std::shared_ptr<zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureAndDetectMarkers_Event_ & other) const
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
  bool operator!=(const CaptureAndDetectMarkers_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureAndDetectMarkers_Event_

// alias to use template instance with default allocator
using CaptureAndDetectMarkers_Event =
  zivid_interfaces::srv::CaptureAndDetectMarkers_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct CaptureAndDetectMarkers
{
  using Request = zivid_interfaces::srv::CaptureAndDetectMarkers_Request;
  using Response = zivid_interfaces::srv::CaptureAndDetectMarkers_Response;
  using Event = zivid_interfaces::srv::CaptureAndDetectMarkers_Event;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__CAPTURE_AND_DETECT_MARKERS__STRUCT_HPP_
