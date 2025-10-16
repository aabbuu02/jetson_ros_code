// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/DockInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__DockInfo __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__DockInfo __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockInfo_
{
  using Type = DockInfo_<ContainerAllocator>;

  explicit DockInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_marker = 0;
      this->dock_mode = 0;
    }
  }

  explicit DockInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_marker = 0;
      this->dock_mode = 0;
    }
  }

  // field types and members
  using _dock_marker_type =
    int8_t;
  _dock_marker_type dock_marker;
  using _dock_mode_type =
    int8_t;
  _dock_mode_type dock_mode;

  // setters for named parameter idiom
  Type & set__dock_marker(
    const int8_t & _arg)
  {
    this->dock_marker = _arg;
    return *this;
  }
  Type & set__dock_mode(
    const int8_t & _arg)
  {
    this->dock_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FIDUCIALDOCKING =
    1u;
  static constexpr uint8_t REFLECTORDOCKING =
    2u;
  static constexpr uint8_t TROLLEYDOCKING =
    3u;
  static constexpr uint8_t ICPDOCKING =
    4u;
  static constexpr uint8_t GROUNDMARKERDOCKING =
    5u;
  static constexpr uint8_t SIDEWISEDOCKING =
    6u;
  static constexpr uint8_t DOCKSTATE =
    1u;
  static constexpr uint8_t UNDOCKSTATE =
    2u;

  // pointer types
  using RawPtr =
    anscer_msgs::msg::DockInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::DockInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::DockInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::DockInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::DockInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::DockInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::DockInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::DockInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::DockInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::DockInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__DockInfo
    std::shared_ptr<anscer_msgs::msg::DockInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__DockInfo
    std::shared_ptr<anscer_msgs::msg::DockInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockInfo_ & other) const
  {
    if (this->dock_marker != other.dock_marker) {
      return false;
    }
    if (this->dock_mode != other.dock_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockInfo_

// alias to use template instance with default allocator
using DockInfo =
  anscer_msgs::msg::DockInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockInfo_<ContainerAllocator>::FIDUCIALDOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockInfo_<ContainerAllocator>::REFLECTORDOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockInfo_<ContainerAllocator>::TROLLEYDOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockInfo_<ContainerAllocator>::ICPDOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockInfo_<ContainerAllocator>::GROUNDMARKERDOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockInfo_<ContainerAllocator>::SIDEWISEDOCKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockInfo_<ContainerAllocator>::DOCKSTATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DockInfo_<ContainerAllocator>::UNDOCKSTATE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__STRUCT_HPP_
