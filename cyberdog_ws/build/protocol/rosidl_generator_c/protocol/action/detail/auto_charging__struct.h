// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:action/AutoCharging.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__STRUCT_H_
#define PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AUTOCHARGING_GOAL_TYPE_STOP'.
enum
{
  protocol__action__AutoCharging_Goal__AUTOCHARGING_GOAL_TYPE_STOP = 0
};

/// Constant 'AUTOCHARGING_GOAL_TYPE_START'.
enum
{
  protocol__action__AutoCharging_Goal__AUTOCHARGING_GOAL_TYPE_START = 1
};

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in action/AutoCharging in the package protocol.
typedef struct protocol__action__AutoCharging_Goal
{
  geometry_msgs__msg__PoseStamped pose;
  uint8_t start;
} protocol__action__AutoCharging_Goal;

// Struct for a sequence of protocol__action__AutoCharging_Goal.
typedef struct protocol__action__AutoCharging_Goal__Sequence
{
  protocol__action__AutoCharging_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__AutoCharging_Goal__Sequence;


// Constants defined in the message

/// Constant 'AUTOCHARGING_RESULT_TYPE_SUCCESS'.
enum
{
  protocol__action__AutoCharging_Result__AUTOCHARGING_RESULT_TYPE_SUCCESS = 0
};

/// Constant 'AUTOCHARGING_RESULT_TYPE_ACCEPT'.
enum
{
  protocol__action__AutoCharging_Result__AUTOCHARGING_RESULT_TYPE_ACCEPT = 1
};

/// Constant 'AUTOCHARGING_RESULT_TYPE_UNAVALIBLE'.
enum
{
  protocol__action__AutoCharging_Result__AUTOCHARGING_RESULT_TYPE_UNAVALIBLE = 2
};

/// Constant 'AUTOCHARGING_RESULT_TYPE_FAILED'.
enum
{
  protocol__action__AutoCharging_Result__AUTOCHARGING_RESULT_TYPE_FAILED = 3
};

/// Constant 'AUTOCHARGING_RESULT_TYPE_REJECT'.
enum
{
  protocol__action__AutoCharging_Result__AUTOCHARGING_RESULT_TYPE_REJECT = 4
};

/// Constant 'AUTOCHARGING_RESULT_TYPE_CANCEL'.
enum
{
  protocol__action__AutoCharging_Result__AUTOCHARGING_RESULT_TYPE_CANCEL = 5
};

// Struct defined in action/AutoCharging in the package protocol.
typedef struct protocol__action__AutoCharging_Result
{
  uint8_t result;
} protocol__action__AutoCharging_Result;

// Struct for a sequence of protocol__action__AutoCharging_Result.
typedef struct protocol__action__AutoCharging_Result__Sequence
{
  protocol__action__AutoCharging_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__AutoCharging_Result__Sequence;


// Constants defined in the message

// Struct defined in action/AutoCharging in the package protocol.
typedef struct protocol__action__AutoCharging_Feedback
{
  uint8_t charging_stage;
} protocol__action__AutoCharging_Feedback;

// Struct for a sequence of protocol__action__AutoCharging_Feedback.
typedef struct protocol__action__AutoCharging_Feedback__Sequence
{
  protocol__action__AutoCharging_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__AutoCharging_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "protocol/action/detail/auto_charging__struct.h"

// Struct defined in action/AutoCharging in the package protocol.
typedef struct protocol__action__AutoCharging_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  protocol__action__AutoCharging_Goal goal;
} protocol__action__AutoCharging_SendGoal_Request;

// Struct for a sequence of protocol__action__AutoCharging_SendGoal_Request.
typedef struct protocol__action__AutoCharging_SendGoal_Request__Sequence
{
  protocol__action__AutoCharging_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__AutoCharging_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/AutoCharging in the package protocol.
typedef struct protocol__action__AutoCharging_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} protocol__action__AutoCharging_SendGoal_Response;

// Struct for a sequence of protocol__action__AutoCharging_SendGoal_Response.
typedef struct protocol__action__AutoCharging_SendGoal_Response__Sequence
{
  protocol__action__AutoCharging_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__AutoCharging_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/AutoCharging in the package protocol.
typedef struct protocol__action__AutoCharging_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} protocol__action__AutoCharging_GetResult_Request;

// Struct for a sequence of protocol__action__AutoCharging_GetResult_Request.
typedef struct protocol__action__AutoCharging_GetResult_Request__Sequence
{
  protocol__action__AutoCharging_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__AutoCharging_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"

// Struct defined in action/AutoCharging in the package protocol.
typedef struct protocol__action__AutoCharging_GetResult_Response
{
  int8_t status;
  protocol__action__AutoCharging_Result result;
} protocol__action__AutoCharging_GetResult_Response;

// Struct for a sequence of protocol__action__AutoCharging_GetResult_Response.
typedef struct protocol__action__AutoCharging_GetResult_Response__Sequence
{
  protocol__action__AutoCharging_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__AutoCharging_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "protocol/action/detail/auto_charging__struct.h"

// Struct defined in action/AutoCharging in the package protocol.
typedef struct protocol__action__AutoCharging_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  protocol__action__AutoCharging_Feedback feedback;
} protocol__action__AutoCharging_FeedbackMessage;

// Struct for a sequence of protocol__action__AutoCharging_FeedbackMessage.
typedef struct protocol__action__AutoCharging_FeedbackMessage__Sequence
{
  protocol__action__AutoCharging_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__AutoCharging_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__STRUCT_H_
