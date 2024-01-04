// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
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
#include "neo_msgs2/msg/detail/relay_board_v3__struct.h"
#include "neo_msgs2/msg/detail/relay_board_v3__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool neo_msgs2__msg__relay_board_v3__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("neo_msgs2.msg._relay_board_v3.RelayBoardV3", full_classname_dest, 42) == 0);
  }
  neo_msgs2__msg__RelayBoardV3 * ros_message = _ros_message;
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // firmware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "firmware_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->firmware_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // uptime
    PyObject * field = PyObject_GetAttrString(_pymsg, "uptime");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uptime = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ambient_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "ambient_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ambient_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // relay_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_states");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'relay_states'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->relay_states;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // digital_input_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "digital_input_states");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'digital_input_states'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->digital_input_states;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // keypad_button_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "keypad_button_states");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'keypad_button_states'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->keypad_button_states;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // key_switch_off_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_switch_off_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_switch_off_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // release_structure_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "release_structure_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->release_structure_state = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * neo_msgs2__msg__relay_board_v3__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RelayBoardV3 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("neo_msgs2.msg._relay_board_v3");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RelayBoardV3");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  neo_msgs2__msg__RelayBoardV3 * ros_message = (neo_msgs2__msg__RelayBoardV3 *)raw_ros_message;
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
  {  // firmware_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->firmware_version.data,
      strlen(ros_message->firmware_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "firmware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uptime
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uptime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uptime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ambient_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ambient_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ambient_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_states
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->relay_states;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // digital_input_states
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->digital_input_states;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "digital_input_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keypad_button_states
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->keypad_button_states;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "keypad_button_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_switch_off_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_switch_off_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_switch_off_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // release_structure_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->release_structure_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "release_structure_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
