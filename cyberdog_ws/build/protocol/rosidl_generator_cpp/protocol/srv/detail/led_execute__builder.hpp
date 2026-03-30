// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/LedExecute.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__LED_EXECUTE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__LED_EXECUTE__BUILDER_HPP_

#include "protocol/srv/detail/led_execute__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_LedExecute_Request_b_value
{
public:
  explicit Init_LedExecute_Request_b_value(::protocol::srv::LedExecute_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::LedExecute_Request b_value(::protocol::srv::LedExecute_Request::_b_value_type arg)
  {
    msg_.b_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::LedExecute_Request msg_;
};

class Init_LedExecute_Request_g_value
{
public:
  explicit Init_LedExecute_Request_g_value(::protocol::srv::LedExecute_Request & msg)
  : msg_(msg)
  {}
  Init_LedExecute_Request_b_value g_value(::protocol::srv::LedExecute_Request::_g_value_type arg)
  {
    msg_.g_value = std::move(arg);
    return Init_LedExecute_Request_b_value(msg_);
  }

private:
  ::protocol::srv::LedExecute_Request msg_;
};

class Init_LedExecute_Request_r_value
{
public:
  explicit Init_LedExecute_Request_r_value(::protocol::srv::LedExecute_Request & msg)
  : msg_(msg)
  {}
  Init_LedExecute_Request_g_value r_value(::protocol::srv::LedExecute_Request::_r_value_type arg)
  {
    msg_.r_value = std::move(arg);
    return Init_LedExecute_Request_g_value(msg_);
  }

private:
  ::protocol::srv::LedExecute_Request msg_;
};

class Init_LedExecute_Request_effect
{
public:
  explicit Init_LedExecute_Request_effect(::protocol::srv::LedExecute_Request & msg)
  : msg_(msg)
  {}
  Init_LedExecute_Request_r_value effect(::protocol::srv::LedExecute_Request::_effect_type arg)
  {
    msg_.effect = std::move(arg);
    return Init_LedExecute_Request_r_value(msg_);
  }

private:
  ::protocol::srv::LedExecute_Request msg_;
};

class Init_LedExecute_Request_mode
{
public:
  explicit Init_LedExecute_Request_mode(::protocol::srv::LedExecute_Request & msg)
  : msg_(msg)
  {}
  Init_LedExecute_Request_effect mode(::protocol::srv::LedExecute_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_LedExecute_Request_effect(msg_);
  }

private:
  ::protocol::srv::LedExecute_Request msg_;
};

class Init_LedExecute_Request_target
{
public:
  explicit Init_LedExecute_Request_target(::protocol::srv::LedExecute_Request & msg)
  : msg_(msg)
  {}
  Init_LedExecute_Request_mode target(::protocol::srv::LedExecute_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_LedExecute_Request_mode(msg_);
  }

private:
  ::protocol::srv::LedExecute_Request msg_;
};

class Init_LedExecute_Request_client
{
public:
  explicit Init_LedExecute_Request_client(::protocol::srv::LedExecute_Request & msg)
  : msg_(msg)
  {}
  Init_LedExecute_Request_target client(::protocol::srv::LedExecute_Request::_client_type arg)
  {
    msg_.client = std::move(arg);
    return Init_LedExecute_Request_target(msg_);
  }

private:
  ::protocol::srv::LedExecute_Request msg_;
};

class Init_LedExecute_Request_occupation
{
public:
  Init_LedExecute_Request_occupation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedExecute_Request_client occupation(::protocol::srv::LedExecute_Request::_occupation_type arg)
  {
    msg_.occupation = std::move(arg);
    return Init_LedExecute_Request_client(msg_);
  }

private:
  ::protocol::srv::LedExecute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::LedExecute_Request>()
{
  return protocol::srv::builder::Init_LedExecute_Request_occupation();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_LedExecute_Response_code
{
public:
  Init_LedExecute_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::LedExecute_Response code(::protocol::srv::LedExecute_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::LedExecute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::LedExecute_Response>()
{
  return protocol::srv::builder::Init_LedExecute_Response_code();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__LED_EXECUTE__BUILDER_HPP_
