// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioVoiceprintEntry.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_ENTRY__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_ENTRY__BUILDER_HPP_

#include "protocol/srv/detail/audio_voiceprint_entry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVoiceprintEntry_Request_username
{
public:
  explicit Init_AudioVoiceprintEntry_Request_username(::protocol::srv::AudioVoiceprintEntry_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioVoiceprintEntry_Request username(::protocol::srv::AudioVoiceprintEntry_Request::_username_type arg)
  {
    msg_.username = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintEntry_Request msg_;
};

class Init_AudioVoiceprintEntry_Request_command
{
public:
  Init_AudioVoiceprintEntry_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioVoiceprintEntry_Request_username command(::protocol::srv::AudioVoiceprintEntry_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_AudioVoiceprintEntry_Request_username(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintEntry_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVoiceprintEntry_Request>()
{
  return protocol::srv::builder::Init_AudioVoiceprintEntry_Request_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVoiceprintEntry_Response_code
{
public:
  explicit Init_AudioVoiceprintEntry_Response_code(::protocol::srv::AudioVoiceprintEntry_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioVoiceprintEntry_Response code(::protocol::srv::AudioVoiceprintEntry_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintEntry_Response msg_;
};

class Init_AudioVoiceprintEntry_Response_success
{
public:
  Init_AudioVoiceprintEntry_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioVoiceprintEntry_Response_code success(::protocol::srv::AudioVoiceprintEntry_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AudioVoiceprintEntry_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioVoiceprintEntry_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVoiceprintEntry_Response>()
{
  return protocol::srv::builder::Init_AudioVoiceprintEntry_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_ENTRY__BUILDER_HPP_
