// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/SetMapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SET_MAP_LABEL__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__SET_MAP_LABEL__BUILDER_HPP_

#include "protocol/srv/detail/set_map_label__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SetMapLabel_Request_only_delete
{
public:
  explicit Init_SetMapLabel_Request_only_delete(::protocol::srv::SetMapLabel_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SetMapLabel_Request only_delete(::protocol::srv::SetMapLabel_Request::_only_delete_type arg)
  {
    msg_.only_delete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SetMapLabel_Request msg_;
};

class Init_SetMapLabel_Request_label
{
public:
  Init_SetMapLabel_Request_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMapLabel_Request_only_delete label(::protocol::srv::SetMapLabel_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_SetMapLabel_Request_only_delete(msg_);
  }

private:
  ::protocol::srv::SetMapLabel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SetMapLabel_Request>()
{
  return protocol::srv::builder::Init_SetMapLabel_Request_label();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SetMapLabel_Response_code
{
public:
  explicit Init_SetMapLabel_Response_code(::protocol::srv::SetMapLabel_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SetMapLabel_Response code(::protocol::srv::SetMapLabel_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SetMapLabel_Response msg_;
};

class Init_SetMapLabel_Response_success
{
public:
  Init_SetMapLabel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMapLabel_Response_code success(::protocol::srv::SetMapLabel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMapLabel_Response_code(msg_);
  }

private:
  ::protocol::srv::SetMapLabel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SetMapLabel_Response>()
{
  return protocol::srv::builder::Init_SetMapLabel_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__SET_MAP_LABEL__BUILDER_HPP_
