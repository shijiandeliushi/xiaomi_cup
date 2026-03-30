// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/TrackResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__TRACK_RESULT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__TRACK_RESULT__BUILDER_HPP_

#include "protocol/msg/detail/track_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_TrackResult_roi
{
public:
  explicit Init_TrackResult_roi(::protocol::msg::TrackResult & msg)
  : msg_(msg)
  {}
  ::protocol::msg::TrackResult roi(::protocol::msg::TrackResult::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::TrackResult msg_;
};

class Init_TrackResult_header
{
public:
  Init_TrackResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackResult_roi header(::protocol::msg::TrackResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackResult_roi(msg_);
  }

private:
  ::protocol::msg::TrackResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::TrackResult>()
{
  return protocol::msg::builder::Init_TrackResult_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TRACK_RESULT__BUILDER_HPP_
