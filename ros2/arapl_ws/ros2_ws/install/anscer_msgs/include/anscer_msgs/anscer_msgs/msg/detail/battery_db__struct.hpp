// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/BatteryDB.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__BatteryDB __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__BatteryDB __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryDB_
{
  using Type = BatteryDB_<ContainerAllocator>;

  explicit BatteryDB_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = "";
      this->capacity = 0.0f;
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->state_of_charge = 0;
    }
  }

  explicit BatteryDB_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = "";
      this->capacity = 0.0f;
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->state_of_charge = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _timestamp_type timestamp;
  using _capacity_type =
    float;
  _capacity_type capacity;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _current_type =
    float;
  _current_type current;
  using _linear_velocity_type =
    float;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    float;
  _angular_velocity_type angular_velocity;
  using _state_of_charge_type =
    int8_t;
  _state_of_charge_type state_of_charge;

  // setters for named parameter idiom
  Type & set__timestamp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__capacity(
    const float & _arg)
  {
    this->capacity = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const float & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const float & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__state_of_charge(
    const int8_t & _arg)
  {
    this->state_of_charge = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::BatteryDB_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::BatteryDB_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::BatteryDB_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::BatteryDB_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::BatteryDB_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::BatteryDB_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::BatteryDB_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::BatteryDB_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::BatteryDB_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::BatteryDB_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__BatteryDB
    std::shared_ptr<anscer_msgs::msg::BatteryDB_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__BatteryDB
    std::shared_ptr<anscer_msgs::msg::BatteryDB_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryDB_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->capacity != other.capacity) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->state_of_charge != other.state_of_charge) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryDB_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryDB_

// alias to use template instance with default allocator
using BatteryDB =
  anscer_msgs::msg::BatteryDB_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__BATTERY_DB__STRUCT_HPP_
