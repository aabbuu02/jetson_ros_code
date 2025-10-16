// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:srv/ShelfReader.idl
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
#include "anscer_msgs/srv/detail/shelf_reader__struct.h"
#include "anscer_msgs/srv/detail/shelf_reader__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__srv__shelf_reader__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("anscer_msgs.srv._shelf_reader.ShelfReader_Request", full_classname_dest, 49) == 0);
  }
  anscer_msgs__srv__ShelfReader_Request * ros_message = _ros_message;
  {  // dummy_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "dummy_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dummy_req = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__srv__shelf_reader__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ShelfReader_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.srv._shelf_reader");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ShelfReader_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__srv__ShelfReader_Request * ros_message = (anscer_msgs__srv__ShelfReader_Request *)raw_ros_message;
  {  // dummy_req
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->dummy_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dummy_req", field);
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
// #include "anscer_msgs/srv/detail/shelf_reader__struct.h"
// already included above
// #include "anscer_msgs/srv/detail/shelf_reader__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__srv__shelf_reader__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("anscer_msgs.srv._shelf_reader.ShelfReader_Response", full_classname_dest, 50) == 0);
  }
  anscer_msgs__srv__ShelfReader_Response * ros_message = _ros_message;
  {  // shelf_response
    PyObject * field = PyObject_GetAttrString(_pymsg, "shelf_response");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shelf_response = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__srv__shelf_reader__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ShelfReader_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.srv._shelf_reader");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ShelfReader_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__srv__ShelfReader_Response * ros_message = (anscer_msgs__srv__ShelfReader_Response *)raw_ros_message;
  {  // shelf_response
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->shelf_response);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shelf_response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
