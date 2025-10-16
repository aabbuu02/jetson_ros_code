// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/SafetyParam.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__SafetyParam_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__SafetyParam_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SafetyParam_Request_
{
  using Type = SafetyParam_Request_<ContainerAllocator>;

  explicit SafetyParam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_x = 0.0f;
      this->min_y = 0.0f;
      this->min_z = 0.0f;
      this->max_x = 0.0f;
      this->max_y = 0.0f;
      this->max_z = 0.0f;
    }
  }

  explicit SafetyParam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_x = 0.0f;
      this->min_y = 0.0f;
      this->min_z = 0.0f;
      this->max_x = 0.0f;
      this->max_y = 0.0f;
      this->max_z = 0.0f;
    }
  }

  // field types and members
  using _min_x_type =
    float;
  _min_x_type min_x;
  using _min_y_type =
    float;
  _min_y_type min_y;
  using _min_z_type =
    float;
  _min_z_type min_z;
  using _max_x_type =
    float;
  _max_x_type max_x;
  using _max_y_type =
    float;
  _max_y_type max_y;
  using _max_z_type =
    float;
  _max_z_type max_z;

  // setters for named parameter idiom
  Type & set__min_x(
    const float & _arg)
  {
    this->min_x = _arg;
    return *this;
  }
  Type & set__min_y(
    const float & _arg)
  {
    this->min_y = _arg;
    return *this;
  }
  Type & set__min_z(
    const float & _arg)
  {
    this->min_z = _arg;
    return *this;
  }
  Type & set__max_x(
    const float & _arg)
  {
    this->max_x = _arg;
    return *this;
  }
  Type & set__max_y(
    const float & _arg)
  {
    this->max_y = _arg;
    return *this;
  }
  Type & set__max_z(
    const float & _arg)
  {
    this->max_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__SafetyParam_Request
    std::shared_ptr<anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__SafetyParam_Request
    std::shared_ptr<anscer_msgs::srv::SafetyParam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyParam_Request_ & other) const
  {
    if (this->min_x != other.min_x) {
      return false;
    }
    if (this->min_y != other.min_y) {
      return false;
    }
    if (this->min_z != other.min_z) {
      return false;
    }
    if (this->max_x != other.max_x) {
      return false;
    }
    if (this->max_y != other.max_y) {
      return false;
    }
    if (this->max_z != other.max_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyParam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyParam_Request_

// alias to use template instance with default allocator
using SafetyParam_Request =
  anscer_msgs::srv::SafetyParam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__SafetyParam_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__SafetyParam_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SafetyParam_Response_
{
  using Type = SafetyParam_Response_<ContainerAllocator>;

  explicit SafetyParam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit SafetyParam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__SafetyParam_Response
    std::shared_ptr<anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__SafetyParam_Response
    std::shared_ptr<anscer_msgs::srv::SafetyParam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyParam_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyParam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyParam_Response_

// alias to use template instance with default allocator
using SafetyParam_Response =
  anscer_msgs::srv::SafetyParam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct SafetyParam
{
  using Request = anscer_msgs::srv::SafetyParam_Request;
  using Response = anscer_msgs::srv::SafetyParam_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__STRUCT_HPP_
