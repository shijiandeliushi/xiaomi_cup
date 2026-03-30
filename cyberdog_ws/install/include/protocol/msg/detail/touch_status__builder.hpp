// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/TouchStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TOUCH_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__TOUCH_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/touch_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_TouchStatus_timestamp
{
public:
  explicit Init_TouchStatus_timestamp(::protocol::msg::TouchStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::TouchStatus timestamp(::protocol::msg::TouchStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::TouchStatus msg_;
};

class Init_TouchStatus_touch_state
{
public:
  explicit Init_TouchStatus_touch_state(::protocol::msg::TouchStatus & msg)
  : msg_(msg)
  {}
  Init_TouchStatus_timestamp touch_state(::protocol::msg::TouchStatus::_touch_state_type arg)
  {
    msg_.touch_state = std::move(arg);
    return Init_TouchStatus_timestamp(msg_);
  }

private:
  ::protocol::msg::TouchStatus msg_;
};

class Init_TouchStatus_header
{
public:
  Init_TouchStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TouchStatus_touch_state header(::protocol::msg::TouchStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TouchStatus_touch_state(msg_);
  }

private:
  ::protocol::msg::TouchStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::TouchStatus>()
{
  return protocol::msg::builder::Init_TouchStatus_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TOUCH_STATUS__BUILDER_HPP_
