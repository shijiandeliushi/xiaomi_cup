// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/SelfCheckStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/self_check_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_SelfCheckStatus_description
{
public:
  explicit Init_SelfCheckStatus_description(::protocol::msg::SelfCheckStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::SelfCheckStatus description(::protocol::msg::SelfCheckStatus::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::SelfCheckStatus msg_;
};

class Init_SelfCheckStatus_code
{
public:
  Init_SelfCheckStatus_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SelfCheckStatus_description code(::protocol::msg::SelfCheckStatus::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_SelfCheckStatus_description(msg_);
  }

private:
  ::protocol::msg::SelfCheckStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::SelfCheckStatus>()
{
  return protocol::msg::builder::Init_SelfCheckStatus_code();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__SELF_CHECK_STATUS__BUILDER_HPP_
