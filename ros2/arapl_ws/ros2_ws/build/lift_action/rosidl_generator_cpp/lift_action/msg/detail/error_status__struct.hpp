// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lift_action:msg/ErrorStatus.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__STRUCT_HPP_
#define LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lift_action__msg__ErrorStatus __attribute__((deprecated))
#else
# define DEPRECATED__lift_action__msg__ErrorStatus __declspec(deprecated)
#endif

namespace lift_action
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorStatus_
{
  using Type = ErrorStatus_<ContainerAllocator>;

  explicit ErrorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lifter_fault = false;
      this->extractor_fault = false;
      this->turn_table_fault = false;
      this->swing_arm_fault = false;
      this->emergency_pb_fault = false;
      this->swing_arm_sensor_zero_fault = false;
      this->swing_arm_sensor_ninety_fault = false;
      this->turntable_sensor_zero_fault = false;
      this->extractor_sensor_laser_fault = false;
    }
  }

  explicit ErrorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lifter_fault = false;
      this->extractor_fault = false;
      this->turn_table_fault = false;
      this->swing_arm_fault = false;
      this->emergency_pb_fault = false;
      this->swing_arm_sensor_zero_fault = false;
      this->swing_arm_sensor_ninety_fault = false;
      this->turntable_sensor_zero_fault = false;
      this->extractor_sensor_laser_fault = false;
    }
  }

  // field types and members
  using _lifter_fault_type =
    bool;
  _lifter_fault_type lifter_fault;
  using _extractor_fault_type =
    bool;
  _extractor_fault_type extractor_fault;
  using _turn_table_fault_type =
    bool;
  _turn_table_fault_type turn_table_fault;
  using _swing_arm_fault_type =
    bool;
  _swing_arm_fault_type swing_arm_fault;
  using _emergency_pb_fault_type =
    bool;
  _emergency_pb_fault_type emergency_pb_fault;
  using _swing_arm_sensor_zero_fault_type =
    bool;
  _swing_arm_sensor_zero_fault_type swing_arm_sensor_zero_fault;
  using _swing_arm_sensor_ninety_fault_type =
    bool;
  _swing_arm_sensor_ninety_fault_type swing_arm_sensor_ninety_fault;
  using _turntable_sensor_zero_fault_type =
    bool;
  _turntable_sensor_zero_fault_type turntable_sensor_zero_fault;
  using _extractor_sensor_laser_fault_type =
    bool;
  _extractor_sensor_laser_fault_type extractor_sensor_laser_fault;

  // setters for named parameter idiom
  Type & set__lifter_fault(
    const bool & _arg)
  {
    this->lifter_fault = _arg;
    return *this;
  }
  Type & set__extractor_fault(
    const bool & _arg)
  {
    this->extractor_fault = _arg;
    return *this;
  }
  Type & set__turn_table_fault(
    const bool & _arg)
  {
    this->turn_table_fault = _arg;
    return *this;
  }
  Type & set__swing_arm_fault(
    const bool & _arg)
  {
    this->swing_arm_fault = _arg;
    return *this;
  }
  Type & set__emergency_pb_fault(
    const bool & _arg)
  {
    this->emergency_pb_fault = _arg;
    return *this;
  }
  Type & set__swing_arm_sensor_zero_fault(
    const bool & _arg)
  {
    this->swing_arm_sensor_zero_fault = _arg;
    return *this;
  }
  Type & set__swing_arm_sensor_ninety_fault(
    const bool & _arg)
  {
    this->swing_arm_sensor_ninety_fault = _arg;
    return *this;
  }
  Type & set__turntable_sensor_zero_fault(
    const bool & _arg)
  {
    this->turntable_sensor_zero_fault = _arg;
    return *this;
  }
  Type & set__extractor_sensor_laser_fault(
    const bool & _arg)
  {
    this->extractor_sensor_laser_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lift_action::msg::ErrorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const lift_action::msg::ErrorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lift_action::msg::ErrorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lift_action::msg::ErrorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::ErrorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::ErrorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lift_action::msg::ErrorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lift_action::msg::ErrorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lift_action::msg::ErrorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lift_action::msg::ErrorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lift_action__msg__ErrorStatus
    std::shared_ptr<lift_action::msg::ErrorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lift_action__msg__ErrorStatus
    std::shared_ptr<lift_action::msg::ErrorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorStatus_ & other) const
  {
    if (this->lifter_fault != other.lifter_fault) {
      return false;
    }
    if (this->extractor_fault != other.extractor_fault) {
      return false;
    }
    if (this->turn_table_fault != other.turn_table_fault) {
      return false;
    }
    if (this->swing_arm_fault != other.swing_arm_fault) {
      return false;
    }
    if (this->emergency_pb_fault != other.emergency_pb_fault) {
      return false;
    }
    if (this->swing_arm_sensor_zero_fault != other.swing_arm_sensor_zero_fault) {
      return false;
    }
    if (this->swing_arm_sensor_ninety_fault != other.swing_arm_sensor_ninety_fault) {
      return false;
    }
    if (this->turntable_sensor_zero_fault != other.turntable_sensor_zero_fault) {
      return false;
    }
    if (this->extractor_sensor_laser_fault != other.extractor_sensor_laser_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorStatus_

// alias to use template instance with default allocator
using ErrorStatus =
  lift_action::msg::ErrorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__ERROR_STATUS__STRUCT_HPP_
