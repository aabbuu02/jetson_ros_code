// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:msg/MotorStatusFlags.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/motor_status_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "anscer_msgs/msg/detail/motor_status_flags__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace anscer_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_serialize(
  const anscer_msgs::msg::MotorStatusFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: serial_mode
  cdr << (ros_message.serial_mode ? true : false);
  // Member: pulse_mode
  cdr << (ros_message.pulse_mode ? true : false);
  // Member: analog_mode
  cdr << (ros_message.analog_mode ? true : false);
  // Member: power_stage_off
  cdr << (ros_message.power_stage_off ? true : false);
  // Member: stall_detected
  cdr << (ros_message.stall_detected ? true : false);
  // Member: at_limit
  cdr << (ros_message.at_limit ? true : false);
  // Member: unused
  cdr << (ros_message.unused ? true : false);
  // Member: micro_basic_script_running
  cdr << (ros_message.micro_basic_script_running ? true : false);
  // Member: motor_tuning_mode
  cdr << (ros_message.motor_tuning_mode ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anscer_msgs::msg::MotorStatusFlags & ros_message)
{
  // Member: serial_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.serial_mode = tmp ? true : false;
  }

  // Member: pulse_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pulse_mode = tmp ? true : false;
  }

  // Member: analog_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.analog_mode = tmp ? true : false;
  }

  // Member: power_stage_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_stage_off = tmp ? true : false;
  }

  // Member: stall_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stall_detected = tmp ? true : false;
  }

  // Member: at_limit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.at_limit = tmp ? true : false;
  }

  // Member: unused
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.unused = tmp ? true : false;
  }

  // Member: micro_basic_script_running
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.micro_basic_script_running = tmp ? true : false;
  }

  // Member: motor_tuning_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motor_tuning_mode = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
get_serialized_size(
  const anscer_msgs::msg::MotorStatusFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: serial_mode
  {
    size_t item_size = sizeof(ros_message.serial_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pulse_mode
  {
    size_t item_size = sizeof(ros_message.pulse_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_mode
  {
    size_t item_size = sizeof(ros_message.analog_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_stage_off
  {
    size_t item_size = sizeof(ros_message.power_stage_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stall_detected
  {
    size_t item_size = sizeof(ros_message.stall_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: at_limit
  {
    size_t item_size = sizeof(ros_message.at_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: unused
  {
    size_t item_size = sizeof(ros_message.unused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: micro_basic_script_running
  {
    size_t item_size = sizeof(ros_message.micro_basic_script_running);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_tuning_mode
  {
    size_t item_size = sizeof(ros_message.motor_tuning_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
max_serialized_size_MotorStatusFlags(
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


  // Member: serial_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pulse_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_stage_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stall_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: at_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: unused
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: micro_basic_script_running
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_tuning_mode
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
    using DataType = anscer_msgs::msg::MotorStatusFlags;
    is_plain =
      (
      offsetof(DataType, motor_tuning_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MotorStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anscer_msgs::msg::MotorStatusFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anscer_msgs::msg::MotorStatusFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorStatusFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anscer_msgs::msg::MotorStatusFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorStatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorStatusFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorStatusFlags__callbacks = {
  "anscer_msgs::msg",
  "MotorStatusFlags",
  _MotorStatusFlags__cdr_serialize,
  _MotorStatusFlags__cdr_deserialize,
  _MotorStatusFlags__get_serialized_size,
  _MotorStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _MotorStatusFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorStatusFlags__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace anscer_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::msg::MotorStatusFlags>()
{
  return &anscer_msgs::msg::typesupport_fastrtps_cpp::_MotorStatusFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, msg, MotorStatusFlags)() {
  return &anscer_msgs::msg::typesupport_fastrtps_cpp::_MotorStatusFlags__handle;
}

#ifdef __cplusplus
}
#endif
