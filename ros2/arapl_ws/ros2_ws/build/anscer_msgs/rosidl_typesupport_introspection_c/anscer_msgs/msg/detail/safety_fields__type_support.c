// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from anscer_msgs:msg/SafetyFields.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "anscer_msgs/msg/detail/safety_fields__rosidl_typesupport_introspection_c.h"
#include "anscer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "anscer_msgs/msg/detail/safety_fields__functions.h"
#include "anscer_msgs/msg/detail/safety_fields__struct.h"


// Include directives for member types
// Member `warning`
// Member `safety`
#include "anscer_msgs/msg/safety_field.h"
// Member `warning`
// Member `safety`
#include "anscer_msgs/msg/detail/safety_field__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  anscer_msgs__msg__SafetyFields__init(message_memory);
}

void anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_fini_function(void * message_memory)
{
  anscer_msgs__msg__SafetyFields__fini(message_memory);
}

size_t anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__size_function__SafetyFields__warning(
  const void * untyped_member)
{
  const anscer_msgs__msg__SafetyField__Sequence * member =
    (const anscer_msgs__msg__SafetyField__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_const_function__SafetyFields__warning(
  const void * untyped_member, size_t index)
{
  const anscer_msgs__msg__SafetyField__Sequence * member =
    (const anscer_msgs__msg__SafetyField__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_function__SafetyFields__warning(
  void * untyped_member, size_t index)
{
  anscer_msgs__msg__SafetyField__Sequence * member =
    (anscer_msgs__msg__SafetyField__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__fetch_function__SafetyFields__warning(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const anscer_msgs__msg__SafetyField * item =
    ((const anscer_msgs__msg__SafetyField *)
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_const_function__SafetyFields__warning(untyped_member, index));
  anscer_msgs__msg__SafetyField * value =
    (anscer_msgs__msg__SafetyField *)(untyped_value);
  *value = *item;
}

void anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__assign_function__SafetyFields__warning(
  void * untyped_member, size_t index, const void * untyped_value)
{
  anscer_msgs__msg__SafetyField * item =
    ((anscer_msgs__msg__SafetyField *)
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_function__SafetyFields__warning(untyped_member, index));
  const anscer_msgs__msg__SafetyField * value =
    (const anscer_msgs__msg__SafetyField *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__resize_function__SafetyFields__warning(
  void * untyped_member, size_t size)
{
  anscer_msgs__msg__SafetyField__Sequence * member =
    (anscer_msgs__msg__SafetyField__Sequence *)(untyped_member);
  anscer_msgs__msg__SafetyField__Sequence__fini(member);
  return anscer_msgs__msg__SafetyField__Sequence__init(member, size);
}

size_t anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__size_function__SafetyFields__safety(
  const void * untyped_member)
{
  const anscer_msgs__msg__SafetyField__Sequence * member =
    (const anscer_msgs__msg__SafetyField__Sequence *)(untyped_member);
  return member->size;
}

const void * anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_const_function__SafetyFields__safety(
  const void * untyped_member, size_t index)
{
  const anscer_msgs__msg__SafetyField__Sequence * member =
    (const anscer_msgs__msg__SafetyField__Sequence *)(untyped_member);
  return &member->data[index];
}

void * anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_function__SafetyFields__safety(
  void * untyped_member, size_t index)
{
  anscer_msgs__msg__SafetyField__Sequence * member =
    (anscer_msgs__msg__SafetyField__Sequence *)(untyped_member);
  return &member->data[index];
}

void anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__fetch_function__SafetyFields__safety(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const anscer_msgs__msg__SafetyField * item =
    ((const anscer_msgs__msg__SafetyField *)
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_const_function__SafetyFields__safety(untyped_member, index));
  anscer_msgs__msg__SafetyField * value =
    (anscer_msgs__msg__SafetyField *)(untyped_value);
  *value = *item;
}

void anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__assign_function__SafetyFields__safety(
  void * untyped_member, size_t index, const void * untyped_value)
{
  anscer_msgs__msg__SafetyField * item =
    ((anscer_msgs__msg__SafetyField *)
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_function__SafetyFields__safety(untyped_member, index));
  const anscer_msgs__msg__SafetyField * value =
    (const anscer_msgs__msg__SafetyField *)(untyped_value);
  *item = *value;
}

bool anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__resize_function__SafetyFields__safety(
  void * untyped_member, size_t size)
{
  anscer_msgs__msg__SafetyField__Sequence * member =
    (anscer_msgs__msg__SafetyField__Sequence *)(untyped_member);
  anscer_msgs__msg__SafetyField__Sequence__fini(member);
  return anscer_msgs__msg__SafetyField__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_member_array[2] = {
  {
    "warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__SafetyFields, warning),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__size_function__SafetyFields__warning,  // size() function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_const_function__SafetyFields__warning,  // get_const(index) function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_function__SafetyFields__warning,  // get(index) function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__fetch_function__SafetyFields__warning,  // fetch(index, &value) function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__assign_function__SafetyFields__warning,  // assign(index, value) function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__resize_function__SafetyFields__warning  // resize(index) function pointer
  },
  {
    "safety",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(anscer_msgs__msg__SafetyFields, safety),  // bytes offset in struct
    NULL,  // default value
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__size_function__SafetyFields__safety,  // size() function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_const_function__SafetyFields__safety,  // get_const(index) function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__get_function__SafetyFields__safety,  // get(index) function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__fetch_function__SafetyFields__safety,  // fetch(index, &value) function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__assign_function__SafetyFields__safety,  // assign(index, value) function pointer
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__resize_function__SafetyFields__safety  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_members = {
  "anscer_msgs__msg",  // message namespace
  "SafetyFields",  // message name
  2,  // number of fields
  sizeof(anscer_msgs__msg__SafetyFields),
  anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_member_array,  // message members
  anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_init_function,  // function to initialize message memory (memory has to be allocated)
  anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_type_support_handle = {
  0,
  &anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, SafetyFields)() {
  anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, SafetyField)();
  anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, anscer_msgs, msg, SafetyField)();
  if (!anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_type_support_handle.typesupport_identifier) {
    anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &anscer_msgs__msg__SafetyFields__rosidl_typesupport_introspection_c__SafetyFields_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
