// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__PERSON__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__PERSON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'face_info'
#include "protocol/msg/detail/face_info__struct.h"
// Member 'body_info'
#include "protocol/msg/detail/body_info__struct.h"
// Member 'track_res'
#include "protocol/msg/detail/track_result__struct.h"

// Struct defined in msg/Person in the package protocol.
typedef struct protocol__msg__Person
{
  std_msgs__msg__Header header;
  protocol__msg__FaceInfo face_info;
  protocol__msg__BodyInfo body_info;
  protocol__msg__TrackResult track_res;
} protocol__msg__Person;

// Struct for a sequence of protocol__msg__Person.
typedef struct protocol__msg__Person__Sequence
{
  protocol__msg__Person * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__Person__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__PERSON__STRUCT_H_
