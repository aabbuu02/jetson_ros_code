// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/Debug.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DEBUG__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__Debug __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__Debug __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Debug_
{
  using Type = Debug_<ContainerAllocator>;

  explicit Debug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_rpm_command = 0.0f;
      this->right_rpm_command = 0.0f;
      this->left_rpm_feedback = 0.0f;
      this->right_rpm_feedback = 0.0f;
    }
  }

  explicit Debug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_rpm_command = 0.0f;
      this->right_rpm_command = 0.0f;
      this->left_rpm_feedback = 0.0f;
      this->right_rpm_feedback = 0.0f;
    }
  }

  // field types and members
  using _left_rpm_command_type =
    float;
  _left_rpm_command_type left_rpm_command;
  using _right_rpm_command_type =
    float;
  _right_rpm_command_type right_rpm_command;
  using _left_rpm_feedback_type =
    float;
  _left_rpm_feedback_type left_rpm_feedback;
  using _right_rpm_feedback_type =
    float;
  _right_rpm_feedback_type right_rpm_feedback;

  // setters for named parameter idiom
  Type & set__left_rpm_command(
    const float & _arg)
  {
    this->left_rpm_command = _arg;
    return *this;
  }
  Type & set__right_rpm_command(
    const float & _arg)
  {
    this->right_rpm_command = _arg;
    return *this;
  }
  Type & set__left_rpm_feedback(
    const float & _arg)
  {
    this->left_rpm_feedback = _arg;
    return *this;
  }
  Type & set__right_rpm_feedback(
    const float & _arg)
  {
    this->right_rpm_feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::Debug_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::Debug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::Debug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::Debug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Debug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Debug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Debug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Debug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::Debug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::Debug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__Debug
    std::shared_ptr<anscer_msgs::msg::Debug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__Debug
    std::shared_ptr<anscer_msgs::msg::Debug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Debug_ & other) const
  {
    if (this->left_rpm_command != other.left_rpm_command) {
      return false;
    }
    if (this->right_rpm_command != other.right_rpm_command) {
      return false;
    }
    if (this->left_rpm_feedback != other.left_rpm_feedback) {
      return false;
    }
    if (this->right_rpm_feedback != other.right_rpm_feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Debug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Debug_

// alias to use template instance with default allocator
using Debug =
  anscer_msgs::msg::Debug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__DEBUG__STRUCT_HPP_
