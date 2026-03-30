// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/UwbArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/uwb_array__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/uwb_array__functions.h"
#include "protocol/msg/detail/uwb_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "protocol/msg/uwb_raw.h"
// Member `data`
#include "protocol/msg/detail/uwb_raw__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UwbArray__rosidl_typesupport_introspection_c__UwbArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__UwbArray__init(message_memory);
}

void UwbArray__rosidl_typesupport_introspection_c__UwbArray_fini_function(void * message_memory)
{
  protocol__msg__UwbArray__fini(message_memory);
}

size_t UwbArray__rosidl_typesupport_introspection_c__size_function__UwbRaw__data(
  const void * untyped_member)
{
  const protocol__msg__UwbRaw__Sequence * member =
    (const protocol__msg__UwbRaw__Sequence *)(untyped_member);
  return member->size;
}

const void * UwbArray__rosidl_typesupport_introspection_c__get_const_function__UwbRaw__data(
  const void * untyped_member, size_t index)
{
  const protocol__msg__UwbRaw__Sequence * member =
    (const protocol__msg__UwbRaw__Sequence *)(untyped_member);
  return &member->data[index];
}

void * UwbArray__rosidl_typesupport_introspection_c__get_function__UwbRaw__data(
  void * untyped_member, size_t index)
{
  protocol__msg__UwbRaw__Sequence * member =
    (protocol__msg__UwbRaw__Sequence *)(untyped_member);
  return &member->data[index];
}

bool UwbArray__rosidl_typesupport_introspection_c__resize_function__UwbRaw__data(
  void * untyped_member, size_t size)
{
  protocol__msg__UwbRaw__Sequence * member =
    (protocol__msg__UwbRaw__Sequence *)(untyped_member);
  protocol__msg__UwbRaw__Sequence__fini(member);
  return protocol__msg__UwbRaw__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__UwbArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__UwbArray, data),  // bytes offset in struct
    NULL,  // default value
    UwbArray__rosidl_typesupport_introspection_c__size_function__UwbRaw__data,  // size() function pointer
    UwbArray__rosidl_typesupport_introspection_c__get_const_function__UwbRaw__data,  // get_const(index) function pointer
    UwbArray__rosidl_typesupport_introspection_c__get_function__UwbRaw__data,  // get(index) function pointer
    UwbArray__rosidl_typesupport_introspection_c__resize_function__UwbRaw__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_members = {
  "protocol__msg",  // message namespace
  "UwbArray",  // message name
  2,  // number of fields
  sizeof(protocol__msg__UwbArray),
  UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_member_array,  // message members
  UwbArray__rosidl_typesupport_introspection_c__UwbArray_init_function,  // function to initialize message memory (memory has to be allocated)
  UwbArray__rosidl_typesupport_introspection_c__UwbArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_type_support_handle = {
  0,
  &UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, UwbArray)() {
  UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, UwbRaw)();
  if (!UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_type_support_handle.typesupport_identifier) {
    UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UwbArray__rosidl_typesupport_introspection_c__UwbArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
