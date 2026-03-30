// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TRIGGER__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__TRIGGER__BUILDER_HPP_

#include "protocol/srv/detail/trigger__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_Trigger_Request_data
{
public:
  Init_Trigger_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::Trigger_Request data(::protocol::srv::Trigger_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::Trigger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::Trigger_Request>()
{
  return protocol::srv::builder::Init_Trigger_Request_data();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_Trigger_Response_code
{
public:
  explicit Init_Trigger_Response_code(::protocol::srv::Trigger_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::Trigger_Response code(::protocol::srv::Trigger_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::Trigger_Response msg_;
};

class Init_Trigger_Response_message
{
public:
  explicit Init_Trigger_Response_message(::protocol::srv::Trigger_Response & msg)
  : msg_(msg)
  {}
  Init_Trigger_Response_code message(::protocol::srv::Trigger_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Trigger_Response_code(msg_);
  }

private:
  ::protocol::srv::Trigger_Response msg_;
};

class Init_Trigger_Response_success
{
public:
  Init_Trigger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_Response_message success(::protocol::srv::Trigger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Trigger_Response_message(msg_);
  }

private:
  ::protocol::srv::Trigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::Trigger_Response>()
{
  return protocol::srv::builder::Init_Trigger_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__TRIGGER__BUILDER_HPP_
