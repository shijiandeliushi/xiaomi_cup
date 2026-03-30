// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AlgoManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALGO_MANAGER__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__ALGO_MANAGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'algo_enable'
// Member 'algo_disable'
#include "protocol/msg/detail/algo_list__struct.h"

// Struct defined in srv/AlgoManager in the package protocol.
typedef struct protocol__srv__AlgoManager_Request
{
  protocol__msg__AlgoList__Sequence algo_enable;
  protocol__msg__AlgoList__Sequence algo_disable;
  bool open_age;
  bool open_emotion;
} protocol__srv__AlgoManager_Request;

// Struct for a sequence of protocol__srv__AlgoManager_Request.
typedef struct protocol__srv__AlgoManager_Request__Sequence
{
  protocol__srv__AlgoManager_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AlgoManager_Request__Sequence;


// Constants defined in the message

/// Constant 'ENABLE_SUCCESS'.
enum
{
  protocol__srv__AlgoManager_Response__ENABLE_SUCCESS = 0
};

/// Constant 'ENABLE_FAIL'.
enum
{
  protocol__srv__AlgoManager_Response__ENABLE_FAIL = 1
};

/// Constant 'DISABLE_SUCCESS'.
enum
{
  protocol__srv__AlgoManager_Response__DISABLE_SUCCESS = 0
};

/// Constant 'DISABLE_FAIL'.
enum
{
  protocol__srv__AlgoManager_Response__DISABLE_FAIL = 1
};

// Struct defined in srv/AlgoManager in the package protocol.
typedef struct protocol__srv__AlgoManager_Response
{
  uint8_t result_enable;
  uint8_t result_disable;
  int32_t code;
} protocol__srv__AlgoManager_Response;

// Struct for a sequence of protocol__srv__AlgoManager_Response.
typedef struct protocol__srv__AlgoManager_Response__Sequence
{
  protocol__srv__AlgoManager_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AlgoManager_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__ALGO_MANAGER__STRUCT_H_
