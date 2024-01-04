// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from neo_srvs2:srv/ResetOmniWheels.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "neo_srvs2/srv/detail/reset_omni_wheels__rosidl_typesupport_introspection_c.h"
#include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "neo_srvs2/srv/detail/reset_omni_wheels__functions.h"
#include "neo_srvs2/srv/detail/reset_omni_wheels__struct.h"


// Include directives for member types
// Member `steer_angles_rad`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_srvs2__srv__ResetOmniWheels_Request__init(message_memory);
}

void neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_fini_function(void * message_memory)
{
  neo_srvs2__srv__ResetOmniWheels_Request__fini(message_memory);
}

size_t neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__size_function__ResetOmniWheels_Request__steer_angles_rad(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__get_const_function__ResetOmniWheels_Request__steer_angles_rad(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__get_function__ResetOmniWheels_Request__steer_angles_rad(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__fetch_function__ResetOmniWheels_Request__steer_angles_rad(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__get_const_function__ResetOmniWheels_Request__steer_angles_rad(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__assign_function__ResetOmniWheels_Request__steer_angles_rad(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__get_function__ResetOmniWheels_Request__steer_angles_rad(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__resize_function__ResetOmniWheels_Request__steer_angles_rad(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_member_array[1] = {
  {
    "steer_angles_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__ResetOmniWheels_Request, steer_angles_rad),  // bytes offset in struct
    NULL,  // default value
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__size_function__ResetOmniWheels_Request__steer_angles_rad,  // size() function pointer
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__get_const_function__ResetOmniWheels_Request__steer_angles_rad,  // get_const(index) function pointer
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__get_function__ResetOmniWheels_Request__steer_angles_rad,  // get(index) function pointer
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__fetch_function__ResetOmniWheels_Request__steer_angles_rad,  // fetch(index, &value) function pointer
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__assign_function__ResetOmniWheels_Request__steer_angles_rad,  // assign(index, value) function pointer
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__resize_function__ResetOmniWheels_Request__steer_angles_rad  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_members = {
  "neo_srvs2__srv",  // message namespace
  "ResetOmniWheels_Request",  // message name
  1,  // number of fields
  sizeof(neo_srvs2__srv__ResetOmniWheels_Request),
  neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_member_array,  // message members
  neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_type_support_handle = {
  0,
  &neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, ResetOmniWheels_Request)() {
  if (!neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_srvs2__srv__ResetOmniWheels_Request__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "neo_srvs2/srv/detail/reset_omni_wheels__rosidl_typesupport_introspection_c.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "neo_srvs2/srv/detail/reset_omni_wheels__functions.h"
// already included above
// #include "neo_srvs2/srv/detail/reset_omni_wheels__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_srvs2__srv__ResetOmniWheels_Response__init(message_memory);
}

void neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_fini_function(void * message_memory)
{
  neo_srvs2__srv__ResetOmniWheels_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2__srv__ResetOmniWheels_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_members = {
  "neo_srvs2__srv",  // message namespace
  "ResetOmniWheels_Response",  // message name
  1,  // number of fields
  sizeof(neo_srvs2__srv__ResetOmniWheels_Response),
  neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_member_array,  // message members
  neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_type_support_handle = {
  0,
  &neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, ResetOmniWheels_Response)() {
  if (!neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_srvs2__srv__ResetOmniWheels_Response__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "neo_srvs2/srv/detail/reset_omni_wheels__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_service_members = {
  "neo_srvs2__srv",  // service namespace
  "ResetOmniWheels",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_Request_message_type_support_handle,
  NULL  // response message
  // neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_Response_message_type_support_handle
};

static rosidl_service_type_support_t neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_service_type_support_handle = {
  0,
  &neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, ResetOmniWheels_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, ResetOmniWheels_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_srvs2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, ResetOmniWheels)() {
  if (!neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_service_type_support_handle.typesupport_identifier) {
    neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, ResetOmniWheels_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_srvs2, srv, ResetOmniWheels_Response)()->data;
  }

  return &neo_srvs2__srv__detail__reset_omni_wheels__rosidl_typesupport_introspection_c__ResetOmniWheels_service_type_support_handle;
}
