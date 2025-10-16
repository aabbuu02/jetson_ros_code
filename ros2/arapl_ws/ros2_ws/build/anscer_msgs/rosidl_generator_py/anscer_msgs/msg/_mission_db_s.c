// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:msg/MissionDB.idl
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
#include "anscer_msgs/msg/detail/mission_db__struct.h"
#include "anscer_msgs/msg/detail/mission_db__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__msg__mission_db__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("anscer_msgs.msg._mission_db.MissionDB", full_classname_dest, 37) == 0);
  }
  anscer_msgs__msg__MissionDB * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->timestamp, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // current_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__msg__mission_db__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionDB */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.msg._mission_db");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionDB");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__msg__MissionDB * ros_message = (anscer_msgs__msg__MissionDB *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->timestamp.data,
      strlen(ros_message->timestamp.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
