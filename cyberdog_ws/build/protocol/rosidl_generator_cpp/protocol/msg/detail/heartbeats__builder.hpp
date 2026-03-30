// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/Heartbeats.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__HEARTBEATS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__HEARTBEATS__BUILDER_HPP_

#include "protocol/msg/detail/heartbeats__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_Heartbeats_params
{
public:
  explicit Init_Heartbeats_params(::protocol::msg::Heartbeats & msg)
  : msg_(msg)
  {}
  ::protocol::msg::Heartbeats params(::protocol::msg::Heartbeats::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::Heartbeats msg_;
};

class Init_Heartbeats_timestamp
{
public:
  explicit Init_Heartbeats_timestamp(::protocol::msg::Heartbeats & msg)
  : msg_(msg)
  {}
  Init_Heartbeats_params timestamp(::protocol::msg::Heartbeats::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Heartbeats_params(msg_);
  }

private:
  ::protocol::msg::Heartbeats msg_;
};

class Init_Heartbeats_state
{
public:
  explicit Init_Heartbeats_state(::protocol::msg::Heartbeats & msg)
  : msg_(msg)
  {}
  Init_Heartbeats_timestamp state(::protocol::msg::Heartbeats::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_Heartbeats_timestamp(msg_);
  }

private:
  ::protocol::msg::Heartbeats msg_;
};

class Init_Heartbeats_name
{
public:
  Init_Heartbeats_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Heartbeats_state name(::protocol::msg::Heartbeats::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Heartbeats_state(msg_);
  }

private:
  ::protocol::msg::Heartbeats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::Heartbeats>()
{
  return protocol::msg::builder::Init_Heartbeats_name();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__HEARTBEATS__BUILDER_HPP_
