// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/SafetyFields.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'warning'
// Member 'safety'
#include "anscer_msgs/msg/detail/safety_field__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__SafetyFields __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__SafetyFields __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyFields_
{
  using Type = SafetyFields_<ContainerAllocator>;

  explicit SafetyFields_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SafetyFields_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _warning_type =
    std::vector<anscer_msgs::msg::SafetyField_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::SafetyField_<ContainerAllocator>>>;
  _warning_type warning;
  using _safety_type =
    std::vector<anscer_msgs::msg::SafetyField_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::SafetyField_<ContainerAllocator>>>;
  _safety_type safety;

  // setters for named parameter idiom
  Type & set__warning(
    const std::vector<anscer_msgs::msg::SafetyField_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::SafetyField_<ContainerAllocator>>> & _arg)
  {
    this->warning = _arg;
    return *this;
  }
  Type & set__safety(
    const std::vector<anscer_msgs::msg::SafetyField_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::SafetyField_<ContainerAllocator>>> & _arg)
  {
    this->safety = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::SafetyFields_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::SafetyFields_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::SafetyFields_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::SafetyFields_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::SafetyFields_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::SafetyFields_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::SafetyFields_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::SafetyFields_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::SafetyFields_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::SafetyFields_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__SafetyFields
    std::shared_ptr<anscer_msgs::msg::SafetyFields_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__SafetyFields
    std::shared_ptr<anscer_msgs::msg::SafetyFields_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyFields_ & other) const
  {
    if (this->warning != other.warning) {
      return false;
    }
    if (this->safety != other.safety) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyFields_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyFields_

// alias to use template instance with default allocator
using SafetyFields =
  anscer_msgs::msg::SafetyFields_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__STRUCT_HPP_
