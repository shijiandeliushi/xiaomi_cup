// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/Gesture.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GESTURE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__GESTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GESTURE_OK'.
enum
{
  protocol__msg__Gesture__GESTURE_OK = 0l
};

/// Constant 'GESTURE_FAST_BACKWARD'.
enum
{
  protocol__msg__Gesture__GESTURE_FAST_BACKWARD = 1l
};

/// Constant 'GESTURE_FAST_FORWARD'.
enum
{
  protocol__msg__Gesture__GESTURE_FAST_FORWARD = 2l
};

/// Constant 'GESTURE_STOP_LEFT'.
enum
{
  protocol__msg__Gesture__GESTURE_STOP_LEFT = 3l
};

/// Constant 'GESTURE_STOP_RIGHT'.
enum
{
  protocol__msg__Gesture__GESTURE_STOP_RIGHT = 4l
};

/// Constant 'GESTURE_THUMBS_UP'.
enum
{
  protocol__msg__Gesture__GESTURE_THUMBS_UP = 5l
};

/// Constant 'GESTURE_SHHH'.
enum
{
  protocol__msg__Gesture__GESTURE_SHHH = 6l
};

/// Constant 'GESTURE_FIST'.
enum
{
  protocol__msg__Gesture__GESTURE_FIST = 7l
};

/// Constant 'GESTURE_PALM2FIST'.
enum
{
  protocol__msg__Gesture__GESTURE_PALM2FIST = 8l
};

/// Constant 'GESTURE_INVALID'.
enum
{
  protocol__msg__Gesture__GESTURE_INVALID = 9l
};

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

// Struct defined in msg/Gesture in the package protocol.
typedef struct protocol__msg__Gesture
{
  sensor_msgs__msg__RegionOfInterest roi;
  int32_t cls;
} protocol__msg__Gesture;

// Struct for a sequence of protocol__msg__Gesture.
typedef struct protocol__msg__Gesture__Sequence
{
  protocol__msg__Gesture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__Gesture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__GESTURE__STRUCT_H_
