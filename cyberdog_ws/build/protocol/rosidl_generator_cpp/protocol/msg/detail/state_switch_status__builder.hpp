// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/StateSwitchStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/state_switch_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_StateSwitchStatus_code
{
public:
  explicit Init_StateSwitchStatus_code(::protocol::msg::StateSwitchStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::StateSwitchStatus code(::protocol::msg::StateSwitchStatus::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::StateSwitchStatus msg_;
};

class Init_StateSwitchStatus_state
{
public:
  Init_StateSwitchStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateSwitchStatus_code state(::protocol::msg::StateSwitchStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_StateSwitchStatus_code(msg_);
  }

private:
  ::protocol::msg::StateSwitchStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::StateSwitchStatus>()
{
  return protocol::msg::builder::Init_StateSwitchStatus_state();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__STATE_SWITCH_STATUS__BUILDER_HPP_
