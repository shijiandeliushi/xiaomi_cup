// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AllUserSearch.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALL_USER_SEARCH__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__ALL_USER_SEARCH__BUILDER_HPP_

#include "protocol/srv/detail/all_user_search__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AllUserSearch_Request_command
{
public:
  Init_AllUserSearch_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::AllUserSearch_Request command(::protocol::srv::AllUserSearch_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AllUserSearch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AllUserSearch_Request>()
{
  return protocol::srv::builder::Init_AllUserSearch_Request_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AllUserSearch_Response_code
{
public:
  explicit Init_AllUserSearch_Response_code(::protocol::srv::AllUserSearch_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AllUserSearch_Response code(::protocol::srv::AllUserSearch_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AllUserSearch_Response msg_;
};

class Init_AllUserSearch_Response_result
{
public:
  Init_AllUserSearch_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AllUserSearch_Response_code result(::protocol::srv::AllUserSearch_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_AllUserSearch_Response_code(msg_);
  }

private:
  ::protocol::srv::AllUserSearch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AllUserSearch_Response>()
{
  return protocol::srv::builder::Init_AllUserSearch_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ALL_USER_SEARCH__BUILDER_HPP_
