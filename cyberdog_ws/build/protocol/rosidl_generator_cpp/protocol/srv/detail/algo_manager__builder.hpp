// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/AlgoManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALGO_MANAGER__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__ALGO_MANAGER__BUILDER_HPP_

#include "protocol/srv/detail/algo_manager__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AlgoManager_Request_open_emotion
{
public:
  explicit Init_AlgoManager_Request_open_emotion(::protocol::srv::AlgoManager_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AlgoManager_Request open_emotion(::protocol::srv::AlgoManager_Request::_open_emotion_type arg)
  {
    msg_.open_emotion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AlgoManager_Request msg_;
};

class Init_AlgoManager_Request_open_age
{
public:
  explicit Init_AlgoManager_Request_open_age(::protocol::srv::AlgoManager_Request & msg)
  : msg_(msg)
  {}
  Init_AlgoManager_Request_open_emotion open_age(::protocol::srv::AlgoManager_Request::_open_age_type arg)
  {
    msg_.open_age = std::move(arg);
    return Init_AlgoManager_Request_open_emotion(msg_);
  }

private:
  ::protocol::srv::AlgoManager_Request msg_;
};

class Init_AlgoManager_Request_algo_disable
{
public:
  explicit Init_AlgoManager_Request_algo_disable(::protocol::srv::AlgoManager_Request & msg)
  : msg_(msg)
  {}
  Init_AlgoManager_Request_open_age algo_disable(::protocol::srv::AlgoManager_Request::_algo_disable_type arg)
  {
    msg_.algo_disable = std::move(arg);
    return Init_AlgoManager_Request_open_age(msg_);
  }

private:
  ::protocol::srv::AlgoManager_Request msg_;
};

class Init_AlgoManager_Request_algo_enable
{
public:
  Init_AlgoManager_Request_algo_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlgoManager_Request_algo_disable algo_enable(::protocol::srv::AlgoManager_Request::_algo_enable_type arg)
  {
    msg_.algo_enable = std::move(arg);
    return Init_AlgoManager_Request_algo_disable(msg_);
  }

private:
  ::protocol::srv::AlgoManager_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AlgoManager_Request>()
{
  return protocol::srv::builder::Init_AlgoManager_Request_algo_enable();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_AlgoManager_Response_code
{
public:
  explicit Init_AlgoManager_Response_code(::protocol::srv::AlgoManager_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::AlgoManager_Response code(::protocol::srv::AlgoManager_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::AlgoManager_Response msg_;
};

class Init_AlgoManager_Response_result_disable
{
public:
  explicit Init_AlgoManager_Response_result_disable(::protocol::srv::AlgoManager_Response & msg)
  : msg_(msg)
  {}
  Init_AlgoManager_Response_code result_disable(::protocol::srv::AlgoManager_Response::_result_disable_type arg)
  {
    msg_.result_disable = std::move(arg);
    return Init_AlgoManager_Response_code(msg_);
  }

private:
  ::protocol::srv::AlgoManager_Response msg_;
};

class Init_AlgoManager_Response_result_enable
{
public:
  Init_AlgoManager_Response_result_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlgoManager_Response_result_disable result_enable(::protocol::srv::AlgoManager_Response::_result_enable_type arg)
  {
    msg_.result_enable = std::move(arg);
    return Init_AlgoManager_Response_result_disable(msg_);
  }

private:
  ::protocol::srv::AlgoManager_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::AlgoManager_Response>()
{
  return protocol::srv::builder::Init_AlgoManager_Response_result_enable();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__ALGO_MANAGER__BUILDER_HPP_
