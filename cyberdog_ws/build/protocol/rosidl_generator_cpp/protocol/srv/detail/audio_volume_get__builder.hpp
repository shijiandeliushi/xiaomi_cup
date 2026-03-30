// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AudioVolumeGet.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_GET__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_GET__BUILDER_HPP_

#include "protocol/srv/detail/audio_volume_get__struct.hpp"
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
auto build<::protocol::srv::AudioVolumeGet_Request>()
{
  return ::protocol::srv::AudioVolumeGet_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AudioVolumeGet_Response_code
{
public:
  explicit Init_AudioVolumeGet_Response_code(::protocol::srv::AudioVolumeGet_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AudioVolumeGet_Response code(::protocol::srv::AudioVolumeGet_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AudioVolumeGet_Response msg_;
};

class Init_AudioVolumeGet_Response_volume
{
public:
  Init_AudioVolumeGet_Response_volume()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioVolumeGet_Response_code volume(::protocol::srv::AudioVolumeGet_Response::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return Init_AudioVolumeGet_Response_code(msg_);
  }

private:
  ::protocol::srv::AudioVolumeGet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AudioVolumeGet_Response>()
{
  return protocol::srv::builder::Init_AudioVolumeGet_Response_volume();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOLUME_GET__BUILDER_HPP_
