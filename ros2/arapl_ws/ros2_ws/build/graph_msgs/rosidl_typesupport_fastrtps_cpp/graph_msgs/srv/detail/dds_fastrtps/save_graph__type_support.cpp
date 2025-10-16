// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from graph_msgs:srv/SaveGraph.idl
// generated code does not contain a copyright notice
#include "graph_msgs/srv/detail/save_graph__rosidl_typesupport_fastrtps_cpp.hpp"
#include "graph_msgs/srv/detail/save_graph__struct.hpp"

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

namespace graph_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_msgs
cdr_serialize(
  const graph_msgs::srv::SaveGraph_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: graph_file_name
  cdr << ros_message.graph_file_name;
  // Member: save_graph_url
  cdr << ros_message.save_graph_url;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  graph_msgs::srv::SaveGraph_Request & ros_message)
{
  // Member: graph_file_name
  cdr >> ros_message.graph_file_name;

  // Member: save_graph_url
  cdr >> ros_message.save_graph_url;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_msgs
get_serialized_size(
  const graph_msgs::srv::SaveGraph_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: graph_file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.graph_file_name.size() + 1);
  // Member: save_graph_url
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.save_graph_url.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_msgs
max_serialized_size_SaveGraph_Request(
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


  // Member: graph_file_name
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

  // Member: save_graph_url
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
    using DataType = graph_msgs::srv::SaveGraph_Request;
    is_plain =
      (
      offsetof(DataType, save_graph_url) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SaveGraph_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const graph_msgs::srv::SaveGraph_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SaveGraph_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<graph_msgs::srv::SaveGraph_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SaveGraph_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const graph_msgs::srv::SaveGraph_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SaveGraph_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SaveGraph_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SaveGraph_Request__callbacks = {
  "graph_msgs::srv",
  "SaveGraph_Request",
  _SaveGraph_Request__cdr_serialize,
  _SaveGraph_Request__cdr_deserialize,
  _SaveGraph_Request__get_serialized_size,
  _SaveGraph_Request__max_serialized_size
};

static rosidl_message_type_support_t _SaveGraph_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveGraph_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace graph_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_graph_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msgs::srv::SaveGraph_Request>()
{
  return &graph_msgs::srv::typesupport_fastrtps_cpp::_SaveGraph_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_msgs, srv, SaveGraph_Request)() {
  return &graph_msgs::srv::typesupport_fastrtps_cpp::_SaveGraph_Request__handle;
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
namespace graph_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const graph_msgs::msg::Graph &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  graph_msgs::msg::Graph &);
size_t get_serialized_size(
  const graph_msgs::msg::Graph &,
  size_t current_alignment);
size_t
max_serialized_size_Graph(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace graph_msgs


namespace graph_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_msgs
cdr_serialize(
  const graph_msgs::srv::SaveGraph_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: graph
  graph_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.graph,
    cdr);
  // Member: result
  cdr << ros_message.result;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  graph_msgs::srv::SaveGraph_Response & ros_message)
{
  // Member: graph
  graph_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.graph);

  // Member: result
  cdr >> ros_message.result;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_msgs
get_serialized_size(
  const graph_msgs::srv::SaveGraph_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: graph

  current_alignment +=
    graph_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.graph, current_alignment);
  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graph_msgs
max_serialized_size_SaveGraph_Response(
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


  // Member: graph
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        graph_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Graph(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: result
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
    using DataType = graph_msgs::srv::SaveGraph_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SaveGraph_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const graph_msgs::srv::SaveGraph_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SaveGraph_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<graph_msgs::srv::SaveGraph_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SaveGraph_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const graph_msgs::srv::SaveGraph_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SaveGraph_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SaveGraph_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SaveGraph_Response__callbacks = {
  "graph_msgs::srv",
  "SaveGraph_Response",
  _SaveGraph_Response__cdr_serialize,
  _SaveGraph_Response__cdr_deserialize,
  _SaveGraph_Response__get_serialized_size,
  _SaveGraph_Response__max_serialized_size
};

static rosidl_message_type_support_t _SaveGraph_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveGraph_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace graph_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_graph_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msgs::srv::SaveGraph_Response>()
{
  return &graph_msgs::srv::typesupport_fastrtps_cpp::_SaveGraph_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_msgs, srv, SaveGraph_Response)() {
  return &graph_msgs::srv::typesupport_fastrtps_cpp::_SaveGraph_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace graph_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SaveGraph__callbacks = {
  "graph_msgs::srv",
  "SaveGraph",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_msgs, srv, SaveGraph_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_msgs, srv, SaveGraph_Response)(),
};

static rosidl_service_type_support_t _SaveGraph__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveGraph__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace graph_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_graph_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<graph_msgs::srv::SaveGraph>()
{
  return &graph_msgs::srv::typesupport_fastrtps_cpp::_SaveGraph__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graph_msgs, srv, SaveGraph)() {
  return &graph_msgs::srv::typesupport_fastrtps_cpp::_SaveGraph__handle;
}

#ifdef __cplusplus
}
#endif
