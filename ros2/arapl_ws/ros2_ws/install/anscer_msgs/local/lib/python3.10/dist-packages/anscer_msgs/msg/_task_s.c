// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:msg/Task.idl
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
#include "anscer_msgs/msg/detail/task__struct.h"
#include "anscer_msgs/msg/detail/task__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool anscer_msgs__msg__acr_control__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * anscer_msgs__msg__acr_control__convert_to_py(void * raw_ros_message);
bool anscer_msgs__msg__charge_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * anscer_msgs__msg__charge_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__msg__task__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
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
    assert(strncmp("anscer_msgs.msg._task.Task", full_classname_dest, 26) == 0);
  }
  anscer_msgs__msg__Task * ros_message = _ros_message;
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->index, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // waypoint_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoint_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->waypoint_index = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // number
    PyObject * field = PyObject_GetAttrString(_pymsg, "number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // activate
    PyObject * field = PyObject_GetAttrString(_pymsg, "activate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->activate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acr_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "acr_info");
    if (!field) {
      return false;
    }
    if (!anscer_msgs__msg__acr_control__convert_from_py(field, &ros_message->acr_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // charge_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_info");
    if (!field) {
      return false;
    }
    if (!anscer_msgs__msg__charge_info__convert_from_py(field, &ros_message->charge_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__msg__task__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Task */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.msg._task");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Task");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__msg__Task * ros_message = (anscer_msgs__msg__Task *)raw_ros_message;
  {  // index
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->index.data,
      strlen(ros_message->index.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waypoint_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->waypoint_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waypoint_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // activate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->activate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "activate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acr_info
    PyObject * field = NULL;
    field = anscer_msgs__msg__acr_control__convert_to_py(&ros_message->acr_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acr_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_info
    PyObject * field = NULL;
    field = anscer_msgs__msg__charge_info__convert_to_py(&ros_message->charge_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
