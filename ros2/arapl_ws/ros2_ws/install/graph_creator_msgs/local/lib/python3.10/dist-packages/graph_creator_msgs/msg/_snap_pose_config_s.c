// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from graph_creator_msgs:msg/SnapPoseConfig.idl
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
#include "graph_creator_msgs/msg/detail/snap_pose_config__struct.h"
#include "graph_creator_msgs/msg/detail/snap_pose_config__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool graph_creator_msgs__msg__snap_pose_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("graph_creator_msgs.msg._snap_pose_config.SnapPoseConfig", full_classname_dest, 55) == 0);
  }
  graph_creator_msgs__msg__SnapPoseConfig * ros_message = _ros_message;
  {  // enable_for_vertices
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_for_vertices");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_for_vertices = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_for_edges
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_for_edges");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_for_edges = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_position_snap
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_position_snap");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_position_snap = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_orientation_snap
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_orientation_snap");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_orientation_snap = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_snap_grid_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_snap_grid_size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_snap_grid_size = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation_snap_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_snap_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation_snap_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * graph_creator_msgs__msg__snap_pose_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SnapPoseConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graph_creator_msgs.msg._snap_pose_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SnapPoseConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graph_creator_msgs__msg__SnapPoseConfig * ros_message = (graph_creator_msgs__msg__SnapPoseConfig *)raw_ros_message;
  {  // enable_for_vertices
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_for_vertices ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_for_vertices", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_for_edges
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_for_edges ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_for_edges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_position_snap
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_position_snap ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_position_snap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_orientation_snap
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_orientation_snap ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_orientation_snap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_snap_grid_size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_snap_grid_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_snap_grid_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_snap_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation_snap_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_snap_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
