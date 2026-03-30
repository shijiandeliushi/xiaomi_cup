// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AccountChange.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_CHANGE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_CHANGE__BUILDER_HPP_

#include "protocol/srv/detail/account_change__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AccountChange_Request_new_name
{
public:
  explicit Init_AccountChange_Request_new_name(::protocol::srv::AccountChange_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AccountChange_Request new_name(::protocol::srv::AccountChange_Request::_new_name_type arg)
  {
    msg_.new_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AccountChange_Request msg_;
};

class Init_AccountChange_Request_pre_name
{
public:
  Init_AccountChange_Request_pre_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccountChange_Request_new_name pre_name(::protocol::srv::AccountChange_Request::_pre_name_type arg)
  {
    msg_.pre_name = std::move(arg);
    return Init_AccountChange_Request_new_name(msg_);
  }

private:
  ::protocol::srv::AccountChange_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AccountChange_Request>()
{
  return protocol::srv::builder::Init_AccountChange_Request_pre_name();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AccountChange_Response_code
{
public:
  Init_AccountChange_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::AccountChange_Response code(::protocol::srv::AccountChange_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AccountChange_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AccountChange_Response>()
{
  return protocol::srv::builder::Init_AccountChange_Response_code();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_CHANGE__BUILDER_HPP_
