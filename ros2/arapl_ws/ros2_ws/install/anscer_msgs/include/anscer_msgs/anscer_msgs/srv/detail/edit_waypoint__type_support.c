// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:srv/EditWaypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/srv/detail/edit_waypoint__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/srv/detail/edit_waypoint__functions.h"
#include "anscer_msgs/srv/detail/edit_waypoint__struct.h"


// Include directives for member types
// Member `waypoint_id`
// Member `new_id`
// Member `waypoint_type`
// Member `waypoint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoint_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `waypoint_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__srv__EditWaypoint_Request__init(message_memory);
}

void anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_fini_function(void * message_memory)
{
  anscer_msgs__srv__EditWaypoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_member_array[10] = {
  {
    "rename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, rename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replace_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, replace_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replace_to_current_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, replace_to_current_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replace_to_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, replace_to_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, waypoint_order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, waypoint_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, new_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, waypoint_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, waypoint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Request, waypoint_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_members = {
  "anscer_msgs__srv",  // message namespace
  "EditWaypoint_Request",  // message name
  10,  // number of fields
  sizeof(anscer_msgs__srv__EditWaypoint_Request),
  anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_member_array,  // message members
  anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_type_support_handle = {
  0,
  &anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, EditWaypoint_Request)() {
  anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__srv__EditWaypoint_Request__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "anscer_msgs/srv/detail/edit_waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "anscer_msgs/srv/detail/edit_waypoint__functions.h"
// already included above
// #include "anscer_msgs/srv/detail/edit_waypoint__struct.h"


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__srv__EditWaypoint_Response__init(message_memory);
}

void anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_fini_function(void * message_memory)
{
  anscer_msgs__srv__EditWaypoint_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edited",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__EditWaypoint_Response, edited),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_members = {
  "anscer_msgs__srv",  // message namespace
  "EditWaypoint_Response",  // message name
  2,  // number of fields
  sizeof(anscer_msgs__srv__EditWaypoint_Response),
  anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_member_array,  // message members
  anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_type_support_handle = {
  0,
  &anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, EditWaypoint_Response)() {
  if (!anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__srv__EditWaypoint_Response__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "anscer_msgs/srv/detail/edit_waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_service_members = {
  "anscer_msgs__srv",  // service namespace
  "EditWaypoint",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_Request_message_type_support_handle,
  NULL  // response message
  // anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_Response_message_type_support_handle
};

static rosidl_service_type_support_t anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_service_type_support_handle = {
  0,
  &anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, EditWaypoint_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, EditWaypoint_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, EditWaypoint)() {
  if (!anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_service_type_support_handle.typesupport_identifier) {
    anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, EditWaypoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, EditWaypoint_Response)()->data;
  }

  return &anscer_msgs__srv__detail__edit_waypoint__rosidl_typesupport_introspection_c__EditWaypoint_service_type_support_handle;
}
