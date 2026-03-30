// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AccountSearch.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__BUILDER_HPP_

#include "protocol/srv/detail/account_search__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AccountSearch_Request_member
{
public:
  Init_AccountSearch_Request_member()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::AccountSearch_Request member(::protocol::srv::AccountSearch_Request::_member_type arg)
  {
    msg_.member = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AccountSearch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AccountSearch_Request>()
{
  return protocol::srv::builder::Init_AccountSearch_Request_member();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AccountSearch_Response_code
{
public:
  explicit Init_AccountSearch_Response_code(::protocol::srv::AccountSearch_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AccountSearch_Response code(::protocol::srv::AccountSearch_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AccountSearch_Response msg_;
};

class Init_AccountSearch_Response_data
{
public:
  Init_AccountSearch_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccountSearch_Response_code data(::protocol::srv::AccountSearch_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_AccountSearch_Response_code(msg_);
  }

private:
  ::protocol::srv::AccountSearch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AccountSearch_Response>()
{
  return protocol::srv::builder::Init_AccountSearch_Response_data();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ACCOUNT_SEARCH__BUILDER_HPP_
