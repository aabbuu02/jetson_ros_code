// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lift_action:msg/HomeSensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lift_action/msg/detail/home_sensor__rosidl_typesupport_introspection_c.h"
#include "lift_action/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lift_action/msg/detail/home_sensor__functions.h"
#include "lift_action/msg/detail/home_sensor__struct.h"


// Include directives for member types
// Member `process`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lift_action__msg__HomeSensor__init(message_memory);
}

void lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_fini_function(void * message_memory)
{
  lift_action__msg__HomeSensor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_message_member_array[2] = {
  {
    "process",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lift_action__msg__HomeSensor, process),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "homing_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lift_action__msg__HomeSensor, homing_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_message_members = {
  "lift_action__msg",  // message namespace
  "HomeSensor",  // message name
  2,  // number of fields
  sizeof(lift_action__msg__HomeSensor),
  lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_message_member_array,  // message members
  lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_message_type_support_handle = {
  0,
  &lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lift_action
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lift_action, msg, HomeSensor)() {
  if (!lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_message_type_support_handle.typesupport_identifier) {
    lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lift_action__msg__HomeSensor__rosidl_typesupport_introspection_c__HomeSensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
