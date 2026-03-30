// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioAuthToken.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__BUILDER_HPP_

#include "protocol/srv/detail/audio_auth_token__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioAuthToken_Request_token_expirein
{
public:
  explicit Init_AudioAuthToken_Request_token_expirein(::protocol::srv::AudioAuthToken_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioAuthToken_Request token_expirein(::protocol::srv::AudioAuthToken_Request::_token_expirein_type arg)
  {
    msg_.token_expirein = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioAuthToken_Request msg_;
};

class Init_AudioAuthToken_Request_token_fresh
{
public:
  explicit Init_AudioAuthToken_Request_token_fresh(::protocol::srv::AudioAuthToken_Request & msg)
  : msg_(msg)
  {}
  Init_AudioAuthToken_Request_token_expirein token_fresh(::protocol::srv::AudioAuthToken_Request::_token_fresh_type arg)
  {
    msg_.token_fresh = std::move(arg);
    return Init_AudioAuthToken_Request_token_expirein(msg_);
  }

private:
  ::protocol::srv::AudioAuthToken_Request msg_;
};

class Init_AudioAuthToken_Request_token_access
{
public:
  explicit Init_AudioAuthToken_Request_token_access(::protocol::srv::AudioAuthToken_Request & msg)
  : msg_(msg)
  {}
  Init_AudioAuthToken_Request_token_fresh token_access(::protocol::srv::AudioAuthToken_Request::_token_access_type arg)
  {
    msg_.token_access = std::move(arg);
    return Init_AudioAuthToken_Request_token_fresh(msg_);
  }

private:
  ::protocol::srv::AudioAuthToken_Request msg_;
};

class Init_AudioAuthToken_Request_uid
{
public:
  Init_AudioAuthToken_Request_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioAuthToken_Request_token_access uid(::protocol::srv::AudioAuthToken_Request::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return Init_AudioAuthToken_Request_token_access(msg_);
  }

private:
  ::protocol::srv::AudioAuthToken_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioAuthToken_Request>()
{
  return protocol::srv::builder::Init_AudioAuthToken_Request_uid();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioAuthToken_Response_code
{
public:
  explicit Init_AudioAuthToken_Response_code(::protocol::srv::AudioAuthToken_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioAuthToken_Response code(::protocol::srv::AudioAuthToken_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioAuthToken_Response msg_;
};

class Init_AudioAuthToken_Response_result
{
public:
  Init_AudioAuthToken_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioAuthToken_Response_code result(::protocol::srv::AudioAuthToken_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_AudioAuthToken_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioAuthToken_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioAuthToken_Response>()
{
  return protocol::srv::builder::Init_AudioAuthToken_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__BUILDER_HPP_
