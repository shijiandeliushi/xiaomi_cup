// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/Label.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__LABEL__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__LABEL__BUILDER_HPP_

#include "protocol/msg/detail/label__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_Label_physic_y
{
public:
  explicit Init_Label_physic_y(::protocol::msg::Label & msg)
  : msg_(msg)
  {}
  ::protocol::msg::Label physic_y(::protocol::msg::Label::_physic_y_type arg)
  {
    msg_.physic_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::Label msg_;
};

class Init_Label_physic_x
{
public:
  explicit Init_Label_physic_x(::protocol::msg::Label & msg)
  : msg_(msg)
  {}
  Init_Label_physic_y physic_x(::protocol::msg::Label::_physic_x_type arg)
  {
    msg_.physic_x = std::move(arg);
    return Init_Label_physic_y(msg_);
  }

private:
  ::protocol::msg::Label msg_;
};

class Init_Label_label_name
{
public:
  Init_Label_label_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Label_physic_x label_name(::protocol::msg::Label::_label_name_type arg)
  {
    msg_.label_name = std::move(arg);
    return Init_Label_physic_x(msg_);
  }

private:
  ::protocol::msg::Label msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::Label>()
{
  return protocol::msg::builder::Init_Label_label_name();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__LABEL__BUILDER_HPP_
