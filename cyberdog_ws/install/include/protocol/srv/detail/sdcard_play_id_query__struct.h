// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/SdcardPlayIdQuery.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SdcardPlayIdQuery in the package protocol.
typedef struct protocol__srv__SdcardPlayIdQuery_Request
{
  uint16_t play_id;
} protocol__srv__SdcardPlayIdQuery_Request;

// Struct for a sequence of protocol__srv__SdcardPlayIdQuery_Request.
typedef struct protocol__srv__SdcardPlayIdQuery_Request__Sequence
{
  protocol__srv__SdcardPlayIdQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SdcardPlayIdQuery_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SdcardPlayIdQuery in the package protocol.
typedef struct protocol__srv__SdcardPlayIdQuery_Response
{
  bool exist;
  int32_t code;
} protocol__srv__SdcardPlayIdQuery_Response;

// Struct for a sequence of protocol__srv__SdcardPlayIdQuery_Response.
typedef struct protocol__srv__SdcardPlayIdQuery_Response__Sequence
{
  protocol__srv__SdcardPlayIdQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SdcardPlayIdQuery_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__STRUCT_H_
