// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/FaceEntryResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__BUILDER_HPP_

#include "protocol/msg/detail/face_entry_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_FaceEntryResult_username
{
public:
  explicit Init_FaceEntryResult_username(::protocol::msg::FaceEntryResult & msg)
  : msg_(msg)
  {}
  ::protocol::msg::FaceEntryResult username(::protocol::msg::FaceEntryResult::_username_type arg)
  {
    msg_.username = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::FaceEntryResult msg_;
};

class Init_FaceEntryResult_result
{
public:
  Init_FaceEntryResult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceEntryResult_username result(::protocol::msg::FaceEntryResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_FaceEntryResult_username(msg_);
  }

private:
  ::protocol::msg::FaceEntryResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::FaceEntryResult>()
{
  return protocol::msg::builder::Init_FaceEntryResult_result();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE_ENTRY_RESULT__BUILDER_HPP_
