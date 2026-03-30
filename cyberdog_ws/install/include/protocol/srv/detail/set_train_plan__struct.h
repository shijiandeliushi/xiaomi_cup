// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/SetTrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trigger'
// Member 'type'
// Member 'value'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetTrainPlan in the package protocol.
typedef struct protocol__srv__SetTrainPlan_Request
{
  rosidl_runtime_c__String trigger;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String value;
} protocol__srv__SetTrainPlan_Request;

// Struct for a sequence of protocol__srv__SetTrainPlan_Request.
typedef struct protocol__srv__SetTrainPlan_Request__Sequence
{
  protocol__srv__SetTrainPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SetTrainPlan_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetTrainPlan in the package protocol.
typedef struct protocol__srv__SetTrainPlan_Response
{
  int32_t skill_id;
  int32_t code;
} protocol__srv__SetTrainPlan_Response;

// Struct for a sequence of protocol__srv__SetTrainPlan_Response.
typedef struct protocol__srv__SetTrainPlan_Response__Sequence
{
  protocol__srv__SetTrainPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SetTrainPlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__STRUCT_H_
