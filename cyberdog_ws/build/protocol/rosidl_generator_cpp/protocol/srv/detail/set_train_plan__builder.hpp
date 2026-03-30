// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/SetTrainPlan.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__BUILDER_HPP_

#include "protocol/srv/detail/set_train_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SetTrainPlan_Request_value
{
public:
  explicit Init_SetTrainPlan_Request_value(::protocol::srv::SetTrainPlan_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SetTrainPlan_Request value(::protocol::srv::SetTrainPlan_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SetTrainPlan_Request msg_;
};

class Init_SetTrainPlan_Request_type
{
public:
  explicit Init_SetTrainPlan_Request_type(::protocol::srv::SetTrainPlan_Request & msg)
  : msg_(msg)
  {}
  Init_SetTrainPlan_Request_value type(::protocol::srv::SetTrainPlan_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SetTrainPlan_Request_value(msg_);
  }

private:
  ::protocol::srv::SetTrainPlan_Request msg_;
};

class Init_SetTrainPlan_Request_trigger
{
public:
  Init_SetTrainPlan_Request_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTrainPlan_Request_type trigger(::protocol::srv::SetTrainPlan_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return Init_SetTrainPlan_Request_type(msg_);
  }

private:
  ::protocol::srv::SetTrainPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SetTrainPlan_Request>()
{
  return protocol::srv::builder::Init_SetTrainPlan_Request_trigger();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SetTrainPlan_Response_code
{
public:
  explicit Init_SetTrainPlan_Response_code(::protocol::srv::SetTrainPlan_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SetTrainPlan_Response code(::protocol::srv::SetTrainPlan_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SetTrainPlan_Response msg_;
};

class Init_SetTrainPlan_Response_skill_id
{
public:
  Init_SetTrainPlan_Response_skill_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTrainPlan_Response_code skill_id(::protocol::srv::SetTrainPlan_Response::_skill_id_type arg)
  {
    msg_.skill_id = std::move(arg);
    return Init_SetTrainPlan_Response_code(msg_);
  }

private:
  ::protocol::srv::SetTrainPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SetTrainPlan_Response>()
{
  return protocol::srv::builder::Init_SetTrainPlan_Response_skill_id();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__SET_TRAIN_PLAN__BUILDER_HPP_
