// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wms_data:msg/WMSTasks.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_TASKS__STRUCT_HPP_
#define WMS_DATA__MSG__DETAIL__WMS_TASKS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tasks'
#include "wms_data/msg/detail/wms_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wms_data__msg__WMSTasks __attribute__((deprecated))
#else
# define DEPRECATED__wms_data__msg__WMSTasks __declspec(deprecated)
#endif

namespace wms_data
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WMSTasks_
{
  using Type = WMSTasks_<ContainerAllocator>;

  explicit WMSTasks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit WMSTasks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tasks_type =
    std::vector<wms_data::msg::WMSData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wms_data::msg::WMSData_<ContainerAllocator>>>;
  _tasks_type tasks;

  // setters for named parameter idiom
  Type & set__tasks(
    const std::vector<wms_data::msg::WMSData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wms_data::msg::WMSData_<ContainerAllocator>>> & _arg)
  {
    this->tasks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wms_data::msg::WMSTasks_<ContainerAllocator> *;
  using ConstRawPtr =
    const wms_data::msg::WMSTasks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wms_data::msg::WMSTasks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wms_data::msg::WMSTasks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wms_data::msg::WMSTasks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wms_data::msg::WMSTasks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wms_data::msg::WMSTasks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wms_data::msg::WMSTasks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wms_data::msg::WMSTasks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wms_data::msg::WMSTasks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wms_data__msg__WMSTasks
    std::shared_ptr<wms_data::msg::WMSTasks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wms_data__msg__WMSTasks
    std::shared_ptr<wms_data::msg::WMSTasks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WMSTasks_ & other) const
  {
    if (this->tasks != other.tasks) {
      return false;
    }
    return true;
  }
  bool operator!=(const WMSTasks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WMSTasks_

// alias to use template instance with default allocator
using WMSTasks =
  wms_data::msg::WMSTasks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wms_data

#endif  // WMS_DATA__MSG__DETAIL__WMS_TASKS__STRUCT_HPP_
