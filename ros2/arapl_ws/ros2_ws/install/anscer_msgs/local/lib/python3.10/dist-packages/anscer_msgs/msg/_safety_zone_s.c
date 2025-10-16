// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:msg/SafetyZone.idl
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
#include "anscer_msgs/msg/detail/safety_zone__struct.h"
#include "anscer_msgs/msg/detail/safety_zone__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__msg__safety_zone__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("anscer_msgs.msg._safety_zone.SafetyZone", full_classname_dest, 39) == 0);
  }
  anscer_msgs__msg__SafetyZone * ros_message = _ros_message;
  {  // front_zone
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_zone");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_zone = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rear_zone
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_zone");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_zone = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__msg__safety_zone__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SafetyZone */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.msg._safety_zone");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SafetyZone");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__msg__SafetyZone * ros_message = (anscer_msgs__msg__SafetyZone *)raw_ros_message;
  {  // front_zone
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_zone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_zone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_zone
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rear_zone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_zone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
