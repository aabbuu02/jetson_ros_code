// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:srv/BatteryAnalytics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/srv/detail/battery_analytics__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/srv/detail/battery_analytics__functions.h"
#include "anscer_msgs/srv/detail/battery_analytics__struct.h"


// Include directives for member types
// Member `start_date`
// Member `end_date`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__srv__BatteryAnalytics_Request__init(message_memory);
}

void anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_fini_function(void * message_memory)
{
  anscer_msgs__srv__BatteryAnalytics_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_member_array[2] = {
  {
    "start_date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__BatteryAnalytics_Request, start_date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__BatteryAnalytics_Request, end_date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_members = {
  "anscer_msgs__srv",  // message namespace
  "BatteryAnalytics_Request",  // message name
  2,  // number of fields
  sizeof(anscer_msgs__srv__BatteryAnalytics_Request),
  anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_member_array,  // message members
  anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_type_support_handle = {
  0,
  &anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, BatteryAnalytics_Request)() {
  if (!anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__srv__BatteryAnalytics_Request__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "anscer_msgs/srv/detail/battery_analytics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "anscer_msgs/srv/detail/battery_analytics__functions.h"
// already included above
// #include "anscer_msgs/srv/detail/battery_analytics__struct.h"


// Include directives for member types
// Member `battery_db`
#include "anscer_msgs/msg/battery_db.h"
// Member `battery_db`
#include "anscer_msgs/msg/detail/battery_db__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__srv__BatteryAnalytics_Response__init(message_memory);
}

void anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_fini_function(void * message_memory)
{
  anscer_msgs__srv__BatteryAnalytics_Response__fini(message_memory);
}

size_t anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__size_function__BatteryAnalytics_Response__battery_db(
  const void * untyped_member)
{
  const anscer_msgs__msg__BatteryDB__Sequence * member =
    (const anscer_msgs__msg__BatteryDB__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__get_const_function__BatteryAnalytics_Response__battery_db(
  const void * untyped_member, size_t index)
{
  const anscer_msgs__msg__BatteryDB__Sequence * member =
    (const anscer_msgs__msg__BatteryDB__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__get_function__BatteryAnalytics_Response__battery_db(
  void * untyped_member, size_t index)
{
  anscer_msgs__msg__BatteryDB__Sequence * member =
    (anscer_msgs__msg__BatteryDB__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__fetch_function__BatteryAnalytics_Response__battery_db(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const anscer_msgs__msg__BatteryDB * item =
    ((const anscer_msgs__msg__BatteryDB *)
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__get_const_function__BatteryAnalytics_Response__battery_db(untyped_member, index));
  anscer_msgs__msg__BatteryDB * value =
    (anscer_msgs__msg__BatteryDB *)(untyped_value);
  *value = *item;
}

void anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__assign_function__BatteryAnalytics_Response__battery_db(
  void * untyped_member, size_t index, const void * untyped_value)
{
  anscer_msgs__msg__BatteryDB * item =
    ((anscer_msgs__msg__BatteryDB *)
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__get_function__BatteryAnalytics_Response__battery_db(untyped_member, index));
  const anscer_msgs__msg__BatteryDB * value =
    (const anscer_msgs__msg__BatteryDB *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__resize_function__BatteryAnalytics_Response__battery_db(
  void * untyped_member, size_t size)
{
  anscer_msgs__msg__BatteryDB__Sequence * member =
    (anscer_msgs__msg__BatteryDB__Sequence *)(untyped_member);
  anscer_msgs__msg__BatteryDB__Sequence__fini(member);
  return anscer_msgs__msg__BatteryDB__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_member_array[1] = {
  {
    "battery_db",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__srv__BatteryAnalytics_Response, battery_db),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__size_function__BatteryAnalytics_Response__battery_db,  // size() function pointer
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__get_const_function__BatteryAnalytics_Response__battery_db,  // get_const(index) function pointer
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__get_function__BatteryAnalytics_Response__battery_db,  // get(index) function pointer
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__fetch_function__BatteryAnalytics_Response__battery_db,  // fetch(index, &value) function pointer
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__assign_function__BatteryAnalytics_Response__battery_db,  // assign(index, value) function pointer
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__resize_function__BatteryAnalytics_Response__battery_db  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_members = {
  "anscer_msgs__srv",  // message namespace
  "BatteryAnalytics_Response",  // message name
  1,  // number of fields
  sizeof(anscer_msgs__srv__BatteryAnalytics_Response),
  anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_member_array,  // message members
  anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_type_support_handle = {
  0,
  &anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, BatteryAnalytics_Response)() {
  anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, BatteryDB)();
  if (!anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__srv__BatteryAnalytics_Response__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "anscer_msgs/srv/detail/battery_analytics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_service_members = {
  "anscer_msgs__srv",  // service namespace
  "BatteryAnalytics",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_Request_message_type_support_handle,
  NULL  // response message
  // anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_Response_message_type_support_handle
};

static rosidl_service_type_support_t anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_service_type_support_handle = {
  0,
  &anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, BatteryAnalytics_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, BatteryAnalytics_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, BatteryAnalytics)() {
  if (!anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_service_type_support_handle.typesupport_identifier) {
    anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, BatteryAnalytics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, srv, BatteryAnalytics_Response)()->data;
  }

  return &anscer_msgs__srv__detail__battery_analytics__rosidl_typesupport_introspection_c__BatteryAnalytics_service_type_support_handle;
}
