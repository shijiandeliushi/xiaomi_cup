// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioExecute.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__BUILDER_HPP_

#include "protocol/srv/detail/audio_execute__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioExecute_Request_status
{
public:
  explicit Init_AudioExecute_Request_status(::protocol::srv::AudioExecute_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioExecute_Request status(::protocol::srv::AudioExecute_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioExecute_Request msg_;
};

class Init_AudioExecute_Request_client
{
public:
  Init_AudioExecute_Request_client()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioExecute_Request_status client(::protocol::srv::AudioExecute_Request::_client_type arg)
  {
    msg_.client = std::move(arg);
    return Init_AudioExecute_Request_status(msg_);
  }

private:
  ::protocol::srv::AudioExecute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioExecute_Request>()
{
  return protocol::srv::builder::Init_AudioExecute_Request_client();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioExecute_Response_code
{
public:
  explicit Init_AudioExecute_Response_code(::protocol::srv::AudioExecute_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioExecute_Response code(::protocol::srv::AudioExecute_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioExecute_Response msg_;
};

class Init_AudioExecute_Response_result
{
public:
  Init_AudioExecute_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioExecute_Response_code result(::protocol::srv::AudioExecute_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_AudioExecute_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioExecute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioExecute_Response>()
{
  return protocol::srv::builder::Init_AudioExecute_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__BUILDER_HPP_
