// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AccountDelete.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_DELETE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_DELETE__BUILDER_HPP_

#include "protocol/srv/detail/account_delete__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AccountDelete_Request_member
{
public:
  Init_AccountDelete_Request_member()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::AccountDelete_Request member(::protocol::srv::AccountDelete_Request::_member_type arg)
  {
    msg_.member = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AccountDelete_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AccountDelete_Request>()
{
  return protocol::srv::builder::Init_AccountDelete_Request_member();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AccountDelete_Response_code
{
public:
  Init_AccountDelete_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::AccountDelete_Response code(::protocol::srv::AccountDelete_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AccountDelete_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AccountDelete_Response>()
{
  return protocol::srv::builder::Init_AccountDelete_Response_code();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_DELETE__BUILDER_HPP_
