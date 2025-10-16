// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_creator_msgs:srv/SaveGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_creator_msgs/srv/detail/save_graph__rosidl_typesupport_introspection_c.h"
#include "graph_creator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_creator_msgs/srv/detail/save_graph__functions.h"
#include "graph_creator_msgs/srv/detail/save_graph__struct.h"


// Include directives for member types
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_creator_msgs__srv__SaveGraph_Request__init(message_memory);
}

void graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_fini_function(void * message_memory)
{
  graph_creator_msgs__srv__SaveGraph_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_message_member_array[1] = {
  {
    "file_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__srv__SaveGraph_Request, file_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_message_members = {
  "graph_creator_msgs__srv",  // message namespace
  "SaveGraph_Request",  // message name
  1,  // number of fields
  sizeof(graph_creator_msgs__srv__SaveGraph_Request),
  graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_message_member_array,  // message members
  graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_message_type_support_handle = {
  0,
  &graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_creator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, srv, SaveGraph_Request)() {
  if (!graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_message_type_support_handle.typesupport_identifier) {
    graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_creator_msgs__srv__SaveGraph_Request__rosidl_typesupport_introspection_c__SaveGraph_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "graph_creator_msgs/srv/detail/save_graph__rosidl_typesupport_introspection_c.h"
// already included above
// #include "graph_creator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "graph_creator_msgs/srv/detail/save_graph__functions.h"
// already included above
// #include "graph_creator_msgs/srv/detail/save_graph__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_creator_msgs__srv__SaveGraph_Response__init(message_memory);
}

void graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_fini_function(void * message_memory)
{
  graph_creator_msgs__srv__SaveGraph_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs__srv__SaveGraph_Response, success),  // bytes offset in struct
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
    offsetof(graph_creator_msgs__srv__SaveGraph_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_message_members = {
  "graph_creator_msgs__srv",  // message namespace
  "SaveGraph_Response",  // message name
  2,  // number of fields
  sizeof(graph_creator_msgs__srv__SaveGraph_Response),
  graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_message_member_array,  // message members
  graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_message_type_support_handle = {
  0,
  &graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_creator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, srv, SaveGraph_Response)() {
  if (!graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_message_type_support_handle.typesupport_identifier) {
    graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graph_creator_msgs__srv__SaveGraph_Response__rosidl_typesupport_introspection_c__SaveGraph_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "graph_creator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "graph_creator_msgs/srv/detail/save_graph__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_service_members = {
  "graph_creator_msgs__srv",  // service namespace
  "SaveGraph",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_Request_message_type_support_handle,
  NULL  // response message
  // graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_Response_message_type_support_handle
};

static rosidl_service_type_support_t graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_service_type_support_handle = {
  0,
  &graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, srv, SaveGraph_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, srv, SaveGraph_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_creator_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, srv, SaveGraph)() {
  if (!graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_service_type_support_handle.typesupport_identifier) {
    graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, srv, SaveGraph_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_creator_msgs, srv, SaveGraph_Response)()->data;
  }

  return &graph_creator_msgs__srv__detail__save_graph__rosidl_typesupport_introspection_c__SaveGraph_service_type_support_handle;
}
