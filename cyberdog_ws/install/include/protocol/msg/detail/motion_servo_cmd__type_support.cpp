// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/MotionServoCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/detail/motion_servo_cmd__struct.hpp"
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

void MotionServoCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::msg::MotionServoCmd(_init);
}

void MotionServoCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::msg::MotionServoCmd *>(message_memory);
  typed_message->~MotionServoCmd();
}

size_t size_function__MotionServoCmd__vel_des(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionServoCmd__vel_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServoCmd__vel_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionServoCmd__vel_des(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionServoCmd__rpy_des(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionServoCmd__rpy_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServoCmd__rpy_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionServoCmd__rpy_des(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionServoCmd__pos_des(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionServoCmd__pos_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServoCmd__pos_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionServoCmd__pos_des(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionServoCmd__acc_des(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionServoCmd__acc_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServoCmd__acc_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionServoCmd__acc_des(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionServoCmd__ctrl_point(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionServoCmd__ctrl_point(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServoCmd__ctrl_point(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionServoCmd__ctrl_point(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionServoCmd__foot_pose(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionServoCmd__foot_pose(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServoCmd__foot_pose(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionServoCmd__foot_pose(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionServoCmd__step_height(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionServoCmd__step_height(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServoCmd__step_height(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__MotionServoCmd__step_height(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionServoCmd_message_member_array[11] = {
  {
    "motion_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, motion_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cmd_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, cmd_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cmd_source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, cmd_source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, vel_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServoCmd__vel_des,  // size() function pointer
    get_const_function__MotionServoCmd__vel_des,  // get_const(index) function pointer
    get_function__MotionServoCmd__vel_des,  // get(index) function pointer
    resize_function__MotionServoCmd__vel_des  // resize(index) function pointer
  },
  {
    "rpy_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, rpy_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServoCmd__rpy_des,  // size() function pointer
    get_const_function__MotionServoCmd__rpy_des,  // get_const(index) function pointer
    get_function__MotionServoCmd__rpy_des,  // get(index) function pointer
    resize_function__MotionServoCmd__rpy_des  // resize(index) function pointer
  },
  {
    "pos_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, pos_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServoCmd__pos_des,  // size() function pointer
    get_const_function__MotionServoCmd__pos_des,  // get_const(index) function pointer
    get_function__MotionServoCmd__pos_des,  // get(index) function pointer
    resize_function__MotionServoCmd__pos_des  // resize(index) function pointer
  },
  {
    "acc_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, acc_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServoCmd__acc_des,  // size() function pointer
    get_const_function__MotionServoCmd__acc_des,  // get_const(index) function pointer
    get_function__MotionServoCmd__acc_des,  // get(index) function pointer
    resize_function__MotionServoCmd__acc_des  // resize(index) function pointer
  },
  {
    "ctrl_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, ctrl_point),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServoCmd__ctrl_point,  // size() function pointer
    get_const_function__MotionServoCmd__ctrl_point,  // get_const(index) function pointer
    get_function__MotionServoCmd__ctrl_point,  // get(index) function pointer
    resize_function__MotionServoCmd__ctrl_point  // resize(index) function pointer
  },
  {
    "foot_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, foot_pose),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServoCmd__foot_pose,  // size() function pointer
    get_const_function__MotionServoCmd__foot_pose,  // get_const(index) function pointer
    get_function__MotionServoCmd__foot_pose,  // get(index) function pointer
    resize_function__MotionServoCmd__foot_pose  // resize(index) function pointer
  },
  {
    "step_height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::MotionServoCmd, step_height),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServoCmd__step_height,  // size() function pointer
    get_const_function__MotionServoCmd__step_height,  // get_const(index) function pointer
    get_function__MotionServoCmd__step_height,  // get(index) function pointer
    resize_function__MotionServoCmd__step_height  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionServoCmd_message_members = {
  "protocol::msg",  // message namespace
  "MotionServoCmd",  // message name
  11,  // number of fields
  sizeof(protocol::msg::MotionServoCmd),
  MotionServoCmd_message_member_array,  // message members
  MotionServoCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionServoCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionServoCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionServoCmd_message_members,
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
get_message_type_support_handle<protocol::msg::MotionServoCmd>()
{
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::MotionServoCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, msg, MotionServoCmd)() {
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::MotionServoCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
