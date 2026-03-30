// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/TrackingStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRACKING_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__TRACKING_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OBJECT_FAR'.
enum
{
  protocol__msg__TrackingStatus__OBJECT_FAR = 0
};

/// Constant 'OBJECT_NEAR'.
enum
{
  protocol__msg__TrackingStatus__OBJECT_NEAR = 1
};

/// Constant 'OBJECT_LOST'.
enum
{
  protocol__msg__TrackingStatus__OBJECT_LOST = 2
};

/// Constant 'OBJECT_EDGE'.
enum
{
  protocol__msg__TrackingStatus__OBJECT_EDGE = 3
};

/// Constant 'START_SUCCESS'.
enum
{
  protocol__msg__TrackingStatus__START_SUCCESS = 4
};

/// Constant 'START_FAIL'.
enum
{
  protocol__msg__TrackingStatus__START_FAIL = 5
};

/// Constant 'OBJECT_INVISIBLE'.
enum
{
  protocol__msg__TrackingStatus__OBJECT_INVISIBLE = 6
};

/// Constant 'STATUS_SELECTING'.
enum
{
  protocol__msg__TrackingStatus__STATUS_SELECTING = 7
};

/// Constant 'STATUS_RECOGNIZING'.
enum
{
  protocol__msg__TrackingStatus__STATUS_RECOGNIZING = 8
};

/// Constant 'STATUS_TRACKING'.
enum
{
  protocol__msg__TrackingStatus__STATUS_TRACKING = 9
};

// Struct defined in msg/TrackingStatus in the package protocol.
typedef struct protocol__msg__TrackingStatus
{
  uint8_t status;
} protocol__msg__TrackingStatus;

// Struct for a sequence of protocol__msg__TrackingStatus.
typedef struct protocol__msg__TrackingStatus__Sequence
{
  protocol__msg__TrackingStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__TrackingStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__TRACKING_STATUS__STRUCT_H_
