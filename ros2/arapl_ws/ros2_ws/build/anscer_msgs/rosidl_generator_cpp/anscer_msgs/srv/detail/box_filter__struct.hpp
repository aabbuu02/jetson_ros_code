// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/BoxFilter.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__BoxFilter_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__BoxFilter_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BoxFilter_Request_
{
  using Type = BoxFilter_Request_<ContainerAllocator>;

  explicit BoxFilter_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_enable = false;
      this->restore_default = false;
      this->min_safety_x = 0.0;
      this->max_safety_x = 0.0;
      this->min_safety_y = 0.0;
      this->max_safety_y = 0.0;
      this->min_warn_x = 0.0;
      this->max_warn_x = 0.0;
      this->min_warn_y = 0.0;
      this->max_warn_y = 0.0;
      this->debounce_time = 0ll;
    }
  }

  explicit BoxFilter_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_enable = false;
      this->restore_default = false;
      this->min_safety_x = 0.0;
      this->max_safety_x = 0.0;
      this->min_safety_y = 0.0;
      this->max_safety_y = 0.0;
      this->min_warn_x = 0.0;
      this->max_warn_x = 0.0;
      this->min_warn_y = 0.0;
      this->max_warn_y = 0.0;
      this->debounce_time = 0ll;
    }
  }

  // field types and members
  using _filter_enable_type =
    bool;
  _filter_enable_type filter_enable;
  using _restore_default_type =
    bool;
  _restore_default_type restore_default;
  using _min_safety_x_type =
    double;
  _min_safety_x_type min_safety_x;
  using _max_safety_x_type =
    double;
  _max_safety_x_type max_safety_x;
  using _min_safety_y_type =
    double;
  _min_safety_y_type min_safety_y;
  using _max_safety_y_type =
    double;
  _max_safety_y_type max_safety_y;
  using _min_warn_x_type =
    double;
  _min_warn_x_type min_warn_x;
  using _max_warn_x_type =
    double;
  _max_warn_x_type max_warn_x;
  using _min_warn_y_type =
    double;
  _min_warn_y_type min_warn_y;
  using _max_warn_y_type =
    double;
  _max_warn_y_type max_warn_y;
  using _debounce_time_type =
    int64_t;
  _debounce_time_type debounce_time;

  // setters for named parameter idiom
  Type & set__filter_enable(
    const bool & _arg)
  {
    this->filter_enable = _arg;
    return *this;
  }
  Type & set__restore_default(
    const bool & _arg)
  {
    this->restore_default = _arg;
    return *this;
  }
  Type & set__min_safety_x(
    const double & _arg)
  {
    this->min_safety_x = _arg;
    return *this;
  }
  Type & set__max_safety_x(
    const double & _arg)
  {
    this->max_safety_x = _arg;
    return *this;
  }
  Type & set__min_safety_y(
    const double & _arg)
  {
    this->min_safety_y = _arg;
    return *this;
  }
  Type & set__max_safety_y(
    const double & _arg)
  {
    this->max_safety_y = _arg;
    return *this;
  }
  Type & set__min_warn_x(
    const double & _arg)
  {
    this->min_warn_x = _arg;
    return *this;
  }
  Type & set__max_warn_x(
    const double & _arg)
  {
    this->max_warn_x = _arg;
    return *this;
  }
  Type & set__min_warn_y(
    const double & _arg)
  {
    this->min_warn_y = _arg;
    return *this;
  }
  Type & set__max_warn_y(
    const double & _arg)
  {
    this->max_warn_y = _arg;
    return *this;
  }
  Type & set__debounce_time(
    const int64_t & _arg)
  {
    this->debounce_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__BoxFilter_Request
    std::shared_ptr<anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__BoxFilter_Request
    std::shared_ptr<anscer_msgs::srv::BoxFilter_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoxFilter_Request_ & other) const
  {
    if (this->filter_enable != other.filter_enable) {
      return false;
    }
    if (this->restore_default != other.restore_default) {
      return false;
    }
    if (this->min_safety_x != other.min_safety_x) {
      return false;
    }
    if (this->max_safety_x != other.max_safety_x) {
      return false;
    }
    if (this->min_safety_y != other.min_safety_y) {
      return false;
    }
    if (this->max_safety_y != other.max_safety_y) {
      return false;
    }
    if (this->min_warn_x != other.min_warn_x) {
      return false;
    }
    if (this->max_warn_x != other.max_warn_x) {
      return false;
    }
    if (this->min_warn_y != other.min_warn_y) {
      return false;
    }
    if (this->max_warn_y != other.max_warn_y) {
      return false;
    }
    if (this->debounce_time != other.debounce_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoxFilter_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoxFilter_Request_

// alias to use template instance with default allocator
using BoxFilter_Request =
  anscer_msgs::srv::BoxFilter_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__BoxFilter_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__BoxFilter_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BoxFilter_Response_
{
  using Type = BoxFilter_Response_<ContainerAllocator>;

  explicit BoxFilter_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0ll;
    }
  }

  explicit BoxFilter_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0ll;
    }
  }

  // field types and members
  using _state_type =
    int64_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const int64_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__BoxFilter_Response
    std::shared_ptr<anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__BoxFilter_Response
    std::shared_ptr<anscer_msgs::srv::BoxFilter_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoxFilter_Response_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoxFilter_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoxFilter_Response_

// alias to use template instance with default allocator
using BoxFilter_Response =
  anscer_msgs::srv::BoxFilter_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct BoxFilter
{
  using Request = anscer_msgs::srv::BoxFilter_Request;
  using Response = anscer_msgs::srv::BoxFilter_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__STRUCT_HPP_
