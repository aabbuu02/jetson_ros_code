// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from graph_creator_msgs:srv/SetEdgeCreationType.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/srv/detail/set_edge_creation_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "graph_creator_msgs/srv/detail/set_edge_creation_type__struct.hpp"

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
namespace graph_creator_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const graph_creator_msgs::msg::EdgeCreationType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  graph_creator_msgs::msg::EdgeCreationType &);
size_t get_serialized_size(
  const graph_creator_msgs::msg::EdgeCreationType &,
  size_t current_alignment);
size_t
max_serialized_size_EdgeCreationType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace graph_creator_msgs


namespace graph_creator_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
cdr_serialize(
  const graph_creator_msgs::srv::SetEdgeCreationType_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: edge_creation_type
  graph_creator_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.edge_creation_type,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  graph_creator_msgs::srv::SetEdgeCreationType_Request & ros_message)
{
  // Member: edge_creation_type
  graph_creator_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.edge_creation_type);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
get_serialized_size(
  const graph_creator_msgs::srv::SetEdgeCreationType_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: edge_creation_type

  current_alignment +=
    graph_creator_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.edge_creation_type, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
max_serialized_size_SetEdgeCreationType_Request(
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


  // Member: edge_creation_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        graph_creator_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EdgeCreationType(
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
    using DataType = graph_creator_msgs::srv::SetEdgeCreationType_Request;
    is_plain =
      (
      offsetof(DataType, edge_creation_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetEdgeCreationType_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::srv::SetEdgeCreationType_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetEdgeCreationType_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<graph_creator_msgs::srv::SetEdgeCreationType_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetEdgeCreationType_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::srv::SetEdgeCreationType_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetEdgeCreationType_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetEdgeCreationType_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetEdgeCreationType_Request__callbacks = {
  "graph_creator_msgs::srv",
  "SetEdgeCreationType_Request",
  _SetEdgeCreationType_Request__cdr_serialize,
  _SetEdgeCreationType_Request__cdr_deserialize,
  _SetEdgeCreationType_Request__get_serialized_size,
  _SetEdgeCreationType_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetEdgeCreationType_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetEdgeCreationType_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace graph_creator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_graph_creator_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_creator_msgs::srv::SetEdgeCreationType_Request>()
{
  return &graph_creator_msgs::srv::typesupport_fastrtps_cpp::_SetEdgeCreationType_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_creator_msgs, srv, SetEdgeCreationType_Request)() {
  return &graph_creator_msgs::srv::typesupport_fastrtps_cpp::_SetEdgeCreationType_Request__handle;
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

namespace graph_creator_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
cdr_serialize(
  const graph_creator_msgs::srv::SetEdgeCreationType_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  graph_creator_msgs::srv::SetEdgeCreationType_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
get_serialized_size(
  const graph_creator_msgs::srv::SetEdgeCreationType_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_creator_msgs
max_serialized_size_SetEdgeCreationType_Response(
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


  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
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
    using DataType = graph_creator_msgs::srv::SetEdgeCreationType_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetEdgeCreationType_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::srv::SetEdgeCreationType_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetEdgeCreationType_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<graph_creator_msgs::srv::SetEdgeCreationType_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetEdgeCreationType_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const graph_creator_msgs::srv::SetEdgeCreationType_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetEdgeCreationType_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetEdgeCreationType_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetEdgeCreationType_Response__callbacks = {
  "graph_creator_msgs::srv",
  "SetEdgeCreationType_Response",
  _SetEdgeCreationType_Response__cdr_serialize,
  _SetEdgeCreationType_Response__cdr_deserialize,
  _SetEdgeCreationType_Response__get_serialized_size,
  _SetEdgeCreationType_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetEdgeCreationType_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetEdgeCreationType_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace graph_creator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_graph_creator_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_creator_msgs::srv::SetEdgeCreationType_Response>()
{
  return &graph_creator_msgs::srv::typesupport_fastrtps_cpp::_SetEdgeCreationType_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_creator_msgs, srv, SetEdgeCreationType_Response)() {
  return &graph_creator_msgs::srv::typesupport_fastrtps_cpp::_SetEdgeCreationType_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace graph_creator_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetEdgeCreationType__callbacks = {
  "graph_creator_msgs::srv",
  "SetEdgeCreationType",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_creator_msgs, srv, SetEdgeCreationType_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_creator_msgs, srv, SetEdgeCreationType_Response)(),
};

static rosidl_service_type_support_t _SetEdgeCreationType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetEdgeCreationType__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace graph_creator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_graph_creator_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<graph_creator_msgs::srv::SetEdgeCreationType>()
{
  return &graph_creator_msgs::srv::typesupport_fastrtps_cpp::_SetEdgeCreationType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_creator_msgs, srv, SetEdgeCreationType)() {
  return &graph_creator_msgs::srv::typesupport_fastrtps_cpp::_SetEdgeCreationType__handle;
}

#ifdef __cplusplus
}
#endif
