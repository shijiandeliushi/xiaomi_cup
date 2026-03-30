// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/SportManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SPORT_MANAGER__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__SPORT_MANAGER__BUILDER_HPP_

#include "protocol/srv/detail/sport_manager__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SportManager_Request_timeout
{
public:
  explicit Init_SportManager_Request_timeout(::protocol::srv::SportManager_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SportManager_Request timeout(::protocol::srv::SportManager_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SportManager_Request msg_;
};

class Init_SportManager_Request_counts
{
public:
  explicit Init_SportManager_Request_counts(::protocol::srv::SportManager_Request & msg)
  : msg_(msg)
  {}
  Init_SportManager_Request_timeout counts(::protocol::srv::SportManager_Request::_counts_type arg)
  {
    msg_.counts = std::move(arg);
    return Init_SportManager_Request_timeout(msg_);
  }

private:
  ::protocol::srv::SportManager_Request msg_;
};

class Init_SportManager_Request_command
{
public:
  explicit Init_SportManager_Request_command(::protocol::srv::SportManager_Request & msg)
  : msg_(msg)
  {}
  Init_SportManager_Request_counts command(::protocol::srv::SportManager_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_SportManager_Request_counts(msg_);
  }

private:
  ::protocol::srv::SportManager_Request msg_;
};

class Init_SportManager_Request_id
{
public:
  explicit Init_SportManager_Request_id(::protocol::srv::SportManager_Request & msg)
  : msg_(msg)
  {}
  Init_SportManager_Request_command id(::protocol::srv::SportManager_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SportManager_Request_command(msg_);
  }

private:
  ::protocol::srv::SportManager_Request msg_;
};

class Init_SportManager_Request_sport_type
{
public:
  Init_SportManager_Request_sport_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SportManager_Request_id sport_type(::protocol::srv::SportManager_Request::_sport_type_type arg)
  {
    msg_.sport_type = std::move(arg);
    return Init_SportManager_Request_id(msg_);
  }

private:
  ::protocol::srv::SportManager_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SportManager_Request>()
{
  return protocol::srv::builder::Init_SportManager_Request_sport_type();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SportManager_Response_code
{
public:
  explicit Init_SportManager_Response_code(::protocol::srv::SportManager_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SportManager_Response code(::protocol::srv::SportManager_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SportManager_Response msg_;
};

class Init_SportManager_Response_result
{
public:
  Init_SportManager_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SportManager_Response_code result(::protocol::srv::SportManager_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SportManager_Response_code(msg_);
  }

private:
  ::protocol::srv::SportManager_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SportManager_Response>()
{
  return protocol::srv::builder::Init_SportManager_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__SPORT_MANAGER__BUILDER_HPP_
