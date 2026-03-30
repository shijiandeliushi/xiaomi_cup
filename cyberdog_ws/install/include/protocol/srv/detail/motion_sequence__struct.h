// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/MotionSequence.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'toml_data'
#include "rosidl_runtime_c/string.h"
// Member 'params'
#include "protocol/msg/detail/motion_sequence_param__struct.h"

// Struct defined in srv/MotionSequence in the package protocol.
typedef struct protocol__srv__MotionSequence_Request
{
  int32_t motion_id;
  int32_t duration;
  rosidl_runtime_c__String toml_data;
  protocol__msg__MotionSequenceParam__Sequence params;
} protocol__srv__MotionSequence_Request;

// Struct for a sequence of protocol__srv__MotionSequence_Request.
typedef struct protocol__srv__MotionSequence_Request__Sequence
{
  protocol__srv__MotionSequence_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionSequence_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'describe'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/MotionSequence in the package protocol.
typedef struct protocol__srv__MotionSequence_Response
{
  bool result;
  int32_t code;
  rosidl_runtime_c__String describe;
  int32_t motion_id;
} protocol__srv__MotionSequence_Response;

// Struct for a sequence of protocol__srv__MotionSequence_Response.
typedef struct protocol__srv__MotionSequence_Response__Sequence
{
  protocol__srv__MotionSequence_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__MotionSequence_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__STRUCT_H_
