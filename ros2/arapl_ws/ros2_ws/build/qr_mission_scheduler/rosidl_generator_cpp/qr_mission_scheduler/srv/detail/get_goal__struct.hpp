// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qr_mission_scheduler:srv/GetGoal.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__STRUCT_HPP_
#define QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qr_mission_scheduler__srv__GetGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__qr_mission_scheduler__srv__GetGoal_Request __declspec(deprecated)
#endif

namespace qr_mission_scheduler
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGoal_Request_
{
  using Type = GetGoal_Request_<ContainerAllocator>;

  explicit GetGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_type = "";
      this->source_id = 0.0;
      this->target_id = 0.0;
    }
  }

  explicit GetGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_type = "";
      this->source_id = 0.0;
      this->target_id = 0.0;
    }
  }

  // field types and members
  using _goal_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _goal_type_type goal_type;
  using _source_id_type =
    double;
  _source_id_type source_id;
  using _target_id_type =
    double;
  _target_id_type target_id;

  // setters for named parameter idiom
  Type & set__goal_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->goal_type = _arg;
    return *this;
  }
  Type & set__source_id(
    const double & _arg)
  {
    this->source_id = _arg;
    return *this;
  }
  Type & set__target_id(
    const double & _arg)
  {
    this->target_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qr_mission_scheduler__srv__GetGoal_Request
    std::shared_ptr<qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qr_mission_scheduler__srv__GetGoal_Request
    std::shared_ptr<qr_mission_scheduler::srv::GetGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGoal_Request_ & other) const
  {
    if (this->goal_type != other.goal_type) {
      return false;
    }
    if (this->source_id != other.source_id) {
      return false;
    }
    if (this->target_id != other.target_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGoal_Request_

// alias to use template instance with default allocator
using GetGoal_Request =
  qr_mission_scheduler::srv::GetGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace qr_mission_scheduler


#ifndef _WIN32
# define DEPRECATED__qr_mission_scheduler__srv__GetGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__qr_mission_scheduler__srv__GetGoal_Response __declspec(deprecated)
#endif

namespace qr_mission_scheduler
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGoal_Response_
{
  using Type = GetGoal_Response_<ContainerAllocator>;

  explicit GetGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit GetGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qr_mission_scheduler__srv__GetGoal_Response
    std::shared_ptr<qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qr_mission_scheduler__srv__GetGoal_Response
    std::shared_ptr<qr_mission_scheduler::srv::GetGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGoal_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGoal_Response_

// alias to use template instance with default allocator
using GetGoal_Response =
  qr_mission_scheduler::srv::GetGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace qr_mission_scheduler

namespace qr_mission_scheduler
{

namespace srv
{

struct GetGoal
{
  using Request = qr_mission_scheduler::srv::GetGoal_Request;
  using Response = qr_mission_scheduler::srv::GetGoal_Response;
};

}  // namespace srv

}  // namespace qr_mission_scheduler

#endif  // QR_MISSION_SCHEDULER__SRV__DETAIL__GET_GOAL__STRUCT_HPP_
