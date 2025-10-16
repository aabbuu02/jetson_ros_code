// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_creator_msgs:msg/GraphCreatorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_creator_msgs/msg/detail/graph_creator_state__rosidl_typesupport_introspection_c.h"
#include "graph_creator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_creator_msgs/msg/detail/graph_creator_state__functions.h"
#include "graph_creator_msgs/msg/detail/graph_creator_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_creator_msgs__msg__GraphCreatorState__init(message_memory);
}

void graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_fini_function(void * message_memory)
{
  graph_creator_msgs__msg__GraphCreatorState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_message_member_array[5] = {
  {
    "graph_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__msg__GraphCreatorState, graph_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_edge_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__msg__GraphCreatorState, current_edge_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edge_is_bidirectional",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__msg__GraphCreatorState, edge_is_bidirectional),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "all_vertices_locked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__msg__GraphCreatorState, all_vertices_locked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "all_edges_locked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__msg__GraphCreatorState, all_edges_locked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_message_members = {
  "graph_creator_msgs__msg",  // message namespace
  "GraphCreatorState",  // message name
  5,  // number of fields
  sizeof(graph_creator_msgs__msg__GraphCreatorState),
  graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_message_member_array,  // message members
  graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_message_type_support_handle = {
  0,
  &graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_creator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, msg, GraphCreatorState)() {
  if (!graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_message_type_support_handle.typesupport_identifier) {
    graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_creator_msgs__msg__GraphCreatorState__rosidl_typesupport_introspection_c__GraphCreatorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
