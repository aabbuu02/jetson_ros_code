// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/FieldStatus.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__FieldStatus __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__FieldStatus __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldStatus_
{
  using Type = FieldStatus_<ContainerAllocator>;

  explicit FieldStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->is_safety = false;
      this->is_warning = false;
    }
  }

  explicit FieldStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->is_safety = false;
      this->is_warning = false;
    }
  }

  // field types and members
  using _direction_type =
    int8_t;
  _direction_type direction;
  using _is_safety_type =
    bool;
  _is_safety_type is_safety;
  using _is_warning_type =
    bool;
  _is_warning_type is_warning;

  // setters for named parameter idiom
  Type & set__direction(
    const int8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__is_safety(
    const bool & _arg)
  {
    this->is_safety = _arg;
    return *this;
  }
  Type & set__is_warning(
    const bool & _arg)
  {
    this->is_warning = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::FieldStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::FieldStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::FieldStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::FieldStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::FieldStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::FieldStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::FieldStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::FieldStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::FieldStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::FieldStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__FieldStatus
    std::shared_ptr<anscer_msgs::msg::FieldStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__FieldStatus
    std::shared_ptr<anscer_msgs::msg::FieldStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldStatus_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->is_safety != other.is_safety) {
      return false;
    }
    if (this->is_warning != other.is_warning) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldStatus_

// alias to use template instance with default allocator
using FieldStatus =
  anscer_msgs::msg::FieldStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__STRUCT_HPP_
