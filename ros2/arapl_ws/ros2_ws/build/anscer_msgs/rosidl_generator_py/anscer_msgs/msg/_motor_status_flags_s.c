// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:msg/MotorStatusFlags.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "anscer_msgs/msg/detail/motor_status_flags__struct.h"
#include "anscer_msgs/msg/detail/motor_status_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__msg__motor_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("anscer_msgs.msg._motor_status_flags.MotorStatusFlags", full_classname_dest, 52) == 0);
  }
  anscer_msgs__msg__MotorStatusFlags * ros_message = _ros_message;
  {  // serial_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->serial_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pulse_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "pulse_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pulse_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // analog_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->analog_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_stage_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_stage_off");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_stage_off = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stall_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "stall_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stall_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // at_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "at_limit");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->at_limit = (Py_True == field);
    Py_DECREF(field);
  }
  {  // unused
    PyObject * field = PyObject_GetAttrString(_pymsg, "unused");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->unused = (Py_True == field);
    Py_DECREF(field);
  }
  {  // micro_basic_script_running
    PyObject * field = PyObject_GetAttrString(_pymsg, "micro_basic_script_running");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->micro_basic_script_running = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motor_tuning_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_tuning_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motor_tuning_mode = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__msg__motor_status_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorStatusFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.msg._motor_status_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorStatusFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__msg__MotorStatusFlags * ros_message = (anscer_msgs__msg__MotorStatusFlags *)raw_ros_message;
  {  // serial_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->serial_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pulse_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pulse_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pulse_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->analog_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_stage_off
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_stage_off ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_stage_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stall_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stall_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stall_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // at_limit
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->at_limit ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "at_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unused
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->unused ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unused", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // micro_basic_script_running
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->micro_basic_script_running ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "micro_basic_script_running", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_tuning_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motor_tuning_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_tuning_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
