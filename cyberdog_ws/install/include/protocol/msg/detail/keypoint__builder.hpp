// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/Keypoint.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__KEYPOINT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__KEYPOINT__BUILDER_HPP_

#include "protocol/msg/detail/keypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_Keypoint_y
{
public:
  explicit Init_Keypoint_y(::protocol::msg::Keypoint & msg)
  : msg_(msg)
  {}
  ::protocol::msg::Keypoint y(::protocol::msg::Keypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::Keypoint msg_;
};

class Init_Keypoint_x
{
public:
  Init_Keypoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Keypoint_y x(::protocol::msg::Keypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Keypoint_y(msg_);
  }

private:
  ::protocol::msg::Keypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::Keypoint>()
{
  return protocol::msg::builder::Init_Keypoint_x();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__KEYPOINT__BUILDER_HPP_
