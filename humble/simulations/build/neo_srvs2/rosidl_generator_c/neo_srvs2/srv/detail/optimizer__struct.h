// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_srvs2:srv/Optimizer.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__OPTIMIZER__STRUCT_H_
#define NEO_SRVS2__SRV__DETAIL__OPTIMIZER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_pose'
// Member 'carrot_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'current_vel'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/Optimizer in the package neo_srvs2.
typedef struct neo_srvs2__srv__Optimizer_Request
{
  geometry_msgs__msg__PoseStamped current_pose;
  geometry_msgs__msg__Twist current_vel;
  geometry_msgs__msg__PoseStamped carrot_pose;
  geometry_msgs__msg__Pose goal_pose;
  bool switch_opt;
  float control_interval;
} neo_srvs2__srv__Optimizer_Request;

// Struct for a sequence of neo_srvs2__srv__Optimizer_Request.
typedef struct neo_srvs2__srv__Optimizer_Request__Sequence
{
  neo_srvs2__srv__Optimizer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__Optimizer_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output_vel'
#include "geometry_msgs/msg/detail/twist_stamped__struct.h"

/// Struct defined in srv/Optimizer in the package neo_srvs2.
typedef struct neo_srvs2__srv__Optimizer_Response
{
  geometry_msgs__msg__TwistStamped output_vel;
} neo_srvs2__srv__Optimizer_Response;

// Struct for a sequence of neo_srvs2__srv__Optimizer_Response.
typedef struct neo_srvs2__srv__Optimizer_Response__Sequence
{
  neo_srvs2__srv__Optimizer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_srvs2__srv__Optimizer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_SRVS2__SRV__DETAIL__OPTIMIZER__STRUCT_H_
