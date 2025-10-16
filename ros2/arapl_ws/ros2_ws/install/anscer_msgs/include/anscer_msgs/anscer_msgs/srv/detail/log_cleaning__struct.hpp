// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/LogCleaning.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__LogCleaning_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__LogCleaning_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LogCleaning_Request_
{
  using Type = LogCleaning_Request_<ContainerAllocator>;

  explicit LogCleaning_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cleaning_hour = 0.0f;
      this->cleaning_size = 0.0f;
      this->mode = 0;
    }
  }

  explicit LogCleaning_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cleaning_hour = 0.0f;
      this->cleaning_size = 0.0f;
      this->mode = 0;
    }
  }

  // field types and members
  using _cleaning_hour_type =
    float;
  _cleaning_hour_type cleaning_hour;
  using _cleaning_size_type =
    float;
  _cleaning_size_type cleaning_size;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__cleaning_hour(
    const float & _arg)
  {
    this->cleaning_hour = _arg;
    return *this;
  }
  Type & set__cleaning_size(
    const float & _arg)
  {
    this->cleaning_size = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t USE_TIME_AND_SIZE =
    0u;
  static constexpr uint8_t BASED_ON_TIME =
    1u;
  static constexpr uint8_t BASED_ON_SIZE =
    2u;

  // pointer types
  using RawPtr =
    anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__LogCleaning_Request
    std::shared_ptr<anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__LogCleaning_Request
    std::shared_ptr<anscer_msgs::srv::LogCleaning_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogCleaning_Request_ & other) const
  {
    if (this->cleaning_hour != other.cleaning_hour) {
      return false;
    }
    if (this->cleaning_size != other.cleaning_size) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogCleaning_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogCleaning_Request_

// alias to use template instance with default allocator
using LogCleaning_Request =
  anscer_msgs::srv::LogCleaning_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LogCleaning_Request_<ContainerAllocator>::USE_TIME_AND_SIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LogCleaning_Request_<ContainerAllocator>::BASED_ON_TIME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LogCleaning_Request_<ContainerAllocator>::BASED_ON_SIZE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__LogCleaning_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__LogCleaning_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LogCleaning_Response_
{
  using Type = LogCleaning_Response_<ContainerAllocator>;

  explicit LogCleaning_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit LogCleaning_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__LogCleaning_Response
    std::shared_ptr<anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__LogCleaning_Response
    std::shared_ptr<anscer_msgs::srv::LogCleaning_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogCleaning_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogCleaning_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogCleaning_Response_

// alias to use template instance with default allocator
using LogCleaning_Response =
  anscer_msgs::srv::LogCleaning_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct LogCleaning
{
  using Request = anscer_msgs::srv::LogCleaning_Request;
  using Response = anscer_msgs::srv::LogCleaning_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__STRUCT_HPP_
