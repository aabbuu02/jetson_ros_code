// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msgs:srv/GetGraphPlan.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__STRUCT_HPP_
#define GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_msgs__srv__GetGraphPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__srv__GetGraphPlan_Request __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGraphPlan_Request_
{
  using Type = GetGraphPlan_Request_<ContainerAllocator>;

  explicit GetGraphPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_id = 0ul;
      this->target_id = 0ul;
      this->ignore_goal_orientation = false;
      this->ignore_path_orientation = false;
    }
  }

  explicit GetGraphPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_id = 0ul;
      this->target_id = 0ul;
      this->ignore_goal_orientation = false;
      this->ignore_path_orientation = false;
    }
  }

  // field types and members
  using _source_id_type =
    uint32_t;
  _source_id_type source_id;
  using _target_id_type =
    uint32_t;
  _target_id_type target_id;
  using _ignore_goal_orientation_type =
    bool;
  _ignore_goal_orientation_type ignore_goal_orientation;
  using _ignore_path_orientation_type =
    bool;
  _ignore_path_orientation_type ignore_path_orientation;

  // setters for named parameter idiom
  Type & set__source_id(
    const uint32_t & _arg)
  {
    this->source_id = _arg;
    return *this;
  }
  Type & set__target_id(
    const uint32_t & _arg)
  {
    this->target_id = _arg;
    return *this;
  }
  Type & set__ignore_goal_orientation(
    const bool & _arg)
  {
    this->ignore_goal_orientation = _arg;
    return *this;
  }
  Type & set__ignore_path_orientation(
    const bool & _arg)
  {
    this->ignore_path_orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__srv__GetGraphPlan_Request
    std::shared_ptr<graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__srv__GetGraphPlan_Request
    std::shared_ptr<graph_msgs::srv::GetGraphPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGraphPlan_Request_ & other) const
  {
    if (this->source_id != other.source_id) {
      return false;
    }
    if (this->target_id != other.target_id) {
      return false;
    }
    if (this->ignore_goal_orientation != other.ignore_goal_orientation) {
      return false;
    }
    if (this->ignore_path_orientation != other.ignore_path_orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGraphPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGraphPlan_Request_

// alias to use template instance with default allocator
using GetGraphPlan_Request =
  graph_msgs::srv::GetGraphPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_msgs


// Include directives for member types
// Member 'vertices_in_plan'
#include "graph_msgs/msg/detail/vertex__struct.hpp"
// Member 'plan'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msgs__srv__GetGraphPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__srv__GetGraphPlan_Response __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGraphPlan_Response_
{
  using Type = GetGraphPlan_Response_<ContainerAllocator>;

  explicit GetGraphPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_distance = 0.0;
      this->success = false;
      this->message = "";
    }
  }

  explicit GetGraphPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_distance = 0.0;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _vertices_in_plan_type =
    std::vector<graph_msgs::msg::Vertex_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Vertex_<ContainerAllocator>>>;
  _vertices_in_plan_type vertices_in_plan;
  using _plan_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _plan_type plan;
  using _plan_distance_type =
    double;
  _plan_distance_type plan_distance;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__vertices_in_plan(
    const std::vector<graph_msgs::msg::Vertex_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Vertex_<ContainerAllocator>>> & _arg)
  {
    this->vertices_in_plan = _arg;
    return *this;
  }
  Type & set__plan(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->plan = _arg;
    return *this;
  }
  Type & set__plan_distance(
    const double & _arg)
  {
    this->plan_distance = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__srv__GetGraphPlan_Response
    std::shared_ptr<graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__srv__GetGraphPlan_Response
    std::shared_ptr<graph_msgs::srv::GetGraphPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGraphPlan_Response_ & other) const
  {
    if (this->vertices_in_plan != other.vertices_in_plan) {
      return false;
    }
    if (this->plan != other.plan) {
      return false;
    }
    if (this->plan_distance != other.plan_distance) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGraphPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGraphPlan_Response_

// alias to use template instance with default allocator
using GetGraphPlan_Response =
  graph_msgs::srv::GetGraphPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_msgs

namespace graph_msgs
{

namespace srv
{

struct GetGraphPlan
{
  using Request = graph_msgs::srv::GetGraphPlan_Request;
  using Response = graph_msgs::srv::GetGraphPlan_Response;
};

}  // namespace srv

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__STRUCT_HPP_
