// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/RearTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__BUILDER_HPP_

#include "protocol/msg/detail/rear_tof_payload__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_RearTofPayload_right_rear
{
public:
  explicit Init_RearTofPayload_right_rear(::protocol::msg::RearTofPayload & msg)
  : msg_(msg)
  {}
  ::protocol::msg::RearTofPayload right_rear(::protocol::msg::RearTofPayload::_right_rear_type arg)
  {
    msg_.right_rear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::RearTofPayload msg_;
};

class Init_RearTofPayload_left_rear
{
public:
  Init_RearTofPayload_left_rear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RearTofPayload_right_rear left_rear(::protocol::msg::RearTofPayload::_left_rear_type arg)
  {
    msg_.left_rear = std::move(arg);
    return Init_RearTofPayload_right_rear(msg_);
  }

private:
  ::protocol::msg::RearTofPayload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::RearTofPayload>()
{
  return protocol::msg::builder::Init_RearTofPayload_left_rear();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__REAR_TOF_PAYLOAD__BUILDER_HPP_
