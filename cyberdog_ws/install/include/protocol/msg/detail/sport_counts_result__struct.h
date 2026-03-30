// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/SportCountsResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALGO_OPEN'.
enum
{
  protocol__msg__SportCountsResult__ALGO_OPEN = 0
};

/// Constant 'COUNT_COMPLETE_CLOSE'.
enum
{
  protocol__msg__SportCountsResult__COUNT_COMPLETE_CLOSE = 1
};

/// Constant 'TIMEOUT_CLOSE'.
enum
{
  protocol__msg__SportCountsResult__TIMEOUT_CLOSE = 2
};

/// Constant 'REQUEST_CLOSE'.
enum
{
  protocol__msg__SportCountsResult__REQUEST_CLOSE = 3
};

/// Constant 'SPORT_SQUAT'.
enum
{
  protocol__msg__SportCountsResult__SPORT_SQUAT = 1l
};

/// Constant 'SPORT_HIGHKNEES'.
enum
{
  protocol__msg__SportCountsResult__SPORT_HIGHKNEES = 2l
};

/// Constant 'SPORT_SITUP'.
enum
{
  protocol__msg__SportCountsResult__SPORT_SITUP = 3l
};

/// Constant 'SPORT_PRESSUP'.
enum
{
  protocol__msg__SportCountsResult__SPORT_PRESSUP = 4l
};

/// Constant 'SPORT_PLANK'.
enum
{
  protocol__msg__SportCountsResult__SPORT_PLANK = 5l
};

/// Constant 'SPORT_JUMPJACK'.
enum
{
  protocol__msg__SportCountsResult__SPORT_JUMPJACK = 6l
};

// Struct defined in msg/SportCountsResult in the package protocol.
typedef struct protocol__msg__SportCountsResult
{
  uint8_t algo_switch;
  int32_t sport_type;
  int32_t counts;
  int32_t duration;
} protocol__msg__SportCountsResult;

// Struct for a sequence of protocol__msg__SportCountsResult.
typedef struct protocol__msg__SportCountsResult__Sequence
{
  protocol__msg__SportCountsResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__SportCountsResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__STRUCT_H_
