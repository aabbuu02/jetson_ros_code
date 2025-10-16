// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'charge_info'
#include "anscer_msgs/msg/detail/charge_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__Feedback __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__Feedback __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Feedback_
{
  using Type = Feedback_<ContainerAllocator>;

  explicit Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : charge_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = "";
      this->mission_id = "";
      this->number = 0;
      this->status = 0;
      this->completion_percentage = 0.0f;
      this->time_elapsed = 0l;
      this->priority_level = 0l;
    }
  }

  explicit Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : index(_alloc),
    mission_id(_alloc),
    charge_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = "";
      this->mission_id = "";
      this->number = 0;
      this->status = 0;
      this->completion_percentage = 0.0f;
      this->time_elapsed = 0l;
      this->priority_level = 0l;
    }
  }

  // field types and members
  using _index_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _index_type index;
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _number_type =
    int16_t;
  _number_type number;
  using _status_type =
    int16_t;
  _status_type status;
  using _charge_info_type =
    anscer_msgs::msg::ChargeInfo_<ContainerAllocator>;
  _charge_info_type charge_info;
  using _completion_percentage_type =
    float;
  _completion_percentage_type completion_percentage;
  using _time_elapsed_type =
    int32_t;
  _time_elapsed_type time_elapsed;
  using _priority_level_type =
    int32_t;
  _priority_level_type priority_level;

  // setters for named parameter idiom
  Type & set__index(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__number(
    const int16_t & _arg)
  {
    this->number = _arg;
    return *this;
  }
  Type & set__status(
    const int16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__charge_info(
    const anscer_msgs::msg::ChargeInfo_<ContainerAllocator> & _arg)
  {
    this->charge_info = _arg;
    return *this;
  }
  Type & set__completion_percentage(
    const float & _arg)
  {
    this->completion_percentage = _arg;
    return *this;
  }
  Type & set__time_elapsed(
    const int32_t & _arg)
  {
    this->time_elapsed = _arg;
    return *this;
  }
  Type & set__priority_level(
    const int32_t & _arg)
  {
    this->priority_level = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t IDLE =
    0;
  static constexpr int32_t ACTIVE =
    1;
  static constexpr int32_t SUCCESS =
    2;
  static constexpr int32_t ABORTED =
    3;
  static constexpr int32_t PAUSED =
    4;

  // pointer types
  using RawPtr =
    anscer_msgs::msg::Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__Feedback
    std::shared_ptr<anscer_msgs::msg::Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__Feedback
    std::shared_ptr<anscer_msgs::msg::Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Feedback_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->charge_info != other.charge_info) {
      return false;
    }
    if (this->completion_percentage != other.completion_percentage) {
      return false;
    }
    if (this->time_elapsed != other.time_elapsed) {
      return false;
    }
    if (this->priority_level != other.priority_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Feedback_

// alias to use template instance with default allocator
using Feedback =
  anscer_msgs::msg::Feedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Feedback_<ContainerAllocator>::IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Feedback_<ContainerAllocator>::ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Feedback_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Feedback_<ContainerAllocator>::ABORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Feedback_<ContainerAllocator>::PAUSED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
