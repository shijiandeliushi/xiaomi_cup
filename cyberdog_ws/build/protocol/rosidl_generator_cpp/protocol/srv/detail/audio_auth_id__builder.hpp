// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioAuthId.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_AUTH_ID__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_AUTH_ID__BUILDER_HPP_

#include "protocol/srv/detail/audio_auth_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioAuthId_Request>()
{
  return ::protocol::srv::AudioAuthId_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioAuthId_Response_code
{
public:
  explicit Init_AudioAuthId_Response_code(::protocol::srv::AudioAuthId_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioAuthId_Response code(::protocol::srv::AudioAuthId_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioAuthId_Response msg_;
};

class Init_AudioAuthId_Response_sn
{
public:
  explicit Init_AudioAuthId_Response_sn(::protocol::srv::AudioAuthId_Response & msg)
  : msg_(msg)
  {}
  Init_AudioAuthId_Response_code sn(::protocol::srv::AudioAuthId_Response::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_AudioAuthId_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioAuthId_Response msg_;
};

class Init_AudioAuthId_Response_did
{
public:
  Init_AudioAuthId_Response_did()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioAuthId_Response_sn did(::protocol::srv::AudioAuthId_Response::_did_type arg)
  {
    msg_.did = std::move(arg);
    return Init_AudioAuthId_Response_sn(msg_);
  }

private:
  ::protocol::srv::AudioAuthId_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioAuthId_Response>()
{
  return protocol::srv::builder::Init_AudioAuthId_Response_did();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_AUTH_ID__BUILDER_HPP_
