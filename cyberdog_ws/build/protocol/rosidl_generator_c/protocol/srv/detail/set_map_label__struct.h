// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/SetMapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SET_MAP_LABEL__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__SET_MAP_LABEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "protocol/msg/detail/map_label__struct.h"

// Struct defined in srv/SetMapLabel in the package protocol.
typedef struct protocol__srv__SetMapLabel_Request
{
  protocol__msg__MapLabel label;
  bool only_delete;
} protocol__srv__SetMapLabel_Request;

// Struct for a sequence of protocol__srv__SetMapLabel_Request.
typedef struct protocol__srv__SetMapLabel_Request__Sequence
{
  protocol__srv__SetMapLabel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SetMapLabel_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_FAILED'.
enum
{
  protocol__srv__SetMapLabel_Response__RESULT_FAILED = 1
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  protocol__srv__SetMapLabel_Response__RESULT_SUCCESS = 0
};

// Struct defined in srv/SetMapLabel in the package protocol.
typedef struct protocol__srv__SetMapLabel_Response
{
  uint8_t success;
  int32_t code;
} protocol__srv__SetMapLabel_Response;

// Struct for a sequence of protocol__srv__SetMapLabel_Response.
typedef struct protocol__srv__SetMapLabel_Response__Sequence
{
  protocol__srv__SetMapLabel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SetMapLabel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__SET_MAP_LABEL__STRUCT_H_
