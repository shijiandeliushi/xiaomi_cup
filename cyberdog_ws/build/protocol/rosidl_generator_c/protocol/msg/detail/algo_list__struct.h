// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/AlgoList.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__ALGO_LIST__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__ALGO_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALGO_FACE'.
enum
{
  protocol__msg__AlgoList__ALGO_FACE = 0
};

/// Constant 'ALGO_BODY'.
enum
{
  protocol__msg__AlgoList__ALGO_BODY = 1
};

/// Constant 'ALGO_GESTURE'.
enum
{
  protocol__msg__AlgoList__ALGO_GESTURE = 2
};

/// Constant 'ALGO_KEYPOINTS'.
enum
{
  protocol__msg__AlgoList__ALGO_KEYPOINTS = 3
};

/// Constant 'ALGO_REID'.
enum
{
  protocol__msg__AlgoList__ALGO_REID = 4
};

/// Constant 'ALGO_FOCUS'.
enum
{
  protocol__msg__AlgoList__ALGO_FOCUS = 5
};

/// Constant 'FACE_MANAGER'.
enum
{
  protocol__msg__AlgoList__FACE_MANAGER = 6
};

// Struct defined in msg/AlgoList in the package protocol.
typedef struct protocol__msg__AlgoList
{
  uint8_t algo_module;
} protocol__msg__AlgoList;

// Struct for a sequence of protocol__msg__AlgoList.
typedef struct protocol__msg__AlgoList__Sequence
{
  protocol__msg__AlgoList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__AlgoList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__ALGO_LIST__STRUCT_H_
