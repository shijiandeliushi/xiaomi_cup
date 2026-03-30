// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/OccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OCCUPANCY_GRID__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__OCCUPANCY_GRID__STRUCT_H_

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
// Member 'info'
#include "protocol/msg/detail/map_meta_data__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/OccupancyGrid in the package protocol.
typedef struct protocol__msg__OccupancyGrid
{
  std_msgs__msg__Header header;
  protocol__msg__MapMetaData info;
  rosidl_runtime_c__int8__Sequence data;
} protocol__msg__OccupancyGrid;

// Struct for a sequence of protocol__msg__OccupancyGrid.
typedef struct protocol__msg__OccupancyGrid__Sequence
{
  protocol__msg__OccupancyGrid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__OccupancyGrid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__OCCUPANCY_GRID__STRUCT_H_
