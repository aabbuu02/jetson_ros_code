// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from graph_creator_msgs:msg/GraphCreatorState.idl
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
#include "graph_creator_msgs/msg/detail/graph_creator_state__struct.h"
#include "graph_creator_msgs/msg/detail/graph_creator_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool graph_creator_msgs__msg__graph_creator_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("graph_creator_msgs.msg._graph_creator_state.GraphCreatorState", full_classname_dest, 61) == 0);
  }
  graph_creator_msgs__msg__GraphCreatorState * ros_message = _ros_message;
  {  // graph_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "graph_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->graph_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_edge_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_edge_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_edge_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // edge_is_bidirectional
    PyObject * field = PyObject_GetAttrString(_pymsg, "edge_is_bidirectional");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->edge_is_bidirectional = (Py_True == field);
    Py_DECREF(field);
  }
  {  // all_vertices_locked
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_vertices_locked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->all_vertices_locked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // all_edges_locked
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_edges_locked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->all_edges_locked = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * graph_creator_msgs__msg__graph_creator_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GraphCreatorState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graph_creator_msgs.msg._graph_creator_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GraphCreatorState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graph_creator_msgs__msg__GraphCreatorState * ros_message = (graph_creator_msgs__msg__GraphCreatorState *)raw_ros_message;
  {  // graph_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->graph_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "graph_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_edge_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_edge_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_edge_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // edge_is_bidirectional
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->edge_is_bidirectional ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "edge_is_bidirectional", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_vertices_locked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->all_vertices_locked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_vertices_locked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_edges_locked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->all_edges_locked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_edges_locked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
