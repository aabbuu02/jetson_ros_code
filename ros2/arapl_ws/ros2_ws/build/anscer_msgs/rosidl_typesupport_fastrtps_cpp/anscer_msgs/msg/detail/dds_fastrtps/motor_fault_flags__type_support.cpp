// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:msg/MotorFaultFlags.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/motor_fault_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "anscer_msgs/msg/detail/motor_fault_flags__struct.hpp"

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
  const anscer_msgs::msg::MotorFaultFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: overheat
  cdr << (ros_message.overheat ? true : false);
  // Member: overvoltage
  cdr << (ros_message.overvoltage ? true : false);
  // Member: undervoltage
  cdr << (ros_message.undervoltage ? true : false);
  // Member: short_circuit
  cdr << (ros_message.short_circuit ? true : false);
  // Member: emergency_stop
  cdr << (ros_message.emergency_stop ? true : false);
  // Member: motor_setup_fault
  cdr << (ros_message.motor_setup_fault ? true : false);
  // Member: mosfet_failure
  cdr << (ros_message.mosfet_failure ? true : false);
  // Member: default_configuration
  cdr << (ros_message.default_configuration ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anscer_msgs::msg::MotorFaultFlags & ros_message)
{
  // Member: overheat
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.overheat = tmp ? true : false;
  }

  // Member: overvoltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.overvoltage = tmp ? true : false;
  }

  // Member: undervoltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.undervoltage = tmp ? true : false;
  }

  // Member: short_circuit
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.short_circuit = tmp ? true : false;
  }

  // Member: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_stop = tmp ? true : false;
  }

  // Member: motor_setup_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motor_setup_fault = tmp ? true : false;
  }

  // Member: mosfet_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mosfet_failure = tmp ? true : false;
  }

  // Member: default_configuration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.default_configuration = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
get_serialized_size(
  const anscer_msgs::msg::MotorFaultFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: overheat
  {
    size_t item_size = sizeof(ros_message.overheat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overvoltage
  {
    size_t item_size = sizeof(ros_message.overvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: undervoltage
  {
    size_t item_size = sizeof(ros_message.undervoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: short_circuit
  {
    size_t item_size = sizeof(ros_message.short_circuit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emergency_stop
  {
    size_t item_size = sizeof(ros_message.emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_setup_fault
  {
    size_t item_size = sizeof(ros_message.motor_setup_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mosfet_failure
  {
    size_t item_size = sizeof(ros_message.mosfet_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: default_configuration
  {
    size_t item_size = sizeof(ros_message.default_configuration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
max_serialized_size_MotorFaultFlags(
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


  // Member: overheat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: overvoltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: undervoltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: short_circuit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_setup_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mosfet_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: default_configuration
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
    using DataType = anscer_msgs::msg::MotorFaultFlags;
    is_plain =
      (
      offsetof(DataType, default_configuration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MotorFaultFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anscer_msgs::msg::MotorFaultFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorFaultFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anscer_msgs::msg::MotorFaultFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorFaultFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anscer_msgs::msg::MotorFaultFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorFaultFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorFaultFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorFaultFlags__callbacks = {
  "anscer_msgs::msg",
  "MotorFaultFlags",
  _MotorFaultFlags__cdr_serialize,
  _MotorFaultFlags__cdr_deserialize,
  _MotorFaultFlags__get_serialized_size,
  _MotorFaultFlags__max_serialized_size
};

static rosidl_message_type_support_t _MotorFaultFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorFaultFlags__callbacks,
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
get_message_type_support_handle<anscer_msgs::msg::MotorFaultFlags>()
{
  return &anscer_msgs::msg::typesupport_fastrtps_cpp::_MotorFaultFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, msg, MotorFaultFlags)() {
  return &anscer_msgs::msg::typesupport_fastrtps_cpp::_MotorFaultFlags__handle;
}

#ifdef __cplusplus
}
#endif
