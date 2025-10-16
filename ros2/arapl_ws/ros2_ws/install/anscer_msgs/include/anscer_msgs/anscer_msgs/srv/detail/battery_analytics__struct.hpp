// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/BatteryAnalytics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BATTERY_ANALYTICS__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BATTERY_ANALYTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__BatteryAnalytics_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__BatteryAnalytics_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryAnalytics_Request_
{
  using Type = BatteryAnalytics_Request_<ContainerAllocator>;

  explicit BatteryAnalytics_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_date = "";
      this->end_date = "";
    }
  }

  explicit BatteryAnalytics_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_date(_alloc),
    end_date(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_date = "";
      this->end_date = "";
    }
  }

  // field types and members
  using _start_date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_date_type start_date;
  using _end_date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_date_type end_date;

  // setters for named parameter idiom
  Type & set__start_date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_date = _arg;
    return *this;
  }
  Type & set__end_date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_date = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__BatteryAnalytics_Request
    std::shared_ptr<anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__BatteryAnalytics_Request
    std::shared_ptr<anscer_msgs::srv::BatteryAnalytics_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryAnalytics_Request_ & other) const
  {
    if (this->start_date != other.start_date) {
      return false;
    }
    if (this->end_date != other.end_date) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryAnalytics_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryAnalytics_Request_

// alias to use template instance with default allocator
using BatteryAnalytics_Request =
  anscer_msgs::srv::BatteryAnalytics_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


// Include directives for member types
// Member 'battery_db'
#include "anscer_msgs/msg/detail/battery_db__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__BatteryAnalytics_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__BatteryAnalytics_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryAnalytics_Response_
{
  using Type = BatteryAnalytics_Response_<ContainerAllocator>;

  explicit BatteryAnalytics_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BatteryAnalytics_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _battery_db_type =
    std::vector<anscer_msgs::msg::BatteryDB_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::BatteryDB_<ContainerAllocator>>>;
  _battery_db_type battery_db;

  // setters for named parameter idiom
  Type & set__battery_db(
    const std::vector<anscer_msgs::msg::BatteryDB_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::BatteryDB_<ContainerAllocator>>> & _arg)
  {
    this->battery_db = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__BatteryAnalytics_Response
    std::shared_ptr<anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__BatteryAnalytics_Response
    std::shared_ptr<anscer_msgs::srv::BatteryAnalytics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryAnalytics_Response_ & other) const
  {
    if (this->battery_db != other.battery_db) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryAnalytics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryAnalytics_Response_

// alias to use template instance with default allocator
using BatteryAnalytics_Response =
  anscer_msgs::srv::BatteryAnalytics_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct BatteryAnalytics
{
  using Request = anscer_msgs::srv::BatteryAnalytics_Request;
  using Response = anscer_msgs::srv::BatteryAnalytics_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__BATTERY_ANALYTICS__STRUCT_HPP_
