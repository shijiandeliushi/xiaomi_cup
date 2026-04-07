// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cyberdog_msg/msg/detail/apply_force__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cyberdog_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ApplyForce_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cyberdog_msg::msg::ApplyForce(_init);
}

void ApplyForce_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cyberdog_msg::msg::ApplyForce *>(message_memory);
  typed_message->~ApplyForce();
}

size_t size_function__ApplyForce__force(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ApplyForce__force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ApplyForce__force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ApplyForce__rel_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ApplyForce__rel_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ApplyForce__rel_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ApplyForce_message_member_array[4] = {
  {
    "link_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::ApplyForce, link_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::ApplyForce, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::ApplyForce, force),  // bytes offset in struct
    nullptr,  // default value
    size_function__ApplyForce__force,  // size() function pointer
    get_const_function__ApplyForce__force,  // get_const(index) function pointer
    get_function__ApplyForce__force,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rel_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::ApplyForce, rel_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__ApplyForce__rel_pos,  // size() function pointer
    get_const_function__ApplyForce__rel_pos,  // get_const(index) function pointer
    get_function__ApplyForce__rel_pos,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ApplyForce_message_members = {
  "cyberdog_msg::msg",  // message namespace
  "ApplyForce",  // message name
  4,  // number of fields
  sizeof(cyberdog_msg::msg::ApplyForce),
  ApplyForce_message_member_array,  // message members
  ApplyForce_init_function,  // function to initialize message memory (memory has to be allocated)
  ApplyForce_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ApplyForce_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ApplyForce_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cyberdog_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cyberdog_msg::msg::ApplyForce>()
{
  return &::cyberdog_msg::msg::rosidl_typesupport_introspection_cpp::ApplyForce_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cyberdog_msg, msg, ApplyForce)() {
  return &::cyberdog_msg::msg::rosidl_typesupport_introspection_cpp::ApplyForce_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
