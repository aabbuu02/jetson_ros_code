// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wms_data:msg/WMSData.idl
// generated code does not contain a copyright notice

#ifndef WMS_DATA__MSG__DETAIL__WMS_DATA__STRUCT_HPP_
#define WMS_DATA__MSG__DETAIL__WMS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wms_data__msg__WMSData __attribute__((deprecated))
#else
# define DEPRECATED__wms_data__msg__WMSData __declspec(deprecated)
#endif

namespace wms_data
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WMSData_
{
  using Type = WMSData_<ContainerAllocator>;

  explicit WMSData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = "";
      this->date = "";
      this->priority = 0;
      this->rack = 0;
      this->shelf = 0;
      this->bin = 0;
      this->action = false;
      this->status = false;
      this->ean_code = "";
      this->putaway_code = "";
      this->acr_shelf = 0;
      this->whole_bin_no = "";
      this->core = "";
      this->level = "";
      this->year = "";
      this->date_data = "";
      this->serial_no = "";
    }
  }

  explicit WMSData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unique_id(_alloc),
    date(_alloc),
    ean_code(_alloc),
    putaway_code(_alloc),
    whole_bin_no(_alloc),
    core(_alloc),
    level(_alloc),
    year(_alloc),
    date_data(_alloc),
    serial_no(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = "";
      this->date = "";
      this->priority = 0;
      this->rack = 0;
      this->shelf = 0;
      this->bin = 0;
      this->action = false;
      this->status = false;
      this->ean_code = "";
      this->putaway_code = "";
      this->acr_shelf = 0;
      this->whole_bin_no = "";
      this->core = "";
      this->level = "";
      this->year = "";
      this->date_data = "";
      this->serial_no = "";
    }
  }

  // field types and members
  using _unique_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unique_id_type unique_id;
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_type date;
  using _priority_type =
    int16_t;
  _priority_type priority;
  using _rack_type =
    int16_t;
  _rack_type rack;
  using _shelf_type =
    int16_t;
  _shelf_type shelf;
  using _bin_type =
    int16_t;
  _bin_type bin;
  using _action_type =
    bool;
  _action_type action;
  using _status_type =
    bool;
  _status_type status;
  using _ean_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ean_code_type ean_code;
  using _putaway_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _putaway_code_type putaway_code;
  using _acr_shelf_type =
    int16_t;
  _acr_shelf_type acr_shelf;
  using _whole_bin_no_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _whole_bin_no_type whole_bin_no;
  using _core_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _core_type core;
  using _level_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _level_type level;
  using _year_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _year_type year;
  using _date_data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_data_type date_data;
  using _serial_no_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_no_type serial_no;

  // setters for named parameter idiom
  Type & set__unique_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date = _arg;
    return *this;
  }
  Type & set__priority(
    const int16_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__rack(
    const int16_t & _arg)
  {
    this->rack = _arg;
    return *this;
  }
  Type & set__shelf(
    const int16_t & _arg)
  {
    this->shelf = _arg;
    return *this;
  }
  Type & set__bin(
    const int16_t & _arg)
  {
    this->bin = _arg;
    return *this;
  }
  Type & set__action(
    const bool & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__ean_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ean_code = _arg;
    return *this;
  }
  Type & set__putaway_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->putaway_code = _arg;
    return *this;
  }
  Type & set__acr_shelf(
    const int16_t & _arg)
  {
    this->acr_shelf = _arg;
    return *this;
  }
  Type & set__whole_bin_no(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->whole_bin_no = _arg;
    return *this;
  }
  Type & set__core(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->core = _arg;
    return *this;
  }
  Type & set__level(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__year(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->year = _arg;
    return *this;
  }
  Type & set__date_data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date_data = _arg;
    return *this;
  }
  Type & set__serial_no(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_no = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wms_data::msg::WMSData_<ContainerAllocator> *;
  using ConstRawPtr =
    const wms_data::msg::WMSData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wms_data::msg::WMSData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wms_data::msg::WMSData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wms_data::msg::WMSData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wms_data::msg::WMSData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wms_data::msg::WMSData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wms_data::msg::WMSData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wms_data::msg::WMSData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wms_data::msg::WMSData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wms_data__msg__WMSData
    std::shared_ptr<wms_data::msg::WMSData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wms_data__msg__WMSData
    std::shared_ptr<wms_data::msg::WMSData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WMSData_ & other) const
  {
    if (this->unique_id != other.unique_id) {
      return false;
    }
    if (this->date != other.date) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->rack != other.rack) {
      return false;
    }
    if (this->shelf != other.shelf) {
      return false;
    }
    if (this->bin != other.bin) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->ean_code != other.ean_code) {
      return false;
    }
    if (this->putaway_code != other.putaway_code) {
      return false;
    }
    if (this->acr_shelf != other.acr_shelf) {
      return false;
    }
    if (this->whole_bin_no != other.whole_bin_no) {
      return false;
    }
    if (this->core != other.core) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->year != other.year) {
      return false;
    }
    if (this->date_data != other.date_data) {
      return false;
    }
    if (this->serial_no != other.serial_no) {
      return false;
    }
    return true;
  }
  bool operator!=(const WMSData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WMSData_

// alias to use template instance with default allocator
using WMSData =
  wms_data::msg::WMSData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wms_data

#endif  // WMS_DATA__MSG__DETAIL__WMS_DATA__STRUCT_HPP_
