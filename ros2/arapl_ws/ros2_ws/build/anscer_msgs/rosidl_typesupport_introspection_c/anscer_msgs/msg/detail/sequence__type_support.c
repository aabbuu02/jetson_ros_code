// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:msg/Sequence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/msg/detail/sequence__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/msg/detail/sequence__functions.h"
#include "anscer_msgs/msg/detail/sequence__struct.h"


// Include directives for member types
// Member `id`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `seq_element`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__msg__Sequence__init(message_memory);
}

void anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_fini_function(void * message_memory)
{
  anscer_msgs__msg__Sequence__fini(message_memory);
}

size_t anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__size_function__Sequence__seq_element(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__get_const_function__Sequence__seq_element(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__get_function__Sequence__seq_element(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__fetch_function__Sequence__seq_element(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__get_const_function__Sequence__seq_element(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__assign_function__Sequence__seq_element(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__get_function__Sequence__seq_element(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__resize_function__Sequence__seq_element(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__Sequence, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__Sequence, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq_element",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__Sequence, seq_element),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__size_function__Sequence__seq_element,  // size() function pointer
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__get_const_function__Sequence__seq_element,  // get_const(index) function pointer
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__get_function__Sequence__seq_element,  // get(index) function pointer
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__fetch_function__Sequence__seq_element,  // fetch(index, &value) function pointer
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__assign_function__Sequence__seq_element,  // assign(index, value) function pointer
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__resize_function__Sequence__seq_element  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_members = {
  "anscer_msgs__msg",  // message namespace
  "Sequence",  // message name
  3,  // number of fields
  sizeof(anscer_msgs__msg__Sequence),
  anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_member_array,  // message members
  anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_type_support_handle = {
  0,
  &anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, Sequence)() {
  if (!anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__msg__Sequence__rosidl_typesupport_introspection_c__Sequence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
