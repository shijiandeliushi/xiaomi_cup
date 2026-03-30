// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/SportManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SPORT_MANAGER__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__SPORT_MANAGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPORT_SQUAT'.
enum
{
  protocol__srv__SportManager_Request__SPORT_SQUAT = 1
};

/// Constant 'SPORT_HIGHKNEES'.
enum
{
  protocol__srv__SportManager_Request__SPORT_HIGHKNEES = 2
};

/// Constant 'SPORT_SITUP'.
enum
{
  protocol__srv__SportManager_Request__SPORT_SITUP = 3
};

/// Constant 'SPORT_PRESSUP'.
enum
{
  protocol__srv__SportManager_Request__SPORT_PRESSUP = 4
};

/// Constant 'SPORT_PLANK'.
enum
{
  protocol__srv__SportManager_Request__SPORT_PLANK = 5
};

/// Constant 'SPORT_JUMPJACK'.
enum
{
  protocol__srv__SportManager_Request__SPORT_JUMPJACK = 6
};

/// Constant 'DEFAULT_TIMEOUT'.
enum
{
  protocol__srv__SportManager_Request__DEFAULT_TIMEOUT = 100l
};

/// Constant 'MAX_TIMEOUT'.
enum
{
  protocol__srv__SportManager_Request__MAX_TIMEOUT = 300l
};

/// Constant 'MIN_TIMEOUT'.
enum
{
  protocol__srv__SportManager_Request__MIN_TIMEOUT = 5l
};

/// Constant 'ALGORITHM_LOAD_DURATION'.
enum
{
  protocol__srv__SportManager_Request__ALGORITHM_LOAD_DURATION = 100l
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SportManager in the package protocol.
typedef struct protocol__srv__SportManager_Request
{
  uint8_t sport_type;
  rosidl_runtime_c__String id;
  bool command;
  int32_t counts;
  int32_t timeout;
} protocol__srv__SportManager_Request;

// Struct for a sequence of protocol__srv__SportManager_Request.
typedef struct protocol__srv__SportManager_Request__Sequence
{
  protocol__srv__SportManager_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SportManager_Request__Sequence;


// Constants defined in the message

/// Constant 'ENABLE_SUCCESS'.
enum
{
  protocol__srv__SportManager_Response__ENABLE_SUCCESS = 0l
};

/// Constant 'ENABLE_FAIL'.
enum
{
  protocol__srv__SportManager_Response__ENABLE_FAIL = 7001l
};

// Struct defined in srv/SportManager in the package protocol.
typedef struct protocol__srv__SportManager_Response
{
  int32_t result;
  int32_t code;
} protocol__srv__SportManager_Response;

// Struct for a sequence of protocol__srv__SportManager_Response.
typedef struct protocol__srv__SportManager_Response__Sequence
{
  protocol__srv__SportManager_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SportManager_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__SPORT_MANAGER__STRUCT_H_
