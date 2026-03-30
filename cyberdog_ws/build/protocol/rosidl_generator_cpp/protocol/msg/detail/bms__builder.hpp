// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/Bms.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BMS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__BMS__BUILDER_HPP_

#include "protocol/msg/detail/bms__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_Bms_powerboard_status
{
public:
  explicit Init_Bms_powerboard_status(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  ::protocol::msg::Bms powerboard_status(::protocol::msg::Bms::_powerboard_status_type arg)
  {
    msg_.powerboard_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_batt_loop_number
{
public:
  explicit Init_Bms_batt_loop_number(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_powerboard_status batt_loop_number(::protocol::msg::Bms::_batt_loop_number_type arg)
  {
    msg_.batt_loop_number = std::move(arg);
    return Init_Bms_powerboard_status(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_batt_health
{
public:
  explicit Init_Bms_batt_health(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_batt_loop_number batt_health(::protocol::msg::Bms::_batt_health_type arg)
  {
    msg_.batt_health = std::move(arg);
    return Init_Bms_batt_loop_number(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_status
{
public:
  explicit Init_Bms_status(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_batt_health status(::protocol::msg::Bms::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Bms_batt_health(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_buzze
{
public:
  explicit Init_Bms_buzze(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_status buzze(::protocol::msg::Bms::_buzze_type arg)
  {
    msg_.buzze = std::move(arg);
    return Init_Bms_status(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_power_supply
{
public:
  explicit Init_Bms_power_supply(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_buzze power_supply(::protocol::msg::Bms::_power_supply_type arg)
  {
    msg_.power_supply = std::move(arg);
    return Init_Bms_buzze(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_disable_charge
{
public:
  explicit Init_Bms_disable_charge(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_power_supply disable_charge(::protocol::msg::Bms::_disable_charge_type arg)
  {
    msg_.disable_charge = std::move(arg);
    return Init_Bms_power_supply(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_key_val
{
public:
  explicit Init_Bms_key_val(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_disable_charge key_val(::protocol::msg::Bms::_key_val_type arg)
  {
    msg_.key_val = std::move(arg);
    return Init_Bms_disable_charge(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_batt_st
{
public:
  explicit Init_Bms_batt_st(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_key_val batt_st(::protocol::msg::Bms::_batt_st_type arg)
  {
    msg_.batt_st = std::move(arg);
    return Init_Bms_key_val(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_batt_temp
{
public:
  explicit Init_Bms_batt_temp(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_batt_st batt_temp(::protocol::msg::Bms::_batt_temp_type arg)
  {
    msg_.batt_temp = std::move(arg);
    return Init_Bms_batt_st(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_batt_soc
{
public:
  explicit Init_Bms_batt_soc(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_batt_temp batt_soc(::protocol::msg::Bms::_batt_soc_type arg)
  {
    msg_.batt_soc = std::move(arg);
    return Init_Bms_batt_temp(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_batt_curr
{
public:
  explicit Init_Bms_batt_curr(::protocol::msg::Bms & msg)
  : msg_(msg)
  {}
  Init_Bms_batt_soc batt_curr(::protocol::msg::Bms::_batt_curr_type arg)
  {
    msg_.batt_curr = std::move(arg);
    return Init_Bms_batt_soc(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

class Init_Bms_batt_volt
{
public:
  Init_Bms_batt_volt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bms_batt_curr batt_volt(::protocol::msg::Bms::_batt_volt_type arg)
  {
    msg_.batt_volt = std::move(arg);
    return Init_Bms_batt_curr(msg_);
  }

private:
  ::protocol::msg::Bms msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::Bms>()
{
  return protocol::msg::builder::Init_Bms_batt_volt();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BMS__BUILDER_HPP_
