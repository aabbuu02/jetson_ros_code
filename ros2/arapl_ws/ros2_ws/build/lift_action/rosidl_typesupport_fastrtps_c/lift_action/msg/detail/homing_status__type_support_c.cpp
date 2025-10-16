// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lift_action:msg/HomingStatus.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/homing_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lift_action/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lift_action/msg/detail/homing_status__struct.h"
#include "lift_action/msg/detail/homing_status__functions.h"
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


using _HomingStatus__ros_msg_type = lift_action__msg__HomingStatus;

static bool _HomingStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HomingStatus__ros_msg_type * ros_message = static_cast<const _HomingStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: lifter_status
  {
    cdr << (ros_message->lifter_status ? true : false);
  }

  // Field name: extractor_status
  {
    cdr << (ros_message->extractor_status ? true : false);
  }

  // Field name: turn_table_status
  {
    cdr << (ros_message->turn_table_status ? true : false);
  }

  // Field name: is_homed
  {
    cdr << (ros_message->is_homed ? true : false);
  }

  return true;
}

static bool _HomingStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HomingStatus__ros_msg_type * ros_message = static_cast<_HomingStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: lifter_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lifter_status = tmp ? true : false;
  }

  // Field name: extractor_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->extractor_status = tmp ? true : false;
  }

  // Field name: turn_table_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_table_status = tmp ? true : false;
  }

  // Field name: is_homed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_homed = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lift_action
size_t get_serialized_size_lift_action__msg__HomingStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HomingStatus__ros_msg_type * ros_message = static_cast<const _HomingStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lifter_status
  {
    size_t item_size = sizeof(ros_message->lifter_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extractor_status
  {
    size_t item_size = sizeof(ros_message->extractor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_table_status
  {
    size_t item_size = sizeof(ros_message->turn_table_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_homed
  {
    size_t item_size = sizeof(ros_message->is_homed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HomingStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lift_action__msg__HomingStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lift_action
size_t max_serialized_size_lift_action__msg__HomingStatus(
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

  // member: lifter_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extractor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_table_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_homed
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
    using DataType = lift_action__msg__HomingStatus;
    is_plain =
      (
      offsetof(DataType, is_homed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HomingStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lift_action__msg__HomingStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HomingStatus = {
  "lift_action::msg",
  "HomingStatus",
  _HomingStatus__cdr_serialize,
  _HomingStatus__cdr_deserialize,
  _HomingStatus__get_serialized_size,
  _HomingStatus__max_serialized_size
};

static rosidl_message_type_support_t _HomingStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HomingStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_action, msg, HomingStatus)() {
  return &_HomingStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
