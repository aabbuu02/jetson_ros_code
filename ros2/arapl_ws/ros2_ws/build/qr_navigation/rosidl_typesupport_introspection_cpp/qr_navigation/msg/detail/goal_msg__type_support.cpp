// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "qr_navigation/msg/detail/goal_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace qr_navigation
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GoalMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) qr_navigation::msg::GoalMsg(_init);
}

void GoalMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<qr_navigation::msg::GoalMsg *>(message_memory);
  typed_message->~GoalMsg();
}

size_t size_function__GoalMsg__start(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GoalMsg__start(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GoalMsg__start(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GoalMsg__start(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GoalMsg__start(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GoalMsg__start(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GoalMsg__start(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GoalMsg__start(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GoalMsg__goal(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GoalMsg__goal(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GoalMsg__goal(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GoalMsg__goal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GoalMsg__goal(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GoalMsg__goal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GoalMsg__goal(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GoalMsg__goal(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoalMsg_message_member_array[4] = {
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_navigation::msg::GoalMsg, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_navigation::msg::GoalMsg, start),  // bytes offset in struct
    nullptr,  // default value
    size_function__GoalMsg__start,  // size() function pointer
    get_const_function__GoalMsg__start,  // get_const(index) function pointer
    get_function__GoalMsg__start,  // get(index) function pointer
    fetch_function__GoalMsg__start,  // fetch(index, &value) function pointer
    assign_function__GoalMsg__start,  // assign(index, value) function pointer
    resize_function__GoalMsg__start  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_navigation::msg::GoalMsg, goal),  // bytes offset in struct
    nullptr,  // default value
    size_function__GoalMsg__goal,  // size() function pointer
    get_const_function__GoalMsg__goal,  // get_const(index) function pointer
    get_function__GoalMsg__goal,  // get(index) function pointer
    fetch_function__GoalMsg__goal,  // fetch(index, &value) function pointer
    assign_function__GoalMsg__goal,  // assign(index, value) function pointer
    resize_function__GoalMsg__goal  // resize(index) function pointer
  },
  {
    "operation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_navigation::msg::GoalMsg, operation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoalMsg_message_members = {
  "qr_navigation::msg",  // message namespace
  "GoalMsg",  // message name
  4,  // number of fields
  sizeof(qr_navigation::msg::GoalMsg),
  GoalMsg_message_member_array,  // message members
  GoalMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoalMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoalMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace qr_navigation


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<qr_navigation::msg::GoalMsg>()
{
  return &::qr_navigation::msg::rosidl_typesupport_introspection_cpp::GoalMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qr_navigation, msg, GoalMsg)() {
  return &::qr_navigation::msg::rosidl_typesupport_introspection_cpp::GoalMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
