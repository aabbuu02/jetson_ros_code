// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:srv/SafetyParam.idl
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
#include "anscer_msgs/srv/detail/safety_param__struct.h"
#include "anscer_msgs/srv/detail/safety_param__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__srv__safety_param__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("anscer_msgs.srv._safety_param.SafetyParam_Request", full_classname_dest, 49) == 0);
  }
  anscer_msgs__srv__SafetyParam_Request * ros_message = _ros_message;
  {  // min_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__srv__safety_param__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SafetyParam_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.srv._safety_param");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SafetyParam_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__srv__SafetyParam_Request * ros_message = (anscer_msgs__srv__SafetyParam_Request *)raw_ros_message;
  {  // min_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_z", field);
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
// #include "anscer_msgs/srv/detail/safety_param__struct.h"
// already included above
// #include "anscer_msgs/srv/detail/safety_param__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__srv__safety_param__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("anscer_msgs.srv._safety_param.SafetyParam_Response", full_classname_dest, 50) == 0);
  }
  anscer_msgs__srv__SafetyParam_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__srv__safety_param__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SafetyParam_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.srv._safety_param");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SafetyParam_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__srv__SafetyParam_Response * ros_message = (anscer_msgs__srv__SafetyParam_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
