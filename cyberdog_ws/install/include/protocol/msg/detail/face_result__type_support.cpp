// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/FaceResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/detail/face_result__struct.hpp"
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

void FaceResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::msg::FaceResult(_init);
}

void FaceResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::msg::FaceResult *>(message_memory);
  typed_message->~FaceResult();
}

size_t size_function__FaceResult__face_images(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<protocol::msg::CompressedImage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FaceResult__face_images(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<protocol::msg::CompressedImage> *>(untyped_member);
  return &member[index];
}

void * get_function__FaceResult__face_images(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<protocol::msg::CompressedImage> *>(untyped_member);
  return &member[index];
}

void resize_function__FaceResult__face_images(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<protocol::msg::CompressedImage> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FaceResult_message_member_array[3] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::FaceResult, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::FaceResult, msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "face_images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<protocol::msg::CompressedImage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::FaceResult, face_images),  // bytes offset in struct
    nullptr,  // default value
    size_function__FaceResult__face_images,  // size() function pointer
    get_const_function__FaceResult__face_images,  // get_const(index) function pointer
    get_function__FaceResult__face_images,  // get(index) function pointer
    resize_function__FaceResult__face_images  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FaceResult_message_members = {
  "protocol::msg",  // message namespace
  "FaceResult",  // message name
  3,  // number of fields
  sizeof(protocol::msg::FaceResult),
  FaceResult_message_member_array,  // message members
  FaceResult_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FaceResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FaceResult_message_members,
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
get_message_type_support_handle<protocol::msg::FaceResult>()
{
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::FaceResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, msg, FaceResult)() {
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::FaceResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
