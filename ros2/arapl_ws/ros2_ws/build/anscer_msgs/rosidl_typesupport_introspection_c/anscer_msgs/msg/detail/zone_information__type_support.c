// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:msg/ZoneInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/msg/detail/zone_information__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/msg/detail/zone_information__functions.h"
#include "anscer_msgs/msg/detail/zone_information__struct.h"


// Include directives for member types
// Member `indication_info`
#include "anscer_msgs/msg/indication.h"
// Member `indication_info`
#include "anscer_msgs/msg/detail/indication__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__msg__ZoneInformation__init(message_memory);
}

void anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_fini_function(void * message_memory)
{
  anscer_msgs__msg__ZoneInformation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_member_array[2] = {
  {
    "indication_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__ZoneInformation, indication_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__ZoneInformation, speed_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_members = {
  "anscer_msgs__msg",  // message namespace
  "ZoneInformation",  // message name
  2,  // number of fields
  sizeof(anscer_msgs__msg__ZoneInformation),
  anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_member_array,  // message members
  anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_type_support_handle = {
  0,
  &anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, ZoneInformation)() {
  anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, Indication)();
  if (!anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__msg__ZoneInformation__rosidl_typesupport_introspection_c__ZoneInformation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
