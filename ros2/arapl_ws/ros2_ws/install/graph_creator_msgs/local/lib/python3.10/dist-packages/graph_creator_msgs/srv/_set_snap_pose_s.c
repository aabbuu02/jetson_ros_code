// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from graph_creator_msgs:srv/SetSnapPose.idl
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
#include "graph_creator_msgs/srv/detail/set_snap_pose__struct.h"
#include "graph_creator_msgs/srv/detail/set_snap_pose__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool graph_creator_msgs__srv__set_snap_pose__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("graph_creator_msgs.srv._set_snap_pose.SetSnapPose_Request", full_classname_dest, 57) == 0);
  }
  graph_creator_msgs__srv__SetSnapPose_Request * ros_message = _ros_message;
  {  // enable_vertex_snap_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_vertex_snap_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_vertex_snap_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_edge_snap_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_edge_snap_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_edge_snap_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_position_snap_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_position_snap_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_position_snap_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_orientation_snap_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_orientation_snap_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_orientation_snap_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_grid_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_grid_size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_grid_size = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * graph_creator_msgs__srv__set_snap_pose__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetSnapPose_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graph_creator_msgs.srv._set_snap_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetSnapPose_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graph_creator_msgs__srv__SetSnapPose_Request * ros_message = (graph_creator_msgs__srv__SetSnapPose_Request *)raw_ros_message;
  {  // enable_vertex_snap_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_vertex_snap_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_vertex_snap_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_edge_snap_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_edge_snap_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_edge_snap_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_position_snap_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_position_snap_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_position_snap_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_orientation_snap_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_orientation_snap_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_orientation_snap_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_grid_size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_grid_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_grid_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_angle", field);
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
// #include "graph_creator_msgs/srv/detail/set_snap_pose__struct.h"
// already included above
// #include "graph_creator_msgs/srv/detail/set_snap_pose__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool graph_creator_msgs__srv__set_snap_pose__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("graph_creator_msgs.srv._set_snap_pose.SetSnapPose_Response", full_classname_dest, 58) == 0);
  }
  graph_creator_msgs__srv__SetSnapPose_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * graph_creator_msgs__srv__set_snap_pose__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetSnapPose_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graph_creator_msgs.srv._set_snap_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetSnapPose_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graph_creator_msgs__srv__SetSnapPose_Response * ros_message = (graph_creator_msgs__srv__SetSnapPose_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
