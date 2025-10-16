// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/CallMission.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__CallMission_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__CallMission_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CallMission_Request_
{
  using Type = CallMission_Request_<ContainerAllocator>;

  explicit CallMission_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initate = false;
      this->mission_name = "";
      this->loops = 0;
    }
  }

  explicit CallMission_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initate = false;
      this->mission_name = "";
      this->loops = 0;
    }
  }

  // field types and members
  using _initate_type =
    bool;
  _initate_type initate;
  using _mission_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_name_type mission_name;
  using _loops_type =
    int16_t;
  _loops_type loops;

  // setters for named parameter idiom
  Type & set__initate(
    const bool & _arg)
  {
    this->initate = _arg;
    return *this;
  }
  Type & set__mission_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_name = _arg;
    return *this;
  }
  Type & set__loops(
    const int16_t & _arg)
  {
    this->loops = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::CallMission_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::CallMission_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::CallMission_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::CallMission_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::CallMission_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::CallMission_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::CallMission_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::CallMission_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::CallMission_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::CallMission_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__CallMission_Request
    std::shared_ptr<anscer_msgs::srv::CallMission_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__CallMission_Request
    std::shared_ptr<anscer_msgs::srv::CallMission_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CallMission_Request_ & other) const
  {
    if (this->initate != other.initate) {
      return false;
    }
    if (this->mission_name != other.mission_name) {
      return false;
    }
    if (this->loops != other.loops) {
      return false;
    }
    return true;
  }
  bool operator!=(const CallMission_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CallMission_Request_

// alias to use template instance with default allocator
using CallMission_Request =
  anscer_msgs::srv::CallMission_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__CallMission_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__CallMission_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CallMission_Response_
{
  using Type = CallMission_Response_<ContainerAllocator>;

  explicit CallMission_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initated = false;
      this->status = "";
    }
  }

  explicit CallMission_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initated = false;
      this->status = "";
    }
  }

  // field types and members
  using _initated_type =
    bool;
  _initated_type initated;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__initated(
    const bool & _arg)
  {
    this->initated = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::CallMission_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::CallMission_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::CallMission_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::CallMission_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::CallMission_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::CallMission_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::CallMission_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::CallMission_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::CallMission_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::CallMission_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__CallMission_Response
    std::shared_ptr<anscer_msgs::srv::CallMission_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__CallMission_Response
    std::shared_ptr<anscer_msgs::srv::CallMission_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CallMission_Response_ & other) const
  {
    if (this->initated != other.initated) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CallMission_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CallMission_Response_

// alias to use template instance with default allocator
using CallMission_Response =
  anscer_msgs::srv::CallMission_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct CallMission
{
  using Request = anscer_msgs::srv::CallMission_Request;
  using Response = anscer_msgs::srv::CallMission_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__CALL_MISSION__STRUCT_HPP_
