// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/NavMode.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__NAV_MODE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__NAV_MODE__BUILDER_HPP_

#include "protocol/srv/detail/nav_mode__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_NavMode_Request_sub_mode
{
public:
  Init_NavMode_Request_sub_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::NavMode_Request sub_mode(::protocol::srv::NavMode_Request::_sub_mode_type arg)
  {
    msg_.sub_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::NavMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::NavMode_Request>()
{
  return protocol::srv::builder::Init_NavMode_Request_sub_mode();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_NavMode_Response_code
{
public:
  explicit Init_NavMode_Response_code(::protocol::srv::NavMode_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::NavMode_Response code(::protocol::srv::NavMode_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::NavMode_Response msg_;
};

class Init_NavMode_Response_success
{
public:
  Init_NavMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavMode_Response_code success(::protocol::srv::NavMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_NavMode_Response_code(msg_);
  }

private:
  ::protocol::srv::NavMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::NavMode_Response>()
{
  return protocol::srv::builder::Init_NavMode_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__NAV_MODE__BUILDER_HPP_
