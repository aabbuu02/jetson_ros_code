// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/EditSequence.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__EditSequence_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__EditSequence_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EditSequence_Request_
{
  using Type = EditSequence_Request_<ContainerAllocator>;

  explicit EditSequence_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save = false;
      this->waypoint_id = "";
      this->sequence_list = "";
    }
  }

  explicit EditSequence_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_id(_alloc),
    sequence_list(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save = false;
      this->waypoint_id = "";
      this->sequence_list = "";
    }
  }

  // field types and members
  using _save_type =
    bool;
  _save_type save;
  using _waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_id_type waypoint_id;
  using _sequence_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sequence_list_type sequence_list;

  // setters for named parameter idiom
  Type & set__save(
    const bool & _arg)
  {
    this->save = _arg;
    return *this;
  }
  Type & set__waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_id = _arg;
    return *this;
  }
  Type & set__sequence_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sequence_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::EditSequence_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::EditSequence_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::EditSequence_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::EditSequence_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::EditSequence_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::EditSequence_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::EditSequence_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::EditSequence_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::EditSequence_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::EditSequence_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__EditSequence_Request
    std::shared_ptr<anscer_msgs::srv::EditSequence_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__EditSequence_Request
    std::shared_ptr<anscer_msgs::srv::EditSequence_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EditSequence_Request_ & other) const
  {
    if (this->save != other.save) {
      return false;
    }
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    if (this->sequence_list != other.sequence_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const EditSequence_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EditSequence_Request_

// alias to use template instance with default allocator
using EditSequence_Request =
  anscer_msgs::srv::EditSequence_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__EditSequence_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__EditSequence_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EditSequence_Response_
{
  using Type = EditSequence_Response_<ContainerAllocator>;

  explicit EditSequence_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_saved = false;
      this->status = "";
    }
  }

  explicit EditSequence_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_saved = false;
      this->status = "";
    }
  }

  // field types and members
  using _is_saved_type =
    bool;
  _is_saved_type is_saved;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__is_saved(
    const bool & _arg)
  {
    this->is_saved = _arg;
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
    anscer_msgs::srv::EditSequence_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::EditSequence_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::EditSequence_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::EditSequence_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::EditSequence_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::EditSequence_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::EditSequence_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::EditSequence_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::EditSequence_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::EditSequence_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__EditSequence_Response
    std::shared_ptr<anscer_msgs::srv::EditSequence_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__EditSequence_Response
    std::shared_ptr<anscer_msgs::srv::EditSequence_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EditSequence_Response_ & other) const
  {
    if (this->is_saved != other.is_saved) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const EditSequence_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EditSequence_Response_

// alias to use template instance with default allocator
using EditSequence_Response =
  anscer_msgs::srv::EditSequence_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct EditSequence
{
  using Request = anscer_msgs::srv::EditSequence_Request;
  using Response = anscer_msgs::srv::EditSequence_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__EDIT_SEQUENCE__STRUCT_HPP_
