// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/MapLabel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/detail/map_label__struct.hpp"
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

void MapLabel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::msg::MapLabel(_init);
}

void MapLabel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::msg::MapLabel *>(message_memory);
  typed_message->~MapLabel();
}

size_t size_function__MapLabel__labels(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<protocol::msg::Label> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapLabel__labels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<protocol::msg::Label> *>(untyped_member);
  return &member[index];
}

void * get_function__MapLabel__labels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<protocol::msg::Label> *>(untyped_member);
  return &member[index];
}

void resize_function__MapLabel__labels(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<protocol::msg::Label> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MapLabel_message_member_array[5] = {
  {
    "map_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MapLabel, map_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MapLabel, map_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_outdoor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MapLabel, is_outdoor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<protocol::msg::OccupancyGrid>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MapLabel, map),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "labels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<protocol::msg::Label>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MapLabel, labels),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapLabel__labels,  // size() function pointer
    get_const_function__MapLabel__labels,  // get_const(index) function pointer
    get_function__MapLabel__labels,  // get(index) function pointer
    resize_function__MapLabel__labels  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MapLabel_message_members = {
  "protocol::msg",  // message namespace
  "MapLabel",  // message name
  5,  // number of fields
  sizeof(protocol::msg::MapLabel),
  MapLabel_message_member_array,  // message members
  MapLabel_init_function,  // function to initialize message memory (memory has to be allocated)
  MapLabel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MapLabel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MapLabel_message_members,
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
get_message_type_support_handle<protocol::msg::MapLabel>()
{
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::MapLabel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, msg, MapLabel)() {
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::MapLabel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
