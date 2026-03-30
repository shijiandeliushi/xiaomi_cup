// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/AudioPlay.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_PLAY__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_PLAY__BUILDER_HPP_

#include "protocol/msg/detail/audio_play__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_AudioPlay_play_id
{
public:
  explicit Init_AudioPlay_play_id(::protocol::msg::AudioPlay & msg)
  : msg_(msg)
  {}
  ::protocol::msg::AudioPlay play_id(::protocol::msg::AudioPlay::_play_id_type arg)
  {
    msg_.play_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::AudioPlay msg_;
};

class Init_AudioPlay_module_name
{
public:
  Init_AudioPlay_module_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioPlay_play_id module_name(::protocol::msg::AudioPlay::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return Init_AudioPlay_play_id(msg_);
  }

private:
  ::protocol::msg::AudioPlay msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::AudioPlay>()
{
  return protocol::msg::builder::Init_AudioPlay_module_name();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_PLAY__BUILDER_HPP_
