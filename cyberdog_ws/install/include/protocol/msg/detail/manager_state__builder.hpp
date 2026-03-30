// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/ManagerState.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MANAGER_STATE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MANAGER_STATE__BUILDER_HPP_

#include "protocol/msg/detail/manager_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_ManagerState_err_msg
{
public:
  explicit Init_ManagerState_err_msg(::protocol::msg::ManagerState & msg)
  : msg_(msg)
  {}
  ::protocol::msg::ManagerState err_msg(::protocol::msg::ManagerState::_err_msg_type arg)
  {
    msg_.err_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::ManagerState msg_;
};

class Init_ManagerState_state
{
public:
  Init_ManagerState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManagerState_err_msg state(::protocol::msg::ManagerState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ManagerState_err_msg(msg_);
  }

private:
  ::protocol::msg::ManagerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::ManagerState>()
{
  return protocol::msg::builder::Init_ManagerState_state();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MANAGER_STATE__BUILDER_HPP_
