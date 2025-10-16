// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/Undock.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__UNDOCK__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__UNDOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__Undock_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__Undock_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Undock_Request_
{
  using Type = Undock_Request_<ContainerAllocator>;

  explicit Undock_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->undock_call = false;
    }
  }

  explicit Undock_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->undock_call = false;
    }
  }

  // field types and members
  using _undock_call_type =
    bool;
  _undock_call_type undock_call;

  // setters for named parameter idiom
  Type & set__undock_call(
    const bool & _arg)
  {
    this->undock_call = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::Undock_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::Undock_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::Undock_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::Undock_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::Undock_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::Undock_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::Undock_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::Undock_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::Undock_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::Undock_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__Undock_Request
    std::shared_ptr<anscer_msgs::srv::Undock_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__Undock_Request
    std::shared_ptr<anscer_msgs::srv::Undock_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Undock_Request_ & other) const
  {
    if (this->undock_call != other.undock_call) {
      return false;
    }
    return true;
  }
  bool operator!=(const Undock_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Undock_Request_

// alias to use template instance with default allocator
using Undock_Request =
  anscer_msgs::srv::Undock_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__Undock_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__Undock_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Undock_Response_
{
  using Type = Undock_Response_<ContainerAllocator>;

  explicit Undock_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit Undock_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::Undock_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::Undock_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::Undock_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::Undock_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::Undock_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::Undock_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::Undock_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::Undock_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::Undock_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::Undock_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__Undock_Response
    std::shared_ptr<anscer_msgs::srv::Undock_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__Undock_Response
    std::shared_ptr<anscer_msgs::srv::Undock_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Undock_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Undock_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Undock_Response_

// alias to use template instance with default allocator
using Undock_Response =
  anscer_msgs::srv::Undock_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct Undock
{
  using Request = anscer_msgs::srv::Undock_Request;
  using Response = anscer_msgs::srv::Undock_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__UNDOCK__STRUCT_HPP_
