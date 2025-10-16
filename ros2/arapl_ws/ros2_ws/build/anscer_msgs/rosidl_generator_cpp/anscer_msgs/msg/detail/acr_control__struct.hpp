// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/ACRControl.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__ACRControl __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__ACRControl __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ACRControl_
{
  using Type = ACRControl_<ContainerAllocator>;

  explicit ACRControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acr_shelf = 0;
      this->target_shelf = 0;
      this->acr_action = 0;
      this->bar_code_number = 0ll;
      this->whole_bin_number = 0ll;
    }
  }

  explicit ACRControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acr_shelf = 0;
      this->target_shelf = 0;
      this->acr_action = 0;
      this->bar_code_number = 0ll;
      this->whole_bin_number = 0ll;
    }
  }

  // field types and members
  using _acr_shelf_type =
    int16_t;
  _acr_shelf_type acr_shelf;
  using _target_shelf_type =
    int16_t;
  _target_shelf_type target_shelf;
  using _acr_action_type =
    int16_t;
  _acr_action_type acr_action;
  using _bar_code_number_type =
    int64_t;
  _bar_code_number_type bar_code_number;
  using _whole_bin_number_type =
    int64_t;
  _whole_bin_number_type whole_bin_number;

  // setters for named parameter idiom
  Type & set__acr_shelf(
    const int16_t & _arg)
  {
    this->acr_shelf = _arg;
    return *this;
  }
  Type & set__target_shelf(
    const int16_t & _arg)
  {
    this->target_shelf = _arg;
    return *this;
  }
  Type & set__acr_action(
    const int16_t & _arg)
  {
    this->acr_action = _arg;
    return *this;
  }
  Type & set__bar_code_number(
    const int64_t & _arg)
  {
    this->bar_code_number = _arg;
    return *this;
  }
  Type & set__whole_bin_number(
    const int64_t & _arg)
  {
    this->whole_bin_number = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t PICKUP =
    0;
  static constexpr int32_t DROPOFF =
    1;

  // pointer types
  using RawPtr =
    anscer_msgs::msg::ACRControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::ACRControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::ACRControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::ACRControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::ACRControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::ACRControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::ACRControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::ACRControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::ACRControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::ACRControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__ACRControl
    std::shared_ptr<anscer_msgs::msg::ACRControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__ACRControl
    std::shared_ptr<anscer_msgs::msg::ACRControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ACRControl_ & other) const
  {
    if (this->acr_shelf != other.acr_shelf) {
      return false;
    }
    if (this->target_shelf != other.target_shelf) {
      return false;
    }
    if (this->acr_action != other.acr_action) {
      return false;
    }
    if (this->bar_code_number != other.bar_code_number) {
      return false;
    }
    if (this->whole_bin_number != other.whole_bin_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const ACRControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ACRControl_

// alias to use template instance with default allocator
using ACRControl =
  anscer_msgs::msg::ACRControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ACRControl_<ContainerAllocator>::PICKUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ACRControl_<ContainerAllocator>::DROPOFF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__ACR_CONTROL__STRUCT_HPP_
