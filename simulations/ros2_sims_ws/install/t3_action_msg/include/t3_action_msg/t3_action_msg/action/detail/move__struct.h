// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from t3_action_msg:action/Move.idl
// generated code does not contain a copyright notice

#ifndef T3_ACTION_MSG__ACTION__DETAIL__MOVE__STRUCT_H_
#define T3_ACTION_MSG__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Move in the package t3_action_msg.
typedef struct t3_action_msg__action__Move_Goal
{
  int32_t secs;
} t3_action_msg__action__Move_Goal;

// Struct for a sequence of t3_action_msg__action__Move_Goal.
typedef struct t3_action_msg__action__Move_Goal__Sequence
{
  t3_action_msg__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} t3_action_msg__action__Move_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Move in the package t3_action_msg.
typedef struct t3_action_msg__action__Move_Result
{
  rosidl_runtime_c__String status;
} t3_action_msg__action__Move_Result;

// Struct for a sequence of t3_action_msg__action__Move_Result.
typedef struct t3_action_msg__action__Move_Result__Sequence
{
  t3_action_msg__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} t3_action_msg__action__Move_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Move in the package t3_action_msg.
typedef struct t3_action_msg__action__Move_Feedback
{
  rosidl_runtime_c__String feedback;
} t3_action_msg__action__Move_Feedback;

// Struct for a sequence of t3_action_msg__action__Move_Feedback.
typedef struct t3_action_msg__action__Move_Feedback__Sequence
{
  t3_action_msg__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} t3_action_msg__action__Move_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "t3_action_msg/action/detail/move__struct.h"

/// Struct defined in action/Move in the package t3_action_msg.
typedef struct t3_action_msg__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  t3_action_msg__action__Move_Goal goal;
} t3_action_msg__action__Move_SendGoal_Request;

// Struct for a sequence of t3_action_msg__action__Move_SendGoal_Request.
typedef struct t3_action_msg__action__Move_SendGoal_Request__Sequence
{
  t3_action_msg__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} t3_action_msg__action__Move_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package t3_action_msg.
typedef struct t3_action_msg__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} t3_action_msg__action__Move_SendGoal_Response;

// Struct for a sequence of t3_action_msg__action__Move_SendGoal_Response.
typedef struct t3_action_msg__action__Move_SendGoal_Response__Sequence
{
  t3_action_msg__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} t3_action_msg__action__Move_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package t3_action_msg.
typedef struct t3_action_msg__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} t3_action_msg__action__Move_GetResult_Request;

// Struct for a sequence of t3_action_msg__action__Move_GetResult_Request.
typedef struct t3_action_msg__action__Move_GetResult_Request__Sequence
{
  t3_action_msg__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} t3_action_msg__action__Move_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"

/// Struct defined in action/Move in the package t3_action_msg.
typedef struct t3_action_msg__action__Move_GetResult_Response
{
  int8_t status;
  t3_action_msg__action__Move_Result result;
} t3_action_msg__action__Move_GetResult_Response;

// Struct for a sequence of t3_action_msg__action__Move_GetResult_Response.
typedef struct t3_action_msg__action__Move_GetResult_Response__Sequence
{
  t3_action_msg__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} t3_action_msg__action__Move_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"

/// Struct defined in action/Move in the package t3_action_msg.
typedef struct t3_action_msg__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  t3_action_msg__action__Move_Feedback feedback;
} t3_action_msg__action__Move_FeedbackMessage;

// Struct for a sequence of t3_action_msg__action__Move_FeedbackMessage.
typedef struct t3_action_msg__action__Move_FeedbackMessage__Sequence
{
  t3_action_msg__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} t3_action_msg__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // T3_ACTION_MSG__ACTION__DETAIL__MOVE__STRUCT_H_
