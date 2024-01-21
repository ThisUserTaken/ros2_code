// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_gz_interfaces:msg/Altimeter.idl
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
#include "ros_gz_interfaces/msg/detail/altimeter__struct.h"
#include "ros_gz_interfaces/msg/detail/altimeter__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_gz_interfaces__msg__altimeter__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("ros_gz_interfaces.msg._altimeter.Altimeter", full_classname_dest, 42) == 0);
  }
  ros_gz_interfaces__msg__Altimeter * ros_message = _ros_message;
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
  {  // vertical_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_reference");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_reference = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_gz_interfaces__msg__altimeter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Altimeter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_gz_interfaces.msg._altimeter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Altimeter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_gz_interfaces__msg__Altimeter * ros_message = (ros_gz_interfaces__msg__Altimeter *)raw_ros_message;
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
  {  // vertical_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_reference
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
