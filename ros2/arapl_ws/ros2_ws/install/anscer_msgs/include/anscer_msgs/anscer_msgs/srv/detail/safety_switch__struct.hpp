// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/SafetySwitch.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__SafetySwitch_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__SafetySwitch_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SafetySwitch_Request_
{
  using Type = SafetySwitch_Request_<ContainerAllocator>;

  explicit SafetySwitch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safety_switch = 0;
    }
  }

  explicit SafetySwitch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safety_switch = 0;
    }
  }

  // field types and members
  using _safety_switch_type =
    int8_t;
  _safety_switch_type safety_switch;

  // setters for named parameter idiom
  Type & set__safety_switch(
    const int8_t & _arg)
  {
    this->safety_switch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__SafetySwitch_Request
    std::shared_ptr<anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__SafetySwitch_Request
    std::shared_ptr<anscer_msgs::srv::SafetySwitch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetySwitch_Request_ & other) const
  {
    if (this->safety_switch != other.safety_switch) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetySwitch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetySwitch_Request_

// alias to use template instance with default allocator
using SafetySwitch_Request =
  anscer_msgs::srv::SafetySwitch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__SafetySwitch_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__SafetySwitch_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SafetySwitch_Response_
{
  using Type = SafetySwitch_Response_<ContainerAllocator>;

  explicit SafetySwitch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit SafetySwitch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__SafetySwitch_Response
    std::shared_ptr<anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__SafetySwitch_Response
    std::shared_ptr<anscer_msgs::srv::SafetySwitch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetySwitch_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetySwitch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetySwitch_Response_

// alias to use template instance with default allocator
using SafetySwitch_Response =
  anscer_msgs::srv::SafetySwitch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct SafetySwitch
{
  using Request = anscer_msgs::srv::SafetySwitch_Request;
  using Response = anscer_msgs::srv::SafetySwitch_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAFETY_SWITCH__STRUCT_HPP_
