// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/SensorOperation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__BUILDER_HPP_

#include "protocol/srv/detail/sensor_operation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SensorOperation_Request_operation
{
public:
  explicit Init_SensorOperation_Request_operation(::protocol::srv::SensorOperation_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SensorOperation_Request operation(::protocol::srv::SensorOperation_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SensorOperation_Request msg_;
};

class Init_SensorOperation_Request_sensor_id
{
public:
  Init_SensorOperation_Request_sensor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorOperation_Request_operation sensor_id(::protocol::srv::SensorOperation_Request::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_SensorOperation_Request_operation(msg_);
  }

private:
  ::protocol::srv::SensorOperation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SensorOperation_Request>()
{
  return protocol::srv::builder::Init_SensorOperation_Request_sensor_id();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SensorOperation_Response_code
{
public:
  explicit Init_SensorOperation_Response_code(::protocol::srv::SensorOperation_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SensorOperation_Response code(::protocol::srv::SensorOperation_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SensorOperation_Response msg_;
};

class Init_SensorOperation_Response_success
{
public:
  Init_SensorOperation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorOperation_Response_code success(::protocol::srv::SensorOperation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SensorOperation_Response_code(msg_);
  }

private:
  ::protocol::srv::SensorOperation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SensorOperation_Response>()
{
  return protocol::srv::builder::Init_SensorOperation_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__BUILDER_HPP_
