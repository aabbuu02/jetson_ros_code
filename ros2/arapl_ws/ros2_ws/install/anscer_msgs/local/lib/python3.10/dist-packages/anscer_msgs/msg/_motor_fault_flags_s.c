// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:msg/MotorFaultFlags.idl
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
#include "anscer_msgs/msg/detail/motor_fault_flags__struct.h"
#include "anscer_msgs/msg/detail/motor_fault_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__msg__motor_fault_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("anscer_msgs.msg._motor_fault_flags.MotorFaultFlags", full_classname_dest, 50) == 0);
  }
  anscer_msgs__msg__MotorFaultFlags * ros_message = _ros_message;
  {  // overheat
    PyObject * field = PyObject_GetAttrString(_pymsg, "overheat");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overheat = (Py_True == field);
    Py_DECREF(field);
  }
  {  // overvoltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "overvoltage");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overvoltage = (Py_True == field);
    Py_DECREF(field);
  }
  {  // undervoltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "undervoltage");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->undervoltage = (Py_True == field);
    Py_DECREF(field);
  }
  {  // short_circuit
    PyObject * field = PyObject_GetAttrString(_pymsg, "short_circuit");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->short_circuit = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motor_setup_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_setup_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motor_setup_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mosfet_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "mosfet_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mosfet_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // default_configuration
    PyObject * field = PyObject_GetAttrString(_pymsg, "default_configuration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->default_configuration = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__msg__motor_fault_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorFaultFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.msg._motor_fault_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorFaultFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__msg__MotorFaultFlags * ros_message = (anscer_msgs__msg__MotorFaultFlags *)raw_ros_message;
  {  // overheat
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overheat ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overheat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overvoltage
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overvoltage ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overvoltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undervoltage
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->undervoltage ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "undervoltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // short_circuit
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->short_circuit ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "short_circuit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_setup_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motor_setup_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_setup_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mosfet_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mosfet_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mosfet_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // default_configuration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->default_configuration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "default_configuration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
