// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AlgoTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AlgoTaskStatus in the package protocol.
typedef struct protocol__srv__AlgoTaskStatus_Request
{
  uint8_t structure_needs_at_least_one_member;
} protocol__srv__AlgoTaskStatus_Request;

// Struct for a sequence of protocol__srv__AlgoTaskStatus_Request.
typedef struct protocol__srv__AlgoTaskStatus_Request__Sequence
{
  protocol__srv__AlgoTaskStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AlgoTaskStatus_Request__Sequence;


// Constants defined in the message

/// Constant 'ALGO_TASK_AB'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__ALGO_TASK_AB = 1
};

/// Constant 'ALGO_TASK_MAPPING'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__ALGO_TASK_MAPPING = 5
};

/// Constant 'ALGO_TASK_LOCALIZATION'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__ALGO_TASK_LOCALIZATION = 7
};

/// Constant 'ALGO_TASK_AUTO_DOCKING'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__ALGO_TASK_AUTO_DOCKING = 9
};

/// Constant 'ALGO_TASK_UWB_TRACKING'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__ALGO_TASK_UWB_TRACKING = 11
};

/// Constant 'ALGO_TASK_VISION_TRACKING'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__ALGO_TASK_VISION_TRACKING = 13
};

/// Constant 'UNINITIALIZED'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__UNINITIALIZED = 100
};

/// Constant 'IDLE'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__IDLE = 101
};

/// Constant 'STOPPINGTASK'.
enum
{
  protocol__srv__AlgoTaskStatus_Response__STOPPINGTASK = 103
};

// Struct defined in srv/AlgoTaskStatus in the package protocol.
typedef struct protocol__srv__AlgoTaskStatus_Response
{
  uint8_t status;
  int32_t code;
} protocol__srv__AlgoTaskStatus_Response;

// Struct for a sequence of protocol__srv__AlgoTaskStatus_Response.
typedef struct protocol__srv__AlgoTaskStatus_Response__Sequence
{
  protocol__srv__AlgoTaskStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AlgoTaskStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__ALGO_TASK_STATUS__STRUCT_H_
