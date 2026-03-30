// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/StopAlgoTask.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALGO_TASK_ALL'.
enum
{
  protocol__srv__StopAlgoTask_Request__ALGO_TASK_ALL = 0
};

/// Constant 'ALGO_TASK_AB'.
enum
{
  protocol__srv__StopAlgoTask_Request__ALGO_TASK_AB = 1
};

/// Constant 'ALGO_TASK_FOLLOW'.
enum
{
  protocol__srv__StopAlgoTask_Request__ALGO_TASK_FOLLOW = 3
};

/// Constant 'ALGO_TASK_MAPPING'.
enum
{
  protocol__srv__StopAlgoTask_Request__ALGO_TASK_MAPPING = 5
};

/// Constant 'ALGO_TASK_LOCALIZATION'.
enum
{
  protocol__srv__StopAlgoTask_Request__ALGO_TASK_LOCALIZATION = 7
};

/// Constant 'ALGO_TASK_AUTO_DOCKING'.
enum
{
  protocol__srv__StopAlgoTask_Request__ALGO_TASK_AUTO_DOCKING = 9
};

/// Constant 'ALGO_TASK_UWB_TRACKING'.
enum
{
  protocol__srv__StopAlgoTask_Request__ALGO_TASK_UWB_TRACKING = 11
};

/// Constant 'ALGO_TASK_HUMAN_TRACKING'.
enum
{
  protocol__srv__StopAlgoTask_Request__ALGO_TASK_HUMAN_TRACKING = 13
};

// Include directives for member types
// Member 'map_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/StopAlgoTask in the package protocol.
typedef struct protocol__srv__StopAlgoTask_Request
{
  uint8_t task_id;
  rosidl_runtime_c__String map_name;
} protocol__srv__StopAlgoTask_Request;

// Struct for a sequence of protocol__srv__StopAlgoTask_Request.
typedef struct protocol__srv__StopAlgoTask_Request__Sequence
{
  protocol__srv__StopAlgoTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__StopAlgoTask_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  protocol__srv__StopAlgoTask_Response__SUCCESS = 0
};

/// Constant 'FAILED'.
enum
{
  protocol__srv__StopAlgoTask_Response__FAILED = 1
};

// Struct defined in srv/StopAlgoTask in the package protocol.
typedef struct protocol__srv__StopAlgoTask_Response
{
  int8_t result;
  int32_t code;
} protocol__srv__StopAlgoTask_Response;

// Struct for a sequence of protocol__srv__StopAlgoTask_Response.
typedef struct protocol__srv__StopAlgoTask_Response__Sequence
{
  protocol__srv__StopAlgoTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__StopAlgoTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__STOP_ALGO_TASK__STRUCT_H_
