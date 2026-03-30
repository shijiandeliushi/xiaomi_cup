// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/GestureActionResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__BUILDER_HPP_

#include "protocol/msg/detail/gesture_action_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_GestureActionResult_id
{
public:
  Init_GestureActionResult_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::msg::GestureActionResult id(::protocol::msg::GestureActionResult::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::GestureActionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::GestureActionResult>()
{
  return protocol::msg::builder::Init_GestureActionResult_id();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__GESTURE_ACTION_RESULT__BUILDER_HPP_
