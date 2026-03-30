// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/NavMode.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__NAV_MODE__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__NAV_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NULL_SUBMODE'.
enum
{
  protocol__srv__NavMode_Request__NULL_SUBMODE = 0
};

/// Constant 'EXPLR_MAP_UPDATE'.
enum
{
  protocol__srv__NavMode_Request__EXPLR_MAP_UPDATE = 1
};

/// Constant 'EXPLR_MAP_NEW'.
enum
{
  protocol__srv__NavMode_Request__EXPLR_MAP_NEW = 2
};

/// Constant 'EXPLR_NAV_AB'.
enum
{
  protocol__srv__NavMode_Request__EXPLR_NAV_AB = 3
};

/// Constant 'TRACK_F'.
enum
{
  protocol__srv__NavMode_Request__TRACK_F = 4
};

/// Constant 'TRACK_S'.
enum
{
  protocol__srv__NavMode_Request__TRACK_S = 5
};

/// Constant 'MODE_STOP'.
enum
{
  protocol__srv__NavMode_Request__MODE_STOP = 6
};

// Struct defined in srv/NavMode in the package protocol.
typedef struct protocol__srv__NavMode_Request
{
  uint8_t sub_mode;
} protocol__srv__NavMode_Request;

// Struct for a sequence of protocol__srv__NavMode_Request.
typedef struct protocol__srv__NavMode_Request__Sequence
{
  protocol__srv__NavMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__NavMode_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/NavMode in the package protocol.
typedef struct protocol__srv__NavMode_Response
{
  bool success;
  int32_t code;
} protocol__srv__NavMode_Response;

// Struct for a sequence of protocol__srv__NavMode_Response.
typedef struct protocol__srv__NavMode_Response__Sequence
{
  protocol__srv__NavMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__NavMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__NAV_MODE__STRUCT_H_
