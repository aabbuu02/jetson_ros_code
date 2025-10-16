// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lift_action:msg/LiftAction.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__STRUCT_HPP_
#define LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lift_action__msg__LiftAction __attribute__((deprecated))
#else
# define DEPRECATED__lift_action__msg__LiftAction __declspec(deprecated)
#endif

namespace lift_action
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LiftAction_
{
  using Type = LiftAction_<ContainerAllocator>;

  explicit LiftAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = "";
      this->reached = false;
      this->rack = 0;
      this->shelf = 0;
      this->acr_shelf = 0;
      this->action = 0;
      this->whole_bin_no = "";
      this->putaway_barcode = "";
    }
  }

  explicit LiftAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unique_id(_alloc),
    whole_bin_no(_alloc),
    putaway_barcode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = "";
      this->reached = false;
      this->rack = 0;
      this->shelf = 0;
      this->acr_shelf = 0;
      this->action = 0;
      this->whole_bin_no = "";
      this->putaway_barcode = "";
    }
  }

  // field types and members
  using _unique_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unique_id_type unique_id;
  using _reached_type =
    bool;
  _reached_type reached;
  using _rack_type =
    int16_t;
  _rack_type rack;
  using _shelf_type =
    int16_t;
  _shelf_type shelf;
  using _acr_shelf_type =
    int16_t;
  _acr_shelf_type acr_shelf;
  using _action_type =
    int16_t;
  _action_type action;
  using _whole_bin_no_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _whole_bin_no_type whole_bin_no;
  using _putaway_barcode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _putaway_barcode_type putaway_barcode;

  // setters for named parameter idiom
  Type & set__unique_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }
  Type & set__reached(
    const bool & _arg)
  {
    this->reached = _arg;
    return *this;
  }
  Type & set__rack(
    const int16_t & _arg)
  {
    this->rack = _arg;
    return *this;
  }
  Type & set__shelf(
    const int16_t & _arg)
  {
    this->shelf = _arg;
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
  Type & set__whole_bin_no(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->whole_bin_no = _arg;
    return *this;
  }
  Type & set__putaway_barcode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->putaway_barcode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lift_action::msg::LiftAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const lift_action::msg::LiftAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lift_action::msg::LiftAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lift_action::msg::LiftAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::LiftAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::LiftAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::LiftAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::LiftAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lift_action::msg::LiftAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lift_action::msg::LiftAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lift_action__msg__LiftAction
    std::shared_ptr<lift_action::msg::LiftAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lift_action__msg__LiftAction
    std::shared_ptr<lift_action::msg::LiftAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LiftAction_ & other) const
  {
    if (this->unique_id != other.unique_id) {
      return false;
    }
    if (this->reached != other.reached) {
      return false;
    }
    if (this->rack != other.rack) {
      return false;
    }
    if (this->shelf != other.shelf) {
      return false;
    }
    if (this->acr_shelf != other.acr_shelf) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->whole_bin_no != other.whole_bin_no) {
      return false;
    }
    if (this->putaway_barcode != other.putaway_barcode) {
      return false;
    }
    return true;
  }
  bool operator!=(const LiftAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LiftAction_

// alias to use template instance with default allocator
using LiftAction =
  lift_action::msg::LiftAction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__LIFT_ACTION__STRUCT_HPP_
