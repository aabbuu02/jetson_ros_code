// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:msg/ZoneInformation.idl
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
#include "anscer_msgs/msg/detail/zone_information__struct.h"
#include "anscer_msgs/msg/detail/zone_information__functions.h"

bool anscer_msgs__msg__indication__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * anscer_msgs__msg__indication__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__msg__zone_information__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("anscer_msgs.msg._zone_information.ZoneInformation", full_classname_dest, 49) == 0);
  }
  anscer_msgs__msg__ZoneInformation * ros_message = _ros_message;
  {  // indication_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "indication_info");
    if (!field) {
      return false;
    }
    if (!anscer_msgs__msg__indication__convert_from_py(field, &ros_message->indication_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__msg__zone_information__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ZoneInformation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.msg._zone_information");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ZoneInformation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__msg__ZoneInformation * ros_message = (anscer_msgs__msg__ZoneInformation *)raw_ros_message;
  {  // indication_info
    PyObject * field = NULL;
    field = anscer_msgs__msg__indication__convert_to_py(&ros_message->indication_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "indication_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
