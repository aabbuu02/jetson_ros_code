// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lift_action:msg/ErrorStatus.idl
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
#include "lift_action/msg/detail/error_status__struct.h"
#include "lift_action/msg/detail/error_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lift_action__msg__error_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("lift_action.msg._error_status.ErrorStatus", full_classname_dest, 41) == 0);
  }
  lift_action__msg__ErrorStatus * ros_message = _ros_message;
  {  // lifter_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "lifter_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lifter_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // extractor_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "extractor_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->extractor_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_table_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_table_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turn_table_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // swing_arm_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "swing_arm_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->swing_arm_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_pb_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_pb_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_pb_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // swing_arm_sensor_zero_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "swing_arm_sensor_zero_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->swing_arm_sensor_zero_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // swing_arm_sensor_ninety_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "swing_arm_sensor_ninety_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->swing_arm_sensor_ninety_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turntable_sensor_zero_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "turntable_sensor_zero_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turntable_sensor_zero_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // extractor_sensor_laser_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "extractor_sensor_laser_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->extractor_sensor_laser_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lift_action__msg__error_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ErrorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lift_action.msg._error_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ErrorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lift_action__msg__ErrorStatus * ros_message = (lift_action__msg__ErrorStatus *)raw_ros_message;
  {  // lifter_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lifter_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lifter_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extractor_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->extractor_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extractor_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_table_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turn_table_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_table_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swing_arm_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->swing_arm_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swing_arm_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_pb_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_pb_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_pb_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swing_arm_sensor_zero_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->swing_arm_sensor_zero_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swing_arm_sensor_zero_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swing_arm_sensor_ninety_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->swing_arm_sensor_ninety_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swing_arm_sensor_ninety_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turntable_sensor_zero_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turntable_sensor_zero_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turntable_sensor_zero_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extractor_sensor_laser_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->extractor_sensor_laser_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extractor_sensor_laser_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
