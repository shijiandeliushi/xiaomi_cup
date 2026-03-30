// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/BmsStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BMS_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__BMS_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/bms_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_BmsStatus_dsg_mos_fault
{
public:
  explicit Init_BmsStatus_dsg_mos_fault(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::BmsStatus dsg_mos_fault(::protocol::msg::BmsStatus::_dsg_mos_fault_type arg)
  {
    msg_.dsg_mos_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_chg_mos_fault
{
public:
  explicit Init_BmsStatus_chg_mos_fault(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_dsg_mos_fault chg_mos_fault(::protocol::msg::BmsStatus::_chg_mos_fault_type arg)
  {
    msg_.chg_mos_fault = std::move(arg);
    return Init_BmsStatus_dsg_mos_fault(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_discharge_mos_state
{
public:
  explicit Init_BmsStatus_discharge_mos_state(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_chg_mos_fault discharge_mos_state(::protocol::msg::BmsStatus::_discharge_mos_state_type arg)
  {
    msg_.discharge_mos_state = std::move(arg);
    return Init_BmsStatus_chg_mos_fault(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_charge_mos_state
{
public:
  explicit Init_BmsStatus_charge_mos_state(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_discharge_mos_state charge_mos_state(::protocol::msg::BmsStatus::_charge_mos_state_type arg)
  {
    msg_.charge_mos_state = std::move(arg);
    return Init_BmsStatus_discharge_mos_state(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_charge_under_temp
{
public:
  explicit Init_BmsStatus_charge_under_temp(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_charge_mos_state charge_under_temp(::protocol::msg::BmsStatus::_charge_under_temp_type arg)
  {
    msg_.charge_under_temp = std::move(arg);
    return Init_BmsStatus_charge_mos_state(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_charge_over_temp
{
public:
  explicit Init_BmsStatus_charge_over_temp(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_charge_under_temp charge_over_temp(::protocol::msg::BmsStatus::_charge_over_temp_type arg)
  {
    msg_.charge_over_temp = std::move(arg);
    return Init_BmsStatus_charge_under_temp(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_discharge_under_tmp
{
public:
  explicit Init_BmsStatus_discharge_under_tmp(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_charge_over_temp discharge_under_tmp(::protocol::msg::BmsStatus::_discharge_under_tmp_type arg)
  {
    msg_.discharge_under_tmp = std::move(arg);
    return Init_BmsStatus_charge_over_temp(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_discharge_over_tmp
{
public:
  explicit Init_BmsStatus_discharge_over_tmp(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_discharge_under_tmp discharge_over_tmp(::protocol::msg::BmsStatus::_discharge_over_tmp_type arg)
  {
    msg_.discharge_over_tmp = std::move(arg);
    return Init_BmsStatus_discharge_under_tmp(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_fuse
{
public:
  explicit Init_BmsStatus_fuse(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_discharge_over_tmp fuse(::protocol::msg::BmsStatus::_fuse_type arg)
  {
    msg_.fuse = std::move(arg);
    return Init_BmsStatus_discharge_over_tmp(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_discharge_short
{
public:
  explicit Init_BmsStatus_discharge_short(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_fuse discharge_short(::protocol::msg::BmsStatus::_discharge_short_type arg)
  {
    msg_.discharge_short = std::move(arg);
    return Init_BmsStatus_fuse(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_mos_over_temp
{
public:
  explicit Init_BmsStatus_mos_over_temp(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_discharge_short mos_over_temp(::protocol::msg::BmsStatus::_mos_over_temp_type arg)
  {
    msg_.mos_over_temp = std::move(arg);
    return Init_BmsStatus_discharge_short(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_cell_volt_abnormal
{
public:
  explicit Init_BmsStatus_cell_volt_abnormal(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_mos_over_temp cell_volt_abnormal(::protocol::msg::BmsStatus::_cell_volt_abnormal_type arg)
  {
    msg_.cell_volt_abnormal = std::move(arg);
    return Init_BmsStatus_mos_over_temp(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_cell_under_voltage
{
public:
  explicit Init_BmsStatus_cell_under_voltage(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_cell_volt_abnormal cell_under_voltage(::protocol::msg::BmsStatus::_cell_under_voltage_type arg)
  {
    msg_.cell_under_voltage = std::move(arg);
    return Init_BmsStatus_cell_volt_abnormal(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_cell_over_voltage
{
public:
  explicit Init_BmsStatus_cell_over_voltage(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_cell_under_voltage cell_over_voltage(::protocol::msg::BmsStatus::_cell_over_voltage_type arg)
  {
    msg_.cell_over_voltage = std::move(arg);
    return Init_BmsStatus_cell_under_voltage(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_discharge_over_current
{
public:
  explicit Init_BmsStatus_discharge_over_current(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_cell_over_voltage discharge_over_current(::protocol::msg::BmsStatus::_discharge_over_current_type arg)
  {
    msg_.discharge_over_current = std::move(arg);
    return Init_BmsStatus_cell_over_voltage(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_charge_over_current
{
public:
  explicit Init_BmsStatus_charge_over_current(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_discharge_over_current charge_over_current(::protocol::msg::BmsStatus::_charge_over_current_type arg)
  {
    msg_.charge_over_current = std::move(arg);
    return Init_BmsStatus_discharge_over_current(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_expower_supply
{
public:
  explicit Init_BmsStatus_power_expower_supply(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_charge_over_current power_expower_supply(::protocol::msg::BmsStatus::_power_expower_supply_type arg)
  {
    msg_.power_expower_supply = std::move(arg);
    return Init_BmsStatus_charge_over_current(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_wp_charging
{
public:
  explicit Init_BmsStatus_power_wp_charging(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_expower_supply power_wp_charging(::protocol::msg::BmsStatus::_power_wp_charging_type arg)
  {
    msg_.power_wp_charging = std::move(arg);
    return Init_BmsStatus_power_expower_supply(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_wp_place
{
public:
  explicit Init_BmsStatus_power_wp_place(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_wp_charging power_wp_place(::protocol::msg::BmsStatus::_power_wp_place_type arg)
  {
    msg_.power_wp_place = std::move(arg);
    return Init_BmsStatus_power_wp_charging(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_soft_shutdown
{
public:
  explicit Init_BmsStatus_power_soft_shutdown(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_wp_place power_soft_shutdown(::protocol::msg::BmsStatus::_power_soft_shutdown_type arg)
  {
    msg_.power_soft_shutdown = std::move(arg);
    return Init_BmsStatus_power_wp_place(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_motor_shutdown
{
public:
  explicit Init_BmsStatus_power_motor_shutdown(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_soft_shutdown power_motor_shutdown(::protocol::msg::BmsStatus::_power_motor_shutdown_type arg)
  {
    msg_.power_motor_shutdown = std::move(arg);
    return Init_BmsStatus_power_soft_shutdown(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_finished_charging
{
public:
  explicit Init_BmsStatus_power_finished_charging(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_motor_shutdown power_finished_charging(::protocol::msg::BmsStatus::_power_finished_charging_type arg)
  {
    msg_.power_finished_charging = std::move(arg);
    return Init_BmsStatus_power_motor_shutdown(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_wired_charging
{
public:
  explicit Init_BmsStatus_power_wired_charging(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_finished_charging power_wired_charging(::protocol::msg::BmsStatus::_power_wired_charging_type arg)
  {
    msg_.power_wired_charging = std::move(arg);
    return Init_BmsStatus_power_finished_charging(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_normal
{
public:
  explicit Init_BmsStatus_power_normal(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_wired_charging power_normal(::protocol::msg::BmsStatus::_power_normal_type arg)
  {
    msg_.power_normal = std::move(arg);
    return Init_BmsStatus_power_wired_charging(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_batt_loop_number
{
public:
  explicit Init_BmsStatus_batt_loop_number(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_normal batt_loop_number(::protocol::msg::BmsStatus::_batt_loop_number_type arg)
  {
    msg_.batt_loop_number = std::move(arg);
    return Init_BmsStatus_power_normal(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_batt_health
{
public:
  explicit Init_BmsStatus_batt_health(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_batt_loop_number batt_health(::protocol::msg::BmsStatus::_batt_health_type arg)
  {
    msg_.batt_health = std::move(arg);
    return Init_BmsStatus_batt_loop_number(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_bms_state_two
{
public:
  explicit Init_BmsStatus_bms_state_two(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_batt_health bms_state_two(::protocol::msg::BmsStatus::_bms_state_two_type arg)
  {
    msg_.bms_state_two = std::move(arg);
    return Init_BmsStatus_batt_health(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_bms_state_one
{
public:
  explicit Init_BmsStatus_bms_state_one(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bms_state_two bms_state_one(::protocol::msg::BmsStatus::_bms_state_one_type arg)
  {
    msg_.bms_state_one = std::move(arg);
    return Init_BmsStatus_bms_state_two(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_batt_st
{
public:
  explicit Init_BmsStatus_batt_st(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_bms_state_one batt_st(::protocol::msg::BmsStatus::_batt_st_type arg)
  {
    msg_.batt_st = std::move(arg);
    return Init_BmsStatus_bms_state_one(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_wireless_charging_temp
{
public:
  explicit Init_BmsStatus_wireless_charging_temp(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_batt_st wireless_charging_temp(::protocol::msg::BmsStatus::_wireless_charging_temp_type arg)
  {
    msg_.wireless_charging_temp = std::move(arg);
    return Init_BmsStatus_batt_st(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_power_adapter_temp
{
public:
  explicit Init_BmsStatus_power_adapter_temp(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_wireless_charging_temp power_adapter_temp(::protocol::msg::BmsStatus::_power_adapter_temp_type arg)
  {
    msg_.power_adapter_temp = std::move(arg);
    return Init_BmsStatus_wireless_charging_temp(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_batt_temp
{
public:
  explicit Init_BmsStatus_batt_temp(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_power_adapter_temp batt_temp(::protocol::msg::BmsStatus::_batt_temp_type arg)
  {
    msg_.batt_temp = std::move(arg);
    return Init_BmsStatus_power_adapter_temp(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_batt_soc
{
public:
  explicit Init_BmsStatus_batt_soc(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_batt_temp batt_soc(::protocol::msg::BmsStatus::_batt_soc_type arg)
  {
    msg_.batt_soc = std::move(arg);
    return Init_BmsStatus_batt_temp(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_batt_curr
{
public:
  explicit Init_BmsStatus_batt_curr(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_batt_soc batt_curr(::protocol::msg::BmsStatus::_batt_curr_type arg)
  {
    msg_.batt_curr = std::move(arg);
    return Init_BmsStatus_batt_soc(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_batt_volt
{
public:
  explicit Init_BmsStatus_batt_volt(::protocol::msg::BmsStatus & msg)
  : msg_(msg)
  {}
  Init_BmsStatus_batt_curr batt_volt(::protocol::msg::BmsStatus::_batt_volt_type arg)
  {
    msg_.batt_volt = std::move(arg);
    return Init_BmsStatus_batt_curr(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

class Init_BmsStatus_header
{
public:
  Init_BmsStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsStatus_batt_volt header(::protocol::msg::BmsStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BmsStatus_batt_volt(msg_);
  }

private:
  ::protocol::msg::BmsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::BmsStatus>()
{
  return protocol::msg::builder::Init_BmsStatus_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BMS_STATUS__BUILDER_HPP_
