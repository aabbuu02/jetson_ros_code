// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:msg/Paths.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "anscer_msgs/msg/detail/paths__struct.hpp"
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

void Paths_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) anscer_msgs::msg::Paths(_init);
}

void Paths_fini_function(void * message_memory)
{
  auto typed_message = static_cast<anscer_msgs::msg::Paths *>(message_memory);
  typed_message->~Paths();
}

size_t size_function__Paths__global_path(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<anscer_msgs::msg::Path> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Paths__global_path(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<anscer_msgs::msg::Path> *>(untyped_member);
  return &member[index];
}

void * get_function__Paths__global_path(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<anscer_msgs::msg::Path> *>(untyped_member);
  return &member[index];
}

void fetch_function__Paths__global_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const anscer_msgs::msg::Path *>(
    get_const_function__Paths__global_path(untyped_member, index));
  auto & value = *reinterpret_cast<anscer_msgs::msg::Path *>(untyped_value);
  value = item;
}

void assign_function__Paths__global_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<anscer_msgs::msg::Path *>(
    get_function__Paths__global_path(untyped_member, index));
  const auto & value = *reinterpret_cast<const anscer_msgs::msg::Path *>(untyped_value);
  item = value;
}

void resize_function__Paths__global_path(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<anscer_msgs::msg::Path> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Paths_message_member_array[1] = {
  {
    "global_path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<anscer_msgs::msg::Path>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs::msg::Paths, global_path),  // bytes offset in struct
    nullptr,  // default value
    size_function__Paths__global_path,  // size() function pointer
    get_const_function__Paths__global_path,  // get_const(index) function pointer
    get_function__Paths__global_path,  // get(index) function pointer
    fetch_function__Paths__global_path,  // fetch(index, &value) function pointer
    assign_function__Paths__global_path,  // assign(index, value) function pointer
    resize_function__Paths__global_path  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Paths_message_members = {
  "anscer_msgs::msg",  // message namespace
  "Paths",  // message name
  1,  // number of fields
  sizeof(anscer_msgs::msg::Paths),
  Paths_message_member_array,  // message members
  Paths_init_function,  // function to initialize message memory (memory has to be allocated)
  Paths_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Paths_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Paths_message_members,
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
get_message_type_support_handle<anscer_msgs::msg::Paths>()
{
  return &::anscer_msgs::msg::rosidl_typesupport_introspection_cpp::Paths_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, msg, Paths)() {
  return &::anscer_msgs::msg::rosidl_typesupport_introspection_cpp::Paths_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
