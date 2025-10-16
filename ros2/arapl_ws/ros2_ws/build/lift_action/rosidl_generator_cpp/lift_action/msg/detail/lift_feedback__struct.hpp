// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lift_action:msg/LiftFeedback.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__STRUCT_HPP_
#define LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lift_action__msg__LiftFeedback __attribute__((deprecated))
#else
# define DEPRECATED__lift_action__msg__LiftFeedback __declspec(deprecated)
#endif

namespace lift_action
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LiftFeedback_
{
  using Type = LiftFeedback_<ContainerAllocator>;

  explicit LiftFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = "";
      this->acr_shelf = 0;
      this->action = 0;
      this->status = false;
      this->fail_status = false;
    }
  }

  explicit LiftFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unique_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = "";
      this->acr_shelf = 0;
      this->action = 0;
      this->status = false;
      this->fail_status = false;
    }
  }

  // field types and members
  using _unique_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unique_id_type unique_id;
  using _acr_shelf_type =
    int16_t;
  _acr_shelf_type acr_shelf;
  using _action_type =
    int16_t;
  _action_type action;
  using _status_type =
    bool;
  _status_type status;
  using _fail_status_type =
    bool;
  _fail_status_type fail_status;

  // setters for named parameter idiom
  Type & set__unique_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }
  Type & set__acr_shelf(
    const int16_t & _arg)
  {
    this->acr_shelf = _arg;
    return *this;
  }
  Type & set__action(
    const int16_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__fail_status(
    const bool & _arg)
  {
    this->fail_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lift_action::msg::LiftFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const lift_action::msg::LiftFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lift_action::msg::LiftFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lift_action::msg::LiftFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::LiftFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::LiftFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::LiftFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::LiftFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lift_action::msg::LiftFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lift_action::msg::LiftFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lift_action__msg__LiftFeedback
    std::shared_ptr<lift_action::msg::LiftFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lift_action__msg__LiftFeedback
    std::shared_ptr<lift_action::msg::LiftFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LiftFeedback_ & other) const
  {
    if (this->unique_id != other.unique_id) {
      return false;
    }
    if (this->acr_shelf != other.acr_shelf) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->fail_status != other.fail_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LiftFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LiftFeedback_

// alias to use template instance with default allocator
using LiftFeedback =
  lift_action::msg::LiftFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__STRUCT_HPP_
