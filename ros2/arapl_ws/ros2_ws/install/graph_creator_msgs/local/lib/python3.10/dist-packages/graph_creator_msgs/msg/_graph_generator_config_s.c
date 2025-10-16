// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from graph_creator_msgs:msg/GraphGeneratorConfig.idl
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
#include "graph_creator_msgs/msg/detail/graph_generator_config__struct.h"
#include "graph_creator_msgs/msg/detail/graph_generator_config__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool graph_creator_msgs__msg__edge_creation_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * graph_creator_msgs__msg__edge_creation_type__convert_to_py(void * raw_ros_message);
bool graph_creator_msgs__msg__edge_direction_creation_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * graph_creator_msgs__msg__edge_direction_creation_type__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool graph_creator_msgs__msg__graph_generator_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("graph_creator_msgs.msg._graph_generator_config.GraphGeneratorConfig", full_classname_dest, 67) == 0);
  }
  graph_creator_msgs__msg__GraphGeneratorConfig * ros_message = _ros_message;
  {  // generation_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "generation_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->generation_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // edge_creation_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "edge_creation_type");
    if (!field) {
      return false;
    }
    if (!graph_creator_msgs__msg__edge_creation_type__convert_from_py(field, &ros_message->edge_creation_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // edge_direction_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "edge_direction_type");
    if (!field) {
      return false;
    }
    if (!graph_creator_msgs__msg__edge_direction_creation_type__convert_from_py(field, &ros_message->edge_direction_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ignore_vertex_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignore_vertex_orientation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ignore_vertex_orientation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_edge_count_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_edge_count_threshold");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_edge_count_threshold = (Py_True == field);
    Py_DECREF(field);
  }
  {  // edge_count_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "edge_count_threshold");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->edge_count_threshold = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dxf_file_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "dxf_file_path");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->dxf_file_path, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // scale_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "scale_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scale_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scale_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "scale_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scale_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // start_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->start_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rows
    PyObject * field = PyObject_GetAttrString(_pymsg, "rows");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rows = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // columns
    PyObject * field = PyObject_GetAttrString(_pymsg, "columns");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->columns = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // row_spacing
    PyObject * field = PyObject_GetAttrString(_pymsg, "row_spacing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->row_spacing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // column_spacing
    PyObject * field = PyObject_GetAttrString(_pymsg, "column_spacing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->column_spacing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * graph_creator_msgs__msg__graph_generator_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GraphGeneratorConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graph_creator_msgs.msg._graph_generator_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GraphGeneratorConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graph_creator_msgs__msg__GraphGeneratorConfig * ros_message = (graph_creator_msgs__msg__GraphGeneratorConfig *)raw_ros_message;
  {  // generation_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->generation_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "generation_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // edge_creation_type
    PyObject * field = NULL;
    field = graph_creator_msgs__msg__edge_creation_type__convert_to_py(&ros_message->edge_creation_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "edge_creation_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // edge_direction_type
    PyObject * field = NULL;
    field = graph_creator_msgs__msg__edge_direction_creation_type__convert_to_py(&ros_message->edge_direction_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "edge_direction_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignore_vertex_orientation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ignore_vertex_orientation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignore_vertex_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_edge_count_threshold
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_edge_count_threshold ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_edge_count_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // edge_count_threshold
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->edge_count_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "edge_count_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dxf_file_path
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->dxf_file_path.data,
      strlen(ros_message->dxf_file_path.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dxf_file_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scale_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scale_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scale_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scale_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scale_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scale_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->start_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rows
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rows);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rows", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // columns
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->columns);
    {
      int rc = PyObject_SetAttrString(_pymessage, "columns", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // row_spacing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->row_spacing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "row_spacing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // column_spacing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->column_spacing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "column_spacing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
