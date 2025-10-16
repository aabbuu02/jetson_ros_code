// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msgs/msg/detail/edge__rosidl_typesupport_introspection_c.h"
#include "graph_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msgs/msg/detail/edge__functions.h"
#include "graph_msgs/msg/detail/edge__struct.h"


// Include directives for member types
// Member `name`
// Member `alias`
#include "rosidl_runtime_c/string_functions.h"
// Member `control_points`
// Member `control_orientation`
#include "geometry_msgs/msg/pose.h"
// Member `control_points`
// Member `control_orientation`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "geometry_msgs/msg/pose_array.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_array__rosidl_typesupport_introspection_c.h"
// Member `properties`
#include "graph_msgs/msg/property.h"
// Member `properties`
#include "graph_msgs/msg/detail/property__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msgs__msg__Edge__init(message_memory);
}

void graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_fini_function(void * message_memory)
{
  graph_msgs__msg__Edge__fini(message_memory);
}

size_t graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__size_function__Edge__control_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__control_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__control_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__fetch_function__Edge__control_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__control_points(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__assign_function__Edge__control_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__control_points(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__resize_function__Edge__control_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__size_function__Edge__properties(
  const void * untyped_member)
{
  const graph_msgs__msg__Property__Sequence * member =
    (const graph_msgs__msg__Property__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__properties(
  const void * untyped_member, size_t index)
{
  const graph_msgs__msg__Property__Sequence * member =
    (const graph_msgs__msg__Property__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__properties(
  void * untyped_member, size_t index)
{
  graph_msgs__msg__Property__Sequence * member =
    (graph_msgs__msg__Property__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__fetch_function__Edge__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graph_msgs__msg__Property * item =
    ((const graph_msgs__msg__Property *)
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__properties(untyped_member, index));
  graph_msgs__msg__Property * value =
    (graph_msgs__msg__Property *)(untyped_value);
  *value = *item;
}

void graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__assign_function__Edge__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graph_msgs__msg__Property * item =
    ((graph_msgs__msg__Property *)
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__properties(untyped_member, index));
  const graph_msgs__msg__Property * value =
    (const graph_msgs__msg__Property *)(untyped_value);
  *item = *value;
}

bool graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__resize_function__Edge__properties(
  void * untyped_member, size_t size)
{
  graph_msgs__msg__Property__Sequence * member =
    (graph_msgs__msg__Property__Sequence *)(untyped_member);
  graph_msgs__msg__Property__Sequence__fini(member);
  return graph_msgs__msg__Property__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array[15] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, alias),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edge_direction_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, edge_direction_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "creation_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, creation_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_vertex_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, source_vertex_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_vertex_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, target_vertex_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cost_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, cost_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bidirectional",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, bidirectional),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "independent_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, independent_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, control_points),  // bytes offset in struct
    NULL,  // default value
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__size_function__Edge__control_points,  // size() function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__control_points,  // get_const(index) function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__control_points,  // get(index) function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__fetch_function__Edge__control_points,  // fetch(index, &value) function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__assign_function__Edge__control_points,  // assign(index, value) function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__resize_function__Edge__control_points  // resize(index) function pointer
  },
  {
    "control_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, control_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, poses),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edge, properties),  // bytes offset in struct
    NULL,  // default value
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__size_function__Edge__properties,  // size() function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__properties,  // get_const(index) function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__properties,  // get(index) function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__fetch_function__Edge__properties,  // fetch(index, &value) function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__assign_function__Edge__properties,  // assign(index, value) function pointer
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__resize_function__Edge__properties  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_members = {
  "graph_msgs__msg",  // message namespace
  "Edge",  // message name
  15,  // number of fields
  sizeof(graph_msgs__msg__Edge),
  graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array,  // message members
  graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_type_support_handle = {
  0,
  &graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, Edge)() {
  graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, Property)();
  if (!graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_type_support_handle.typesupport_identifier) {
    graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
