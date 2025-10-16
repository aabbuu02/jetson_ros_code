// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msgs:srv/GetGraphPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msgs/srv/detail/get_graph_plan__rosidl_typesupport_introspection_c.h"
#include "graph_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msgs/srv/detail/get_graph_plan__functions.h"
#include "graph_msgs/srv/detail/get_graph_plan__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msgs__srv__GetGraphPlan_Request__init(message_memory);
}

void graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_fini_function(void * message_memory)
{
  graph_msgs__srv__GetGraphPlan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_member_array[4] = {
  {
    "source_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Request, source_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Request, target_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ignore_goal_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Request, ignore_goal_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ignore_path_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Request, ignore_path_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_members = {
  "graph_msgs__srv",  // message namespace
  "GetGraphPlan_Request",  // message name
  4,  // number of fields
  sizeof(graph_msgs__srv__GetGraphPlan_Request),
  graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_member_array,  // message members
  graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_type_support_handle = {
  0,
  &graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, srv, GetGraphPlan_Request)() {
  if (!graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_type_support_handle.typesupport_identifier) {
    graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_msgs__srv__GetGraphPlan_Request__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "graph_msgs/srv/detail/get_graph_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "graph_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "graph_msgs/srv/detail/get_graph_plan__functions.h"
// already included above
// #include "graph_msgs/srv/detail/get_graph_plan__struct.h"


// Include directives for member types
// Member `vertices_in_plan`
#include "graph_msgs/msg/vertex.h"
// Member `vertices_in_plan`
#include "graph_msgs/msg/detail/vertex__rosidl_typesupport_introspection_c.h"
// Member `plan`
#include "nav_msgs/msg/path.h"
// Member `plan`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msgs__srv__GetGraphPlan_Response__init(message_memory);
}

void graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_fini_function(void * message_memory)
{
  graph_msgs__srv__GetGraphPlan_Response__fini(message_memory);
}

size_t graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__size_function__GetGraphPlan_Response__vertices_in_plan(
  const void * untyped_member)
{
  const graph_msgs__msg__Vertex__Sequence * member =
    (const graph_msgs__msg__Vertex__Sequence *)(untyped_member);
  return member->size;
}

const void * graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__get_const_function__GetGraphPlan_Response__vertices_in_plan(
  const void * untyped_member, size_t index)
{
  const graph_msgs__msg__Vertex__Sequence * member =
    (const graph_msgs__msg__Vertex__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__get_function__GetGraphPlan_Response__vertices_in_plan(
  void * untyped_member, size_t index)
{
  graph_msgs__msg__Vertex__Sequence * member =
    (graph_msgs__msg__Vertex__Sequence *)(untyped_member);
  return &member->data[index];
}

void graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__fetch_function__GetGraphPlan_Response__vertices_in_plan(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graph_msgs__msg__Vertex * item =
    ((const graph_msgs__msg__Vertex *)
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__get_const_function__GetGraphPlan_Response__vertices_in_plan(untyped_member, index));
  graph_msgs__msg__Vertex * value =
    (graph_msgs__msg__Vertex *)(untyped_value);
  *value = *item;
}

void graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__assign_function__GetGraphPlan_Response__vertices_in_plan(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graph_msgs__msg__Vertex * item =
    ((graph_msgs__msg__Vertex *)
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__get_function__GetGraphPlan_Response__vertices_in_plan(untyped_member, index));
  const graph_msgs__msg__Vertex * value =
    (const graph_msgs__msg__Vertex *)(untyped_value);
  *item = *value;
}

bool graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__resize_function__GetGraphPlan_Response__vertices_in_plan(
  void * untyped_member, size_t size)
{
  graph_msgs__msg__Vertex__Sequence * member =
    (graph_msgs__msg__Vertex__Sequence *)(untyped_member);
  graph_msgs__msg__Vertex__Sequence__fini(member);
  return graph_msgs__msg__Vertex__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_member_array[5] = {
  {
    "vertices_in_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Response, vertices_in_plan),  // bytes offset in struct
    NULL,  // default value
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__size_function__GetGraphPlan_Response__vertices_in_plan,  // size() function pointer
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__get_const_function__GetGraphPlan_Response__vertices_in_plan,  // get_const(index) function pointer
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__get_function__GetGraphPlan_Response__vertices_in_plan,  // get(index) function pointer
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__fetch_function__GetGraphPlan_Response__vertices_in_plan,  // fetch(index, &value) function pointer
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__assign_function__GetGraphPlan_Response__vertices_in_plan,  // assign(index, value) function pointer
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__resize_function__GetGraphPlan_Response__vertices_in_plan  // resize(index) function pointer
  },
  {
    "plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Response, plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plan_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Response, plan_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__srv__GetGraphPlan_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_members = {
  "graph_msgs__srv",  // message namespace
  "GetGraphPlan_Response",  // message name
  5,  // number of fields
  sizeof(graph_msgs__srv__GetGraphPlan_Response),
  graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_member_array,  // message members
  graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_type_support_handle = {
  0,
  &graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, srv, GetGraphPlan_Response)() {
  graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, Vertex)();
  graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_type_support_handle.typesupport_identifier) {
    graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_msgs__srv__GetGraphPlan_Response__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "graph_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "graph_msgs/srv/detail/get_graph_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_service_members = {
  "graph_msgs__srv",  // service namespace
  "GetGraphPlan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_Request_message_type_support_handle,
  NULL  // response message
  // graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_Response_message_type_support_handle
};

static rosidl_service_type_support_t graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_service_type_support_handle = {
  0,
  &graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, srv, GetGraphPlan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, srv, GetGraphPlan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, srv, GetGraphPlan)() {
  if (!graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_service_type_support_handle.typesupport_identifier) {
    graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, srv, GetGraphPlan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, srv, GetGraphPlan_Response)()->data;
  }

  return &graph_msgs__srv__detail__get_graph_plan__rosidl_typesupport_introspection_c__GetGraphPlan_service_type_support_handle;
}
