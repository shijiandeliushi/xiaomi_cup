// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/HeadTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__BUILDER_HPP_

#include "protocol/msg/detail/head_tof_payload__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_HeadTofPayload_right_head
{
public:
  explicit Init_HeadTofPayload_right_head(::protocol::msg::HeadTofPayload & msg)
  : msg_(msg)
  {}
  ::protocol::msg::HeadTofPayload right_head(::protocol::msg::HeadTofPayload::_right_head_type arg)
  {
    msg_.right_head = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::HeadTofPayload msg_;
};

class Init_HeadTofPayload_left_head
{
public:
  Init_HeadTofPayload_left_head()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadTofPayload_right_head left_head(::protocol::msg::HeadTofPayload::_left_head_type arg)
  {
    msg_.left_head = std::move(arg);
    return Init_HeadTofPayload_right_head(msg_);
  }

private:
  ::protocol::msg::HeadTofPayload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::HeadTofPayload>()
{
  return protocol::msg::builder::Init_HeadTofPayload_left_head();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__HEAD_TOF_PAYLOAD__BUILDER_HPP_
