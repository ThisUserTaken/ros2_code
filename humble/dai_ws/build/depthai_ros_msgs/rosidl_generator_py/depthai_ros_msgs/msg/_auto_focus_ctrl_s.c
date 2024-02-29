// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
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
#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__struct.h"
#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool depthai_ros_msgs__msg__auto_focus_ctrl__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("depthai_ros_msgs.msg._auto_focus_ctrl.AutoFocusCtrl", full_classname_dest, 51) == 0);
  }
  depthai_ros_msgs__msg__AutoFocusCtrl * ros_message = _ros_message;
  {  // auto_focus_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_focus_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_focus_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trigger_auto_focus
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger_auto_focus");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trigger_auto_focus = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * depthai_ros_msgs__msg__auto_focus_ctrl__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutoFocusCtrl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("depthai_ros_msgs.msg._auto_focus_ctrl");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutoFocusCtrl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  depthai_ros_msgs__msg__AutoFocusCtrl * ros_message = (depthai_ros_msgs__msg__AutoFocusCtrl *)raw_ros_message;
  {  // auto_focus_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->auto_focus_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_focus_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger_auto_focus
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trigger_auto_focus ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger_auto_focus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
