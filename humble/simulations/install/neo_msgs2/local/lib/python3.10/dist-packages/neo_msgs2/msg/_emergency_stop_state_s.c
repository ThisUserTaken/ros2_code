// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from neo_msgs2:msg/EmergencyStopState.idl
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
#include "neo_msgs2/msg/detail/emergency_stop_state__struct.h"
#include "neo_msgs2/msg/detail/emergency_stop_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool neo_msgs2__msg__emergency_stop_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("neo_msgs2.msg._emergency_stop_state.EmergencyStopState", full_classname_dest, 54) == 0);
  }
  neo_msgs2__msg__EmergencyStopState * ros_message = _ros_message;
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
  {  // emergency_button_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_button_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_button_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // scanner_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "scanner_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->scanner_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // software_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->software_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emergency_state = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * neo_msgs2__msg__emergency_stop_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EmergencyStopState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("neo_msgs2.msg._emergency_stop_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EmergencyStopState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  neo_msgs2__msg__EmergencyStopState * ros_message = (neo_msgs2__msg__EmergencyStopState *)raw_ros_message;
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
  {  // emergency_button_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_button_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_button_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scanner_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->scanner_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scanner_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->software_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->emergency_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
