// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from depthai_ros_msgs:msg/SpatialDetection.idl
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
#include "depthai_ros_msgs/msg/detail/spatial_detection__struct.h"
#include "depthai_ros_msgs/msg/detail/spatial_detection__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "vision_msgs/msg/detail/object_hypothesis__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool vision_msgs__msg__object_hypothesis__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * vision_msgs__msg__object_hypothesis__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool vision_msgs__msg__bounding_box2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * vision_msgs__msg__bounding_box2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool depthai_ros_msgs__msg__spatial_detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("depthai_ros_msgs.msg._spatial_detection.SpatialDetection", full_classname_dest, 56) == 0);
  }
  depthai_ros_msgs__msg__SpatialDetection * ros_message = _ros_message;
  {  // results
    PyObject * field = PyObject_GetAttrString(_pymsg, "results");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'results'");
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
    if (!vision_msgs__msg__ObjectHypothesis__Sequence__init(&(ros_message->results), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create vision_msgs__msg__ObjectHypothesis__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    vision_msgs__msg__ObjectHypothesis * dest = ros_message->results.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!vision_msgs__msg__object_hypothesis__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox");
    if (!field) {
      return false;
    }
    if (!vision_msgs__msg__bounding_box2_d__convert_from_py(field, &ros_message->bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_tracking
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_tracking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_tracking = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tracking_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->tracking_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * depthai_ros_msgs__msg__spatial_detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpatialDetection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("depthai_ros_msgs.msg._spatial_detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpatialDetection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  depthai_ros_msgs__msg__SpatialDetection * ros_message = (depthai_ros_msgs__msg__SpatialDetection *)raw_ros_message;
  {  // results
    PyObject * field = NULL;
    size_t size = ros_message->results.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    vision_msgs__msg__ObjectHypothesis * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->results.data[i]);
      PyObject * pyitem = vision_msgs__msg__object_hypothesis__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "results", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox
    PyObject * field = NULL;
    field = vision_msgs__msg__bounding_box2_d__convert_to_py(&ros_message->bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_tracking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_tracking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_tracking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->tracking_id.data,
      strlen(ros_message->tracking_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
