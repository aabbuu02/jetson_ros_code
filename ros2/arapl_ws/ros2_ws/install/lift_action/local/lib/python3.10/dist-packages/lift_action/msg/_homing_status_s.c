// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lift_action:msg/HomingStatus.idl
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
#include "lift_action/msg/detail/homing_status__struct.h"
#include "lift_action/msg/detail/homing_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lift_action__msg__homing_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("lift_action.msg._homing_status.HomingStatus", full_classname_dest, 43) == 0);
  }
  lift_action__msg__HomingStatus * ros_message = _ros_message;
  {  // lifter_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "lifter_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lifter_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // extractor_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "extractor_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->extractor_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_table_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_table_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turn_table_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_homed
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_homed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_homed = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lift_action__msg__homing_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HomingStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lift_action.msg._homing_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HomingStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lift_action__msg__HomingStatus * ros_message = (lift_action__msg__HomingStatus *)raw_ros_message;
  {  // lifter_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lifter_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lifter_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extractor_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->extractor_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extractor_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_table_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turn_table_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_table_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_homed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_homed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_homed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
