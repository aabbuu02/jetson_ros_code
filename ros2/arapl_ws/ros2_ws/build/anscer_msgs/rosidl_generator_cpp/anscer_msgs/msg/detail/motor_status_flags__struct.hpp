// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/MotorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__MotorStatusFlags __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__MotorStatusFlags __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatusFlags_
{
  using Type = MotorStatusFlags_<ContainerAllocator>;

  explicit MotorStatusFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_mode = false;
      this->pulse_mode = false;
      this->analog_mode = false;
      this->power_stage_off = false;
      this->stall_detected = false;
      this->at_limit = false;
      this->unused = false;
      this->micro_basic_script_running = false;
      this->motor_tuning_mode = false;
    }
  }

  explicit MotorStatusFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_mode = false;
      this->pulse_mode = false;
      this->analog_mode = false;
      this->power_stage_off = false;
      this->stall_detected = false;
      this->at_limit = false;
      this->unused = false;
      this->micro_basic_script_running = false;
      this->motor_tuning_mode = false;
    }
  }

  // field types and members
  using _serial_mode_type =
    bool;
  _serial_mode_type serial_mode;
  using _pulse_mode_type =
    bool;
  _pulse_mode_type pulse_mode;
  using _analog_mode_type =
    bool;
  _analog_mode_type analog_mode;
  using _power_stage_off_type =
    bool;
  _power_stage_off_type power_stage_off;
  using _stall_detected_type =
    bool;
  _stall_detected_type stall_detected;
  using _at_limit_type =
    bool;
  _at_limit_type at_limit;
  using _unused_type =
    bool;
  _unused_type unused;
  using _micro_basic_script_running_type =
    bool;
  _micro_basic_script_running_type micro_basic_script_running;
  using _motor_tuning_mode_type =
    bool;
  _motor_tuning_mode_type motor_tuning_mode;

  // setters for named parameter idiom
  Type & set__serial_mode(
    const bool & _arg)
  {
    this->serial_mode = _arg;
    return *this;
  }
  Type & set__pulse_mode(
    const bool & _arg)
  {
    this->pulse_mode = _arg;
    return *this;
  }
  Type & set__analog_mode(
    const bool & _arg)
  {
    this->analog_mode = _arg;
    return *this;
  }
  Type & set__power_stage_off(
    const bool & _arg)
  {
    this->power_stage_off = _arg;
    return *this;
  }
  Type & set__stall_detected(
    const bool & _arg)
  {
    this->stall_detected = _arg;
    return *this;
  }
  Type & set__at_limit(
    const bool & _arg)
  {
    this->at_limit = _arg;
    return *this;
  }
  Type & set__unused(
    const bool & _arg)
  {
    this->unused = _arg;
    return *this;
  }
  Type & set__micro_basic_script_running(
    const bool & _arg)
  {
    this->micro_basic_script_running = _arg;
    return *this;
  }
  Type & set__motor_tuning_mode(
    const bool & _arg)
  {
    this->motor_tuning_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__MotorStatusFlags
    std::shared_ptr<anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__MotorStatusFlags
    std::shared_ptr<anscer_msgs::msg::MotorStatusFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatusFlags_ & other) const
  {
    if (this->serial_mode != other.serial_mode) {
      return false;
    }
    if (this->pulse_mode != other.pulse_mode) {
      return false;
    }
    if (this->analog_mode != other.analog_mode) {
      return false;
    }
    if (this->power_stage_off != other.power_stage_off) {
      return false;
    }
    if (this->stall_detected != other.stall_detected) {
      return false;
    }
    if (this->at_limit != other.at_limit) {
      return false;
    }
    if (this->unused != other.unused) {
      return false;
    }
    if (this->micro_basic_script_running != other.micro_basic_script_running) {
      return false;
    }
    if (this->motor_tuning_mode != other.motor_tuning_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatusFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatusFlags_

// alias to use template instance with default allocator
using MotorStatusFlags =
  anscer_msgs::msg::MotorStatusFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MOTOR_STATUS_FLAGS__STRUCT_HPP_
