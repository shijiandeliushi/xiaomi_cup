// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/SportCountsResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__BUILDER_HPP_

#include "protocol/msg/detail/sport_counts_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_SportCountsResult_duration
{
public:
  explicit Init_SportCountsResult_duration(::protocol::msg::SportCountsResult & msg)
  : msg_(msg)
  {}
  ::protocol::msg::SportCountsResult duration(::protocol::msg::SportCountsResult::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::SportCountsResult msg_;
};

class Init_SportCountsResult_counts
{
public:
  explicit Init_SportCountsResult_counts(::protocol::msg::SportCountsResult & msg)
  : msg_(msg)
  {}
  Init_SportCountsResult_duration counts(::protocol::msg::SportCountsResult::_counts_type arg)
  {
    msg_.counts = std::move(arg);
    return Init_SportCountsResult_duration(msg_);
  }

private:
  ::protocol::msg::SportCountsResult msg_;
};

class Init_SportCountsResult_sport_type
{
public:
  explicit Init_SportCountsResult_sport_type(::protocol::msg::SportCountsResult & msg)
  : msg_(msg)
  {}
  Init_SportCountsResult_counts sport_type(::protocol::msg::SportCountsResult::_sport_type_type arg)
  {
    msg_.sport_type = std::move(arg);
    return Init_SportCountsResult_counts(msg_);
  }

private:
  ::protocol::msg::SportCountsResult msg_;
};

class Init_SportCountsResult_algo_switch
{
public:
  Init_SportCountsResult_algo_switch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SportCountsResult_sport_type algo_switch(::protocol::msg::SportCountsResult::_algo_switch_type arg)
  {
    msg_.algo_switch = std::move(arg);
    return Init_SportCountsResult_sport_type(msg_);
  }

private:
  ::protocol::msg::SportCountsResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::SportCountsResult>()
{
  return protocol::msg::builder::Init_SportCountsResult_algo_switch();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__SPORT_COUNTS_RESULT__BUILDER_HPP_
