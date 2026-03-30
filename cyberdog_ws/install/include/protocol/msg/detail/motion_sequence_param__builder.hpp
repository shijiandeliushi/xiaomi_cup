// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MotionSequenceParam.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__BUILDER_HPP_

#include "protocol/msg/detail/motion_sequence_param__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MotionSequenceParam_duration_ms
{
public:
  explicit Init_MotionSequenceParam_duration_ms(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MotionSequenceParam duration_ms(::protocol::msg::MotionSequenceParam::_duration_ms_type arg)
  {
    msg_.duration_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_friction_coefficient
{
public:
  explicit Init_MotionSequenceParam_friction_coefficient(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceParam_duration_ms friction_coefficient(::protocol::msg::MotionSequenceParam::_friction_coefficient_type arg)
  {
    msg_.friction_coefficient = std::move(arg);
    return Init_MotionSequenceParam_duration_ms(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_hindfoot_height
{
public:
  explicit Init_MotionSequenceParam_hindfoot_height(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceParam_friction_coefficient hindfoot_height(::protocol::msg::MotionSequenceParam::_hindfoot_height_type arg)
  {
    msg_.hindfoot_height = std::move(arg);
    return Init_MotionSequenceParam_friction_coefficient(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_forefoot_height
{
public:
  explicit Init_MotionSequenceParam_forefoot_height(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceParam_hindfoot_height forefoot_height(::protocol::msg::MotionSequenceParam::_forefoot_height_type arg)
  {
    msg_.forefoot_height = std::move(arg);
    return Init_MotionSequenceParam_hindfoot_height(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_left_hindfoot
{
public:
  explicit Init_MotionSequenceParam_left_hindfoot(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceParam_forefoot_height left_hindfoot(::protocol::msg::MotionSequenceParam::_left_hindfoot_type arg)
  {
    msg_.left_hindfoot = std::move(arg);
    return Init_MotionSequenceParam_forefoot_height(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_right_hindfoot
{
public:
  explicit Init_MotionSequenceParam_right_hindfoot(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceParam_left_hindfoot right_hindfoot(::protocol::msg::MotionSequenceParam::_right_hindfoot_type arg)
  {
    msg_.right_hindfoot = std::move(arg);
    return Init_MotionSequenceParam_left_hindfoot(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_left_forefoot
{
public:
  explicit Init_MotionSequenceParam_left_forefoot(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceParam_right_hindfoot left_forefoot(::protocol::msg::MotionSequenceParam::_left_forefoot_type arg)
  {
    msg_.left_forefoot = std::move(arg);
    return Init_MotionSequenceParam_right_hindfoot(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_right_forefoot
{
public:
  explicit Init_MotionSequenceParam_right_forefoot(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceParam_left_forefoot right_forefoot(::protocol::msg::MotionSequenceParam::_right_forefoot_type arg)
  {
    msg_.right_forefoot = std::move(arg);
    return Init_MotionSequenceParam_left_forefoot(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_centroid_height
{
public:
  explicit Init_MotionSequenceParam_centroid_height(::protocol::msg::MotionSequenceParam & msg)
  : msg_(msg)
  {}
  Init_MotionSequenceParam_right_forefoot centroid_height(::protocol::msg::MotionSequenceParam::_centroid_height_type arg)
  {
    msg_.centroid_height = std::move(arg);
    return Init_MotionSequenceParam_right_forefoot(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

class Init_MotionSequenceParam_twist
{
public:
  Init_MotionSequenceParam_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionSequenceParam_centroid_height twist(::protocol::msg::MotionSequenceParam::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_MotionSequenceParam_centroid_height(msg_);
  }

private:
  ::protocol::msg::MotionSequenceParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MotionSequenceParam>()
{
  return protocol::msg::builder::Init_MotionSequenceParam_twist();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SEQUENCE_PARAM__BUILDER_HPP_
