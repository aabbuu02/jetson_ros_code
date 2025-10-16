// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from anscer_msgs:msg/MotorFaultFlags.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/motor_fault_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "anscer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "anscer_msgs/msg/detail/motor_fault_flags__struct.h"
#include "anscer_msgs/msg/detail/motor_fault_flags__functions.h"
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


using _MotorFaultFlags__ros_msg_type = anscer_msgs__msg__MotorFaultFlags;

static bool _MotorFaultFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorFaultFlags__ros_msg_type * ros_message = static_cast<const _MotorFaultFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: overheat
  {
    cdr << (ros_message->overheat ? true : false);
  }

  // Field name: overvoltage
  {
    cdr << (ros_message->overvoltage ? true : false);
  }

  // Field name: undervoltage
  {
    cdr << (ros_message->undervoltage ? true : false);
  }

  // Field name: short_circuit
  {
    cdr << (ros_message->short_circuit ? true : false);
  }

  // Field name: emergency_stop
  {
    cdr << (ros_message->emergency_stop ? true : false);
  }

  // Field name: motor_setup_fault
  {
    cdr << (ros_message->motor_setup_fault ? true : false);
  }

  // Field name: mosfet_failure
  {
    cdr << (ros_message->mosfet_failure ? true : false);
  }

  // Field name: default_configuration
  {
    cdr << (ros_message->default_configuration ? true : false);
  }

  return true;
}

static bool _MotorFaultFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorFaultFlags__ros_msg_type * ros_message = static_cast<_MotorFaultFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: overheat
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overheat = tmp ? true : false;
  }

  // Field name: overvoltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overvoltage = tmp ? true : false;
  }

  // Field name: undervoltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->undervoltage = tmp ? true : false;
  }

  // Field name: short_circuit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->short_circuit = tmp ? true : false;
  }

  // Field name: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stop = tmp ? true : false;
  }

  // Field name: motor_setup_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motor_setup_fault = tmp ? true : false;
  }

  // Field name: mosfet_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mosfet_failure = tmp ? true : false;
  }

  // Field name: default_configuration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->default_configuration = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t get_serialized_size_anscer_msgs__msg__MotorFaultFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorFaultFlags__ros_msg_type * ros_message = static_cast<const _MotorFaultFlags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name overheat
  {
    size_t item_size = sizeof(ros_message->overheat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overvoltage
  {
    size_t item_size = sizeof(ros_message->overvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undervoltage
  {
    size_t item_size = sizeof(ros_message->undervoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name short_circuit
  {
    size_t item_size = sizeof(ros_message->short_circuit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_setup_fault
  {
    size_t item_size = sizeof(ros_message->motor_setup_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mosfet_failure
  {
    size_t item_size = sizeof(ros_message->mosfet_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name default_configuration
  {
    size_t item_size = sizeof(ros_message->default_configuration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorFaultFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_anscer_msgs__msg__MotorFaultFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t max_serialized_size_anscer_msgs__msg__MotorFaultFlags(
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

  // member: overheat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overvoltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: undervoltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: short_circuit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_setup_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mosfet_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: default_configuration
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
    using DataType = anscer_msgs__msg__MotorFaultFlags;
    is_plain =
      (
      offsetof(DataType, default_configuration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotorFaultFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_anscer_msgs__msg__MotorFaultFlags(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorFaultFlags = {
  "anscer_msgs::msg",
  "MotorFaultFlags",
  _MotorFaultFlags__cdr_serialize,
  _MotorFaultFlags__cdr_deserialize,
  _MotorFaultFlags__get_serialized_size,
  _MotorFaultFlags__max_serialized_size
};

static rosidl_message_type_support_t _MotorFaultFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorFaultFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, msg, MotorFaultFlags)() {
  return &_MotorFaultFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
