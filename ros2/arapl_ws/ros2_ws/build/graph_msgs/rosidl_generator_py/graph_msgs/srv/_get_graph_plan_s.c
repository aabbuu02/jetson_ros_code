// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from graph_msgs:srv/GetGraphPlan.idl
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
#include "graph_msgs/srv/detail/get_graph_plan__struct.h"
#include "graph_msgs/srv/detail/get_graph_plan__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool graph_msgs__srv__get_graph_plan__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("graph_msgs.srv._get_graph_plan.GetGraphPlan_Request", full_classname_dest, 51) == 0);
  }
  graph_msgs__srv__GetGraphPlan_Request * ros_message = _ros_message;
  {  // source_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ignore_goal_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignore_goal_orientation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignore_goal_orientation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ignore_path_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignore_path_orientation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignore_path_orientation = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * graph_msgs__srv__get_graph_plan__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetGraphPlan_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graph_msgs.srv._get_graph_plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetGraphPlan_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graph_msgs__srv__GetGraphPlan_Request * ros_message = (graph_msgs__srv__GetGraphPlan_Request *)raw_ros_message;
  {  // source_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignore_goal_orientation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignore_goal_orientation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignore_goal_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignore_path_orientation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignore_path_orientation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignore_path_orientation", field);
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
// #include "graph_msgs/srv/detail/get_graph_plan__struct.h"
// already included above
// #include "graph_msgs/srv/detail/get_graph_plan__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "graph_msgs/msg/detail/vertex__functions.h"
// end nested array functions include
bool graph_msgs__msg__vertex__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * graph_msgs__msg__vertex__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_msgs__msg__path__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_msgs__msg__path__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool graph_msgs__srv__get_graph_plan__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("graph_msgs.srv._get_graph_plan.GetGraphPlan_Response", full_classname_dest, 52) == 0);
  }
  graph_msgs__srv__GetGraphPlan_Response * ros_message = _ros_message;
  {  // vertices_in_plan
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertices_in_plan");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vertices_in_plan'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!graph_msgs__msg__Vertex__Sequence__init(&(ros_message->vertices_in_plan), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create graph_msgs__msg__Vertex__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    graph_msgs__msg__Vertex * dest = ros_message->vertices_in_plan.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!graph_msgs__msg__vertex__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // plan
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan");
    if (!field) {
      return false;
    }
    if (!nav_msgs__msg__path__convert_from_py(field, &ros_message->plan)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // plan_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->plan_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
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
PyObject * graph_msgs__srv__get_graph_plan__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetGraphPlan_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graph_msgs.srv._get_graph_plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetGraphPlan_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graph_msgs__srv__GetGraphPlan_Response * ros_message = (graph_msgs__srv__GetGraphPlan_Response *)raw_ros_message;
  {  // vertices_in_plan
    PyObject * field = NULL;
    size_t size = ros_message->vertices_in_plan.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    graph_msgs__msg__Vertex * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vertices_in_plan.data[i]);
      PyObject * pyitem = graph_msgs__msg__vertex__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertices_in_plan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan
    PyObject * field = NULL;
    field = nav_msgs__msg__path__convert_to_py(&ros_message->plan);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->plan_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
