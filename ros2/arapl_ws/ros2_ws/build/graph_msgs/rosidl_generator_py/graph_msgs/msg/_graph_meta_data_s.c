// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from graph_msgs:msg/GraphMetaData.idl
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
#include "graph_msgs/msg/detail/graph_meta_data__struct.h"
#include "graph_msgs/msg/detail/graph_meta_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool graph_msgs__msg__graph_meta_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("graph_msgs.msg._graph_meta_data.GraphMetaData", full_classname_dest, 45) == 0);
  }
  graph_msgs__msg__GraphMetaData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // graph_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "graph_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->graph_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // graph_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "graph_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->graph_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // number_of_vertices
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_vertices");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_vertices = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // number_of_edges
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_edges");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_edges = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * graph_msgs__msg__graph_meta_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GraphMetaData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graph_msgs.msg._graph_meta_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GraphMetaData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graph_msgs__msg__GraphMetaData * ros_message = (graph_msgs__msg__GraphMetaData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // graph_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->graph_name.data,
      strlen(ros_message->graph_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "graph_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // graph_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->graph_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "graph_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_vertices
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->number_of_vertices);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_vertices", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_edges
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->number_of_edges);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_edges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
