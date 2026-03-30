// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/AudioVolumeGet.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_GET__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_GET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AudioVolumeGet in the package protocol.
typedef struct protocol__srv__AudioVolumeGet_Request
{
  uint8_t structure_needs_at_least_one_member;
} protocol__srv__AudioVolumeGet_Request;

// Struct for a sequence of protocol__srv__AudioVolumeGet_Request.
typedef struct protocol__srv__AudioVolumeGet_Request__Sequence
{
  protocol__srv__AudioVolumeGet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioVolumeGet_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AudioVolumeGet in the package protocol.
typedef struct protocol__srv__AudioVolumeGet_Response
{
  uint8_t volume;
  int32_t code;
} protocol__srv__AudioVolumeGet_Response;

// Struct for a sequence of protocol__srv__AudioVolumeGet_Response.
typedef struct protocol__srv__AudioVolumeGet_Response__Sequence
{
  protocol__srv__AudioVolumeGet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__AudioVolumeGet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_GET__STRUCT_H_
