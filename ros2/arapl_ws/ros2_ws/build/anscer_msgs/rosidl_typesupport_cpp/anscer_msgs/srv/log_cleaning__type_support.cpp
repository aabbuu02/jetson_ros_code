// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:srv/LogCleaning.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "anscer_msgs/srv/detail/log_cleaning__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LogCleaning_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LogCleaning_Request_type_support_ids_t;

static const _LogCleaning_Request_type_support_ids_t _LogCleaning_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LogCleaning_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LogCleaning_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LogCleaning_Request_type_support_symbol_names_t _LogCleaning_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, LogCleaning_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, srv, LogCleaning_Request)),
  }
};

typedef struct _LogCleaning_Request_type_support_data_t
{
  void * data[2];
} _LogCleaning_Request_type_support_data_t;

static _LogCleaning_Request_type_support_data_t _LogCleaning_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LogCleaning_Request_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_LogCleaning_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LogCleaning_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LogCleaning_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LogCleaning_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LogCleaning_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::srv::LogCleaning_Request>()
{
  return &::anscer_msgs::srv::rosidl_typesupport_cpp::LogCleaning_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, srv, LogCleaning_Request)() {
  return get_message_type_support_handle<anscer_msgs::srv::LogCleaning_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "anscer_msgs/srv/detail/log_cleaning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LogCleaning_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LogCleaning_Response_type_support_ids_t;

static const _LogCleaning_Response_type_support_ids_t _LogCleaning_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LogCleaning_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LogCleaning_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LogCleaning_Response_type_support_symbol_names_t _LogCleaning_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, LogCleaning_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, srv, LogCleaning_Response)),
  }
};

typedef struct _LogCleaning_Response_type_support_data_t
{
  void * data[2];
} _LogCleaning_Response_type_support_data_t;

static _LogCleaning_Response_type_support_data_t _LogCleaning_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LogCleaning_Response_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_LogCleaning_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LogCleaning_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LogCleaning_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LogCleaning_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LogCleaning_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::srv::LogCleaning_Response>()
{
  return &::anscer_msgs::srv::rosidl_typesupport_cpp::LogCleaning_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, srv, LogCleaning_Response)() {
  return get_message_type_support_handle<anscer_msgs::srv::LogCleaning_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "anscer_msgs/srv/detail/log_cleaning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LogCleaning_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LogCleaning_type_support_ids_t;

static const _LogCleaning_type_support_ids_t _LogCleaning_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LogCleaning_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LogCleaning_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LogCleaning_type_support_symbol_names_t _LogCleaning_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, srv, LogCleaning)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, srv, LogCleaning)),
  }
};

typedef struct _LogCleaning_type_support_data_t
{
  void * data[2];
} _LogCleaning_type_support_data_t;

static _LogCleaning_type_support_data_t _LogCleaning_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LogCleaning_service_typesupport_map = {
  2,
  "anscer_msgs",
  &_LogCleaning_service_typesupport_ids.typesupport_identifier[0],
  &_LogCleaning_service_typesupport_symbol_names.symbol_name[0],
  &_LogCleaning_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LogCleaning_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LogCleaning_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<anscer_msgs::srv::LogCleaning>()
{
  return &::anscer_msgs::srv::rosidl_typesupport_cpp::LogCleaning_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, srv, LogCleaning)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<anscer_msgs::srv::LogCleaning>();
}

#ifdef __cplusplus
}
#endif
