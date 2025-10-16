// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:msg/PGVPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/msg/detail/pgv_pose__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/msg/detail/pgv_pose__functions.h"
#include "anscer_msgs/msg/detail/pgv_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__msg__PGVPose__init(message_memory);
}

void anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_fini_function(void * message_memory)
{
  anscer_msgs__msg__PGVPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__PGVPose, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__PGVPose, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__PGVPose, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__PGVPose, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_message_members = {
  "anscer_msgs__msg",  // message namespace
  "PGVPose",  // message name
  4,  // number of fields
  sizeof(anscer_msgs__msg__PGVPose),
  anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_message_member_array,  // message members
  anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_message_type_support_handle = {
  0,
  &anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, PGVPose)() {
  if (!anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__msg__PGVPose__rosidl_typesupport_introspection_c__PGVPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
