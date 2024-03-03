// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from depthai_ros_msgs:srv/TriggerNamed.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__STRUCT_H_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TriggerNamed in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__srv__TriggerNamed_Request
{
  rosidl_runtime_c__String name;
} depthai_ros_msgs__srv__TriggerNamed_Request;

// Struct for a sequence of depthai_ros_msgs__srv__TriggerNamed_Request.
typedef struct depthai_ros_msgs__srv__TriggerNamed_Request__Sequence
{
  depthai_ros_msgs__srv__TriggerNamed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__srv__TriggerNamed_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TriggerNamed in the package depthai_ros_msgs.
typedef struct depthai_ros_msgs__srv__TriggerNamed_Response
{
  bool success;
  rosidl_runtime_c__String message;
} depthai_ros_msgs__srv__TriggerNamed_Response;

// Struct for a sequence of depthai_ros_msgs__srv__TriggerNamed_Response.
typedef struct depthai_ros_msgs__srv__TriggerNamed_Response__Sequence
{
  depthai_ros_msgs__srv__TriggerNamed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} depthai_ros_msgs__srv__TriggerNamed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__STRUCT_H_
