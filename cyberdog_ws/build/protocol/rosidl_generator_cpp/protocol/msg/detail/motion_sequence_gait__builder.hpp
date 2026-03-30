// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MotionSequenceGait.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__BUILDER_HPP_

#include "protocol/msg/detail/motion_sequence_gait__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MotionSequenceGait_duration
{
public:
  explicit Init_MotionSequenceGait_duration(::protocol::msg::MotionSequenceGait & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MotionSequenceGait duration(::protocol::msg::MotionSequenceGait::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MotionSequenceGait msg_;
};

class Init_MotionSequenceGait_left_hindfoot
{
public:
  explicit Init_MotionSequenceGait_left_hindfoot(::protocol::msg::MotionSequenceGait & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceGait_duration left_hindfoot(::protocol::msg::MotionSequenceGait::_left_hindfoot_type arg)
  {
    msg_.left_hindfoot = std::move(arg);
    return Init_MotionSequenceGait_duration(msg_);
  }

private:
  ::protocol::msg::MotionSequenceGait msg_;
};

class Init_MotionSequenceGait_right_hindfoot
{
public:
  explicit Init_MotionSequenceGait_right_hindfoot(::protocol::msg::MotionSequenceGait & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceGait_left_hindfoot right_hindfoot(::protocol::msg::MotionSequenceGait::_right_hindfoot_type arg)
  {
    msg_.right_hindfoot = std::move(arg);
    return Init_MotionSequenceGait_left_hindfoot(msg_);
  }

private:
  ::protocol::msg::MotionSequenceGait msg_;
};

class Init_MotionSequenceGait_left_forefoot
{
public:
  explicit Init_MotionSequenceGait_left_forefoot(::protocol::msg::MotionSequenceGait & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceGait_right_hindfoot left_forefoot(::protocol::msg::MotionSequenceGait::_left_forefoot_type arg)
  {
    msg_.left_forefoot = std::move(arg);
    return Init_MotionSequenceGait_right_hindfoot(msg_);
  }

private:
  ::protocol::msg::MotionSequenceGait msg_;
};

class Init_MotionSequenceGait_right_forefoot
{
public:
  Init_MotionSequenceGait_right_forefoot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequenceGait_left_forefoot right_forefoot(::protocol::msg::MotionSequenceGait::_right_forefoot_type arg)
  {
    msg_.right_forefoot = std::move(arg);
    return Init_MotionSequenceGait_left_forefoot(msg_);
  }

private:
  ::protocol::msg::MotionSequenceGait msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MotionSequenceGait>()
{
  return protocol::msg::builder::Init_MotionSequenceGait_right_forefoot();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_GAIT__BUILDER_HPP_
