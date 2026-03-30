// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__BUILDER_HPP_

#include "protocol/msg/detail/visual_programming_operate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_VisualProgrammingOperate_be_depended
{
public:
  explicit Init_VisualProgrammingOperate_be_depended(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  ::protocol::msg::VisualProgrammingOperate be_depended(::protocol::msg::VisualProgrammingOperate::_be_depended_type arg)
  {
    msg_.be_depended = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_dependent
{
public:
  explicit Init_VisualProgrammingOperate_dependent(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_be_depended dependent(::protocol::msg::VisualProgrammingOperate::_dependent_type arg)
  {
    msg_.dependent = std::move(arg);
    return Init_VisualProgrammingOperate_be_depended(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_fsm
{
public:
  explicit Init_VisualProgrammingOperate_fsm(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_dependent fsm(::protocol::msg::VisualProgrammingOperate::_fsm_type arg)
  {
    msg_.fsm = std::move(arg);
    return Init_VisualProgrammingOperate_dependent(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_body
{
public:
  explicit Init_VisualProgrammingOperate_body(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_fsm body(::protocol::msg::VisualProgrammingOperate::_body_type arg)
  {
    msg_.body = std::move(arg);
    return Init_VisualProgrammingOperate_fsm(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_condition
{
public:
  explicit Init_VisualProgrammingOperate_condition(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_body condition(::protocol::msg::VisualProgrammingOperate::_condition_type arg)
  {
    msg_.condition = std::move(arg);
    return Init_VisualProgrammingOperate_body(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_mode
{
public:
  explicit Init_VisualProgrammingOperate_mode(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_condition mode(::protocol::msg::VisualProgrammingOperate::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VisualProgrammingOperate_condition(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_operate
{
public:
  explicit Init_VisualProgrammingOperate_operate(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_mode operate(::protocol::msg::VisualProgrammingOperate::_operate_type arg)
  {
    msg_.operate = std::move(arg);
    return Init_VisualProgrammingOperate_mode(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_style
{
public:
  explicit Init_VisualProgrammingOperate_style(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_operate style(::protocol::msg::VisualProgrammingOperate::_style_type arg)
  {
    msg_.style = std::move(arg);
    return Init_VisualProgrammingOperate_operate(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_describe
{
public:
  explicit Init_VisualProgrammingOperate_describe(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_style describe(::protocol::msg::VisualProgrammingOperate::_describe_type arg)
  {
    msg_.describe = std::move(arg);
    return Init_VisualProgrammingOperate_style(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_target_id
{
public:
  explicit Init_VisualProgrammingOperate_target_id(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_describe target_id(::protocol::msg::VisualProgrammingOperate::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_VisualProgrammingOperate_describe(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_id
{
public:
  explicit Init_VisualProgrammingOperate_id(::protocol::msg::VisualProgrammingOperate & msg)
  : msg_(msg)
  {}
  Init_VisualProgrammingOperate_target_id id(::protocol::msg::VisualProgrammingOperate::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_VisualProgrammingOperate_target_id(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

class Init_VisualProgrammingOperate_type
{
public:
  Init_VisualProgrammingOperate_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisualProgrammingOperate_id type(::protocol::msg::VisualProgrammingOperate::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_VisualProgrammingOperate_id(msg_);
  }

private:
  ::protocol::msg::VisualProgrammingOperate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::VisualProgrammingOperate>()
{
  return protocol::msg::builder::Init_VisualProgrammingOperate_type();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__VISUAL_PROGRAMMING_OPERATE__BUILDER_HPP_
