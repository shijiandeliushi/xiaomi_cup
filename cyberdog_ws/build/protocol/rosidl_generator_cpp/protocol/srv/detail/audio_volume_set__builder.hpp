// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioVolumeSet.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_SET__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_SET__BUILDER_HPP_

#include "protocol/srv/detail/audio_volume_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVolumeSet_Request_volume
{
public:
  Init_AudioVolumeSet_Request_volume()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::AudioVolumeSet_Request volume(::protocol::srv::AudioVolumeSet_Request::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVolumeSet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVolumeSet_Request>()
{
  return protocol::srv::builder::Init_AudioVolumeSet_Request_volume();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVolumeSet_Response_code
{
public:
  explicit Init_AudioVolumeSet_Response_code(::protocol::srv::AudioVolumeSet_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioVolumeSet_Response code(::protocol::srv::AudioVolumeSet_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVolumeSet_Response msg_;
};

class Init_AudioVolumeSet_Response_success
{
public:
  Init_AudioVolumeSet_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioVolumeSet_Response_code success(::protocol::srv::AudioVolumeSet_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AudioVolumeSet_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioVolumeSet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVolumeSet_Response>()
{
  return protocol::srv::builder::Init_AudioVolumeSet_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_SET__BUILDER_HPP_
