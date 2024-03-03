// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from depthai_ros_msgs:msg/ImuWithMagneticField.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "depthai_ros_msgs/msg/detail/imu_with_magnetic_field__rosidl_typesupport_introspection_c.h"
#include "depthai_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "depthai_ros_msgs/msg/detail/imu_with_magnetic_field__functions.h"
#include "depthai_ros_msgs/msg/detail/imu_with_magnetic_field__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `imu`
#include "sensor_msgs/msg/imu.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"
// Member `field`
#include "sensor_msgs/msg/magnetic_field.h"
// Member `field`
#include "sensor_msgs/msg/detail/magnetic_field__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  depthai_ros_msgs__msg__ImuWithMagneticField__init(message_memory);
}

void depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_fini_function(void * message_memory)
{
  depthai_ros_msgs__msg__ImuWithMagneticField__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__ImuWithMagneticField, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__ImuWithMagneticField, imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs__msg__ImuWithMagneticField, field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_members = {
  "depthai_ros_msgs__msg",  // message namespace
  "ImuWithMagneticField",  // message name
  3,  // number of fields
  sizeof(depthai_ros_msgs__msg__ImuWithMagneticField),
  depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_member_array,  // message members
  depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_init_function,  // function to initialize message memory (memory has to be allocated)
  depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_type_support_handle = {
  0,
  &depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_depthai_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, depthai_ros_msgs, msg, ImuWithMagneticField)() {
  depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Imu)();
  depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, MagneticField)();
  if (!depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_type_support_handle.typesupport_identifier) {
    depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &depthai_ros_msgs__msg__ImuWithMagneticField__rosidl_typesupport_introspection_c__ImuWithMagneticField_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
