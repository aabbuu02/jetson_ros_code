// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:srv/GlobalPath.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/srv/detail/global_path__rosidl_typesupport_fastrtps_cpp.hpp"
#include "anscer_msgs/srv/detail/global_path__struct.hpp"

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
  const anscer_msgs::srv::GlobalPath_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: initate
  cdr << (ros_message.initate ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anscer_msgs::srv::GlobalPath_Request & ros_message)
{
  // Member: initate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.initate = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
get_serialized_size(
  const anscer_msgs::srv::GlobalPath_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: initate
  {
    size_t item_size = sizeof(ros_message.initate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
max_serialized_size_GlobalPath_Request(
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


  // Member: initate
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
    using DataType = anscer_msgs::srv::GlobalPath_Request;
    is_plain =
      (
      offsetof(DataType, initate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GlobalPath_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anscer_msgs::srv::GlobalPath_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPath_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anscer_msgs::srv::GlobalPath_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPath_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anscer_msgs::srv::GlobalPath_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPath_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GlobalPath_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GlobalPath_Request__callbacks = {
  "anscer_msgs::srv",
  "GlobalPath_Request",
  _GlobalPath_Request__cdr_serialize,
  _GlobalPath_Request__cdr_deserialize,
  _GlobalPath_Request__get_serialized_size,
  _GlobalPath_Request__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPath_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPath_Request__callbacks,
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
get_message_type_support_handle<anscer_msgs::srv::GlobalPath_Request>()
{
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_GlobalPath_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, GlobalPath_Request)() {
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_GlobalPath_Request__handle;
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
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const anscer_msgs::msg::Paths &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  anscer_msgs::msg::Paths &);
size_t get_serialized_size(
  const anscer_msgs::msg::Paths &,
  size_t current_alignment);
size_t
max_serialized_size_Paths(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_serialize(
  const anscer_msgs::srv::GlobalPath_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: global_path
  anscer_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.global_path,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  anscer_msgs::srv::GlobalPath_Response & ros_message)
{
  // Member: global_path
  anscer_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.global_path);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
get_serialized_size(
  const anscer_msgs::srv::GlobalPath_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: global_path

  current_alignment +=
    anscer_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.global_path, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_anscer_msgs
max_serialized_size_GlobalPath_Response(
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


  // Member: global_path
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        anscer_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Paths(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = anscer_msgs::srv::GlobalPath_Response;
    is_plain =
      (
      offsetof(DataType, global_path) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GlobalPath_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const anscer_msgs::srv::GlobalPath_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GlobalPath_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<anscer_msgs::srv::GlobalPath_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GlobalPath_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const anscer_msgs::srv::GlobalPath_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GlobalPath_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GlobalPath_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GlobalPath_Response__callbacks = {
  "anscer_msgs::srv",
  "GlobalPath_Response",
  _GlobalPath_Response__cdr_serialize,
  _GlobalPath_Response__cdr_deserialize,
  _GlobalPath_Response__get_serialized_size,
  _GlobalPath_Response__max_serialized_size
};

static rosidl_message_type_support_t _GlobalPath_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPath_Response__callbacks,
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
get_message_type_support_handle<anscer_msgs::srv::GlobalPath_Response>()
{
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_GlobalPath_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, GlobalPath_Response)() {
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_GlobalPath_Response__handle;
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

static service_type_support_callbacks_t _GlobalPath__callbacks = {
  "anscer_msgs::srv",
  "GlobalPath",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, GlobalPath_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, GlobalPath_Response)(),
};

static rosidl_service_type_support_t _GlobalPath__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GlobalPath__callbacks,
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
get_service_type_support_handle<anscer_msgs::srv::GlobalPath>()
{
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_GlobalPath__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, GlobalPath)() {
  return &anscer_msgs::srv::typesupport_fastrtps_cpp::_GlobalPath__handle;
}

#ifdef __cplusplus
}
#endif
