// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:msg/WaypointsArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "anscer_msgs/msg/detail/waypoints_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace anscer_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WaypointsArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) anscer_msgs::msg::WaypointsArray(_init);
}

void WaypointsArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<anscer_msgs::msg::WaypointsArray *>(message_memory);
  typed_message->~WaypointsArray();
}

size_t size_function__WaypointsArray__waypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<anscer_msgs::msg::Waypoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WaypointsArray__waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<anscer_msgs::msg::Waypoint> *>(untyped_member);
  return &member[index];
}

void * get_function__WaypointsArray__waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<anscer_msgs::msg::Waypoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__WaypointsArray__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const anscer_msgs::msg::Waypoint *>(
    get_const_function__WaypointsArray__waypoints(untyped_member, index));
  auto & value = *reinterpret_cast<anscer_msgs::msg::Waypoint *>(untyped_value);
  value = item;
}

void assign_function__WaypointsArray__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<anscer_msgs::msg::Waypoint *>(
    get_function__WaypointsArray__waypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const anscer_msgs::msg::Waypoint *>(untyped_value);
  item = value;
}

void resize_function__WaypointsArray__waypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<anscer_msgs::msg::Waypoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WaypointsArray_message_member_array[1] = {
  {
    "waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<anscer_msgs::msg::Waypoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs::msg::WaypointsArray, waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__WaypointsArray__waypoints,  // size() function pointer
    get_const_function__WaypointsArray__waypoints,  // get_const(index) function pointer
    get_function__WaypointsArray__waypoints,  // get(index) function pointer
    fetch_function__WaypointsArray__waypoints,  // fetch(index, &value) function pointer
    assign_function__WaypointsArray__waypoints,  // assign(index, value) function pointer
    resize_function__WaypointsArray__waypoints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WaypointsArray_message_members = {
  "anscer_msgs::msg",  // message namespace
  "WaypointsArray",  // message name
  1,  // number of fields
  sizeof(anscer_msgs::msg::WaypointsArray),
  WaypointsArray_message_member_array,  // message members
  WaypointsArray_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointsArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WaypointsArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WaypointsArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace anscer_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::msg::WaypointsArray>()
{
  return &::anscer_msgs::msg::rosidl_typesupport_introspection_cpp::WaypointsArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, msg, WaypointsArray)() {
  return &::anscer_msgs::msg::rosidl_typesupport_introspection_cpp::WaypointsArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
