// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from anscer_msgs:msg/SafetyField.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/safety_field__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "anscer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "anscer_msgs/msg/detail/safety_field__struct.h"
#include "anscer_msgs/msg/detail/safety_field__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SafetyField__ros_msg_type = anscer_msgs__msg__SafetyField;

static bool _SafetyField__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SafetyField__ros_msg_type * ros_message = static_cast<const _SafetyField__ros_msg_type *>(untyped_ros_message);
  // Field name: field_id
  {
    cdr << ros_message->field_id;
  }

  // Field name: is_front
  {
    cdr << (ros_message->is_front ? true : false);
  }

  // Field name: is_rear
  {
    cdr << (ros_message->is_rear ? true : false);
  }

  return true;
}

static bool _SafetyField__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SafetyField__ros_msg_type * ros_message = static_cast<_SafetyField__ros_msg_type *>(untyped_ros_message);
  // Field name: field_id
  {
    cdr >> ros_message->field_id;
  }

  // Field name: is_front
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_front = tmp ? true : false;
  }

  // Field name: is_rear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_rear = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t get_serialized_size_anscer_msgs__msg__SafetyField(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SafetyField__ros_msg_type * ros_message = static_cast<const _SafetyField__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name field_id
  {
    size_t item_size = sizeof(ros_message->field_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_front
  {
    size_t item_size = sizeof(ros_message->is_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_rear
  {
    size_t item_size = sizeof(ros_message->is_rear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SafetyField__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_anscer_msgs__msg__SafetyField(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t max_serialized_size_anscer_msgs__msg__SafetyField(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: field_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_rear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = anscer_msgs__msg__SafetyField;
    is_plain =
      (
      offsetof(DataType, is_rear) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SafetyField__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_anscer_msgs__msg__SafetyField(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SafetyField = {
  "anscer_msgs::msg",
  "SafetyField",
  _SafetyField__cdr_serialize,
  _SafetyField__cdr_deserialize,
  _SafetyField__get_serialized_size,
  _SafetyField__max_serialized_size
};

static rosidl_message_type_support_t _SafetyField__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SafetyField,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, msg, SafetyField)() {
  return &_SafetyField__type_support;
}

#if defined(__cplusplus)
}
#endif
