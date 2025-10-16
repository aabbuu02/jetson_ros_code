// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graph_creator_msgs:srv/SetEdgeDirectionCreationType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graph_creator_msgs/srv/detail/set_edge_direction_creation_type__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_creator_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetEdgeDirectionCreationType_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_creator_msgs::srv::SetEdgeDirectionCreationType_Request(_init);
}

void SetEdgeDirectionCreationType_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_creator_msgs::srv::SetEdgeDirectionCreationType_Request *>(message_memory);
  typed_message->~SetEdgeDirectionCreationType_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetEdgeDirectionCreationType_Request_message_member_array[1] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<graph_creator_msgs::msg::EdgeDirectionCreationType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs::srv::SetEdgeDirectionCreationType_Request, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetEdgeDirectionCreationType_Request_message_members = {
  "graph_creator_msgs::srv",  // message namespace
  "SetEdgeDirectionCreationType_Request",  // message name
  1,  // number of fields
  sizeof(graph_creator_msgs::srv::SetEdgeDirectionCreationType_Request),
  SetEdgeDirectionCreationType_Request_message_member_array,  // message members
  SetEdgeDirectionCreationType_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetEdgeDirectionCreationType_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetEdgeDirectionCreationType_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetEdgeDirectionCreationType_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_creator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_creator_msgs::srv::SetEdgeDirectionCreationType_Request>()
{
  return &::graph_creator_msgs::srv::rosidl_typesupport_introspection_cpp::SetEdgeDirectionCreationType_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_creator_msgs, srv, SetEdgeDirectionCreationType_Request)() {
  return &::graph_creator_msgs::srv::rosidl_typesupport_introspection_cpp::SetEdgeDirectionCreationType_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "graph_creator_msgs/srv/detail/set_edge_direction_creation_type__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_creator_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetEdgeDirectionCreationType_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_creator_msgs::srv::SetEdgeDirectionCreationType_Response(_init);
}

void SetEdgeDirectionCreationType_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_creator_msgs::srv::SetEdgeDirectionCreationType_Response *>(message_memory);
  typed_message->~SetEdgeDirectionCreationType_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetEdgeDirectionCreationType_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs::srv::SetEdgeDirectionCreationType_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_creator_msgs::srv::SetEdgeDirectionCreationType_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetEdgeDirectionCreationType_Response_message_members = {
  "graph_creator_msgs::srv",  // message namespace
  "SetEdgeDirectionCreationType_Response",  // message name
  2,  // number of fields
  sizeof(graph_creator_msgs::srv::SetEdgeDirectionCreationType_Response),
  SetEdgeDirectionCreationType_Response_message_member_array,  // message members
  SetEdgeDirectionCreationType_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetEdgeDirectionCreationType_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetEdgeDirectionCreationType_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetEdgeDirectionCreationType_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_creator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_creator_msgs::srv::SetEdgeDirectionCreationType_Response>()
{
  return &::graph_creator_msgs::srv::rosidl_typesupport_introspection_cpp::SetEdgeDirectionCreationType_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_creator_msgs, srv, SetEdgeDirectionCreationType_Response)() {
  return &::graph_creator_msgs::srv::rosidl_typesupport_introspection_cpp::SetEdgeDirectionCreationType_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "graph_creator_msgs/srv/detail/set_edge_direction_creation_type__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace graph_creator_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetEdgeDirectionCreationType_service_members = {
  "graph_creator_msgs::srv",  // service namespace
  "SetEdgeDirectionCreationType",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<graph_creator_msgs::srv::SetEdgeDirectionCreationType>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetEdgeDirectionCreationType_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetEdgeDirectionCreationType_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_creator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<graph_creator_msgs::srv::SetEdgeDirectionCreationType>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::graph_creator_msgs::srv::rosidl_typesupport_introspection_cpp::SetEdgeDirectionCreationType_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::graph_creator_msgs::srv::SetEdgeDirectionCreationType_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::graph_creator_msgs::srv::SetEdgeDirectionCreationType_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_creator_msgs, srv, SetEdgeDirectionCreationType)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<graph_creator_msgs::srv::SetEdgeDirectionCreationType>();
}

#ifdef __cplusplus
}
#endif
