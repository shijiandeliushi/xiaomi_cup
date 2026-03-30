// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MotionSequencePace.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__BUILDER_HPP_

#include "protocol/msg/detail/motion_sequence_pace__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MotionSequencePace_duration
{
public:
  explicit Init_MotionSequencePace_duration(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MotionSequencePace duration(::protocol::msg::MotionSequencePace::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_use_mpc_track
{
public:
  explicit Init_MotionSequencePace_use_mpc_track(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_duration use_mpc_track(::protocol::msg::MotionSequencePace::_use_mpc_track_type arg)
  {
    msg_.use_mpc_track = std::move(arg);
    return Init_MotionSequencePace_duration(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_landing_gain
{
public:
  explicit Init_MotionSequencePace_landing_gain(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_use_mpc_track landing_gain(::protocol::msg::MotionSequencePace::_landing_gain_type arg)
  {
    msg_.landing_gain = std::move(arg);
    return Init_MotionSequencePace_use_mpc_track(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_friction_coefficient
{
public:
  explicit Init_MotionSequencePace_friction_coefficient(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_landing_gain friction_coefficient(::protocol::msg::MotionSequencePace::_friction_coefficient_type arg)
  {
    msg_.friction_coefficient = std::move(arg);
    return Init_MotionSequencePace_landing_gain(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_left_hindfoot
{
public:
  explicit Init_MotionSequencePace_left_hindfoot(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_friction_coefficient left_hindfoot(::protocol::msg::MotionSequencePace::_left_hindfoot_type arg)
  {
    msg_.left_hindfoot = std::move(arg);
    return Init_MotionSequencePace_friction_coefficient(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_right_hindfoot
{
public:
  explicit Init_MotionSequencePace_right_hindfoot(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_left_hindfoot right_hindfoot(::protocol::msg::MotionSequencePace::_right_hindfoot_type arg)
  {
    msg_.right_hindfoot = std::move(arg);
    return Init_MotionSequencePace_left_hindfoot(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_left_forefoot
{
public:
  explicit Init_MotionSequencePace_left_forefoot(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_right_hindfoot left_forefoot(::protocol::msg::MotionSequencePace::_left_forefoot_type arg)
  {
    msg_.left_forefoot = std::move(arg);
    return Init_MotionSequencePace_right_hindfoot(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_right_forefoot
{
public:
  explicit Init_MotionSequencePace_right_forefoot(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_left_forefoot right_forefoot(::protocol::msg::MotionSequencePace::_right_forefoot_type arg)
  {
    msg_.right_forefoot = std::move(arg);
    return Init_MotionSequencePace_left_forefoot(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_weight
{
public:
  explicit Init_MotionSequencePace_weight(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_right_forefoot weight(::protocol::msg::MotionSequencePace::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_MotionSequencePace_right_forefoot(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_centroid
{
public:
  explicit Init_MotionSequencePace_centroid(::protocol::msg::MotionSequencePace & msg)
  : msg_(msg)
  {}
  Init_MotionSequencePace_weight centroid(::protocol::msg::MotionSequencePace::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return Init_MotionSequencePace_weight(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

class Init_MotionSequencePace_twist
{
public:
  Init_MotionSequencePace_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequencePace_centroid twist(::protocol::msg::MotionSequencePace::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_MotionSequencePace_centroid(msg_);
  }

private:
  ::protocol::msg::MotionSequencePace msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MotionSequencePace>()
{
  return protocol::msg::builder::Init_MotionSequencePace_twist();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PACE__BUILDER_HPP_
