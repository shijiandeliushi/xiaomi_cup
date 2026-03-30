// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioNickName.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__BUILDER_HPP_

#include "protocol/srv/detail/audio_nick_name__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioNickName_Request_wake_name
{
public:
  explicit Init_AudioNickName_Request_wake_name(::protocol::srv::AudioNickName_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioNickName_Request wake_name(::protocol::srv::AudioNickName_Request::_wake_name_type arg)
  {
    msg_.wake_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioNickName_Request msg_;
};

class Init_AudioNickName_Request_nick_name
{
public:
  Init_AudioNickName_Request_nick_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNickName_Request_wake_name nick_name(::protocol::srv::AudioNickName_Request::_nick_name_type arg)
  {
    msg_.nick_name = std::move(arg);
    return Init_AudioNickName_Request_wake_name(msg_);
  }

private:
  ::protocol::srv::AudioNickName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioNickName_Request>()
{
  return protocol::srv::builder::Init_AudioNickName_Request_nick_name();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioNickName_Response_code
{
public:
  explicit Init_AudioNickName_Response_code(::protocol::srv::AudioNickName_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioNickName_Response code(::protocol::srv::AudioNickName_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioNickName_Response msg_;
};

class Init_AudioNickName_Response_success
{
public:
  Init_AudioNickName_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNickName_Response_code success(::protocol::srv::AudioNickName_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AudioNickName_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioNickName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioNickName_Response>()
{
  return protocol::srv::builder::Init_AudioNickName_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__BUILDER_HPP_
