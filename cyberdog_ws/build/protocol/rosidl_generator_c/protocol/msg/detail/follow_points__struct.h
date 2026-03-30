// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/FollowPoints.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__STRUCT_H_

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
// Member 'token'
#include "rosidl_runtime_c/string.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in msg/FollowPoints in the package protocol.
typedef struct protocol__msg__FollowPoints
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String token;
  geometry_msgs__msg__PoseStamped__Sequence poses;
} protocol__msg__FollowPoints;

// Struct for a sequence of protocol__msg__FollowPoints.
typedef struct protocol__msg__FollowPoints__Sequence
{
  protocol__msg__FollowPoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__FollowPoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__STRUCT_H_
