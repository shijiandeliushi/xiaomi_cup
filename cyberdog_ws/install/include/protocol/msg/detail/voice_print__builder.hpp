// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/VoicePrint.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VOICE_PRINT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__VOICE_PRINT__BUILDER_HPP_

#include "protocol/msg/detail/voice_print__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_VoicePrint_id
{
public:
  explicit Init_VoicePrint_id(::protocol::msg::VoicePrint & msg)
  : msg_(msg)
  {}
  ::protocol::msg::VoicePrint id(::protocol::msg::VoicePrint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::VoicePrint msg_;
};

class Init_VoicePrint_name
{
public:
  Init_VoicePrint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VoicePrint_id name(::protocol::msg::VoicePrint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_VoicePrint_id(msg_);
  }

private:
  ::protocol::msg::VoicePrint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::VoicePrint>()
{
  return protocol::msg::builder::Init_VoicePrint_name();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__VOICE_PRINT__BUILDER_HPP_
