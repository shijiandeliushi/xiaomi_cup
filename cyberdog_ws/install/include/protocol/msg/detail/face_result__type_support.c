// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/FaceResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/face_result__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/face_result__functions.h"
#include "protocol/msg/detail/face_result__struct.h"


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"
// Member `face_images`
#include "protocol/msg/compressed_image.h"
// Member `face_images`
#include "protocol/msg/detail/compressed_image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceResult__rosidl_typesupport_introspection_c__FaceResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__FaceResult__init(message_memory);
}

void FaceResult__rosidl_typesupport_introspection_c__FaceResult_fini_function(void * message_memory)
{
  protocol__msg__FaceResult__fini(message_memory);
}

size_t FaceResult__rosidl_typesupport_introspection_c__size_function__CompressedImage__face_images(
  const void * untyped_member)
{
  const protocol__msg__CompressedImage__Sequence * member =
    (const protocol__msg__CompressedImage__Sequence *)(untyped_member);
  return member->size;
}

const void * FaceResult__rosidl_typesupport_introspection_c__get_const_function__CompressedImage__face_images(
  const void * untyped_member, size_t index)
{
  const protocol__msg__CompressedImage__Sequence * member =
    (const protocol__msg__CompressedImage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FaceResult__rosidl_typesupport_introspection_c__get_function__CompressedImage__face_images(
  void * untyped_member, size_t index)
{
  protocol__msg__CompressedImage__Sequence * member =
    (protocol__msg__CompressedImage__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FaceResult__rosidl_typesupport_introspection_c__resize_function__CompressedImage__face_images(
  void * untyped_member, size_t size)
{
  protocol__msg__CompressedImage__Sequence * member =
    (protocol__msg__CompressedImage__Sequence *)(untyped_member);
  protocol__msg__CompressedImage__Sequence__fini(member);
  return protocol__msg__CompressedImage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_member_array[3] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__FaceResult, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__FaceResult, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "face_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__FaceResult, face_images),  // bytes offset in struct
    NULL,  // default value
    FaceResult__rosidl_typesupport_introspection_c__size_function__CompressedImage__face_images,  // size() function pointer
    FaceResult__rosidl_typesupport_introspection_c__get_const_function__CompressedImage__face_images,  // get_const(index) function pointer
    FaceResult__rosidl_typesupport_introspection_c__get_function__CompressedImage__face_images,  // get(index) function pointer
    FaceResult__rosidl_typesupport_introspection_c__resize_function__CompressedImage__face_images  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_members = {
  "protocol__msg",  // message namespace
  "FaceResult",  // message name
  3,  // number of fields
  sizeof(protocol__msg__FaceResult),
  FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_member_array,  // message members
  FaceResult__rosidl_typesupport_introspection_c__FaceResult_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceResult__rosidl_typesupport_introspection_c__FaceResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_type_support_handle = {
  0,
  &FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, FaceResult)() {
  FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, CompressedImage)();
  if (!FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_type_support_handle.typesupport_identifier) {
    FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceResult__rosidl_typesupport_introspection_c__FaceResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
