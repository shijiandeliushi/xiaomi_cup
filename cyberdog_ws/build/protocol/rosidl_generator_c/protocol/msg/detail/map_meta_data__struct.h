// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MAP_META_DATA__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MAP_META_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_load_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/MapMetaData in the package protocol.
typedef struct protocol__msg__MapMetaData
{
  builtin_interfaces__msg__Time map_load_time;
  float resolution;
  uint32_t width;
  uint32_t height;
  geometry_msgs__msg__Pose origin;
} protocol__msg__MapMetaData;

// Struct for a sequence of protocol__msg__MapMetaData.
typedef struct protocol__msg__MapMetaData__Sequence
{
  protocol__msg__MapMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MapMetaData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MAP_META_DATA__STRUCT_H_
