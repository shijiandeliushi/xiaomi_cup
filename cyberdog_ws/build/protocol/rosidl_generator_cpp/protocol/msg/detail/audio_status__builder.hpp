// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/AudioStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/audio_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_AudioStatus_state
{
public:
  Init_AudioStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::msg::AudioStatus state(::protocol::msg::AudioStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::AudioStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::AudioStatus>()
{
  return protocol::msg::builder::Init_AudioStatus_state();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_STATUS__BUILDER_HPP_
