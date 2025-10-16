// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/DeleteWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__DeleteWaypoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__DeleteWaypoint_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DeleteWaypoint_Request_
{
  using Type = DeleteWaypoint_Request_<ContainerAllocator>;

  explicit DeleteWaypoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delete_wp = false;
      this->waypoint_order = 0;
      this->waypoint_id = "";
      this->waypoint_type = "";
    }
  }

  explicit DeleteWaypoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_id(_alloc),
    waypoint_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delete_wp = false;
      this->waypoint_order = 0;
      this->waypoint_id = "";
      this->waypoint_type = "";
    }
  }

  // field types and members
  using _delete_wp_type =
    bool;
  _delete_wp_type delete_wp;
  using _waypoint_order_type =
    int16_t;
  _waypoint_order_type waypoint_order;
  using _waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_id_type waypoint_id;
  using _waypoint_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_type_type waypoint_type;

  // setters for named parameter idiom
  Type & set__delete_wp(
    const bool & _arg)
  {
    this->delete_wp = _arg;
    return *this;
  }
  Type & set__waypoint_order(
    const int16_t & _arg)
  {
    this->waypoint_order = _arg;
    return *this;
  }
  Type & set__waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_id = _arg;
    return *this;
  }
  Type & set__waypoint_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__DeleteWaypoint_Request
    std::shared_ptr<anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__DeleteWaypoint_Request
    std::shared_ptr<anscer_msgs::srv::DeleteWaypoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeleteWaypoint_Request_ & other) const
  {
    if (this->delete_wp != other.delete_wp) {
      return false;
    }
    if (this->waypoint_order != other.waypoint_order) {
      return false;
    }
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    if (this->waypoint_type != other.waypoint_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeleteWaypoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeleteWaypoint_Request_

// alias to use template instance with default allocator
using DeleteWaypoint_Request =
  anscer_msgs::srv::DeleteWaypoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__DeleteWaypoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__DeleteWaypoint_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DeleteWaypoint_Response_
{
  using Type = DeleteWaypoint_Response_<ContainerAllocator>;

  explicit DeleteWaypoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->is_deleted = false;
    }
  }

  explicit DeleteWaypoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->is_deleted = false;
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _is_deleted_type =
    bool;
  _is_deleted_type is_deleted;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__is_deleted(
    const bool & _arg)
  {
    this->is_deleted = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__DeleteWaypoint_Response
    std::shared_ptr<anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__DeleteWaypoint_Response
    std::shared_ptr<anscer_msgs::srv::DeleteWaypoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeleteWaypoint_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->is_deleted != other.is_deleted) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeleteWaypoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeleteWaypoint_Response_

// alias to use template instance with default allocator
using DeleteWaypoint_Response =
  anscer_msgs::srv::DeleteWaypoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct DeleteWaypoint
{
  using Request = anscer_msgs::srv::DeleteWaypoint_Request;
  using Response = anscer_msgs::srv::DeleteWaypoint_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__STRUCT_HPP_
