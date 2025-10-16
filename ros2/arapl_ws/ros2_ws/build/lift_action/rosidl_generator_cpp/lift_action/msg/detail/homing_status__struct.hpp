// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lift_action:msg/HomingStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__STRUCT_HPP_
#define LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lift_action__msg__HomingStatus __attribute__((deprecated))
#else
# define DEPRECATED__lift_action__msg__HomingStatus __declspec(deprecated)
#endif

namespace lift_action
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HomingStatus_
{
  using Type = HomingStatus_<ContainerAllocator>;

  explicit HomingStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lifter_status = false;
      this->extractor_status = false;
      this->turn_table_status = false;
      this->is_homed = false;
    }
  }

  explicit HomingStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lifter_status = false;
      this->extractor_status = false;
      this->turn_table_status = false;
      this->is_homed = false;
    }
  }

  // field types and members
  using _lifter_status_type =
    bool;
  _lifter_status_type lifter_status;
  using _extractor_status_type =
    bool;
  _extractor_status_type extractor_status;
  using _turn_table_status_type =
    bool;
  _turn_table_status_type turn_table_status;
  using _is_homed_type =
    bool;
  _is_homed_type is_homed;

  // setters for named parameter idiom
  Type & set__lifter_status(
    const bool & _arg)
  {
    this->lifter_status = _arg;
    return *this;
  }
  Type & set__extractor_status(
    const bool & _arg)
  {
    this->extractor_status = _arg;
    return *this;
  }
  Type & set__turn_table_status(
    const bool & _arg)
  {
    this->turn_table_status = _arg;
    return *this;
  }
  Type & set__is_homed(
    const bool & _arg)
  {
    this->is_homed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lift_action::msg::HomingStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const lift_action::msg::HomingStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lift_action::msg::HomingStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lift_action::msg::HomingStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::HomingStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::HomingStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::HomingStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::HomingStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lift_action::msg::HomingStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lift_action::msg::HomingStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lift_action__msg__HomingStatus
    std::shared_ptr<lift_action::msg::HomingStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lift_action__msg__HomingStatus
    std::shared_ptr<lift_action::msg::HomingStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomingStatus_ & other) const
  {
    if (this->lifter_status != other.lifter_status) {
      return false;
    }
    if (this->extractor_status != other.extractor_status) {
      return false;
    }
    if (this->turn_table_status != other.turn_table_status) {
      return false;
    }
    if (this->is_homed != other.is_homed) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomingStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomingStatus_

// alias to use template instance with default allocator
using HomingStatus =
  lift_action::msg::HomingStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__HOMING_STATUS__STRUCT_HPP_
