// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioVoiceprintsSet.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__BUILDER_HPP_

#include "protocol/srv/detail/audio_voiceprints_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVoiceprintsSet_Request_voice_prints
{
public:
  Init_AudioVoiceprintsSet_Request_voice_prints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::AudioVoiceprintsSet_Request voice_prints(::protocol::srv::AudioVoiceprintsSet_Request::_voice_prints_type arg)
  {
    msg_.voice_prints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintsSet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVoiceprintsSet_Request>()
{
  return protocol::srv::builder::Init_AudioVoiceprintsSet_Request_voice_prints();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVoiceprintsSet_Response_code
{
public:
  explicit Init_AudioVoiceprintsSet_Response_code(::protocol::srv::AudioVoiceprintsSet_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioVoiceprintsSet_Response code(::protocol::srv::AudioVoiceprintsSet_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintsSet_Response msg_;
};

class Init_AudioVoiceprintsSet_Response_result
{
public:
  Init_AudioVoiceprintsSet_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioVoiceprintsSet_Response_code result(::protocol::srv::AudioVoiceprintsSet_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_AudioVoiceprintsSet_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintsSet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVoiceprintsSet_Response>()
{
  return protocol::srv::builder::Init_AudioVoiceprintsSet_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__BUILDER_HPP_
