// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/Indication.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INDICATION__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__INDICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__Indication __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__Indication __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Indication_
{
  using Type = Indication_<ContainerAllocator>;

  explicit Indication_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->color_mode = 0;
      this->buzzer = false;
      this->buzzer_mode = 0;
      this->priority = 0;
    }
  }

  explicit Indication_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->color_mode = 0;
      this->buzzer = false;
      this->buzzer_mode = 0;
      this->priority = 0;
    }
  }

  // field types and members
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;
  using _color_mode_type =
    int8_t;
  _color_mode_type color_mode;
  using _buzzer_type =
    bool;
  _buzzer_type buzzer;
  using _buzzer_mode_type =
    int8_t;
  _buzzer_mode_type buzzer_mode;
  using _priority_type =
    int16_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__color_mode(
    const int8_t & _arg)
  {
    this->color_mode = _arg;
    return *this;
  }
  Type & set__buzzer(
    const bool & _arg)
  {
    this->buzzer = _arg;
    return *this;
  }
  Type & set__buzzer_mode(
    const int8_t & _arg)
  {
    this->buzzer_mode = _arg;
    return *this;
  }
  Type & set__priority(
    const int16_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::Indication_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::Indication_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::Indication_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::Indication_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Indication_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Indication_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Indication_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Indication_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::Indication_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::Indication_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__Indication
    std::shared_ptr<anscer_msgs::msg::Indication_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__Indication
    std::shared_ptr<anscer_msgs::msg::Indication_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Indication_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->color_mode != other.color_mode) {
      return false;
    }
    if (this->buzzer != other.buzzer) {
      return false;
    }
    if (this->buzzer_mode != other.buzzer_mode) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const Indication_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Indication_

// alias to use template instance with default allocator
using Indication =
  anscer_msgs::msg::Indication_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__INDICATION__STRUCT_HPP_
