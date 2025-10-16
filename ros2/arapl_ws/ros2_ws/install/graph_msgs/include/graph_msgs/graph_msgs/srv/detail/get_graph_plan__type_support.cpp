// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graph_msgs:srv/GetGraphPlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graph_msgs/srv/detail/get_graph_plan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetGraphPlan_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_msgs::srv::GetGraphPlan_Request(_init);
}

void GetGraphPlan_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_msgs::srv::GetGraphPlan_Request *>(message_memory);
  typed_message->~GetGraphPlan_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetGraphPlan_Request_message_member_array[4] = {
  {
    "source_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::srv::GetGraphPlan_Request, source_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::srv::GetGraphPlan_Request, target_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ignore_goal_orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::srv::GetGraphPlan_Request, ignore_goal_orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ignore_path_orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::srv::GetGraphPlan_Request, ignore_path_orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetGraphPlan_Request_message_members = {
  "graph_msgs::srv",  // message namespace
  "GetGraphPlan_Request",  // message name
  4,  // number of fields
  sizeof(graph_msgs::srv::GetGraphPlan_Request),
  GetGraphPlan_Request_message_member_array,  // message members
  GetGraphPlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetGraphPlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetGraphPlan_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetGraphPlan_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msgs::srv::GetGraphPlan_Request>()
{
  return &::graph_msgs::srv::rosidl_typesupport_introspection_cpp::GetGraphPlan_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msgs, srv, GetGraphPlan_Request)() {
  return &::graph_msgs::srv::rosidl_typesupport_introspection_cpp::GetGraphPlan_Request_message_type_support_handle;
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
// #include "graph_msgs/srv/detail/get_graph_plan__struct.hpp"
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

namespace graph_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetGraphPlan_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_msgs::srv::GetGraphPlan_Response(_init);
}

void GetGraphPlan_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_msgs::srv::GetGraphPlan_Response *>(message_memory);
  typed_message->~GetGraphPlan_Response();
}

size_t size_function__GetGraphPlan_Response__vertices_in_plan(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<graph_msgs::msg::Vertex> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetGraphPlan_Response__vertices_in_plan(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<graph_msgs::msg::Vertex> *>(untyped_member);
  return &member[index];
}

void * get_function__GetGraphPlan_Response__vertices_in_plan(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<graph_msgs::msg::Vertex> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetGraphPlan_Response__vertices_in_plan(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const graph_msgs::msg::Vertex *>(
    get_const_function__GetGraphPlan_Response__vertices_in_plan(untyped_member, index));
  auto & value = *reinterpret_cast<graph_msgs::msg::Vertex *>(untyped_value);
  value = item;
}

void assign_function__GetGraphPlan_Response__vertices_in_plan(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<graph_msgs::msg::Vertex *>(
    get_function__GetGraphPlan_Response__vertices_in_plan(untyped_member, index));
  const auto & value = *reinterpret_cast<const graph_msgs::msg::Vertex *>(untyped_value);
  item = value;
}

void resize_function__GetGraphPlan_Response__vertices_in_plan(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<graph_msgs::msg::Vertex> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetGraphPlan_Response_message_member_array[5] = {
  {
    "vertices_in_plan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<graph_msgs::msg::Vertex>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::srv::GetGraphPlan_Response, vertices_in_plan),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetGraphPlan_Response__vertices_in_plan,  // size() function pointer
    get_const_function__GetGraphPlan_Response__vertices_in_plan,  // get_const(index) function pointer
    get_function__GetGraphPlan_Response__vertices_in_plan,  // get(index) function pointer
    fetch_function__GetGraphPlan_Response__vertices_in_plan,  // fetch(index, &value) function pointer
    assign_function__GetGraphPlan_Response__vertices_in_plan,  // assign(index, value) function pointer
    resize_function__GetGraphPlan_Response__vertices_in_plan  // resize(index) function pointer
  },
  {
    "plan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_msgs::msg::Path>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::srv::GetGraphPlan_Response, plan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plan_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::srv::GetGraphPlan_Response, plan_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::srv::GetGraphPlan_Response, success),  // bytes offset in struct
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
    offsetof(graph_msgs::srv::GetGraphPlan_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetGraphPlan_Response_message_members = {
  "graph_msgs::srv",  // message namespace
  "GetGraphPlan_Response",  // message name
  5,  // number of fields
  sizeof(graph_msgs::srv::GetGraphPlan_Response),
  GetGraphPlan_Response_message_member_array,  // message members
  GetGraphPlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetGraphPlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetGraphPlan_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetGraphPlan_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msgs::srv::GetGraphPlan_Response>()
{
  return &::graph_msgs::srv::rosidl_typesupport_introspection_cpp::GetGraphPlan_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msgs, srv, GetGraphPlan_Response)() {
  return &::graph_msgs::srv::rosidl_typesupport_introspection_cpp::GetGraphPlan_Response_message_type_support_handle;
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
// #include "graph_msgs/srv/detail/get_graph_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace graph_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetGraphPlan_service_members = {
  "graph_msgs::srv",  // service namespace
  "GetGraphPlan",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<graph_msgs::srv::GetGraphPlan>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetGraphPlan_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetGraphPlan_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace graph_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<graph_msgs::srv::GetGraphPlan>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::graph_msgs::srv::rosidl_typesupport_introspection_cpp::GetGraphPlan_service_type_support_handle;
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
        ::graph_msgs::srv::GetGraphPlan_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::graph_msgs::srv::GetGraphPlan_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msgs, srv, GetGraphPlan)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<graph_msgs::srv::GetGraphPlan>();
}

#ifdef __cplusplus
}
#endif
