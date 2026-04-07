// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cyberdog_msg:msg/YamlParam.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cyberdog_msg/msg/detail/yaml_param__struct.hpp"
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

void YamlParam_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cyberdog_msg::msg::YamlParam(_init);
}

void YamlParam_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cyberdog_msg::msg::YamlParam *>(message_memory);
  typed_message->~YamlParam();
}

size_t size_function__YamlParam__vecxd_value(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__YamlParam__vecxd_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__YamlParam__vecxd_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 12> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember YamlParam_message_member_array[6] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::YamlParam, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kind",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::YamlParam, kind),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "s64_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::YamlParam, s64_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "double_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::YamlParam, double_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vecxd_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::YamlParam, vecxd_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__YamlParam__vecxd_value,  // size() function pointer
    get_const_function__YamlParam__vecxd_value,  // get_const(index) function pointer
    get_function__YamlParam__vecxd_value,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_user",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cyberdog_msg::msg::YamlParam, is_user),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers YamlParam_message_members = {
  "cyberdog_msg::msg",  // message namespace
  "YamlParam",  // message name
  6,  // number of fields
  sizeof(cyberdog_msg::msg::YamlParam),
  YamlParam_message_member_array,  // message members
  YamlParam_init_function,  // function to initialize message memory (memory has to be allocated)
  YamlParam_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t YamlParam_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &YamlParam_message_members,
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
get_message_type_support_handle<cyberdog_msg::msg::YamlParam>()
{
  return &::cyberdog_msg::msg::rosidl_typesupport_introspection_cpp::YamlParam_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cyberdog_msg, msg, YamlParam)() {
  return &::cyberdog_msg::msg::rosidl_typesupport_introspection_cpp::YamlParam_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
