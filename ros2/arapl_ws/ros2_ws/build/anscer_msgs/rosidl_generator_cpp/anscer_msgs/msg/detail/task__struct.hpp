// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TASK__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'acr_info'
#include "anscer_msgs/msg/detail/acr_control__struct.hpp"
// Member 'charge_info'
#include "anscer_msgs/msg/detail/charge_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__Task __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__Task __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Task_
{
  using Type = Task_<ContainerAllocator>;

  explicit Task_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acr_info(_init),
    charge_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = "";
      this->waypoint_index = 0;
      this->number = 0;
      this->activate = false;
    }
  }

  explicit Task_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : index(_alloc),
    acr_info(_alloc, _init),
    charge_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = "";
      this->waypoint_index = 0;
      this->number = 0;
      this->activate = false;
    }
  }

  // field types and members
  using _index_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _index_type index;
  using _waypoint_index_type =
    int16_t;
  _waypoint_index_type waypoint_index;
  using _number_type =
    int16_t;
  _number_type number;
  using _activate_type =
    bool;
  _activate_type activate;
  using _acr_info_type =
    anscer_msgs::msg::ACRControl_<ContainerAllocator>;
  _acr_info_type acr_info;
  using _charge_info_type =
    anscer_msgs::msg::ChargeInfo_<ContainerAllocator>;
  _charge_info_type charge_info;

  // setters for named parameter idiom
  Type & set__index(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__waypoint_index(
    const int16_t & _arg)
  {
    this->waypoint_index = _arg;
    return *this;
  }
  Type & set__number(
    const int16_t & _arg)
  {
    this->number = _arg;
    return *this;
  }
  Type & set__activate(
    const bool & _arg)
  {
    this->activate = _arg;
    return *this;
  }
  Type & set__acr_info(
    const anscer_msgs::msg::ACRControl_<ContainerAllocator> & _arg)
  {
    this->acr_info = _arg;
    return *this;
  }
  Type & set__charge_info(
    const anscer_msgs::msg::ChargeInfo_<ContainerAllocator> & _arg)
  {
    this->charge_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::Task_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::Task_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::Task_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::Task_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Task_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Task_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Task_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Task_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::Task_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::Task_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__Task
    std::shared_ptr<anscer_msgs::msg::Task_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__Task
    std::shared_ptr<anscer_msgs::msg::Task_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->waypoint_index != other.waypoint_index) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    if (this->activate != other.activate) {
      return false;
    }
    if (this->acr_info != other.acr_info) {
      return false;
    }
    if (this->charge_info != other.charge_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_

// alias to use template instance with default allocator
using Task =
  anscer_msgs::msg::Task_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__TASK__STRUCT_HPP_
