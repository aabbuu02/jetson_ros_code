// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/EditWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoint_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__EditWaypoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__EditWaypoint_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EditWaypoint_Request_
{
  using Type = EditWaypoint_Request_<ContainerAllocator>;

  explicit EditWaypoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rename = false;
      this->replace_id = false;
      this->replace_to_current_pose = false;
      this->replace_to_pose = false;
      this->waypoint_order = 0;
      this->waypoint_id = "";
      this->new_id = "";
      this->waypoint_type = "";
      this->waypoint_name = "";
    }
  }

  explicit EditWaypoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_id(_alloc),
    new_id(_alloc),
    waypoint_type(_alloc),
    waypoint_name(_alloc),
    waypoint_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rename = false;
      this->replace_id = false;
      this->replace_to_current_pose = false;
      this->replace_to_pose = false;
      this->waypoint_order = 0;
      this->waypoint_id = "";
      this->new_id = "";
      this->waypoint_type = "";
      this->waypoint_name = "";
    }
  }

  // field types and members
  using _rename_type =
    bool;
  _rename_type rename;
  using _replace_id_type =
    bool;
  _replace_id_type replace_id;
  using _replace_to_current_pose_type =
    bool;
  _replace_to_current_pose_type replace_to_current_pose;
  using _replace_to_pose_type =
    bool;
  _replace_to_pose_type replace_to_pose;
  using _waypoint_order_type =
    int16_t;
  _waypoint_order_type waypoint_order;
  using _waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_id_type waypoint_id;
  using _new_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _new_id_type new_id;
  using _waypoint_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_type_type waypoint_type;
  using _waypoint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_name_type waypoint_name;
  using _waypoint_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _waypoint_pose_type waypoint_pose;

  // setters for named parameter idiom
  Type & set__rename(
    const bool & _arg)
  {
    this->rename = _arg;
    return *this;
  }
  Type & set__replace_id(
    const bool & _arg)
  {
    this->replace_id = _arg;
    return *this;
  }
  Type & set__replace_to_current_pose(
    const bool & _arg)
  {
    this->replace_to_current_pose = _arg;
    return *this;
  }
  Type & set__replace_to_pose(
    const bool & _arg)
  {
    this->replace_to_pose = _arg;
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
  Type & set__new_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->new_id = _arg;
    return *this;
  }
  Type & set__waypoint_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_type = _arg;
    return *this;
  }
  Type & set__waypoint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_name = _arg;
    return *this;
  }
  Type & set__waypoint_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->waypoint_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__EditWaypoint_Request
    std::shared_ptr<anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__EditWaypoint_Request
    std::shared_ptr<anscer_msgs::srv::EditWaypoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EditWaypoint_Request_ & other) const
  {
    if (this->rename != other.rename) {
      return false;
    }
    if (this->replace_id != other.replace_id) {
      return false;
    }
    if (this->replace_to_current_pose != other.replace_to_current_pose) {
      return false;
    }
    if (this->replace_to_pose != other.replace_to_pose) {
      return false;
    }
    if (this->waypoint_order != other.waypoint_order) {
      return false;
    }
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    if (this->new_id != other.new_id) {
      return false;
    }
    if (this->waypoint_type != other.waypoint_type) {
      return false;
    }
    if (this->waypoint_name != other.waypoint_name) {
      return false;
    }
    if (this->waypoint_pose != other.waypoint_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const EditWaypoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EditWaypoint_Request_

// alias to use template instance with default allocator
using EditWaypoint_Request =
  anscer_msgs::srv::EditWaypoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__EditWaypoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__EditWaypoint_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EditWaypoint_Response_
{
  using Type = EditWaypoint_Response_<ContainerAllocator>;

  explicit EditWaypoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->edited = false;
    }
  }

  explicit EditWaypoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->edited = false;
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _edited_type =
    bool;
  _edited_type edited;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__edited(
    const bool & _arg)
  {
    this->edited = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__EditWaypoint_Response
    std::shared_ptr<anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__EditWaypoint_Response
    std::shared_ptr<anscer_msgs::srv::EditWaypoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EditWaypoint_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->edited != other.edited) {
      return false;
    }
    return true;
  }
  bool operator!=(const EditWaypoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EditWaypoint_Response_

// alias to use template instance with default allocator
using EditWaypoint_Response =
  anscer_msgs::srv::EditWaypoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct EditWaypoint
{
  using Request = anscer_msgs::srv::EditWaypoint_Request;
  using Response = anscer_msgs::srv::EditWaypoint_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__STRUCT_HPP_
