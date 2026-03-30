// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MultipleTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MULTIPLE_TOF_PAYLOAD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MULTIPLE_TOF_PAYLOAD__BUILDER_HPP_

#include "protocol/msg/detail/multiple_tof_payload__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MultipleTofPayload_right_rear
{
public:
  explicit Init_MultipleTofPayload_right_rear(::protocol::msg::MultipleTofPayload & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MultipleTofPayload right_rear(::protocol::msg::MultipleTofPayload::_right_rear_type arg)
  {
    msg_.right_rear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MultipleTofPayload msg_;
};

class Init_MultipleTofPayload_right_head
{
public:
  explicit Init_MultipleTofPayload_right_head(::protocol::msg::MultipleTofPayload & msg)
  : msg_(msg)
  {}
  Init_MultipleTofPayload_right_rear right_head(::protocol::msg::MultipleTofPayload::_right_head_type arg)
  {
    msg_.right_head = std::move(arg);
    return Init_MultipleTofPayload_right_rear(msg_);
  }

private:
  ::protocol::msg::MultipleTofPayload msg_;
};

class Init_MultipleTofPayload_left_rear
{
public:
  explicit Init_MultipleTofPayload_left_rear(::protocol::msg::MultipleTofPayload & msg)
  : msg_(msg)
  {}
  Init_MultipleTofPayload_right_head left_rear(::protocol::msg::MultipleTofPayload::_left_rear_type arg)
  {
    msg_.left_rear = std::move(arg);
    return Init_MultipleTofPayload_right_head(msg_);
  }

private:
  ::protocol::msg::MultipleTofPayload msg_;
};

class Init_MultipleTofPayload_left_head
{
public:
  Init_MultipleTofPayload_left_head()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultipleTofPayload_left_rear left_head(::protocol::msg::MultipleTofPayload::_left_head_type arg)
  {
    msg_.left_head = std::move(arg);
    return Init_MultipleTofPayload_left_rear(msg_);
  }

private:
  ::protocol::msg::MultipleTofPayload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MultipleTofPayload>()
{
  return protocol::msg::builder::Init_MultipleTofPayload_left_head();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MULTIPLE_TOF_PAYLOAD__BUILDER_HPP_
