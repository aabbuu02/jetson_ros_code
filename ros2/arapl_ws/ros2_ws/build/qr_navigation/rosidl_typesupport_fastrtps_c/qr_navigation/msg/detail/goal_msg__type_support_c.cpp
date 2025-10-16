// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice
#include "qr_navigation/msg/detail/goal_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "qr_navigation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "qr_navigation/msg/detail/goal_msg__struct.h"
#include "qr_navigation/msg/detail/goal_msg__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // goal, start
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // goal, start
#include "rosidl_runtime_c/string.h"  // operation, pose
#include "rosidl_runtime_c/string_functions.h"  // operation, pose

// forward declare type support functions


using _GoalMsg__ros_msg_type = qr_navigation__msg__GoalMsg;

static bool _GoalMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalMsg__ros_msg_type * ros_message = static_cast<const _GoalMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: pose
  {
    const rosidl_runtime_c__String * str = &ros_message->pose;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: start
  {
    size_t size = ros_message->start.size;
    auto array_ptr = ros_message->start.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: goal
  {
    size_t size = ros_message->goal.size;
    auto array_ptr = ros_message->goal.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: operation
  {
    const rosidl_runtime_c__String * str = &ros_message->operation;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GoalMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalMsg__ros_msg_type * ros_message = static_cast<_GoalMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: pose
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pose.data) {
      rosidl_runtime_c__String__init(&ros_message->pose);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pose,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pose'\n");
      return false;
    }
  }

  // Field name: start
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->start.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->start);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->start, size)) {
      fprintf(stderr, "failed to create array for field 'start'");
      return false;
    }
    auto array_ptr = ros_message->start.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: goal
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->goal.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->goal);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->goal, size)) {
      fprintf(stderr, "failed to create array for field 'goal'");
      return false;
    }
    auto array_ptr = ros_message->goal.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: operation
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->operation.data) {
      rosidl_runtime_c__String__init(&ros_message->operation);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->operation,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'operation'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_qr_navigation
size_t get_serialized_size_qr_navigation__msg__GoalMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalMsg__ros_msg_type * ros_message = static_cast<const _GoalMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pose
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pose.size + 1);
  // field.name start
  {
    size_t array_size = ros_message->start.size;
    auto array_ptr = ros_message->start.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal
  {
    size_t array_size = ros_message->goal.size;
    auto array_ptr = ros_message->goal.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operation.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GoalMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_qr_navigation__msg__GoalMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_qr_navigation
size_t max_serialized_size_qr_navigation__msg__GoalMsg(
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

  // member: pose
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: start
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: goal
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: operation
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = qr_navigation__msg__GoalMsg;
    is_plain =
      (
      offsetof(DataType, operation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GoalMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_qr_navigation__msg__GoalMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GoalMsg = {
  "qr_navigation::msg",
  "GoalMsg",
  _GoalMsg__cdr_serialize,
  _GoalMsg__cdr_deserialize,
  _GoalMsg__get_serialized_size,
  _GoalMsg__max_serialized_size
};

static rosidl_message_type_support_t _GoalMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, qr_navigation, msg, GoalMsg)() {
  return &_GoalMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
