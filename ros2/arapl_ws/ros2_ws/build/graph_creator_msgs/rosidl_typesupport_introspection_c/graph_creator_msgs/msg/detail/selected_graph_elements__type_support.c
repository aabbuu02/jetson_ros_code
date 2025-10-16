// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_creator_msgs:msg/SelectedGraphElements.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_creator_msgs/msg/detail/selected_graph_elements__rosidl_typesupport_introspection_c.h"
#include "graph_creator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_creator_msgs/msg/detail/selected_graph_elements__functions.h"
#include "graph_creator_msgs/msg/detail/selected_graph_elements__struct.h"


// Include directives for member types
// Member `all_vertices`
// Member `all_edges`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_creator_msgs__msg__SelectedGraphElements__init(message_memory);
}

void graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_fini_function(void * message_memory)
{
  graph_creator_msgs__msg__SelectedGraphElements__fini(message_memory);
}

size_t graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__size_function__SelectedGraphElements__all_vertices(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_const_function__SelectedGraphElements__all_vertices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_function__SelectedGraphElements__all_vertices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__fetch_function__SelectedGraphElements__all_vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_const_function__SelectedGraphElements__all_vertices(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__assign_function__SelectedGraphElements__all_vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_function__SelectedGraphElements__all_vertices(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__resize_function__SelectedGraphElements__all_vertices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__size_function__SelectedGraphElements__all_edges(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_const_function__SelectedGraphElements__all_edges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_function__SelectedGraphElements__all_edges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__fetch_function__SelectedGraphElements__all_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_const_function__SelectedGraphElements__all_edges(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__assign_function__SelectedGraphElements__all_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_function__SelectedGraphElements__all_edges(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__resize_function__SelectedGraphElements__all_edges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_message_member_array[2] = {
  {
    "all_vertices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__msg__SelectedGraphElements, all_vertices),  // bytes offset in struct
    NULL,  // default value
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__size_function__SelectedGraphElements__all_vertices,  // size() function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_const_function__SelectedGraphElements__all_vertices,  // get_const(index) function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_function__SelectedGraphElements__all_vertices,  // get(index) function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__fetch_function__SelectedGraphElements__all_vertices,  // fetch(index, &value) function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__assign_function__SelectedGraphElements__all_vertices,  // assign(index, value) function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__resize_function__SelectedGraphElements__all_vertices  // resize(index) function pointer
  },
  {
    "all_edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__msg__SelectedGraphElements, all_edges),  // bytes offset in struct
    NULL,  // default value
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__size_function__SelectedGraphElements__all_edges,  // size() function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_const_function__SelectedGraphElements__all_edges,  // get_const(index) function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__get_function__SelectedGraphElements__all_edges,  // get(index) function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__fetch_function__SelectedGraphElements__all_edges,  // fetch(index, &value) function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__assign_function__SelectedGraphElements__all_edges,  // assign(index, value) function pointer
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__resize_function__SelectedGraphElements__all_edges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_message_members = {
  "graph_creator_msgs__msg",  // message namespace
  "SelectedGraphElements",  // message name
  2,  // number of fields
  sizeof(graph_creator_msgs__msg__SelectedGraphElements),
  graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_message_member_array,  // message members
  graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_message_type_support_handle = {
  0,
  &graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_creator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, msg, SelectedGraphElements)() {
  if (!graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_message_type_support_handle.typesupport_identifier) {
    graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_creator_msgs__msg__SelectedGraphElements__rosidl_typesupport_introspection_c__SelectedGraphElements_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
