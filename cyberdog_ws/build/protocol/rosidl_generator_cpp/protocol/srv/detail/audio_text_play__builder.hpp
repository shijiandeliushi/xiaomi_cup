// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioTextPlay.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__BUILDER_HPP_

#include "protocol/srv/detail/audio_text_play__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioTextPlay_Request_text
{
public:
  explicit Init_AudioTextPlay_Request_text(::protocol::srv::AudioTextPlay_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioTextPlay_Request text(::protocol::srv::AudioTextPlay_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioTextPlay_Request msg_;
};

class Init_AudioTextPlay_Request_speech
{
public:
  explicit Init_AudioTextPlay_Request_speech(::protocol::srv::AudioTextPlay_Request & msg)
  : msg_(msg)
  {}
  Init_AudioTextPlay_Request_text speech(::protocol::srv::AudioTextPlay_Request::_speech_type arg)
  {
    msg_.speech = std::move(arg);
    return Init_AudioTextPlay_Request_text(msg_);
  }

private:
  ::protocol::srv::AudioTextPlay_Request msg_;
};

class Init_AudioTextPlay_Request_is_online
{
public:
  explicit Init_AudioTextPlay_Request_is_online(::protocol::srv::AudioTextPlay_Request & msg)
  : msg_(msg)
  {}
  Init_AudioTextPlay_Request_speech is_online(::protocol::srv::AudioTextPlay_Request::_is_online_type arg)
  {
    msg_.is_online = std::move(arg);
    return Init_AudioTextPlay_Request_speech(msg_);
  }

private:
  ::protocol::srv::AudioTextPlay_Request msg_;
};

class Init_AudioTextPlay_Request_module_name
{
public:
  Init_AudioTextPlay_Request_module_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioTextPlay_Request_is_online module_name(::protocol::srv::AudioTextPlay_Request::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return Init_AudioTextPlay_Request_is_online(msg_);
  }

private:
  ::protocol::srv::AudioTextPlay_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioTextPlay_Request>()
{
  return protocol::srv::builder::Init_AudioTextPlay_Request_module_name();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioTextPlay_Response_code
{
public:
  explicit Init_AudioTextPlay_Response_code(::protocol::srv::AudioTextPlay_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioTextPlay_Response code(::protocol::srv::AudioTextPlay_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioTextPlay_Response msg_;
};

class Init_AudioTextPlay_Response_status
{
public:
  Init_AudioTextPlay_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioTextPlay_Response_code status(::protocol::srv::AudioTextPlay_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AudioTextPlay_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioTextPlay_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioTextPlay_Response>()
{
  return protocol::srv::builder::Init_AudioTextPlay_Response_status();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_TEXT_PLAY__BUILDER_HPP_
