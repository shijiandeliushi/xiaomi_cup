// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/ConnectPc.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECT_PC__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECT_PC__BUILDER_HPP_

#include "protocol/srv/detail/connect_pc__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_ConnectPc_Request_connect_which
{
public:
  Init_ConnectPc_Request_connect_which()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::ConnectPc_Request connect_which(::protocol::srv::ConnectPc_Request::_connect_which_type arg)
  {
    msg_.connect_which = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::ConnectPc_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ConnectPc_Request>()
{
  return protocol::srv::builder::Init_ConnectPc_Request_connect_which();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_ConnectPc_Response_success
{
public:
  Init_ConnectPc_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::ConnectPc_Response success(::protocol::srv::ConnectPc_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::ConnectPc_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ConnectPc_Response>()
{
  return protocol::srv::builder::Init_ConnectPc_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__CONNECT_PC__BUILDER_HPP_
