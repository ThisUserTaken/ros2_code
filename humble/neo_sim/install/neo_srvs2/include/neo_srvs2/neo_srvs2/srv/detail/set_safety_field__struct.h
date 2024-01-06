// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_srvs2:srv/SetSafetyField.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__STRUCT_H_
#define NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetSafetyField in the package neo_srvs2.
typedef struct neo_srvs2__srv__SetSafetyField_Request
{
  uint32_t field_id;
} neo_srvs2__srv__SetSafetyField_Request;

// Struct for a sequence of neo_srvs2__srv__SetSafetyField_Request.
typedef struct neo_srvs2__srv__SetSafetyField_Request__Sequence
{
  neo_srvs2__srv__SetSafetyField_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__SetSafetyField_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetSafetyField in the package neo_srvs2.
typedef struct neo_srvs2__srv__SetSafetyField_Response
{
  bool success;
} neo_srvs2__srv__SetSafetyField_Response;

// Struct for a sequence of neo_srvs2__srv__SetSafetyField_Response.
typedef struct neo_srvs2__srv__SetSafetyField_Response__Sequence
{
  neo_srvs2__srv__SetSafetyField_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__SetSafetyField_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__STRUCT_H_
