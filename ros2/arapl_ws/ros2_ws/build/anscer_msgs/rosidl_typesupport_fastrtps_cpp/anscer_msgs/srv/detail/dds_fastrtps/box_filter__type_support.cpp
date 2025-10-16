// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:srv/BoxFilter.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/srv/detail/box_filter__rosidl_typesupport_fastrtps_cpp.hpp"
#include "anscer_msgs/srv/detail/box_filter__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_serialize(
  const anscer_msgs::srv::BoxFilter_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: filter_enable
  cdr << (ros_message.filter_enable ? true : false);
  // Member: restore_default
  cdr << (ros_message.restore_default ? true : false);
  // Member: min_safety_x
  cdr << ros_message.min_safety_x;
  // Member: max_safety_x
  cdr << ros_message.max_safety_x;
  // Member: min_safety_y
  cdr << ros_message.min_safety_y;
  // Member: max_safety_y
  cdr << ros_message.max_safety_y;
  // Member: min_warn_x
  cdr << ros_message.min_warn_x;
  // Member: max_warn_x
  cdr << ros_message.max_warn_x;
  // Member: min_warn_y
  cdr << ros_message.min_warn_y;
  // Member: max_warn_y
  cdr << ros_message.max_warn_y;
  // Member: debounce_time
  cdr << ros_message.debounce_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anscer_msgs::srv::BoxFilter_Request & ros_message)
{
  // Member: filter_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.filter_enable = tmp ? true : false;
  }

  // Member: restore_default
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.restore_default = tmp ? true : false;
  }

  // Member: min_safety_x
  cdr >> ros_message.min_safety_x;

  // Member: max_safety_x
  cdr >> ros_message.max_safety_x;

  // Member: min_safety_y
  cdr >> ros_message.min_safety_y;

  // Member: max_safety_y
  cdr >> ros_message.max_safety_y;

  // Member: min_warn_x
  cdr >> ros_message.min_warn_x;

  // Member: max_warn_x
  cdr >> ros_message.max_warn_x;

  // Member: min_warn_y
  cdr >> ros_message.min_warn_y;

  // Member: max_warn_y
  cdr >> ros_message.max_warn_y;

  // Member: debounce_time
  cdr >> ros_message.debounce_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
get_serialized_size(
  const anscer_msgs::srv::BoxFilter_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: filter_enable
  {
    size_t item_size = sizeof(ros_message.filter_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: restore_default
  {
    size_t item_size = sizeof(ros_message.restore_default);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_safety_x
  {
    size_t item_size = sizeof(ros_message.min_safety_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_safety_x
  {
    size_t item_size = sizeof(ros_message.max_safety_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_safety_y
  {
    size_t item_size = sizeof(ros_message.min_safety_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_safety_y
  {
    size_t item_size = sizeof(ros_message.max_safety_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_warn_x
  {
    size_t item_size = sizeof(ros_message.min_warn_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_warn_x
  {
    size_t item_size = sizeof(ros_message.max_warn_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_warn_y
  {
    size_t item_size = sizeof(ros_message.min_warn_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_warn_y
  {
    size_t item_size = sizeof(ros_message.max_warn_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debounce_time
  {
    size_t item_size = sizeof(ros_message.debounce_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
max_serialized_size_BoxFilter_Request(
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


  // Member: filter_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: restore_default
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min_safety_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_safety_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_safety_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_safety_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_warn_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_warn_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_warn_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_warn_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: debounce_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = anscer_msgs::srv::BoxFilter_Request;
    is_plain =
      (
      offsetof(DataType, debounce_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BoxFilter_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anscer_msgs::srv::BoxFilter_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BoxFilter_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anscer_msgs::srv::BoxFilter_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BoxFilter_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anscer_msgs::srv::BoxFilter_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BoxFilter_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BoxFilter_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BoxFilter_Request__callbacks = {
  "anscer_msgs::srv",
  "BoxFilter_Request",
  _BoxFilter_Request__cdr_serialize,
  _BoxFilter_Request__cdr_deserialize,
  _BoxFilter_Request__get_serialized_size,
  _BoxFilter_Request__max_serialized_size
};

static rosidl_message_type_support_t _BoxFilter_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BoxFilter_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::srv::BoxFilter_Request>()
{
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_BoxFilter_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, BoxFilter_Request)() {
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_BoxFilter_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace anscer_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_serialize(
  const anscer_msgs::srv::BoxFilter_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: state
  cdr << ros_message.state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anscer_msgs::srv::BoxFilter_Response & ros_message)
{
  // Member: state
  cdr >> ros_message.state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
get_serialized_size(
  const anscer_msgs::srv::BoxFilter_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
max_serialized_size_BoxFilter_Response(
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


  // Member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = anscer_msgs::srv::BoxFilter_Response;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BoxFilter_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anscer_msgs::srv::BoxFilter_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BoxFilter_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anscer_msgs::srv::BoxFilter_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BoxFilter_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anscer_msgs::srv::BoxFilter_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BoxFilter_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BoxFilter_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BoxFilter_Response__callbacks = {
  "anscer_msgs::srv",
  "BoxFilter_Response",
  _BoxFilter_Response__cdr_serialize,
  _BoxFilter_Response__cdr_deserialize,
  _BoxFilter_Response__get_serialized_size,
  _BoxFilter_Response__max_serialized_size
};

static rosidl_message_type_support_t _BoxFilter_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BoxFilter_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_anscer_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::srv::BoxFilter_Response>()
{
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_BoxFilter_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, BoxFilter_Response)() {
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_BoxFilter_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace anscer_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _BoxFilter__callbacks = {
  "anscer_msgs::srv",
  "BoxFilter",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, BoxFilter_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, BoxFilter_Response)(),
};

static rosidl_service_type_support_t _BoxFilter__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BoxFilter__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_anscer_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<anscer_msgs::srv::BoxFilter>()
{
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_BoxFilter__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, BoxFilter)() {
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_BoxFilter__handle;
}

#ifdef __cplusplus
}
#endif
