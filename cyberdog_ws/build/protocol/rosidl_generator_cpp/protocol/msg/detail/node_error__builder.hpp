// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/NodeError.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__NODE_ERROR__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__NODE_ERROR__BUILDER_HPP_

#include "protocol/msg/detail/node_error__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_NodeError_code
{
public:
  explicit Init_NodeError_code(::protocol::msg::NodeError & msg)
  : msg_(msg)
  {}
  ::protocol::msg::NodeError code(::protocol::msg::NodeError::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::NodeError msg_;
};

class Init_NodeError_name
{
public:
  Init_NodeError_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeError_code name(::protocol::msg::NodeError::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_NodeError_code(msg_);
  }

private:
  ::protocol::msg::NodeError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::NodeError>()
{
  return protocol::msg::builder::Init_NodeError_name();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__NODE_ERROR__BUILDER_HPP_
