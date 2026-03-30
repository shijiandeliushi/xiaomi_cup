// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/Body.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BODY__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__BODY__BUILDER_HPP_

#include "protocol/msg/detail/body__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_Body_gesture
{
public:
  explicit Init_Body_gesture(::protocol::msg::Body & msg)
  : msg_(msg)
  {}
  ::protocol::msg::Body gesture(::protocol::msg::Body::_gesture_type arg)
  {
    msg_.gesture = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::Body msg_;
};

class Init_Body_keypoints
{
public:
  explicit Init_Body_keypoints(::protocol::msg::Body & msg)
  : msg_(msg)
  {}
  Init_Body_gesture keypoints(::protocol::msg::Body::_keypoints_type arg)
  {
    msg_.keypoints = std::move(arg);
    return Init_Body_gesture(msg_);
  }

private:
  ::protocol::msg::Body msg_;
};

class Init_Body_feats
{
public:
  explicit Init_Body_feats(::protocol::msg::Body & msg)
  : msg_(msg)
  {}
  Init_Body_keypoints feats(::protocol::msg::Body::_feats_type arg)
  {
    msg_.feats = std::move(arg);
    return Init_Body_keypoints(msg_);
  }

private:
  ::protocol::msg::Body msg_;
};

class Init_Body_reid
{
public:
  explicit Init_Body_reid(::protocol::msg::Body & msg)
  : msg_(msg)
  {}
  Init_Body_feats reid(::protocol::msg::Body::_reid_type arg)
  {
    msg_.reid = std::move(arg);
    return Init_Body_feats(msg_);
  }

private:
  ::protocol::msg::Body msg_;
};

class Init_Body_roi
{
public:
  Init_Body_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Body_reid roi(::protocol::msg::Body::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_Body_reid(msg_);
  }

private:
  ::protocol::msg::Body msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::Body>()
{
  return protocol::msg::builder::Init_Body_roi();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BODY__BUILDER_HPP_
