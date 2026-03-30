// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/VoicePrints.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VOICE_PRINTS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__VOICE_PRINTS__BUILDER_HPP_

#include "protocol/msg/detail/voice_prints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_VoicePrints_prints
{
public:
  Init_VoicePrints_prints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::msg::VoicePrints prints(::protocol::msg::VoicePrints::_prints_type arg)
  {
    msg_.prints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::VoicePrints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::VoicePrints>()
{
  return protocol::msg::builder::Init_VoicePrints_prints();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__VOICE_PRINTS__BUILDER_HPP_
