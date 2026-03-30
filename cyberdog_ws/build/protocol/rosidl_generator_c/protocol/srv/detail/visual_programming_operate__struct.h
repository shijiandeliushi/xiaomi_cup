// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_JSON'.
enum
{
  protocol__srv__VisualProgrammingOperate_Request__TYPE_JSON = 0l
};

/// Constant 'TYPE_FROM'.
enum
{
  protocol__srv__VisualProgrammingOperate_Request__TYPE_FROM = 1l
};

// Include directives for member types
// Member 'json'
#include "rosidl_runtime_c/string.h"
// Member 'form'
#include "protocol/msg/detail/visual_programming_operate__struct.h"

// Struct defined in srv/VisualProgrammingOperate in the package protocol.
typedef struct protocol__srv__VisualProgrammingOperate_Request
{
  int32_t type;
  rosidl_runtime_c__String json;
  protocol__msg__VisualProgrammingOperate form;
} protocol__srv__VisualProgrammingOperate_Request;

// Struct for a sequence of protocol__srv__VisualProgrammingOperate_Request.
typedef struct protocol__srv__VisualProgrammingOperate_Request__Sequence
{
  protocol__srv__VisualProgrammingOperate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__VisualProgrammingOperate_Request__Sequence;


// Constants defined in the message

/// Constant 'CODE_SUCCESS'.
enum
{
  protocol__srv__VisualProgrammingOperate_Response__CODE_SUCCESS = 0l
};

/// Constant 'CODE_CATHC'.
enum
{
  protocol__srv__VisualProgrammingOperate_Response__CODE_CATHC = 1l
};

/// Constant 'CODE_FSM'.
enum
{
  protocol__srv__VisualProgrammingOperate_Response__CODE_FSM = 2l
};

/// Constant 'CODE_TASK'.
enum
{
  protocol__srv__VisualProgrammingOperate_Response__CODE_TASK = 3l
};

// Include directives for member types
// Member 'json'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/VisualProgrammingOperate in the package protocol.
typedef struct protocol__srv__VisualProgrammingOperate_Response
{
  int32_t code;
  rosidl_runtime_c__String json;
} protocol__srv__VisualProgrammingOperate_Response;

// Struct for a sequence of protocol__srv__VisualProgrammingOperate_Response.
typedef struct protocol__srv__VisualProgrammingOperate_Response__Sequence
{
  protocol__srv__VisualProgrammingOperate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__VisualProgrammingOperate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_H_
