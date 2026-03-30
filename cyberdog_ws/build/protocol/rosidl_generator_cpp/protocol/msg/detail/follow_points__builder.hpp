// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/FollowPoints.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__BUILDER_HPP_

#include "protocol/msg/detail/follow_points__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_FollowPoints_poses
{
public:
  explicit Init_FollowPoints_poses(::protocol::msg::FollowPoints & msg)
  : msg_(msg)
  {}
  ::protocol::msg::FollowPoints poses(::protocol::msg::FollowPoints::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::FollowPoints msg_;
};

class Init_FollowPoints_token
{
public:
  explicit Init_FollowPoints_token(::protocol::msg::FollowPoints & msg)
  : msg_(msg)
  {}
  Init_FollowPoints_poses token(::protocol::msg::FollowPoints::_token_type arg)
  {
    msg_.token = std::move(arg);
    return Init_FollowPoints_poses(msg_);
  }

private:
  ::protocol::msg::FollowPoints msg_;
};

class Init_FollowPoints_header
{
public:
  Init_FollowPoints_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPoints_token header(::protocol::msg::FollowPoints::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FollowPoints_token(msg_);
  }

private:
  ::protocol::msg::FollowPoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::FollowPoints>()
{
  return protocol::msg::builder::Init_FollowPoints_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FOLLOW_POINTS__BUILDER_HPP_
