// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/BodyRegion.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BODY_REGION__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__BODY_REGION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

// Struct defined in srv/BodyRegion in the package protocol.
typedef struct protocol__srv__BodyRegion_Request
{
  sensor_msgs__msg__RegionOfInterest roi;
} protocol__srv__BodyRegion_Request;

// Struct for a sequence of protocol__srv__BodyRegion_Request.
typedef struct protocol__srv__BodyRegion_Request__Sequence
{
  protocol__srv__BodyRegion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BodyRegion_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/BodyRegion in the package protocol.
typedef struct protocol__srv__BodyRegion_Response
{
  bool success;
  int32_t code;
} protocol__srv__BodyRegion_Response;

// Struct for a sequence of protocol__srv__BodyRegion_Response.
typedef struct protocol__srv__BodyRegion_Response__Sequence
{
  protocol__srv__BodyRegion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__BodyRegion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__BODY_REGION__STRUCT_H_
