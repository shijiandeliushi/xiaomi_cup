// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/TrainPlanAll.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TrainPlanAll in the package protocol.
typedef struct protocol__srv__TrainPlanAll_Request
{
  uint8_t structure_needs_at_least_one_member;
} protocol__srv__TrainPlanAll_Request;

// Struct for a sequence of protocol__srv__TrainPlanAll_Request.
typedef struct protocol__srv__TrainPlanAll_Request__Sequence
{
  protocol__srv__TrainPlanAll_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__TrainPlanAll_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'training_set'
#include "protocol/msg/detail/train_plan__struct.h"

// Struct defined in srv/TrainPlanAll in the package protocol.
typedef struct protocol__srv__TrainPlanAll_Response
{
  protocol__msg__TrainPlan__Sequence training_set;
  int32_t code;
} protocol__srv__TrainPlanAll_Response;

// Struct for a sequence of protocol__srv__TrainPlanAll_Response.
typedef struct protocol__srv__TrainPlanAll_Response__Sequence
{
  protocol__srv__TrainPlanAll_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__TrainPlanAll_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__TRAIN_PLAN_ALL__STRUCT_H_
