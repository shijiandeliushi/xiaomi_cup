// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/MotionSequenceShow.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gait_list'
#include "protocol/msg/detail/motion_sequence_gait__struct.h"
// Member 'pace_list'
#include "protocol/msg/detail/motion_sequence_pace__struct.h"
// Member 'gait_toml_list'
// Member 'pace_toml_list'
// Member 'gait_toml'
// Member 'pace_toml'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/MotionSequenceShow in the package protocol.
typedef struct protocol__srv__MotionSequenceShow_Request
{
  int32_t motion_id;
  int32_t cmd_source;
  int64_t duration;
  protocol__msg__MotionSequenceGait__Sequence gait_list;
  protocol__msg__MotionSequencePace__Sequence pace_list;
  rosidl_runtime_c__String__Sequence gait_toml_list;
  rosidl_runtime_c__String__Sequence pace_toml_list;
  rosidl_runtime_c__String gait_toml;
  rosidl_runtime_c__String pace_toml;
} protocol__srv__MotionSequenceShow_Request;

// Struct for a sequence of protocol__srv__MotionSequenceShow_Request.
typedef struct protocol__srv__MotionSequenceShow_Request__Sequence
{
  protocol__srv__MotionSequenceShow_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionSequenceShow_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'describe'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/MotionSequenceShow in the package protocol.
typedef struct protocol__srv__MotionSequenceShow_Response
{
  bool result;
  int32_t code;
  rosidl_runtime_c__String describe;
  int32_t motion_id;
} protocol__srv__MotionSequenceShow_Response;

// Struct for a sequence of protocol__srv__MotionSequenceShow_Response.
typedef struct protocol__srv__MotionSequenceShow_Response__Sequence
{
  protocol__srv__MotionSequenceShow_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionSequenceShow_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__STRUCT_H_
