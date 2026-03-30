// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/AudioVoiceprintResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__BUILDER_HPP_

#include "protocol/msg/detail/audio_voiceprint_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_AudioVoiceprintResult_voice_print
{
public:
  explicit Init_AudioVoiceprintResult_voice_print(::protocol::msg::AudioVoiceprintResult & msg)
  : msg_(msg)
  {}
  ::protocol::msg::AudioVoiceprintResult voice_print(::protocol::msg::AudioVoiceprintResult::_voice_print_type arg)
  {
    msg_.voice_print = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::AudioVoiceprintResult msg_;
};

class Init_AudioVoiceprintResult_code
{
public:
  Init_AudioVoiceprintResult_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioVoiceprintResult_voice_print code(::protocol::msg::AudioVoiceprintResult::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_AudioVoiceprintResult_voice_print(msg_);
  }

private:
  ::protocol::msg::AudioVoiceprintResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::AudioVoiceprintResult>()
{
  return protocol::msg::builder::Init_AudioVoiceprintResult_code();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__BUILDER_HPP_
