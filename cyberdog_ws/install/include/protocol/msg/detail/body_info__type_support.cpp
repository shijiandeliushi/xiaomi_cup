// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/BodyInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/detail/body_info__struct.hpp"
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

void BodyInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::msg::BodyInfo(_init);
}

void BodyInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::msg::BodyInfo *>(message_memory);
  typed_message->~BodyInfo();
}

size_t size_function__BodyInfo__infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<protocol::msg::Body> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BodyInfo__infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<protocol::msg::Body> *>(untyped_member);
  return &member[index];
}

void * get_function__BodyInfo__infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<protocol::msg::Body> *>(untyped_member);
  return &member[index];
}

void resize_function__BodyInfo__infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<protocol::msg::Body> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BodyInfo_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::BodyInfo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::BodyInfo, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<protocol::msg::Body>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::BodyInfo, infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__BodyInfo__infos,  // size() function pointer
    get_const_function__BodyInfo__infos,  // get_const(index) function pointer
    get_function__BodyInfo__infos,  // get(index) function pointer
    resize_function__BodyInfo__infos  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BodyInfo_message_members = {
  "protocol::msg",  // message namespace
  "BodyInfo",  // message name
  3,  // number of fields
  sizeof(protocol::msg::BodyInfo),
  BodyInfo_message_member_array,  // message members
  BodyInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  BodyInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BodyInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BodyInfo_message_members,
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
get_message_type_support_handle<protocol::msg::BodyInfo>()
{
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::BodyInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, msg, BodyInfo)() {
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::BodyInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
