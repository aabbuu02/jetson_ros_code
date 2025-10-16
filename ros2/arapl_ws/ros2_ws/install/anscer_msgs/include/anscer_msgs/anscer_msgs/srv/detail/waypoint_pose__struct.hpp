// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/WaypointPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__STRUCT_HPP_

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
# define DEPRECATED__anscer_msgs__srv__WaypointPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__WaypointPose_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WaypointPose_Request_
{
  using Type = WaypointPose_Request_<ContainerAllocator>;

  explicit WaypointPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save = false;
      this->waypoint_id = "";
      this->waypoint_name = "";
    }
  }

  explicit WaypointPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_id(_alloc),
    waypoint_pose(_alloc, _init),
    waypoint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save = false;
      this->waypoint_id = "";
      this->waypoint_name = "";
    }
  }

  // field types and members
  using _save_type =
    bool;
  _save_type save;
  using _waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_id_type waypoint_id;
  using _waypoint_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _waypoint_pose_type waypoint_pose;
  using _waypoint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_name_type waypoint_name;

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
  Type & set__waypoint_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->waypoint_pose = _arg;
    return *this;
  }
  Type & set__waypoint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__WaypointPose_Request
    std::shared_ptr<anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__WaypointPose_Request
    std::shared_ptr<anscer_msgs::srv::WaypointPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointPose_Request_ & other) const
  {
    if (this->save != other.save) {
      return false;
    }
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    if (this->waypoint_pose != other.waypoint_pose) {
      return false;
    }
    if (this->waypoint_name != other.waypoint_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointPose_Request_

// alias to use template instance with default allocator
using WaypointPose_Request =
  anscer_msgs::srv::WaypointPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__WaypointPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__WaypointPose_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WaypointPose_Response_
{
  using Type = WaypointPose_Response_<ContainerAllocator>;

  explicit WaypointPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_saved = false;
    }
  }

  explicit WaypointPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_saved = false;
    }
  }

  // field types and members
  using _is_saved_type =
    bool;
  _is_saved_type is_saved;

  // setters for named parameter idiom
  Type & set__is_saved(
    const bool & _arg)
  {
    this->is_saved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__WaypointPose_Response
    std::shared_ptr<anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__WaypointPose_Response
    std::shared_ptr<anscer_msgs::srv::WaypointPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointPose_Response_ & other) const
  {
    if (this->is_saved != other.is_saved) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointPose_Response_

// alias to use template instance with default allocator
using WaypointPose_Response =
  anscer_msgs::srv::WaypointPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct WaypointPose
{
  using Request = anscer_msgs::srv::WaypointPose_Request;
  using Response = anscer_msgs::srv::WaypointPose_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__STRUCT_HPP_
