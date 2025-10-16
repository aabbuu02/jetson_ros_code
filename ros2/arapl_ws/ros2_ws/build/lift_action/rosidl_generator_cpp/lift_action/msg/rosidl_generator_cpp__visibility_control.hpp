// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define LIFT_ACTION__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_lift_action __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_lift_action __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_lift_action __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_lift_action __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_lift_action
    #define ROSIDL_GENERATOR_CPP_PUBLIC_lift_action ROSIDL_GENERATOR_CPP_EXPORT_lift_action
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_lift_action ROSIDL_GENERATOR_CPP_IMPORT_lift_action
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_lift_action __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_lift_action
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_lift_action __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_lift_action
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // LIFT_ACTION__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
