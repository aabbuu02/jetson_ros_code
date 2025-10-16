// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qr_mission_scheduler:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__STRUCT_HPP_
#define QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qr_mission_scheduler__msg__GoalMsg __attribute__((deprecated))
#else
# define DEPRECATED__qr_mission_scheduler__msg__GoalMsg __declspec(deprecated)
#endif

namespace qr_mission_scheduler
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
      this->goal_type = "";
      this->source = 0.0;
      this->destination = 0.0;
    }
  }

  explicit GoalMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_type = "";
      this->source = 0.0;
      this->destination = 0.0;
    }
  }

  // field types and members
  using _goal_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _goal_type_type goal_type;
  using _source_type =
    double;
  _source_type source;
  using _destination_type =
    double;
  _destination_type destination;

  // setters for named parameter idiom
  Type & set__goal_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->goal_type = _arg;
    return *this;
  }
  Type & set__source(
    const double & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__destination(
    const double & _arg)
  {
    this->destination = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qr_mission_scheduler__msg__GoalMsg
    std::shared_ptr<qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qr_mission_scheduler__msg__GoalMsg
    std::shared_ptr<qr_mission_scheduler::msg::GoalMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalMsg_ & other) const
  {
    if (this->goal_type != other.goal_type) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->destination != other.destination) {
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
  qr_mission_scheduler::msg::GoalMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qr_mission_scheduler

#endif  // QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__STRUCT_HPP_
