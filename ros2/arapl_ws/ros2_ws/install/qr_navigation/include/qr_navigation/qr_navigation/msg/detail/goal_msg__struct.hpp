// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__STRUCT_HPP_
#define QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qr_navigation__msg__GoalMsg __attribute__((deprecated))
#else
# define DEPRECATED__qr_navigation__msg__GoalMsg __declspec(deprecated)
#endif

namespace qr_navigation
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalMsg_
{
  using Type = GoalMsg_<ContainerAllocator>;

  explicit GoalMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose = "";
      this->operation = "";
    }
  }

  explicit GoalMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc),
    operation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose = "";
      this->operation = "";
    }
  }

  // field types and members
  using _pose_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pose_type pose;
  using _start_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _start_type start;
  using _goal_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_type goal;
  using _operation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operation_type operation;

  // setters for named parameter idiom
  Type & set__pose(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__start(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__goal(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__operation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qr_navigation::msg::GoalMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const qr_navigation::msg::GoalMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qr_navigation::msg::GoalMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qr_navigation::msg::GoalMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qr_navigation::msg::GoalMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qr_navigation::msg::GoalMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qr_navigation::msg::GoalMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qr_navigation::msg::GoalMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qr_navigation::msg::GoalMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qr_navigation::msg::GoalMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qr_navigation__msg__GoalMsg
    std::shared_ptr<qr_navigation::msg::GoalMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qr_navigation__msg__GoalMsg
    std::shared_ptr<qr_navigation::msg::GoalMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalMsg_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->operation != other.operation) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalMsg_

// alias to use template instance with default allocator
using GoalMsg =
  qr_navigation::msg::GoalMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qr_navigation

#endif  // QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__STRUCT_HPP_
