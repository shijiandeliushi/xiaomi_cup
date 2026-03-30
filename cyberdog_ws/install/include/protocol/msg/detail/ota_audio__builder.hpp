// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/OtaAudio.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_AUDIO__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_AUDIO__BUILDER_HPP_

#include "protocol/msg/detail/ota_audio__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_OtaAudio_version
{
public:
  explicit Init_OtaAudio_version(::protocol::msg::OtaAudio & msg)
  : msg_(msg)
  {}
  ::protocol::msg::OtaAudio version(::protocol::msg::OtaAudio::_version_type arg)
  {
    msg_.version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::OtaAudio msg_;
};

class Init_OtaAudio_command
{
public:
  Init_OtaAudio_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OtaAudio_version command(::protocol::msg::OtaAudio::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_OtaAudio_version(msg_);
  }

private:
  ::protocol::msg::OtaAudio msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::OtaAudio>()
{
  return protocol::msg::builder::Init_OtaAudio_command();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_AUDIO__BUILDER_HPP_
