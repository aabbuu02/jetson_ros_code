// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from anscer_msgs:srv/EditSequence.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/srv/detail/edit_sequence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "anscer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "anscer_msgs/srv/detail/edit_sequence__struct.h"
#include "anscer_msgs/srv/detail/edit_sequence__functions.h"
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

#include "rosidl_runtime_c/string.h"  // sequence_list, waypoint_id
#include "rosidl_runtime_c/string_functions.h"  // sequence_list, waypoint_id

// forward declare type support functions


using _EditSequence_Request__ros_msg_type = anscer_msgs__srv__EditSequence_Request;

static bool _EditSequence_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EditSequence_Request__ros_msg_type * ros_message = static_cast<const _EditSequence_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: save
  {
    cdr << (ros_message->save ? true : false);
  }

  // Field name: waypoint_id
  {
    const rosidl_runtime_c__String * str = &ros_message->waypoint_id;
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

  // Field name: sequence_list
  {
    const rosidl_runtime_c__String * str = &ros_message->sequence_list;
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

static bool _EditSequence_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EditSequence_Request__ros_msg_type * ros_message = static_cast<_EditSequence_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: save
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->save = tmp ? true : false;
  }

  // Field name: waypoint_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->waypoint_id.data) {
      rosidl_runtime_c__String__init(&ros_message->waypoint_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->waypoint_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'waypoint_id'\n");
      return false;
    }
  }

  // Field name: sequence_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sequence_list.data) {
      rosidl_runtime_c__String__init(&ros_message->sequence_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sequence_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sequence_list'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t get_serialized_size_anscer_msgs__srv__EditSequence_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EditSequence_Request__ros_msg_type * ros_message = static_cast<const _EditSequence_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name save
  {
    size_t item_size = sizeof(ros_message->save);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name waypoint_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->waypoint_id.size + 1);
  // field.name sequence_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sequence_list.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _EditSequence_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_anscer_msgs__srv__EditSequence_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t max_serialized_size_anscer_msgs__srv__EditSequence_Request(
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

  // member: save
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: waypoint_id
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
  // member: sequence_list
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
    using DataType = anscer_msgs__srv__EditSequence_Request;
    is_plain =
      (
      offsetof(DataType, sequence_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EditSequence_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_anscer_msgs__srv__EditSequence_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EditSequence_Request = {
  "anscer_msgs::srv",
  "EditSequence_Request",
  _EditSequence_Request__cdr_serialize,
  _EditSequence_Request__cdr_deserialize,
  _EditSequence_Request__get_serialized_size,
  _EditSequence_Request__max_serialized_size
};

static rosidl_message_type_support_t _EditSequence_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EditSequence_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, srv, EditSequence_Request)() {
  return &_EditSequence_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "anscer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "anscer_msgs/srv/detail/edit_sequence__struct.h"
// already included above
// #include "anscer_msgs/srv/detail/edit_sequence__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // status
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // status

// forward declare type support functions


using _EditSequence_Response__ros_msg_type = anscer_msgs__srv__EditSequence_Response;

static bool _EditSequence_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EditSequence_Response__ros_msg_type * ros_message = static_cast<const _EditSequence_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_saved
  {
    cdr << (ros_message->is_saved ? true : false);
  }

  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
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

static bool _EditSequence_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EditSequence_Response__ros_msg_type * ros_message = static_cast<_EditSequence_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_saved
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_saved = tmp ? true : false;
  }

  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t get_serialized_size_anscer_msgs__srv__EditSequence_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EditSequence_Response__ros_msg_type * ros_message = static_cast<const _EditSequence_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_saved
  {
    size_t item_size = sizeof(ros_message->is_saved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _EditSequence_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_anscer_msgs__srv__EditSequence_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_anscer_msgs
size_t max_serialized_size_anscer_msgs__srv__EditSequence_Response(
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

  // member: is_saved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status
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
    using DataType = anscer_msgs__srv__EditSequence_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EditSequence_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_anscer_msgs__srv__EditSequence_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EditSequence_Response = {
  "anscer_msgs::srv",
  "EditSequence_Response",
  _EditSequence_Response__cdr_serialize,
  _EditSequence_Response__cdr_deserialize,
  _EditSequence_Response__get_serialized_size,
  _EditSequence_Response__max_serialized_size
};

static rosidl_message_type_support_t _EditSequence_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EditSequence_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, srv, EditSequence_Response)() {
  return &_EditSequence_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "anscer_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "anscer_msgs/srv/edit_sequence.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EditSequence__callbacks = {
  "anscer_msgs::srv",
  "EditSequence",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, srv, EditSequence_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, srv, EditSequence_Response)(),
};

static rosidl_service_type_support_t EditSequence__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EditSequence__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, anscer_msgs, srv, EditSequence)() {
  return &EditSequence__handle;
}

#if defined(__cplusplus)
}
#endif
