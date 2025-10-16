// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from anscer_msgs:msg/ChargeInfo.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/charge_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "anscer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "anscer_msgs/msg/detail/charge_info__struct.h"
#include "anscer_msgs/msg/detail/charge_info__functions.h"
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


using _ChargeInfo__ros_msg_type = anscer_msgs__msg__ChargeInfo;

static bool _ChargeInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChargeInfo__ros_msg_type * ros_message = static_cast<const _ChargeInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: charger_activate
  {
    cdr << (ros_message->charger_activate ? true : false);
  }

  // Field name: charge_time
  {
    cdr << ros_message->charge_time;
  }

  // Field name: ignore_time
  {
    cdr << (ros_message->ignore_time ? true : false);
  }

  // Field name: charge_percentage
  {
    cdr << ros_message->charge_percentage;
  }

  // Field name: ignore_percentage
  {
    cdr << (ros_message->ignore_percentage ? true : false);
  }

  return true;
}

static bool _ChargeInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChargeInfo__ros_msg_type * ros_message = static_cast<_ChargeInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: charger_activate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->charger_activate = tmp ? true : false;
  }

  // Field name: charge_time
  {
    cdr >> ros_message->charge_time;
  }

  // Field name: ignore_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ignore_time = tmp ? true : false;
  }

  // Field name: charge_percentage
  {
    cdr >> ros_message->charge_percentage;
  }

  // Field name: ignore_percentage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ignore_percentage = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t get_serialized_size_anscer_msgs__msg__ChargeInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChargeInfo__ros_msg_type * ros_message = static_cast<const _ChargeInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name charger_activate
  {
    size_t item_size = sizeof(ros_message->charger_activate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charge_time
  {
    size_t item_size = sizeof(ros_message->charge_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignore_time
  {
    size_t item_size = sizeof(ros_message->ignore_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charge_percentage
  {
    size_t item_size = sizeof(ros_message->charge_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignore_percentage
  {
    size_t item_size = sizeof(ros_message->ignore_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChargeInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_anscer_msgs__msg__ChargeInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t max_serialized_size_anscer_msgs__msg__ChargeInfo(
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

  // member: charger_activate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: charge_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ignore_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: charge_percentage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ignore_percentage
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
    using DataType = anscer_msgs__msg__ChargeInfo;
    is_plain =
      (
      offsetof(DataType, ignore_percentage) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChargeInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_anscer_msgs__msg__ChargeInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChargeInfo = {
  "anscer_msgs::msg",
  "ChargeInfo",
  _ChargeInfo__cdr_serialize,
  _ChargeInfo__cdr_deserialize,
  _ChargeInfo__get_serialized_size,
  _ChargeInfo__max_serialized_size
};

static rosidl_message_type_support_t _ChargeInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChargeInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, msg, ChargeInfo)() {
  return &_ChargeInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
