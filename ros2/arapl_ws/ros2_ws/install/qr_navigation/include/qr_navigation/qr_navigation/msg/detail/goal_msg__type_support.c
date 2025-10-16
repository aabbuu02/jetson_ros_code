// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qr_navigation/msg/detail/goal_msg__rosidl_typesupport_introspection_c.h"
#include "qr_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qr_navigation/msg/detail/goal_msg__functions.h"
#include "qr_navigation/msg/detail/goal_msg__struct.h"


// Include directives for member types
// Member `pose`
// Member `operation`
#include "rosidl_runtime_c/string_functions.h"
// Member `start`
// Member `goal`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_navigation__msg__GoalMsg__init(message_memory);
}

void qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_fini_function(void * message_memory)
{
  qr_navigation__msg__GoalMsg__fini(message_memory);
}

size_t qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__size_function__GoalMsg__start(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_const_function__GoalMsg__start(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_function__GoalMsg__start(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__fetch_function__GoalMsg__start(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_const_function__GoalMsg__start(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__assign_function__GoalMsg__start(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_function__GoalMsg__start(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__resize_function__GoalMsg__start(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__size_function__GoalMsg__goal(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_const_function__GoalMsg__goal(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_function__GoalMsg__goal(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__fetch_function__GoalMsg__goal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_const_function__GoalMsg__goal(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__assign_function__GoalMsg__goal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_function__GoalMsg__goal(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__resize_function__GoalMsg__goal(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_message_member_array[4] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_navigation__msg__GoalMsg, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_navigation__msg__GoalMsg, start),  // bytes offset in struct
    NULL,  // default value
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__size_function__GoalMsg__start,  // size() function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_const_function__GoalMsg__start,  // get_const(index) function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_function__GoalMsg__start,  // get(index) function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__fetch_function__GoalMsg__start,  // fetch(index, &value) function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__assign_function__GoalMsg__start,  // assign(index, value) function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__resize_function__GoalMsg__start  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_navigation__msg__GoalMsg, goal),  // bytes offset in struct
    NULL,  // default value
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__size_function__GoalMsg__goal,  // size() function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_const_function__GoalMsg__goal,  // get_const(index) function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__get_function__GoalMsg__goal,  // get(index) function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__fetch_function__GoalMsg__goal,  // fetch(index, &value) function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__assign_function__GoalMsg__goal,  // assign(index, value) function pointer
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__resize_function__GoalMsg__goal  // resize(index) function pointer
  },
  {
    "operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_navigation__msg__GoalMsg, operation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_message_members = {
  "qr_navigation__msg",  // message namespace
  "GoalMsg",  // message name
  4,  // number of fields
  sizeof(qr_navigation__msg__GoalMsg),
  qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_message_member_array,  // message members
  qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_message_type_support_handle = {
  0,
  &qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_navigation, msg, GoalMsg)() {
  if (!qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_message_type_support_handle.typesupport_identifier) {
    qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_navigation__msg__GoalMsg__rosidl_typesupport_introspection_c__GoalMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
