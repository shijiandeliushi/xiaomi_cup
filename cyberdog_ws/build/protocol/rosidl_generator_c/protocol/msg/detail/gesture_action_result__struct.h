// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/GestureActionResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_GESTURE'.
enum
{
  protocol__msg__GestureActionResult__NO_GESTURE = 0l
};

/// Constant 'PULLING_HAND_OR_TWO_FINGERS_IN'.
enum
{
  protocol__msg__GestureActionResult__PULLING_HAND_OR_TWO_FINGERS_IN = 1l
};

/// Constant 'PUSHING_HAND_OR_TWO_FINGERS_AWAY'.
enum
{
  protocol__msg__GestureActionResult__PUSHING_HAND_OR_TWO_FINGERS_AWAY = 2l
};

/// Constant 'SLIDING_HAND_OR_TWO_FINGERS_UP'.
enum
{
  protocol__msg__GestureActionResult__SLIDING_HAND_OR_TWO_FINGERS_UP = 3l
};

/// Constant 'SLIDING_HAND_OR_TWO_FINGERS_DOWN'.
enum
{
  protocol__msg__GestureActionResult__SLIDING_HAND_OR_TWO_FINGERS_DOWN = 4l
};

/// Constant 'SLIDING_HAND_OR_TWO_FINGERS_LEFT'.
enum
{
  protocol__msg__GestureActionResult__SLIDING_HAND_OR_TWO_FINGERS_LEFT = 5l
};

/// Constant 'SLIDING_HAND_OR_TWO_FINGERS_RIGHT'.
enum
{
  protocol__msg__GestureActionResult__SLIDING_HAND_OR_TWO_FINGERS_RIGHT = 6l
};

/// Constant 'STOP_SIGN'.
enum
{
  protocol__msg__GestureActionResult__STOP_SIGN = 7l
};

/// Constant 'THUMB_UP'.
enum
{
  protocol__msg__GestureActionResult__THUMB_UP = 8l
};

/// Constant 'ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS'.
enum
{
  protocol__msg__GestureActionResult__ZOOMING_IN_WITH_HAND_OR_TWO_FINGERS = 9l
};

/// Constant 'ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS'.
enum
{
  protocol__msg__GestureActionResult__ZOOMING_OUT_WITH_HAND_OR_TWO_FINGERS = 10l
};

/// Constant 'THUMB_DOWN'.
enum
{
  protocol__msg__GestureActionResult__THUMB_DOWN = 11l
};

// Struct defined in msg/GestureActionResult in the package protocol.
typedef struct protocol__msg__GestureActionResult
{
  int32_t id;
} protocol__msg__GestureActionResult;

// Struct for a sequence of protocol__msg__GestureActionResult.
typedef struct protocol__msg__GestureActionResult__Sequence
{
  protocol__msg__GestureActionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__GestureActionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__STRUCT_H_
