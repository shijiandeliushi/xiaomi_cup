// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/Gesture.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GESTURE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__GESTURE__BUILDER_HPP_

#include "protocol/msg/detail/gesture__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_Gesture_cls
{
public:
  explicit Init_Gesture_cls(::protocol::msg::Gesture & msg)
  : msg_(msg)
  {}
  ::protocol::msg::Gesture cls(::protocol::msg::Gesture::_cls_type arg)
  {
    msg_.cls = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::Gesture msg_;
};

class Init_Gesture_roi
{
public:
  Init_Gesture_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gesture_cls roi(::protocol::msg::Gesture::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_Gesture_cls(msg_);
  }

private:
  ::protocol::msg::Gesture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::Gesture>()
{
  return protocol::msg::builder::Init_Gesture_roi();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__GESTURE__BUILDER_HPP_
