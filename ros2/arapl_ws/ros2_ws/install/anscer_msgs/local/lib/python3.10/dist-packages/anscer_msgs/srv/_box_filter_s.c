// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:srv/BoxFilter.idl
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
#include "anscer_msgs/srv/detail/box_filter__struct.h"
#include "anscer_msgs/srv/detail/box_filter__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__srv__box_filter__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("anscer_msgs.srv._box_filter.BoxFilter_Request", full_classname_dest, 45) == 0);
  }
  anscer_msgs__srv__BoxFilter_Request * ros_message = _ros_message;
  {  // filter_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->filter_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // restore_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "restore_default");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->restore_default = (Py_True == field);
    Py_DECREF(field);
  }
  {  // min_safety_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_safety_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_safety_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_safety_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_safety_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_safety_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_safety_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_safety_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_safety_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_safety_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_safety_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_safety_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_warn_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_warn_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_warn_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_warn_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_warn_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_warn_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_warn_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_warn_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_warn_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_warn_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_warn_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_warn_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // debounce_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "debounce_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debounce_time = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__srv__box_filter__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BoxFilter_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.srv._box_filter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BoxFilter_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__srv__BoxFilter_Request * ros_message = (anscer_msgs__srv__BoxFilter_Request *)raw_ros_message;
  {  // filter_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->filter_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restore_default
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->restore_default ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "restore_default", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_safety_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_safety_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_safety_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_safety_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_safety_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_safety_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_safety_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_safety_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_safety_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_safety_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_safety_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_safety_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_warn_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_warn_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_warn_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_warn_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_warn_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_warn_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_warn_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_warn_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_warn_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_warn_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_warn_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_warn_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debounce_time
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->debounce_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debounce_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "anscer_msgs/srv/detail/box_filter__struct.h"
// already included above
// #include "anscer_msgs/srv/detail/box_filter__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__srv__box_filter__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("anscer_msgs.srv._box_filter.BoxFilter_Response", full_classname_dest, 46) == 0);
  }
  anscer_msgs__srv__BoxFilter_Response * ros_message = _ros_message;
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__srv__box_filter__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BoxFilter_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.srv._box_filter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BoxFilter_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__srv__BoxFilter_Response * ros_message = (anscer_msgs__srv__BoxFilter_Response *)raw_ros_message;
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
