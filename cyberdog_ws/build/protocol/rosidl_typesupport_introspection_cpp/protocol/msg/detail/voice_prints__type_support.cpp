// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/VoicePrints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/detail/voice_prints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace protocol
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VoicePrints_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::msg::VoicePrints(_init);
}

void VoicePrints_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::msg::VoicePrints *>(message_memory);
  typed_message->~VoicePrints();
}

size_t size_function__VoicePrints__prints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<protocol::msg::VoicePrint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VoicePrints__prints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<protocol::msg::VoicePrint> *>(untyped_member);
  return &member[index];
}

void * get_function__VoicePrints__prints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<protocol::msg::VoicePrint> *>(untyped_member);
  return &member[index];
}

void resize_function__VoicePrints__prints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<protocol::msg::VoicePrint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VoicePrints_message_member_array[1] = {
  {
    "prints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<protocol::msg::VoicePrint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::VoicePrints, prints),  // bytes offset in struct
    nullptr,  // default value
    size_function__VoicePrints__prints,  // size() function pointer
    get_const_function__VoicePrints__prints,  // get_const(index) function pointer
    get_function__VoicePrints__prints,  // get(index) function pointer
    resize_function__VoicePrints__prints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VoicePrints_message_members = {
  "protocol::msg",  // message namespace
  "VoicePrints",  // message name
  1,  // number of fields
  sizeof(protocol::msg::VoicePrints),
  VoicePrints_message_member_array,  // message members
  VoicePrints_init_function,  // function to initialize message memory (memory has to be allocated)
  VoicePrints_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VoicePrints_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VoicePrints_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::msg::VoicePrints>()
{
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::VoicePrints_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, msg, VoicePrints)() {
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::VoicePrints_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
