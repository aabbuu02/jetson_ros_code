// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graph_creator_msgs:msg/SelectedGraphElements.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graph_creator_msgs/msg/detail/selected_graph_elements__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_creator_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SelectedGraphElements_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_creator_msgs::msg::SelectedGraphElements(_init);
}

void SelectedGraphElements_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_creator_msgs::msg::SelectedGraphElements *>(message_memory);
  typed_message->~SelectedGraphElements();
}

size_t size_function__SelectedGraphElements__all_vertices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SelectedGraphElements__all_vertices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SelectedGraphElements__all_vertices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SelectedGraphElements__all_vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SelectedGraphElements__all_vertices(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SelectedGraphElements__all_vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SelectedGraphElements__all_vertices(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SelectedGraphElements__all_vertices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SelectedGraphElements__all_edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SelectedGraphElements__all_edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SelectedGraphElements__all_edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SelectedGraphElements__all_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SelectedGraphElements__all_edges(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SelectedGraphElements__all_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SelectedGraphElements__all_edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SelectedGraphElements__all_edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SelectedGraphElements_message_member_array[2] = {
  {
    "all_vertices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs::msg::SelectedGraphElements, all_vertices),  // bytes offset in struct
    nullptr,  // default value
    size_function__SelectedGraphElements__all_vertices,  // size() function pointer
    get_const_function__SelectedGraphElements__all_vertices,  // get_const(index) function pointer
    get_function__SelectedGraphElements__all_vertices,  // get(index) function pointer
    fetch_function__SelectedGraphElements__all_vertices,  // fetch(index, &value) function pointer
    assign_function__SelectedGraphElements__all_vertices,  // assign(index, value) function pointer
    resize_function__SelectedGraphElements__all_vertices  // resize(index) function pointer
  },
  {
    "all_edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs::msg::SelectedGraphElements, all_edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__SelectedGraphElements__all_edges,  // size() function pointer
    get_const_function__SelectedGraphElements__all_edges,  // get_const(index) function pointer
    get_function__SelectedGraphElements__all_edges,  // get(index) function pointer
    fetch_function__SelectedGraphElements__all_edges,  // fetch(index, &value) function pointer
    assign_function__SelectedGraphElements__all_edges,  // assign(index, value) function pointer
    resize_function__SelectedGraphElements__all_edges  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SelectedGraphElements_message_members = {
  "graph_creator_msgs::msg",  // message namespace
  "SelectedGraphElements",  // message name
  2,  // number of fields
  sizeof(graph_creator_msgs::msg::SelectedGraphElements),
  SelectedGraphElements_message_member_array,  // message members
  SelectedGraphElements_init_function,  // function to initialize message memory (memory has to be allocated)
  SelectedGraphElements_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SelectedGraphElements_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SelectedGraphElements_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace graph_creator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_creator_msgs::msg::SelectedGraphElements>()
{
  return &::graph_creator_msgs::msg::rosidl_typesupport_introspection_cpp::SelectedGraphElements_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_creator_msgs, msg, SelectedGraphElements)() {
  return &::graph_creator_msgs::msg::rosidl_typesupport_introspection_cpp::SelectedGraphElements_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
