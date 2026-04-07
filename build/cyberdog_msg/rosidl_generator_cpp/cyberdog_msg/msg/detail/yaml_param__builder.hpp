// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cyberdog_msg:msg/YamlParam.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__BUILDER_HPP_
#define CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__BUILDER_HPP_

#include "cyberdog_msg/msg/detail/yaml_param__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cyberdog_msg
{

namespace msg
{

namespace builder
{

class Init_YamlParam_is_user
{
public:
  explicit Init_YamlParam_is_user(::cyberdog_msg::msg::YamlParam & msg)
  : msg_(msg)
  {}
  ::cyberdog_msg::msg::YamlParam is_user(::cyberdog_msg::msg::YamlParam::_is_user_type arg)
  {
    msg_.is_user = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cyberdog_msg::msg::YamlParam msg_;
};

class Init_YamlParam_vecxd_value
{
public:
  explicit Init_YamlParam_vecxd_value(::cyberdog_msg::msg::YamlParam & msg)
  : msg_(msg)
  {}
  Init_YamlParam_is_user vecxd_value(::cyberdog_msg::msg::YamlParam::_vecxd_value_type arg)
  {
    msg_.vecxd_value = std::move(arg);
    return Init_YamlParam_is_user(msg_);
  }

private:
  ::cyberdog_msg::msg::YamlParam msg_;
};

class Init_YamlParam_double_value
{
public:
  explicit Init_YamlParam_double_value(::cyberdog_msg::msg::YamlParam & msg)
  : msg_(msg)
  {}
  Init_YamlParam_vecxd_value double_value(::cyberdog_msg::msg::YamlParam::_double_value_type arg)
  {
    msg_.double_value = std::move(arg);
    return Init_YamlParam_vecxd_value(msg_);
  }

private:
  ::cyberdog_msg::msg::YamlParam msg_;
};

class Init_YamlParam_s64_value
{
public:
  explicit Init_YamlParam_s64_value(::cyberdog_msg::msg::YamlParam & msg)
  : msg_(msg)
  {}
  Init_YamlParam_double_value s64_value(::cyberdog_msg::msg::YamlParam::_s64_value_type arg)
  {
    msg_.s64_value = std::move(arg);
    return Init_YamlParam_double_value(msg_);
  }

private:
  ::cyberdog_msg::msg::YamlParam msg_;
};

class Init_YamlParam_kind
{
public:
  explicit Init_YamlParam_kind(::cyberdog_msg::msg::YamlParam & msg)
  : msg_(msg)
  {}
  Init_YamlParam_s64_value kind(::cyberdog_msg::msg::YamlParam::_kind_type arg)
  {
    msg_.kind = std::move(arg);
    return Init_YamlParam_s64_value(msg_);
  }

private:
  ::cyberdog_msg::msg::YamlParam msg_;
};

class Init_YamlParam_name
{
public:
  Init_YamlParam_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YamlParam_kind name(::cyberdog_msg::msg::YamlParam::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_YamlParam_kind(msg_);
  }

private:
  ::cyberdog_msg::msg::YamlParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cyberdog_msg::msg::YamlParam>()
{
  return cyberdog_msg::msg::builder::Init_YamlParam_name();
}

}  // namespace cyberdog_msg

#endif  // CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__BUILDER_HPP_
