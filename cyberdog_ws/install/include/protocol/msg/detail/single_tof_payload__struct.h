// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/SingleTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LEFT_HEAD'.
enum
{
  protocol__msg__SingleTofPayload__LEFT_HEAD = 0
};

/// Constant 'RIGHT_HEAD'.
enum
{
  protocol__msg__SingleTofPayload__RIGHT_HEAD = 1
};

/// Constant 'LEFT_REAR'.
enum
{
  protocol__msg__SingleTofPayload__LEFT_REAR = 2
};

/// Constant 'RIGHT_REAR'.
enum
{
  protocol__msg__SingleTofPayload__RIGHT_REAR = 3
};

/// Constant 'HEAD'.
enum
{
  protocol__msg__SingleTofPayload__HEAD = 4
};

/// Constant 'REAR'.
enum
{
  protocol__msg__SingleTofPayload__REAR = 5
};

/// Constant 'TOF_DATA_NUM'.
enum
{
  protocol__msg__SingleTofPayload__TOF_DATA_NUM = 64l
};

/// Constant 'SCALE_FACTOR'.
static const float protocol__msg__SingleTofPayload__SCALE_FACTOR = 0.001f;

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
// Member 'intensity'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/SingleTofPayload in the package protocol.
typedef struct protocol__msg__SingleTofPayload
{
  std_msgs__msg__Header header;
  bool data_available;
  uint8_t tof_position;
  rosidl_runtime_c__float__Sequence data;
  rosidl_runtime_c__float__Sequence intensity;
} protocol__msg__SingleTofPayload;

// Struct for a sequence of protocol__msg__SingleTofPayload.
typedef struct protocol__msg__SingleTofPayload__Sequence
{
  protocol__msg__SingleTofPayload * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__SingleTofPayload__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__STRUCT_H_
