// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/ShelfReader.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SHELF_READER__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SHELF_READER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__ShelfReader_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__ShelfReader_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ShelfReader_Request_
{
  using Type = ShelfReader_Request_<ContainerAllocator>;

  explicit ShelfReader_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dummy_req = 0ll;
    }
  }

  explicit ShelfReader_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dummy_req = 0ll;
    }
  }

  // field types and members
  using _dummy_req_type =
    int64_t;
  _dummy_req_type dummy_req;

  // setters for named parameter idiom
  Type & set__dummy_req(
    const int64_t & _arg)
  {
    this->dummy_req = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__ShelfReader_Request
    std::shared_ptr<anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__ShelfReader_Request
    std::shared_ptr<anscer_msgs::srv::ShelfReader_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShelfReader_Request_ & other) const
  {
    if (this->dummy_req != other.dummy_req) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShelfReader_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShelfReader_Request_

// alias to use template instance with default allocator
using ShelfReader_Request =
  anscer_msgs::srv::ShelfReader_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__ShelfReader_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__ShelfReader_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ShelfReader_Response_
{
  using Type = ShelfReader_Response_<ContainerAllocator>;

  explicit ShelfReader_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shelf_response = 0ll;
    }
  }

  explicit ShelfReader_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shelf_response = 0ll;
    }
  }

  // field types and members
  using _shelf_response_type =
    int64_t;
  _shelf_response_type shelf_response;

  // setters for named parameter idiom
  Type & set__shelf_response(
    const int64_t & _arg)
  {
    this->shelf_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__ShelfReader_Response
    std::shared_ptr<anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__ShelfReader_Response
    std::shared_ptr<anscer_msgs::srv::ShelfReader_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShelfReader_Response_ & other) const
  {
    if (this->shelf_response != other.shelf_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShelfReader_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShelfReader_Response_

// alias to use template instance with default allocator
using ShelfReader_Response =
  anscer_msgs::srv::ShelfReader_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct ShelfReader
{
  using Request = anscer_msgs::srv::ShelfReader_Request;
  using Response = anscer_msgs::srv::ShelfReader_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SHELF_READER__STRUCT_HPP_
