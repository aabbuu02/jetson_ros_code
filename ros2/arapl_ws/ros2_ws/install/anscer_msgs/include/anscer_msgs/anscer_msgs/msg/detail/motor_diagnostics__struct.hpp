// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/MotorDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fault_flags'
#include "anscer_msgs/msg/detail/motor_fault_flags__struct.hpp"
// Member 'status_flags'
#include "anscer_msgs/msg/detail/motor_status_flags__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__MotorDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__MotorDiagnostics __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorDiagnostics_
{
  using Type = MotorDiagnostics_<ContainerAllocator>;

  explicit MotorDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fault_flags(_init),
    status_flags(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit MotorDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    fault_flags(_alloc, _init),
    status_flags(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _fault_flags_type =
    anscer_msgs::msg::MotorFaultFlags_<ContainerAllocator>;
  _fault_flags_type fault_flags;
  using _status_flags_type =
    anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator>;
  _status_flags_type status_flags;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__fault_flags(
    const anscer_msgs::msg::MotorFaultFlags_<ContainerAllocator> & _arg)
  {
    this->fault_flags = _arg;
    return *this;
  }
  Type & set__status_flags(
    const anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator> & _arg)
  {
    this->status_flags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__MotorDiagnostics
    std::shared_ptr<anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__MotorDiagnostics
    std::shared_ptr<anscer_msgs::msg::MotorDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorDiagnostics_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->fault_flags != other.fault_flags) {
      return false;
    }
    if (this->status_flags != other.status_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorDiagnostics_

// alias to use template instance with default allocator
using MotorDiagnostics =
  anscer_msgs::msg::MotorDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_DIAGNOSTICS__STRUCT_HPP_
