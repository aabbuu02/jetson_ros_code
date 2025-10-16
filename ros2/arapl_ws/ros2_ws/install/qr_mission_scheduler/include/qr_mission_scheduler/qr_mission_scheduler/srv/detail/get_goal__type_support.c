// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qr_mission_scheduler:srv/GetGoal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qr_mission_scheduler/srv/detail/get_goal__rosidl_typesupport_introspection_c.h"
#include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qr_mission_scheduler/srv/detail/get_goal__functions.h"
#include "qr_mission_scheduler/srv/detail/get_goal__struct.h"


// Include directives for member types
// Member `goal_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__srv__GetGoal_Request__init(message_memory);
}

void qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_fini_function(void * message_memory)
{
  qr_mission_scheduler__srv__GetGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_message_member_array[3] = {
  {
    "goal_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__srv__GetGoal_Request, goal_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__srv__GetGoal_Request, source_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__srv__GetGoal_Request, target_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_message_members = {
  "qr_mission_scheduler__srv",  // message namespace
  "GetGoal_Request",  // message name
  3,  // number of fields
  sizeof(qr_mission_scheduler__srv__GetGoal_Request),
  qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_message_member_array,  // message members
  qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_message_type_support_handle = {
  0,
  &qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, srv, GetGoal_Request)() {
  if (!qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__srv__GetGoal_Request__rosidl_typesupport_introspection_c__GetGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "qr_mission_scheduler/srv/detail/get_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qr_mission_scheduler/srv/detail/get_goal__functions.h"
// already included above
// #include "qr_mission_scheduler/srv/detail/get_goal__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__srv__GetGoal_Response__init(message_memory);
}

void qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_fini_function(void * message_memory)
{
  qr_mission_scheduler__srv__GetGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__srv__GetGoal_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_message_members = {
  "qr_mission_scheduler__srv",  // message namespace
  "GetGoal_Response",  // message name
  1,  // number of fields
  sizeof(qr_mission_scheduler__srv__GetGoal_Response),
  qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_message_member_array,  // message members
  qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_message_type_support_handle = {
  0,
  &qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, srv, GetGoal_Response)() {
  if (!qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__srv__GetGoal_Response__rosidl_typesupport_introspection_c__GetGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "qr_mission_scheduler/srv/detail/get_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_service_members = {
  "qr_mission_scheduler__srv",  // service namespace
  "GetGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_Request_message_type_support_handle,
  NULL  // response message
  // qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_service_type_support_handle = {
  0,
  &qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, srv, GetGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, srv, GetGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, srv, GetGoal)() {
  if (!qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_service_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, srv, GetGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, srv, GetGoal_Response)()->data;
  }

  return &qr_mission_scheduler__srv__detail__get_goal__rosidl_typesupport_introspection_c__GetGoal_service_type_support_handle;
}
