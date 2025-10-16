// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lift_action:msg/UiInterface.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__STRUCT_HPP_
#define LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lift_action__msg__UiInterface __attribute__((deprecated))
#else
# define DEPRECATED__lift_action__msg__UiInterface __declspec(deprecated)
#endif

namespace lift_action
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UiInterface_
{
  using Type = UiInterface_<ContainerAllocator>;

  explicit UiInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->process = "";
      this->button = false;
      this->direction = 0;
    }
  }

  explicit UiInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : process(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->process = "";
      this->button = false;
      this->direction = 0;
    }
  }

  // field types and members
  using _process_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _process_type process;
  using _button_type =
    bool;
  _button_type button;
  using _direction_type =
    int16_t;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__process(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->process = _arg;
    return *this;
  }
  Type & set__button(
    const bool & _arg)
  {
    this->button = _arg;
    return *this;
  }
  Type & set__direction(
    const int16_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lift_action::msg::UiInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const lift_action::msg::UiInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lift_action::msg::UiInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lift_action::msg::UiInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::UiInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::UiInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::UiInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::UiInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lift_action::msg::UiInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lift_action::msg::UiInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lift_action__msg__UiInterface
    std::shared_ptr<lift_action::msg::UiInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lift_action__msg__UiInterface
    std::shared_ptr<lift_action::msg::UiInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UiInterface_ & other) const
  {
    if (this->process != other.process) {
      return false;
    }
    if (this->button != other.button) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const UiInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UiInterface_

// alias to use template instance with default allocator
using UiInterface =
  lift_action::msg::UiInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__UI_INTERFACE__STRUCT_HPP_
