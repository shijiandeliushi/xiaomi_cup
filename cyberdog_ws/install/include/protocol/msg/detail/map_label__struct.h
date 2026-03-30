// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MAP_LABEL__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MAP_LABEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_name'
#include "rosidl_runtime_c/string.h"
// Member 'map'
#include "protocol/msg/detail/occupancy_grid__struct.h"
// Member 'labels'
#include "protocol/msg/detail/label__struct.h"

// Struct defined in msg/MapLabel in the package protocol.
typedef struct protocol__msg__MapLabel
{
  rosidl_runtime_c__String map_name;
  uint64_t map_id;
  bool is_outdoor;
  protocol__msg__OccupancyGrid map;
  protocol__msg__Label__Sequence labels;
} protocol__msg__MapLabel;

// Struct for a sequence of protocol__msg__MapLabel.
typedef struct protocol__msg__MapLabel__Sequence
{
  protocol__msg__MapLabel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MapLabel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MAP_LABEL__STRUCT_H_
