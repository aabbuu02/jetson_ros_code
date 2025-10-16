// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/SafetyField.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__SafetyField __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__SafetyField __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyField_
{
  using Type = SafetyField_<ContainerAllocator>;

  explicit SafetyField_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field_id = 0;
      this->is_front = false;
      this->is_rear = false;
    }
  }

  explicit SafetyField_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field_id = 0;
      this->is_front = false;
      this->is_rear = false;
    }
  }

  // field types and members
  using _field_id_type =
    int8_t;
  _field_id_type field_id;
  using _is_front_type =
    bool;
  _is_front_type is_front;
  using _is_rear_type =
    bool;
  _is_rear_type is_rear;

  // setters for named parameter idiom
  Type & set__field_id(
    const int8_t & _arg)
  {
    this->field_id = _arg;
    return *this;
  }
  Type & set__is_front(
    const bool & _arg)
  {
    this->is_front = _arg;
    return *this;
  }
  Type & set__is_rear(
    const bool & _arg)
  {
    this->is_rear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::SafetyField_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::SafetyField_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::SafetyField_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::SafetyField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::SafetyField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::SafetyField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::SafetyField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::SafetyField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::SafetyField_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::SafetyField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__SafetyField
    std::shared_ptr<anscer_msgs::msg::SafetyField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__SafetyField
    std::shared_ptr<anscer_msgs::msg::SafetyField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyField_ & other) const
  {
    if (this->field_id != other.field_id) {
      return false;
    }
    if (this->is_front != other.is_front) {
      return false;
    }
    if (this->is_rear != other.is_rear) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyField_

// alias to use template instance with default allocator
using SafetyField =
  anscer_msgs::msg::SafetyField_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__STRUCT_HPP_
