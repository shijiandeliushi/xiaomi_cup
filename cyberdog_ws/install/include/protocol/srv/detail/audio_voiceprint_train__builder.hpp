// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioVoiceprintTrain.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__BUILDER_HPP_

#include "protocol/srv/detail/audio_voiceprint_train__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVoiceprintTrain_Request_voice_print
{
public:
  explicit Init_AudioVoiceprintTrain_Request_voice_print(::protocol::srv::AudioVoiceprintTrain_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioVoiceprintTrain_Request voice_print(::protocol::srv::AudioVoiceprintTrain_Request::_voice_print_type arg)
  {
    msg_.voice_print = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintTrain_Request msg_;
};

class Init_AudioVoiceprintTrain_Request_train_id
{
public:
  Init_AudioVoiceprintTrain_Request_train_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioVoiceprintTrain_Request_voice_print train_id(::protocol::srv::AudioVoiceprintTrain_Request::_train_id_type arg)
  {
    msg_.train_id = std::move(arg);
    return Init_AudioVoiceprintTrain_Request_voice_print(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintTrain_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVoiceprintTrain_Request>()
{
  return protocol::srv::builder::Init_AudioVoiceprintTrain_Request_train_id();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVoiceprintTrain_Response_code
{
public:
  Init_AudioVoiceprintTrain_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::AudioVoiceprintTrain_Response code(::protocol::srv::AudioVoiceprintTrain_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintTrain_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVoiceprintTrain_Response>()
{
  return protocol::srv::builder::Init_AudioVoiceprintTrain_Response_code();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__BUILDER_HPP_
