// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anscer_msgs:srv/TripAnalytics.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__TRIP_ANALYTICS__TRAITS_HPP_
#define ANSCER_MSGS__SRV__DETAIL__TRIP_ANALYTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anscer_msgs/srv/detail/trip_analytics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TripAnalytics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_date
  {
    out << "start_date: ";
    rosidl_generator_traits::value_to_yaml(msg.start_date, out);
    out << ", ";
  }

  // member: end_date
  {
    out << "end_date: ";
    rosidl_generator_traits::value_to_yaml(msg.end_date, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TripAnalytics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_date: ";
    rosidl_generator_traits::value_to_yaml(msg.start_date, out);
    out << "\n";
  }

  // member: end_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_date: ";
    rosidl_generator_traits::value_to_yaml(msg.end_date, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TripAnalytics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::srv::TripAnalytics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::TripAnalytics_Request & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::TripAnalytics_Request>()
{
  return "anscer_msgs::srv::TripAnalytics_Request";
}

template<>
inline const char * name<anscer_msgs::srv::TripAnalytics_Request>()
{
  return "anscer_msgs/srv/TripAnalytics_Request";
}

template<>
struct has_fixed_size<anscer_msgs::srv::TripAnalytics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::TripAnalytics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::TripAnalytics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'mission_db'
#include "anscer_msgs/msg/detail/mission_db__traits.hpp"

namespace anscer_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TripAnalytics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_db
  {
    if (msg.mission_db.size() == 0) {
      out << "mission_db: []";
    } else {
      out << "mission_db: [";
      size_t pending_items = msg.mission_db.size();
      for (auto item : msg.mission_db) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TripAnalytics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_db
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mission_db.size() == 0) {
      out << "mission_db: []\n";
    } else {
      out << "mission_db:\n";
      for (auto item : msg.mission_db) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TripAnalytics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace anscer_msgs

namespace rosidl_generator_traits
{

[[deprecated("use anscer_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anscer_msgs::srv::TripAnalytics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anscer_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anscer_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const anscer_msgs::srv::TripAnalytics_Response & msg)
{
  return anscer_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anscer_msgs::srv::TripAnalytics_Response>()
{
  return "anscer_msgs::srv::TripAnalytics_Response";
}

template<>
inline const char * name<anscer_msgs::srv::TripAnalytics_Response>()
{
  return "anscer_msgs/srv/TripAnalytics_Response";
}

template<>
struct has_fixed_size<anscer_msgs::srv::TripAnalytics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<anscer_msgs::srv::TripAnalytics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<anscer_msgs::srv::TripAnalytics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anscer_msgs::srv::TripAnalytics>()
{
  return "anscer_msgs::srv::TripAnalytics";
}

template<>
inline const char * name<anscer_msgs::srv::TripAnalytics>()
{
  return "anscer_msgs/srv/TripAnalytics";
}

template<>
struct has_fixed_size<anscer_msgs::srv::TripAnalytics>
  : std::integral_constant<
    bool,
    has_fixed_size<anscer_msgs::srv::TripAnalytics_Request>::value &&
    has_fixed_size<anscer_msgs::srv::TripAnalytics_Response>::value
  >
{
};

template<>
struct has_bounded_size<anscer_msgs::srv::TripAnalytics>
  : std::integral_constant<
    bool,
    has_bounded_size<anscer_msgs::srv::TripAnalytics_Request>::value &&
    has_bounded_size<anscer_msgs::srv::TripAnalytics_Response>::value
  >
{
};

template<>
struct is_service<anscer_msgs::srv::TripAnalytics>
  : std::true_type
{
};

template<>
struct is_service_request<anscer_msgs::srv::TripAnalytics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anscer_msgs::srv::TripAnalytics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANSCER_MSGS__SRV__DETAIL__TRIP_ANALYTICS__TRAITS_HPP_
