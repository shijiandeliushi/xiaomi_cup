// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/AudioPlayExtend.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__BUILDER_HPP_

#include "protocol/msg/detail/audio_play_extend__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_AudioPlayExtend_text
{
public:
  explicit Init_AudioPlayExtend_text(::protocol::msg::AudioPlayExtend & msg)
  : msg_(msg)
  {}
  ::protocol::msg::AudioPlayExtend text(::protocol::msg::AudioPlayExtend::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::AudioPlayExtend msg_;
};

class Init_AudioPlayExtend_speech
{
public:
  explicit Init_AudioPlayExtend_speech(::protocol::msg::AudioPlayExtend & msg)
  : msg_(msg)
  {}
  Init_AudioPlayExtend_text speech(::protocol::msg::AudioPlayExtend::_speech_type arg)
  {
    msg_.speech = std::move(arg);
    return Init_AudioPlayExtend_text(msg_);
  }

private:
  ::protocol::msg::AudioPlayExtend msg_;
};

class Init_AudioPlayExtend_is_online
{
public:
  explicit Init_AudioPlayExtend_is_online(::protocol::msg::AudioPlayExtend & msg)
  : msg_(msg)
  {}
  Init_AudioPlayExtend_speech is_online(::protocol::msg::AudioPlayExtend::_is_online_type arg)
  {
    msg_.is_online = std::move(arg);
    return Init_AudioPlayExtend_speech(msg_);
  }

private:
  ::protocol::msg::AudioPlayExtend msg_;
};

class Init_AudioPlayExtend_module_name
{
public:
  Init_AudioPlayExtend_module_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioPlayExtend_is_online module_name(::protocol::msg::AudioPlayExtend::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return Init_AudioPlayExtend_is_online(msg_);
  }

private:
  ::protocol::msg::AudioPlayExtend msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::AudioPlayExtend>()
{
  return protocol::msg::builder::Init_AudioPlayExtend_module_name();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__BUILDER_HPP_
