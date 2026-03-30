// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/AuthToken.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUTH_TOKEN__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__AUTH_TOKEN__BUILDER_HPP_

#include "protocol/msg/detail/auth_token__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_AuthToken_token_expirein
{
public:
  explicit Init_AuthToken_token_expirein(::protocol::msg::AuthToken & msg)
  : msg_(msg)
  {}
  ::protocol::msg::AuthToken token_expirein(::protocol::msg::AuthToken::_token_expirein_type arg)
  {
    msg_.token_expirein = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::AuthToken msg_;
};

class Init_AuthToken_token_fresh
{
public:
  explicit Init_AuthToken_token_fresh(::protocol::msg::AuthToken & msg)
  : msg_(msg)
  {}
  Init_AuthToken_token_expirein token_fresh(::protocol::msg::AuthToken::_token_fresh_type arg)
  {
    msg_.token_fresh = std::move(arg);
    return Init_AuthToken_token_expirein(msg_);
  }

private:
  ::protocol::msg::AuthToken msg_;
};

class Init_AuthToken_token_access
{
public:
  explicit Init_AuthToken_token_access(::protocol::msg::AuthToken & msg)
  : msg_(msg)
  {}
  Init_AuthToken_token_fresh token_access(::protocol::msg::AuthToken::_token_access_type arg)
  {
    msg_.token_access = std::move(arg);
    return Init_AuthToken_token_fresh(msg_);
  }

private:
  ::protocol::msg::AuthToken msg_;
};

class Init_AuthToken_uid
{
public:
  Init_AuthToken_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuthToken_token_access uid(::protocol::msg::AuthToken::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return Init_AuthToken_token_access(msg_);
  }

private:
  ::protocol::msg::AuthToken msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::AuthToken>()
{
  return protocol::msg::builder::Init_AuthToken_uid();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUTH_TOKEN__BUILDER_HPP_
