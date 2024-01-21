// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from neo_msgs2:msg/KinematicsState.idl
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
#include "neo_msgs2/msg/detail/kinematics_state__struct.h"
#include "neo_msgs2/msg/detail/kinematics_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool neo_msgs2__msg__kinematics_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("neo_msgs2.msg._kinematics_state.KinematicsState", full_classname_dest, 47) == 0);
  }
  neo_msgs2__msg__KinematicsState * ros_message = _ros_message;
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_vel_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_vel_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_vel_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_moving");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_moving = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * neo_msgs2__msg__kinematics_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of KinematicsState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("neo_msgs2.msg._kinematics_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "KinematicsState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  neo_msgs2__msg__KinematicsState * ros_message = (neo_msgs2__msg__KinematicsState *)raw_ros_message;
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_vel_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_vel_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_vel_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_moving
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_moving ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
