// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__BUILDER_HPP_

#include "protocol/srv/detail/visual_programming_operate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_VisualProgrammingOperate_Request_form
{
public:
  explicit Init_VisualProgrammingOperate_Request_form(::protocol::srv::VisualProgrammingOperate_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::VisualProgrammingOperate_Request form(::protocol::srv::VisualProgrammingOperate_Request::_form_type arg)
  {
    msg_.form = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::VisualProgrammingOperate_Request msg_;
};

class Init_VisualProgrammingOperate_Request_json
{
public:
  explicit Init_VisualProgrammingOperate_Request_json(::protocol::srv::VisualProgrammingOperate_Request & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_Request_form json(::protocol::srv::VisualProgrammingOperate_Request::_json_type arg)
  {
    msg_.json = std::move(arg);
    return Init_VisualProgrammingOperate_Request_form(msg_);
  }

private:
  ::protocol::srv::VisualProgrammingOperate_Request msg_;
};

class Init_VisualProgrammingOperate_Request_type
{
public:
  Init_VisualProgrammingOperate_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisualProgrammingOperate_Request_json type(::protocol::srv::VisualProgrammingOperate_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_VisualProgrammingOperate_Request_json(msg_);
  }

private:
  ::protocol::srv::VisualProgrammingOperate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::VisualProgrammingOperate_Request>()
{
  return protocol::srv::builder::Init_VisualProgrammingOperate_Request_type();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_VisualProgrammingOperate_Response_json
{
public:
  explicit Init_VisualProgrammingOperate_Response_json(::protocol::srv::VisualProgrammingOperate_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::VisualProgrammingOperate_Response json(::protocol::srv::VisualProgrammingOperate_Response::_json_type arg)
  {
    msg_.json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::VisualProgrammingOperate_Response msg_;
};

class Init_VisualProgrammingOperate_Response_code
{
public:
  Init_VisualProgrammingOperate_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisualProgrammingOperate_Response_json code(::protocol::srv::VisualProgrammingOperate_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_VisualProgrammingOperate_Response_json(msg_);
  }

private:
  ::protocol::srv::VisualProgrammingOperate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::VisualProgrammingOperate_Response>()
{
  return protocol::srv::builder::Init_VisualProgrammingOperate_Response_code();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__BUILDER_HPP_
