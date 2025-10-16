// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/GetTransitionZones.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__GetTransitionZones_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__GetTransitionZones_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTransitionZones_Request_
{
  using Type = GetTransitionZones_Request_<ContainerAllocator>;

  explicit GetTransitionZones_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetTransitionZones_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__GetTransitionZones_Request
    std::shared_ptr<anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__GetTransitionZones_Request
    std::shared_ptr<anscer_msgs::srv::GetTransitionZones_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTransitionZones_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTransitionZones_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTransitionZones_Request_

// alias to use template instance with default allocator
using GetTransitionZones_Request =
  anscer_msgs::srv::GetTransitionZones_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


// Include directives for member types
// Member 'transition_zones'
#include "anscer_msgs/msg/detail/transition_zones__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__GetTransitionZones_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__GetTransitionZones_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTransitionZones_Response_
{
  using Type = GetTransitionZones_Response_<ContainerAllocator>;

  explicit GetTransitionZones_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transition_zones(_init)
  {
    (void)_init;
  }

  explicit GetTransitionZones_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transition_zones(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _transition_zones_type =
    anscer_msgs::msg::TransitionZones_<ContainerAllocator>;
  _transition_zones_type transition_zones;

  // setters for named parameter idiom
  Type & set__transition_zones(
    const anscer_msgs::msg::TransitionZones_<ContainerAllocator> & _arg)
  {
    this->transition_zones = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__GetTransitionZones_Response
    std::shared_ptr<anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__GetTransitionZones_Response
    std::shared_ptr<anscer_msgs::srv::GetTransitionZones_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTransitionZones_Response_ & other) const
  {
    if (this->transition_zones != other.transition_zones) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTransitionZones_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTransitionZones_Response_

// alias to use template instance with default allocator
using GetTransitionZones_Response =
  anscer_msgs::srv::GetTransitionZones_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct GetTransitionZones
{
  using Request = anscer_msgs::srv::GetTransitionZones_Request;
  using Response = anscer_msgs::srv::GetTransitionZones_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__GET_TRANSITION_ZONES__STRUCT_HPP_
