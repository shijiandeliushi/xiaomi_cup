// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:action/Speech.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__SPEECH__STRUCT_H_
#define PROTOCOL__ACTION__DETAIL__SPEECH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'module_name'
// Member 'text'
#include "rosidl_runtime_c/string.h"
// Member 'speech'
#include "protocol/msg/detail/audio_play__struct.h"

// Struct defined in action/Speech in the package protocol.
typedef struct protocol__action__Speech_Goal
{
  rosidl_runtime_c__String module_name;
  bool is_online;
  protocol__msg__AudioPlay speech;
  rosidl_runtime_c__String text;
} protocol__action__Speech_Goal;

// Struct for a sequence of protocol__action__Speech_Goal.
typedef struct protocol__action__Speech_Goal__Sequence
{
  protocol__action__Speech_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Speech_Goal__Sequence;


// Constants defined in the message

/// Constant 'SPEECH_RESULT_SUCCESS'.
enum
{
  protocol__action__Speech_Result__SPEECH_RESULT_SUCCESS = 0
};

/// Constant 'SPEECH_RESULT_FAILED'.
enum
{
  protocol__action__Speech_Result__SPEECH_RESULT_FAILED = 1
};

// Struct defined in action/Speech in the package protocol.
typedef struct protocol__action__Speech_Result
{
  uint8_t status;
} protocol__action__Speech_Result;

// Struct for a sequence of protocol__action__Speech_Result.
typedef struct protocol__action__Speech_Result__Sequence
{
  protocol__action__Speech_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Speech_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Speech in the package protocol.
typedef struct protocol__action__Speech_Feedback
{
  bool talking;
} protocol__action__Speech_Feedback;

// Struct for a sequence of protocol__action__Speech_Feedback.
typedef struct protocol__action__Speech_Feedback__Sequence
{
  protocol__action__Speech_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Speech_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "protocol/action/detail/speech__struct.h"

// Struct defined in action/Speech in the package protocol.
typedef struct protocol__action__Speech_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  protocol__action__Speech_Goal goal;
} protocol__action__Speech_SendGoal_Request;

// Struct for a sequence of protocol__action__Speech_SendGoal_Request.
typedef struct protocol__action__Speech_SendGoal_Request__Sequence
{
  protocol__action__Speech_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Speech_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Speech in the package protocol.
typedef struct protocol__action__Speech_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} protocol__action__Speech_SendGoal_Response;

// Struct for a sequence of protocol__action__Speech_SendGoal_Response.
typedef struct protocol__action__Speech_SendGoal_Response__Sequence
{
  protocol__action__Speech_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Speech_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Speech in the package protocol.
typedef struct protocol__action__Speech_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} protocol__action__Speech_GetResult_Request;

// Struct for a sequence of protocol__action__Speech_GetResult_Request.
typedef struct protocol__action__Speech_GetResult_Request__Sequence
{
  protocol__action__Speech_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Speech_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/speech__struct.h"

// Struct defined in action/Speech in the package protocol.
typedef struct protocol__action__Speech_GetResult_Response
{
  int8_t status;
  protocol__action__Speech_Result result;
} protocol__action__Speech_GetResult_Response;

// Struct for a sequence of protocol__action__Speech_GetResult_Response.
typedef struct protocol__action__Speech_GetResult_Response__Sequence
{
  protocol__action__Speech_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Speech_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "protocol/action/detail/speech__struct.h"

// Struct defined in action/Speech in the package protocol.
typedef struct protocol__action__Speech_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  protocol__action__Speech_Feedback feedback;
} protocol__action__Speech_FeedbackMessage;

// Struct for a sequence of protocol__action__Speech_FeedbackMessage.
typedef struct protocol__action__Speech_FeedbackMessage__Sequence
{
  protocol__action__Speech_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__action__Speech_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__ACTION__DETAIL__SPEECH__STRUCT_H_
