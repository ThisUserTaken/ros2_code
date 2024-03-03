// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from depthai_ros_msgs:msg/SpatialDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "depthai_ros_msgs/msg/detail/spatial_detection__rosidl_typesupport_introspection_c.h"
#include "depthai_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "depthai_ros_msgs/msg/detail/spatial_detection__functions.h"
#include "depthai_ros_msgs/msg/detail/spatial_detection__struct.h"


// Include directives for member types
// Member `results`
#include "vision_msgs/msg/object_hypothesis.h"
// Member `results`
#include "vision_msgs/msg/detail/object_hypothesis__rosidl_typesupport_introspection_c.h"
// Member `bbox`
#include "vision_msgs/msg/bounding_box2_d.h"
// Member `bbox`
#include "vision_msgs/msg/detail/bounding_box2_d__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `tracking_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  depthai_ros_msgs__msg__SpatialDetection__init(message_memory);
}

void depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_fini_function(void * message_memory)
{
  depthai_ros_msgs__msg__SpatialDetection__fini(message_memory);
}

size_t depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__size_function__SpatialDetection__results(
  const void * untyped_member)
{
  const vision_msgs__msg__ObjectHypothesis__Sequence * member =
    (const vision_msgs__msg__ObjectHypothesis__Sequence *)(untyped_member);
  return member->size;
}

const void * depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__get_const_function__SpatialDetection__results(
  const void * untyped_member, size_t index)
{
  const vision_msgs__msg__ObjectHypothesis__Sequence * member =
    (const vision_msgs__msg__ObjectHypothesis__Sequence *)(untyped_member);
  return &member->data[index];
}

void * depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__get_function__SpatialDetection__results(
  void * untyped_member, size_t index)
{
  vision_msgs__msg__ObjectHypothesis__Sequence * member =
    (vision_msgs__msg__ObjectHypothesis__Sequence *)(untyped_member);
  return &member->data[index];
}

void depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__fetch_function__SpatialDetection__results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vision_msgs__msg__ObjectHypothesis * item =
    ((const vision_msgs__msg__ObjectHypothesis *)
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__get_const_function__SpatialDetection__results(untyped_member, index));
  vision_msgs__msg__ObjectHypothesis * value =
    (vision_msgs__msg__ObjectHypothesis *)(untyped_value);
  *value = *item;
}

void depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__assign_function__SpatialDetection__results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vision_msgs__msg__ObjectHypothesis * item =
    ((vision_msgs__msg__ObjectHypothesis *)
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__get_function__SpatialDetection__results(untyped_member, index));
  const vision_msgs__msg__ObjectHypothesis * value =
    (const vision_msgs__msg__ObjectHypothesis *)(untyped_value);
  *item = *value;
}

bool depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__resize_function__SpatialDetection__results(
  void * untyped_member, size_t size)
{
  vision_msgs__msg__ObjectHypothesis__Sequence * member =
    (vision_msgs__msg__ObjectHypothesis__Sequence *)(untyped_member);
  vision_msgs__msg__ObjectHypothesis__Sequence__fini(member);
  return vision_msgs__msg__ObjectHypothesis__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_member_array[5] = {
  {
    "results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__SpatialDetection, results),  // bytes offset in struct
    NULL,  // default value
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__size_function__SpatialDetection__results,  // size() function pointer
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__get_const_function__SpatialDetection__results,  // get_const(index) function pointer
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__get_function__SpatialDetection__results,  // get(index) function pointer
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__fetch_function__SpatialDetection__results,  // fetch(index, &value) function pointer
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__assign_function__SpatialDetection__results,  // assign(index, value) function pointer
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__resize_function__SpatialDetection__results  // resize(index) function pointer
  },
  {
    "bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__SpatialDetection, bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__SpatialDetection, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_tracking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__SpatialDetection, is_tracking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__SpatialDetection, tracking_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_members = {
  "depthai_ros_msgs__msg",  // message namespace
  "SpatialDetection",  // message name
  5,  // number of fields
  sizeof(depthai_ros_msgs__msg__SpatialDetection),
  depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_member_array,  // message members
  depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_type_support_handle = {
  0,
  &depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, msg, SpatialDetection)() {
  depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, ObjectHypothesis)();
  depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, BoundingBox2D)();
  depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_type_support_handle.typesupport_identifier) {
    depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &depthai_ros_msgs__msg__SpatialDetection__rosidl_typesupport_introspection_c__SpatialDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
