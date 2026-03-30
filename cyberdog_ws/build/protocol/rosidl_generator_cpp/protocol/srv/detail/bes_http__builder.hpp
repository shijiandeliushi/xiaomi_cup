// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/BesHttp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BES_HTTP__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__BES_HTTP__BUILDER_HPP_

#include "protocol/srv/detail/bes_http__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BesHttp_Request_milsecs
{
public:
  explicit Init_BesHttp_Request_milsecs(::protocol::srv::BesHttp_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BesHttp_Request milsecs(::protocol::srv::BesHttp_Request::_milsecs_type arg)
  {
    msg_.milsecs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BesHttp_Request msg_;
};

class Init_BesHttp_Request_params
{
public:
  explicit Init_BesHttp_Request_params(::protocol::srv::BesHttp_Request & msg)
  : msg_(msg)
  {}
  Init_BesHttp_Request_milsecs params(::protocol::srv::BesHttp_Request::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_BesHttp_Request_milsecs(msg_);
  }

private:
  ::protocol::srv::BesHttp_Request msg_;
};

class Init_BesHttp_Request_url
{
public:
  explicit Init_BesHttp_Request_url(::protocol::srv::BesHttp_Request & msg)
  : msg_(msg)
  {}
  Init_BesHttp_Request_params url(::protocol::srv::BesHttp_Request::_url_type arg)
  {
    msg_.url = std::move(arg);
    return Init_BesHttp_Request_params(msg_);
  }

private:
  ::protocol::srv::BesHttp_Request msg_;
};

class Init_BesHttp_Request_method
{
public:
  Init_BesHttp_Request_method()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BesHttp_Request_url method(::protocol::srv::BesHttp_Request::_method_type arg)
  {
    msg_.method = std::move(arg);
    return Init_BesHttp_Request_url(msg_);
  }

private:
  ::protocol::srv::BesHttp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BesHttp_Request>()
{
  return protocol::srv::builder::Init_BesHttp_Request_method();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BesHttp_Response_code
{
public:
  explicit Init_BesHttp_Response_code(::protocol::srv::BesHttp_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BesHttp_Response code(::protocol::srv::BesHttp_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BesHttp_Response msg_;
};

class Init_BesHttp_Response_data
{
public:
  Init_BesHttp_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BesHttp_Response_code data(::protocol::srv::BesHttp_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_BesHttp_Response_code(msg_);
  }

private:
  ::protocol::srv::BesHttp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BesHttp_Response>()
{
  return protocol::srv::builder::Init_BesHttp_Response_data();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BES_HTTP__BUILDER_HPP_
