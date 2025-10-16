// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/ChargeInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__ChargeInfo __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__ChargeInfo __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargeInfo_
{
  using Type = ChargeInfo_<ContainerAllocator>;

  explicit ChargeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charger_activate = false;
      this->charge_time = 0l;
      this->ignore_time = false;
      this->charge_percentage = 0.0f;
      this->ignore_percentage = false;
    }
  }

  explicit ChargeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charger_activate = false;
      this->charge_time = 0l;
      this->ignore_time = false;
      this->charge_percentage = 0.0f;
      this->ignore_percentage = false;
    }
  }

  // field types and members
  using _charger_activate_type =
    bool;
  _charger_activate_type charger_activate;
  using _charge_time_type =
    int32_t;
  _charge_time_type charge_time;
  using _ignore_time_type =
    bool;
  _ignore_time_type ignore_time;
  using _charge_percentage_type =
    float;
  _charge_percentage_type charge_percentage;
  using _ignore_percentage_type =
    bool;
  _ignore_percentage_type ignore_percentage;

  // setters for named parameter idiom
  Type & set__charger_activate(
    const bool & _arg)
  {
    this->charger_activate = _arg;
    return *this;
  }
  Type & set__charge_time(
    const int32_t & _arg)
  {
    this->charge_time = _arg;
    return *this;
  }
  Type & set__ignore_time(
    const bool & _arg)
  {
    this->ignore_time = _arg;
    return *this;
  }
  Type & set__charge_percentage(
    const float & _arg)
  {
    this->charge_percentage = _arg;
    return *this;
  }
  Type & set__ignore_percentage(
    const bool & _arg)
  {
    this->ignore_percentage = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONNECTED =
    1u;
  static constexpr uint8_t DISCONNECTED =
    2u;
  static constexpr uint8_t OVERRIDE =
    3u;

  // pointer types
  using RawPtr =
    anscer_msgs::msg::ChargeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::ChargeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::ChargeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::ChargeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::ChargeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::ChargeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::ChargeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::ChargeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::ChargeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::ChargeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__ChargeInfo
    std::shared_ptr<anscer_msgs::msg::ChargeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__ChargeInfo
    std::shared_ptr<anscer_msgs::msg::ChargeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeInfo_ & other) const
  {
    if (this->charger_activate != other.charger_activate) {
      return false;
    }
    if (this->charge_time != other.charge_time) {
      return false;
    }
    if (this->ignore_time != other.ignore_time) {
      return false;
    }
    if (this->charge_percentage != other.charge_percentage) {
      return false;
    }
    if (this->ignore_percentage != other.ignore_percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeInfo_

// alias to use template instance with default allocator
using ChargeInfo =
  anscer_msgs::msg::ChargeInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChargeInfo_<ContainerAllocator>::CONNECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChargeInfo_<ContainerAllocator>::DISCONNECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ChargeInfo_<ContainerAllocator>::OVERRIDE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__CHARGE_INFO__STRUCT_HPP_
