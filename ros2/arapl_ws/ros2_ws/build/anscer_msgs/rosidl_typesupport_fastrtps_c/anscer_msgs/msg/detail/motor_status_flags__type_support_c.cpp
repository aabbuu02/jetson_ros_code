// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from anscer_msgs:msg/MotorStatusFlags.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/motor_status_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "anscer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "anscer_msgs/msg/detail/motor_status_flags__struct.h"
#include "anscer_msgs/msg/detail/motor_status_flags__functions.h"
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


using _MotorStatusFlags__ros_msg_type = anscer_msgs__msg__MotorStatusFlags;

static bool _MotorStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorStatusFlags__ros_msg_type * ros_message = static_cast<const _MotorStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: serial_mode
  {
    cdr << (ros_message->serial_mode ? true : false);
  }

  // Field name: pulse_mode
  {
    cdr << (ros_message->pulse_mode ? true : false);
  }

  // Field name: analog_mode
  {
    cdr << (ros_message->analog_mode ? true : false);
  }

  // Field name: power_stage_off
  {
    cdr << (ros_message->power_stage_off ? true : false);
  }

  // Field name: stall_detected
  {
    cdr << (ros_message->stall_detected ? true : false);
  }

  // Field name: at_limit
  {
    cdr << (ros_message->at_limit ? true : false);
  }

  // Field name: unused
  {
    cdr << (ros_message->unused ? true : false);
  }

  // Field name: micro_basic_script_running
  {
    cdr << (ros_message->micro_basic_script_running ? true : false);
  }

  // Field name: motor_tuning_mode
  {
    cdr << (ros_message->motor_tuning_mode ? true : false);
  }

  return true;
}

static bool _MotorStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorStatusFlags__ros_msg_type * ros_message = static_cast<_MotorStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: serial_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->serial_mode = tmp ? true : false;
  }

  // Field name: pulse_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pulse_mode = tmp ? true : false;
  }

  // Field name: analog_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->analog_mode = tmp ? true : false;
  }

  // Field name: power_stage_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_stage_off = tmp ? true : false;
  }

  // Field name: stall_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stall_detected = tmp ? true : false;
  }

  // Field name: at_limit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->at_limit = tmp ? true : false;
  }

  // Field name: unused
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->unused = tmp ? true : false;
  }

  // Field name: micro_basic_script_running
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->micro_basic_script_running = tmp ? true : false;
  }

  // Field name: motor_tuning_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motor_tuning_mode = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t get_serialized_size_anscer_msgs__msg__MotorStatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorStatusFlags__ros_msg_type * ros_message = static_cast<const _MotorStatusFlags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name serial_mode
  {
    size_t item_size = sizeof(ros_message->serial_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pulse_mode
  {
    size_t item_size = sizeof(ros_message->pulse_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name analog_mode
  {
    size_t item_size = sizeof(ros_message->analog_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_stage_off
  {
    size_t item_size = sizeof(ros_message->power_stage_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stall_detected
  {
    size_t item_size = sizeof(ros_message->stall_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name at_limit
  {
    size_t item_size = sizeof(ros_message->at_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name unused
  {
    size_t item_size = sizeof(ros_message->unused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name micro_basic_script_running
  {
    size_t item_size = sizeof(ros_message->micro_basic_script_running);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_tuning_mode
  {
    size_t item_size = sizeof(ros_message->motor_tuning_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorStatusFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_anscer_msgs__msg__MotorStatusFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t max_serialized_size_anscer_msgs__msg__MotorStatusFlags(
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

  // member: serial_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pulse_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: analog_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_stage_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stall_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: at_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: unused
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: micro_basic_script_running
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_tuning_mode
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
    using DataType = anscer_msgs__msg__MotorStatusFlags;
    is_plain =
      (
      offsetof(DataType, motor_tuning_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotorStatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_anscer_msgs__msg__MotorStatusFlags(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorStatusFlags = {
  "anscer_msgs::msg",
  "MotorStatusFlags",
  _MotorStatusFlags__cdr_serialize,
  _MotorStatusFlags__cdr_deserialize,
  _MotorStatusFlags__get_serialized_size,
  _MotorStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _MotorStatusFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorStatusFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, msg, MotorStatusFlags)() {
  return &_MotorStatusFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
