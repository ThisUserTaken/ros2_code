// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from neo_srvs2:srv/Optimizer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "neo_srvs2/srv/detail/optimizer__rosidl_typesupport_introspection_c.h"
#include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "neo_srvs2/srv/detail/optimizer__functions.h"
#include "neo_srvs2/srv/detail/optimizer__struct.h"


// Include directives for member types
// Member `current_pose`
// Member `carrot_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `current_pose`
// Member `carrot_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `current_vel`
#include "geometry_msgs/msg/twist.h"
// Member `current_vel`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `goal_pose`
#include "geometry_msgs/msg/pose.h"
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_srvs2__srv__Optimizer_Request__init(message_memory);
}

void neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_fini_function(void * message_memory)
{
  neo_srvs2__srv__Optimizer_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_member_array[6] = {
  {
    "current_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__Optimizer_Request, current_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__Optimizer_Request, current_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "carrot_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__Optimizer_Request, carrot_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__Optimizer_Request, goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "switch_opt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__Optimizer_Request, switch_opt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_interval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__Optimizer_Request, control_interval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_members = {
  "neo_srvs2__srv",  // message namespace
  "Optimizer_Request",  // message name
  6,  // number of fields
  sizeof(neo_srvs2__srv__Optimizer_Request),
  neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_member_array,  // message members
  neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_type_support_handle = {
  0,
  &neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, Optimizer_Request)() {
  neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_srvs2__srv__Optimizer_Request__rosidl_typesupport_introspection_c__Optimizer_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "neo_srvs2/srv/detail/optimizer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "neo_srvs2/srv/detail/optimizer__functions.h"
// already included above
// #include "neo_srvs2/srv/detail/optimizer__struct.h"


// Include directives for member types
// Member `output_vel`
#include "geometry_msgs/msg/twist_stamped.h"
// Member `output_vel`
#include "geometry_msgs/msg/detail/twist_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_srvs2__srv__Optimizer_Response__init(message_memory);
}

void neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_fini_function(void * message_memory)
{
  neo_srvs2__srv__Optimizer_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_member_array[1] = {
  {
    "output_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__Optimizer_Response, output_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_members = {
  "neo_srvs2__srv",  // message namespace
  "Optimizer_Response",  // message name
  1,  // number of fields
  sizeof(neo_srvs2__srv__Optimizer_Response),
  neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_member_array,  // message members
  neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_type_support_handle = {
  0,
  &neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, Optimizer_Response)() {
  neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistStamped)();
  if (!neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_srvs2__srv__Optimizer_Response__rosidl_typesupport_introspection_c__Optimizer_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "neo_srvs2/srv/detail/optimizer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_service_members = {
  "neo_srvs2__srv",  // service namespace
  "Optimizer",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_Request_message_type_support_handle,
  NULL  // response message
  // neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_Response_message_type_support_handle
};

static rosidl_service_type_support_t neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_service_type_support_handle = {
  0,
  &neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, Optimizer_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, Optimizer_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, Optimizer)() {
  if (!neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_service_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, Optimizer_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, Optimizer_Response)()->data;
  }

  return &neo_srvs2__srv__detail__optimizer__rosidl_typesupport_introspection_c__Optimizer_service_type_support_handle;
}
