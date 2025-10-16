// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lift_action:msg/ErrorStatus.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/error_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lift_action/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lift_action/msg/detail/error_status__struct.h"
#include "lift_action/msg/detail/error_status__functions.h"
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


using _ErrorStatus__ros_msg_type = lift_action__msg__ErrorStatus;

static bool _ErrorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ErrorStatus__ros_msg_type * ros_message = static_cast<const _ErrorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: lifter_fault
  {
    cdr << (ros_message->lifter_fault ? true : false);
  }

  // Field name: extractor_fault
  {
    cdr << (ros_message->extractor_fault ? true : false);
  }

  // Field name: turn_table_fault
  {
    cdr << (ros_message->turn_table_fault ? true : false);
  }

  // Field name: swing_arm_fault
  {
    cdr << (ros_message->swing_arm_fault ? true : false);
  }

  // Field name: emergency_pb_fault
  {
    cdr << (ros_message->emergency_pb_fault ? true : false);
  }

  // Field name: swing_arm_sensor_zero_fault
  {
    cdr << (ros_message->swing_arm_sensor_zero_fault ? true : false);
  }

  // Field name: swing_arm_sensor_ninety_fault
  {
    cdr << (ros_message->swing_arm_sensor_ninety_fault ? true : false);
  }

  // Field name: turntable_sensor_zero_fault
  {
    cdr << (ros_message->turntable_sensor_zero_fault ? true : false);
  }

  // Field name: extractor_sensor_laser_fault
  {
    cdr << (ros_message->extractor_sensor_laser_fault ? true : false);
  }

  return true;
}

static bool _ErrorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ErrorStatus__ros_msg_type * ros_message = static_cast<_ErrorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: lifter_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lifter_fault = tmp ? true : false;
  }

  // Field name: extractor_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->extractor_fault = tmp ? true : false;
  }

  // Field name: turn_table_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_table_fault = tmp ? true : false;
  }

  // Field name: swing_arm_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->swing_arm_fault = tmp ? true : false;
  }

  // Field name: emergency_pb_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_pb_fault = tmp ? true : false;
  }

  // Field name: swing_arm_sensor_zero_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->swing_arm_sensor_zero_fault = tmp ? true : false;
  }

  // Field name: swing_arm_sensor_ninety_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->swing_arm_sensor_ninety_fault = tmp ? true : false;
  }

  // Field name: turntable_sensor_zero_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turntable_sensor_zero_fault = tmp ? true : false;
  }

  // Field name: extractor_sensor_laser_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->extractor_sensor_laser_fault = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lift_action
size_t get_serialized_size_lift_action__msg__ErrorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ErrorStatus__ros_msg_type * ros_message = static_cast<const _ErrorStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lifter_fault
  {
    size_t item_size = sizeof(ros_message->lifter_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extractor_fault
  {
    size_t item_size = sizeof(ros_message->extractor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_table_fault
  {
    size_t item_size = sizeof(ros_message->turn_table_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name swing_arm_fault
  {
    size_t item_size = sizeof(ros_message->swing_arm_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_pb_fault
  {
    size_t item_size = sizeof(ros_message->emergency_pb_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name swing_arm_sensor_zero_fault
  {
    size_t item_size = sizeof(ros_message->swing_arm_sensor_zero_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name swing_arm_sensor_ninety_fault
  {
    size_t item_size = sizeof(ros_message->swing_arm_sensor_ninety_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turntable_sensor_zero_fault
  {
    size_t item_size = sizeof(ros_message->turntable_sensor_zero_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extractor_sensor_laser_fault
  {
    size_t item_size = sizeof(ros_message->extractor_sensor_laser_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ErrorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lift_action__msg__ErrorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lift_action
size_t max_serialized_size_lift_action__msg__ErrorStatus(
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

  // member: lifter_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extractor_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_table_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: swing_arm_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency_pb_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: swing_arm_sensor_zero_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: swing_arm_sensor_ninety_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turntable_sensor_zero_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extractor_sensor_laser_fault
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
    using DataType = lift_action__msg__ErrorStatus;
    is_plain =
      (
      offsetof(DataType, extractor_sensor_laser_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ErrorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lift_action__msg__ErrorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ErrorStatus = {
  "lift_action::msg",
  "ErrorStatus",
  _ErrorStatus__cdr_serialize,
  _ErrorStatus__cdr_deserialize,
  _ErrorStatus__get_serialized_size,
  _ErrorStatus__max_serialized_size
};

static rosidl_message_type_support_t _ErrorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ErrorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lift_action, msg, ErrorStatus)() {
  return &_ErrorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
