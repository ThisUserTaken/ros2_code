// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "depthai_ros_msgs/msg/detail/hand_landmark__rosidl_typesupport_introspection_c.h"
#include "depthai_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "depthai_ros_msgs/msg/detail/hand_landmark__functions.h"
#include "depthai_ros_msgs/msg/detail/hand_landmark__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `landmark`
#include "geometry_msgs/msg/pose2_d.h"
// Member `landmark`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  depthai_ros_msgs__msg__HandLandmark__init(message_memory);
}

void depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_fini_function(void * message_memory)
{
  depthai_ros_msgs__msg__HandLandmark__fini(message_memory);
}

size_t depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__size_function__HandLandmark__landmark(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return member->size;
}

const void * depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__get_const_function__HandLandmark__landmark(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__get_function__HandLandmark__landmark(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__fetch_function__HandLandmark__landmark(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose2D * item =
    ((const geometry_msgs__msg__Pose2D *)
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__get_const_function__HandLandmark__landmark(untyped_member, index));
  geometry_msgs__msg__Pose2D * value =
    (geometry_msgs__msg__Pose2D *)(untyped_value);
  *value = *item;
}

void depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__assign_function__HandLandmark__landmark(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose2D * item =
    ((geometry_msgs__msg__Pose2D *)
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__get_function__HandLandmark__landmark(untyped_member, index));
  const geometry_msgs__msg__Pose2D * value =
    (const geometry_msgs__msg__Pose2D *)(untyped_value);
  *item = *value;
}

bool depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__resize_function__HandLandmark__landmark(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose2D__Sequence__fini(member);
  return geometry_msgs__msg__Pose2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_member_array[5] = {
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__HandLandmark, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lm_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__HandLandmark, lm_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "landmark",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__HandLandmark, landmark),  // bytes offset in struct
    NULL,  // default value
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__size_function__HandLandmark__landmark,  // size() function pointer
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__get_const_function__HandLandmark__landmark,  // get_const(index) function pointer
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__get_function__HandLandmark__landmark,  // get(index) function pointer
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__fetch_function__HandLandmark__landmark,  // fetch(index, &value) function pointer
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__assign_function__HandLandmark__landmark,  // assign(index, value) function pointer
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__resize_function__HandLandmark__landmark  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__HandLandmark, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_spatial",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__HandLandmark, is_spatial),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_members = {
  "depthai_ros_msgs__msg",  // message namespace
  "HandLandmark",  // message name
  5,  // number of fields
  sizeof(depthai_ros_msgs__msg__HandLandmark),
  depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_member_array,  // message members
  depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_init_function,  // function to initialize message memory (memory has to be allocated)
  depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_type_support_handle = {
  0,
  &depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, msg, HandLandmark)() {
  depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_type_support_handle.typesupport_identifier) {
    depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &depthai_ros_msgs__msg__HandLandmark__rosidl_typesupport_introspection_c__HandLandmark_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
