// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:msg/SafetyFields.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "anscer_msgs/msg/detail/safety_fields__struct.hpp"
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

void SafetyFields_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) anscer_msgs::msg::SafetyFields(_init);
}

void SafetyFields_fini_function(void * message_memory)
{
  auto typed_message = static_cast<anscer_msgs::msg::SafetyFields *>(message_memory);
  typed_message->~SafetyFields();
}

size_t size_function__SafetyFields__warning(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<anscer_msgs::msg::SafetyField> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SafetyFields__warning(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<anscer_msgs::msg::SafetyField> *>(untyped_member);
  return &member[index];
}

void * get_function__SafetyFields__warning(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<anscer_msgs::msg::SafetyField> *>(untyped_member);
  return &member[index];
}

void fetch_function__SafetyFields__warning(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const anscer_msgs::msg::SafetyField *>(
    get_const_function__SafetyFields__warning(untyped_member, index));
  auto & value = *reinterpret_cast<anscer_msgs::msg::SafetyField *>(untyped_value);
  value = item;
}

void assign_function__SafetyFields__warning(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<anscer_msgs::msg::SafetyField *>(
    get_function__SafetyFields__warning(untyped_member, index));
  const auto & value = *reinterpret_cast<const anscer_msgs::msg::SafetyField *>(untyped_value);
  item = value;
}

void resize_function__SafetyFields__warning(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<anscer_msgs::msg::SafetyField> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SafetyFields__safety(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<anscer_msgs::msg::SafetyField> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SafetyFields__safety(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<anscer_msgs::msg::SafetyField> *>(untyped_member);
  return &member[index];
}

void * get_function__SafetyFields__safety(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<anscer_msgs::msg::SafetyField> *>(untyped_member);
  return &member[index];
}

void fetch_function__SafetyFields__safety(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const anscer_msgs::msg::SafetyField *>(
    get_const_function__SafetyFields__safety(untyped_member, index));
  auto & value = *reinterpret_cast<anscer_msgs::msg::SafetyField *>(untyped_value);
  value = item;
}

void assign_function__SafetyFields__safety(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<anscer_msgs::msg::SafetyField *>(
    get_function__SafetyFields__safety(untyped_member, index));
  const auto & value = *reinterpret_cast<const anscer_msgs::msg::SafetyField *>(untyped_value);
  item = value;
}

void resize_function__SafetyFields__safety(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<anscer_msgs::msg::SafetyField> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SafetyFields_message_member_array[2] = {
  {
    "warning",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<anscer_msgs::msg::SafetyField>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs::msg::SafetyFields, warning),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyFields__warning,  // size() function pointer
    get_const_function__SafetyFields__warning,  // get_const(index) function pointer
    get_function__SafetyFields__warning,  // get(index) function pointer
    fetch_function__SafetyFields__warning,  // fetch(index, &value) function pointer
    assign_function__SafetyFields__warning,  // assign(index, value) function pointer
    resize_function__SafetyFields__warning  // resize(index) function pointer
  },
  {
    "safety",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<anscer_msgs::msg::SafetyField>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs::msg::SafetyFields, safety),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyFields__safety,  // size() function pointer
    get_const_function__SafetyFields__safety,  // get_const(index) function pointer
    get_function__SafetyFields__safety,  // get(index) function pointer
    fetch_function__SafetyFields__safety,  // fetch(index, &value) function pointer
    assign_function__SafetyFields__safety,  // assign(index, value) function pointer
    resize_function__SafetyFields__safety  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SafetyFields_message_members = {
  "anscer_msgs::msg",  // message namespace
  "SafetyFields",  // message name
  2,  // number of fields
  sizeof(anscer_msgs::msg::SafetyFields),
  SafetyFields_message_member_array,  // message members
  SafetyFields_init_function,  // function to initialize message memory (memory has to be allocated)
  SafetyFields_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SafetyFields_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SafetyFields_message_members,
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
get_message_type_support_handle<anscer_msgs::msg::SafetyFields>()
{
  return &::anscer_msgs::msg::rosidl_typesupport_introspection_cpp::SafetyFields_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, msg, SafetyFields)() {
  return &::anscer_msgs::msg::rosidl_typesupport_introspection_cpp::SafetyFields_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
