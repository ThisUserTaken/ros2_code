// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_srvs2:srv/ResetOmniWheels.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RESET_OMNI_WHEELS__STRUCT_H_
#define NEO_SRVS2__SRV__DETAIL__RESET_OMNI_WHEELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'steer_angles_rad'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ResetOmniWheels in the package neo_srvs2.
typedef struct neo_srvs2__srv__ResetOmniWheels_Request
{
  rosidl_runtime_c__float__Sequence steer_angles_rad;
} neo_srvs2__srv__ResetOmniWheels_Request;

// Struct for a sequence of neo_srvs2__srv__ResetOmniWheels_Request.
typedef struct neo_srvs2__srv__ResetOmniWheels_Request__Sequence
{
  neo_srvs2__srv__ResetOmniWheels_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__ResetOmniWheels_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetOmniWheels in the package neo_srvs2.
typedef struct neo_srvs2__srv__ResetOmniWheels_Response
{
  bool success;
} neo_srvs2__srv__ResetOmniWheels_Response;

// Struct for a sequence of neo_srvs2__srv__ResetOmniWheels_Response.
typedef struct neo_srvs2__srv__ResetOmniWheels_Response__Sequence
{
  neo_srvs2__srv__ResetOmniWheels_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__ResetOmniWheels_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_SRVS2__SRV__DETAIL__RESET_OMNI_WHEELS__STRUCT_H_
