// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cyberdog_msg:msg/ApplyForce.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__BUILDER_HPP_
#define CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__BUILDER_HPP_

#include "cyberdog_msg/msg/detail/apply_force__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cyberdog_msg
{

namespace msg
{

namespace builder
{

class Init_ApplyForce_rel_pos
{
public:
  explicit Init_ApplyForce_rel_pos(::cyberdog_msg::msg::ApplyForce & msg)
  : msg_(msg)
  {}
  ::cyberdog_msg::msg::ApplyForce rel_pos(::cyberdog_msg::msg::ApplyForce::_rel_pos_type arg)
  {
    msg_.rel_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cyberdog_msg::msg::ApplyForce msg_;
};

class Init_ApplyForce_force
{
public:
  explicit Init_ApplyForce_force(::cyberdog_msg::msg::ApplyForce & msg)
  : msg_(msg)
  {}
  Init_ApplyForce_rel_pos force(::cyberdog_msg::msg::ApplyForce::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_ApplyForce_rel_pos(msg_);
  }

private:
  ::cyberdog_msg::msg::ApplyForce msg_;
};

class Init_ApplyForce_time
{
public:
  explicit Init_ApplyForce_time(::cyberdog_msg::msg::ApplyForce & msg)
  : msg_(msg)
  {}
  Init_ApplyForce_force time(::cyberdog_msg::msg::ApplyForce::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_ApplyForce_force(msg_);
  }

private:
  ::cyberdog_msg::msg::ApplyForce msg_;
};

class Init_ApplyForce_link_name
{
public:
  Init_ApplyForce_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyForce_time link_name(::cyberdog_msg::msg::ApplyForce::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_ApplyForce_time(msg_);
  }

private:
  ::cyberdog_msg::msg::ApplyForce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cyberdog_msg::msg::ApplyForce>()
{
  return cyberdog_msg::msg::builder::Init_ApplyForce_link_name();
}

}  // namespace cyberdog_msg

#endif  // CYBERDOG_MSG__MSG__DETAIL__APPLY_FORCE__BUILDER_HPP_
