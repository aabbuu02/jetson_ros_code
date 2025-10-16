// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from anscer_msgs:msg/ProximitySensors.idl
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
#include "anscer_msgs/msg/detail/proximity_sensors__struct.h"
#include "anscer_msgs/msg/detail/proximity_sensors__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "anscer_msgs/msg/detail/static_lidars__functions.h"
// end nested array functions include
bool anscer_msgs__msg__static_lidars__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * anscer_msgs__msg__static_lidars__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool anscer_msgs__msg__proximity_sensors__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("anscer_msgs.msg._proximity_sensors.ProximitySensors", full_classname_dest, 51) == 0);
  }
  anscer_msgs__msg__ProximitySensors * ros_message = _ros_message;
  {  // sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sensor'");
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
    if (!anscer_msgs__msg__StaticLidars__Sequence__init(&(ros_message->sensor), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create anscer_msgs__msg__StaticLidars__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    anscer_msgs__msg__StaticLidars * dest = ros_message->sensor.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!anscer_msgs__msg__static_lidars__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * anscer_msgs__msg__proximity_sensors__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ProximitySensors */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("anscer_msgs.msg._proximity_sensors");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ProximitySensors");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  anscer_msgs__msg__ProximitySensors * ros_message = (anscer_msgs__msg__ProximitySensors *)raw_ros_message;
  {  // sensor
    PyObject * field = NULL;
    size_t size = ros_message->sensor.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    anscer_msgs__msg__StaticLidars * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sensor.data[i]);
      PyObject * pyitem = anscer_msgs__msg__static_lidars__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
