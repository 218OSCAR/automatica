// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zivid_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/srv/is_connected.hpp"


#ifndef ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_HPP_
#define ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__IsConnected_Request __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__IsConnected_Request __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsConnected_Request_
{
  using Type = IsConnected_Request_<ContainerAllocator>;

  explicit IsConnected_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit IsConnected_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__IsConnected_Request
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__IsConnected_Request
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsConnected_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsConnected_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsConnected_Request_

// alias to use template instance with default allocator
using IsConnected_Request =
  zivid_interfaces::srv::IsConnected_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__IsConnected_Response __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__IsConnected_Response __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsConnected_Response_
{
  using Type = IsConnected_Response_<ContainerAllocator>;

  explicit IsConnected_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
    }
  }

  explicit IsConnected_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
    }
  }

  // field types and members
  using _is_connected_type =
    bool;
  _is_connected_type is_connected;

  // setters for named parameter idiom
  Type & set__is_connected(
    const bool & _arg)
  {
    this->is_connected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__IsConnected_Response
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__IsConnected_Response
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsConnected_Response_ & other) const
  {
    if (this->is_connected != other.is_connected) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsConnected_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsConnected_Response_

// alias to use template instance with default allocator
using IsConnected_Response =
  zivid_interfaces::srv::IsConnected_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zivid_interfaces__srv__IsConnected_Event __attribute__((deprecated))
#else
# define DEPRECATED__zivid_interfaces__srv__IsConnected_Event __declspec(deprecated)
#endif

namespace zivid_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsConnected_Event_
{
  using Type = IsConnected_Event_<ContainerAllocator>;

  explicit IsConnected_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit IsConnected_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::IsConnected_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<zivid_interfaces::srv::IsConnected_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zivid_interfaces__srv__IsConnected_Event
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zivid_interfaces__srv__IsConnected_Event
    std::shared_ptr<zivid_interfaces::srv::IsConnected_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsConnected_Event_ & other) const
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
  bool operator!=(const IsConnected_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsConnected_Event_

// alias to use template instance with default allocator
using IsConnected_Event =
  zivid_interfaces::srv::IsConnected_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace zivid_interfaces

namespace zivid_interfaces
{

namespace srv
{

struct IsConnected
{
  using Request = zivid_interfaces::srv::IsConnected_Request;
  using Response = zivid_interfaces::srv::IsConnected_Response;
  using Event = zivid_interfaces::srv::IsConnected_Event;
};

}  // namespace srv

}  // namespace zivid_interfaces

#endif  // ZIVID_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_HPP_
