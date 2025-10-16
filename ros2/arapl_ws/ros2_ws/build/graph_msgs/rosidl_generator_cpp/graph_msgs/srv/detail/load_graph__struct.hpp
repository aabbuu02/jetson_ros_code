// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msgs:srv/LoadGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__LOAD_GRAPH__STRUCT_HPP_
#define GRAPH_MSGS__SRV__DETAIL__LOAD_GRAPH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_msgs__srv__LoadGraph_Request __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__srv__LoadGraph_Request __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadGraph_Request_
{
  using Type = LoadGraph_Request_<ContainerAllocator>;

  explicit LoadGraph_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->graph_url = "";
    }
  }

  explicit LoadGraph_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : graph_url(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->graph_url = "";
    }
  }

  // field types and members
  using _graph_url_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _graph_url_type graph_url;

  // setters for named parameter idiom
  Type & set__graph_url(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->graph_url = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msgs::srv::LoadGraph_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::srv::LoadGraph_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::srv::LoadGraph_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::srv::LoadGraph_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::srv::LoadGraph_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::srv::LoadGraph_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::srv::LoadGraph_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::srv::LoadGraph_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::srv::LoadGraph_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::srv::LoadGraph_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__srv__LoadGraph_Request
    std::shared_ptr<graph_msgs::srv::LoadGraph_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__srv__LoadGraph_Request
    std::shared_ptr<graph_msgs::srv::LoadGraph_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadGraph_Request_ & other) const
  {
    if (this->graph_url != other.graph_url) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadGraph_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadGraph_Request_

// alias to use template instance with default allocator
using LoadGraph_Request =
  graph_msgs::srv::LoadGraph_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_msgs


// Include directives for member types
// Member 'graph'
#include "graph_msgs/msg/detail/graph__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msgs__srv__LoadGraph_Response __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__srv__LoadGraph_Response __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadGraph_Response_
{
  using Type = LoadGraph_Response_<ContainerAllocator>;

  explicit LoadGraph_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : graph(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit LoadGraph_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : graph(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _graph_type =
    graph_msgs::msg::Graph_<ContainerAllocator>;
  _graph_type graph;
  using _result_type =
    uint8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__graph(
    const graph_msgs::msg::Graph_<ContainerAllocator> & _arg)
  {
    this->graph = _arg;
    return *this;
  }
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_SUCCESS =
    0u;
  static constexpr uint8_t RESULT_GRAPH_DOES_NOT_EXIST =
    1u;
  static constexpr uint8_t RESULT_INVALID_GRAPH_FILE_PATH =
    2u;
  static constexpr uint8_t RESULT_UNDEFINED_FAILURE =
    255u;

  // pointer types
  using RawPtr =
    graph_msgs::srv::LoadGraph_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::srv::LoadGraph_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::srv::LoadGraph_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::srv::LoadGraph_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::srv::LoadGraph_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::srv::LoadGraph_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::srv::LoadGraph_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::srv::LoadGraph_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::srv::LoadGraph_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::srv::LoadGraph_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__srv__LoadGraph_Response
    std::shared_ptr<graph_msgs::srv::LoadGraph_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__srv__LoadGraph_Response
    std::shared_ptr<graph_msgs::srv::LoadGraph_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadGraph_Response_ & other) const
  {
    if (this->graph != other.graph) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadGraph_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadGraph_Response_

// alias to use template instance with default allocator
using LoadGraph_Response =
  graph_msgs::srv::LoadGraph_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadGraph_Response_<ContainerAllocator>::RESULT_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadGraph_Response_<ContainerAllocator>::RESULT_GRAPH_DOES_NOT_EXIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadGraph_Response_<ContainerAllocator>::RESULT_INVALID_GRAPH_FILE_PATH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LoadGraph_Response_<ContainerAllocator>::RESULT_UNDEFINED_FAILURE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace graph_msgs

namespace graph_msgs
{

namespace srv
{

struct LoadGraph
{
  using Request = graph_msgs::srv::LoadGraph_Request;
  using Response = graph_msgs::srv::LoadGraph_Response;
};

}  // namespace srv

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__SRV__DETAIL__LOAD_GRAPH__STRUCT_HPP_
