// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/BmsStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BMS_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__BMS_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__BmsStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__BmsStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BmsStatus_
{
  using Type = BmsStatus_<ContainerAllocator>;

  explicit BmsStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->batt_volt = 0;
      this->batt_curr = 0;
      this->batt_soc = 0;
      this->batt_temp = 0;
      this->power_adapter_temp = 0;
      this->wireless_charging_temp = 0;
      this->batt_st = 0;
      this->bms_state_one = 0;
      this->bms_state_two = 0;
      this->batt_health = 0;
      this->batt_loop_number = 0;
      this->power_normal = false;
      this->power_wired_charging = false;
      this->power_finished_charging = false;
      this->power_motor_shutdown = false;
      this->power_soft_shutdown = false;
      this->power_wp_place = false;
      this->power_wp_charging = false;
      this->power_expower_supply = false;
      this->charge_over_current = false;
      this->discharge_over_current = false;
      this->cell_over_voltage = false;
      this->cell_under_voltage = false;
      this->cell_volt_abnormal = false;
      this->mos_over_temp = false;
      this->discharge_short = false;
      this->fuse = false;
      this->discharge_over_tmp = false;
      this->discharge_under_tmp = false;
      this->charge_over_temp = false;
      this->charge_under_temp = false;
      this->charge_mos_state = false;
      this->discharge_mos_state = false;
      this->chg_mos_fault = false;
      this->dsg_mos_fault = false;
    }
  }

  explicit BmsStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->batt_volt = 0;
      this->batt_curr = 0;
      this->batt_soc = 0;
      this->batt_temp = 0;
      this->power_adapter_temp = 0;
      this->wireless_charging_temp = 0;
      this->batt_st = 0;
      this->bms_state_one = 0;
      this->bms_state_two = 0;
      this->batt_health = 0;
      this->batt_loop_number = 0;
      this->power_normal = false;
      this->power_wired_charging = false;
      this->power_finished_charging = false;
      this->power_motor_shutdown = false;
      this->power_soft_shutdown = false;
      this->power_wp_place = false;
      this->power_wp_charging = false;
      this->power_expower_supply = false;
      this->charge_over_current = false;
      this->discharge_over_current = false;
      this->cell_over_voltage = false;
      this->cell_under_voltage = false;
      this->cell_volt_abnormal = false;
      this->mos_over_temp = false;
      this->discharge_short = false;
      this->fuse = false;
      this->discharge_over_tmp = false;
      this->discharge_under_tmp = false;
      this->charge_over_temp = false;
      this->charge_under_temp = false;
      this->charge_mos_state = false;
      this->discharge_mos_state = false;
      this->chg_mos_fault = false;
      this->dsg_mos_fault = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _batt_volt_type =
    uint16_t;
  _batt_volt_type batt_volt;
  using _batt_curr_type =
    int16_t;
  _batt_curr_type batt_curr;
  using _batt_soc_type =
    uint8_t;
  _batt_soc_type batt_soc;
  using _batt_temp_type =
    int16_t;
  _batt_temp_type batt_temp;
  using _power_adapter_temp_type =
    int16_t;
  _power_adapter_temp_type power_adapter_temp;
  using _wireless_charging_temp_type =
    int16_t;
  _wireless_charging_temp_type wireless_charging_temp;
  using _batt_st_type =
    uint8_t;
  _batt_st_type batt_st;
  using _bms_state_one_type =
    uint8_t;
  _bms_state_one_type bms_state_one;
  using _bms_state_two_type =
    uint8_t;
  _bms_state_two_type bms_state_two;
  using _batt_health_type =
    int8_t;
  _batt_health_type batt_health;
  using _batt_loop_number_type =
    int16_t;
  _batt_loop_number_type batt_loop_number;
  using _power_normal_type =
    bool;
  _power_normal_type power_normal;
  using _power_wired_charging_type =
    bool;
  _power_wired_charging_type power_wired_charging;
  using _power_finished_charging_type =
    bool;
  _power_finished_charging_type power_finished_charging;
  using _power_motor_shutdown_type =
    bool;
  _power_motor_shutdown_type power_motor_shutdown;
  using _power_soft_shutdown_type =
    bool;
  _power_soft_shutdown_type power_soft_shutdown;
  using _power_wp_place_type =
    bool;
  _power_wp_place_type power_wp_place;
  using _power_wp_charging_type =
    bool;
  _power_wp_charging_type power_wp_charging;
  using _power_expower_supply_type =
    bool;
  _power_expower_supply_type power_expower_supply;
  using _charge_over_current_type =
    bool;
  _charge_over_current_type charge_over_current;
  using _discharge_over_current_type =
    bool;
  _discharge_over_current_type discharge_over_current;
  using _cell_over_voltage_type =
    bool;
  _cell_over_voltage_type cell_over_voltage;
  using _cell_under_voltage_type =
    bool;
  _cell_under_voltage_type cell_under_voltage;
  using _cell_volt_abnormal_type =
    bool;
  _cell_volt_abnormal_type cell_volt_abnormal;
  using _mos_over_temp_type =
    bool;
  _mos_over_temp_type mos_over_temp;
  using _discharge_short_type =
    bool;
  _discharge_short_type discharge_short;
  using _fuse_type =
    bool;
  _fuse_type fuse;
  using _discharge_over_tmp_type =
    bool;
  _discharge_over_tmp_type discharge_over_tmp;
  using _discharge_under_tmp_type =
    bool;
  _discharge_under_tmp_type discharge_under_tmp;
  using _charge_over_temp_type =
    bool;
  _charge_over_temp_type charge_over_temp;
  using _charge_under_temp_type =
    bool;
  _charge_under_temp_type charge_under_temp;
  using _charge_mos_state_type =
    bool;
  _charge_mos_state_type charge_mos_state;
  using _discharge_mos_state_type =
    bool;
  _discharge_mos_state_type discharge_mos_state;
  using _chg_mos_fault_type =
    bool;
  _chg_mos_fault_type chg_mos_fault;
  using _dsg_mos_fault_type =
    bool;
  _dsg_mos_fault_type dsg_mos_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__batt_volt(
    const uint16_t & _arg)
  {
    this->batt_volt = _arg;
    return *this;
  }
  Type & set__batt_curr(
    const int16_t & _arg)
  {
    this->batt_curr = _arg;
    return *this;
  }
  Type & set__batt_soc(
    const uint8_t & _arg)
  {
    this->batt_soc = _arg;
    return *this;
  }
  Type & set__batt_temp(
    const int16_t & _arg)
  {
    this->batt_temp = _arg;
    return *this;
  }
  Type & set__power_adapter_temp(
    const int16_t & _arg)
  {
    this->power_adapter_temp = _arg;
    return *this;
  }
  Type & set__wireless_charging_temp(
    const int16_t & _arg)
  {
    this->wireless_charging_temp = _arg;
    return *this;
  }
  Type & set__batt_st(
    const uint8_t & _arg)
  {
    this->batt_st = _arg;
    return *this;
  }
  Type & set__bms_state_one(
    const uint8_t & _arg)
  {
    this->bms_state_one = _arg;
    return *this;
  }
  Type & set__bms_state_two(
    const uint8_t & _arg)
  {
    this->bms_state_two = _arg;
    return *this;
  }
  Type & set__batt_health(
    const int8_t & _arg)
  {
    this->batt_health = _arg;
    return *this;
  }
  Type & set__batt_loop_number(
    const int16_t & _arg)
  {
    this->batt_loop_number = _arg;
    return *this;
  }
  Type & set__power_normal(
    const bool & _arg)
  {
    this->power_normal = _arg;
    return *this;
  }
  Type & set__power_wired_charging(
    const bool & _arg)
  {
    this->power_wired_charging = _arg;
    return *this;
  }
  Type & set__power_finished_charging(
    const bool & _arg)
  {
    this->power_finished_charging = _arg;
    return *this;
  }
  Type & set__power_motor_shutdown(
    const bool & _arg)
  {
    this->power_motor_shutdown = _arg;
    return *this;
  }
  Type & set__power_soft_shutdown(
    const bool & _arg)
  {
    this->power_soft_shutdown = _arg;
    return *this;
  }
  Type & set__power_wp_place(
    const bool & _arg)
  {
    this->power_wp_place = _arg;
    return *this;
  }
  Type & set__power_wp_charging(
    const bool & _arg)
  {
    this->power_wp_charging = _arg;
    return *this;
  }
  Type & set__power_expower_supply(
    const bool & _arg)
  {
    this->power_expower_supply = _arg;
    return *this;
  }
  Type & set__charge_over_current(
    const bool & _arg)
  {
    this->charge_over_current = _arg;
    return *this;
  }
  Type & set__discharge_over_current(
    const bool & _arg)
  {
    this->discharge_over_current = _arg;
    return *this;
  }
  Type & set__cell_over_voltage(
    const bool & _arg)
  {
    this->cell_over_voltage = _arg;
    return *this;
  }
  Type & set__cell_under_voltage(
    const bool & _arg)
  {
    this->cell_under_voltage = _arg;
    return *this;
  }
  Type & set__cell_volt_abnormal(
    const bool & _arg)
  {
    this->cell_volt_abnormal = _arg;
    return *this;
  }
  Type & set__mos_over_temp(
    const bool & _arg)
  {
    this->mos_over_temp = _arg;
    return *this;
  }
  Type & set__discharge_short(
    const bool & _arg)
  {
    this->discharge_short = _arg;
    return *this;
  }
  Type & set__fuse(
    const bool & _arg)
  {
    this->fuse = _arg;
    return *this;
  }
  Type & set__discharge_over_tmp(
    const bool & _arg)
  {
    this->discharge_over_tmp = _arg;
    return *this;
  }
  Type & set__discharge_under_tmp(
    const bool & _arg)
  {
    this->discharge_under_tmp = _arg;
    return *this;
  }
  Type & set__charge_over_temp(
    const bool & _arg)
  {
    this->charge_over_temp = _arg;
    return *this;
  }
  Type & set__charge_under_temp(
    const bool & _arg)
  {
    this->charge_under_temp = _arg;
    return *this;
  }
  Type & set__charge_mos_state(
    const bool & _arg)
  {
    this->charge_mos_state = _arg;
    return *this;
  }
  Type & set__discharge_mos_state(
    const bool & _arg)
  {
    this->discharge_mos_state = _arg;
    return *this;
  }
  Type & set__chg_mos_fault(
    const bool & _arg)
  {
    this->chg_mos_fault = _arg;
    return *this;
  }
  Type & set__dsg_mos_fault(
    const bool & _arg)
  {
    this->dsg_mos_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::BmsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::BmsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::BmsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::BmsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::BmsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::BmsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::BmsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::BmsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::BmsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::BmsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__BmsStatus
    std::shared_ptr<protocol::msg::BmsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__BmsStatus
    std::shared_ptr<protocol::msg::BmsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->batt_volt != other.batt_volt) {
      return false;
    }
    if (this->batt_curr != other.batt_curr) {
      return false;
    }
    if (this->batt_soc != other.batt_soc) {
      return false;
    }
    if (this->batt_temp != other.batt_temp) {
      return false;
    }
    if (this->power_adapter_temp != other.power_adapter_temp) {
      return false;
    }
    if (this->wireless_charging_temp != other.wireless_charging_temp) {
      return false;
    }
    if (this->batt_st != other.batt_st) {
      return false;
    }
    if (this->bms_state_one != other.bms_state_one) {
      return false;
    }
    if (this->bms_state_two != other.bms_state_two) {
      return false;
    }
    if (this->batt_health != other.batt_health) {
      return false;
    }
    if (this->batt_loop_number != other.batt_loop_number) {
      return false;
    }
    if (this->power_normal != other.power_normal) {
      return false;
    }
    if (this->power_wired_charging != other.power_wired_charging) {
      return false;
    }
    if (this->power_finished_charging != other.power_finished_charging) {
      return false;
    }
    if (this->power_motor_shutdown != other.power_motor_shutdown) {
      return false;
    }
    if (this->power_soft_shutdown != other.power_soft_shutdown) {
      return false;
    }
    if (this->power_wp_place != other.power_wp_place) {
      return false;
    }
    if (this->power_wp_charging != other.power_wp_charging) {
      return false;
    }
    if (this->power_expower_supply != other.power_expower_supply) {
      return false;
    }
    if (this->charge_over_current != other.charge_over_current) {
      return false;
    }
    if (this->discharge_over_current != other.discharge_over_current) {
      return false;
    }
    if (this->cell_over_voltage != other.cell_over_voltage) {
      return false;
    }
    if (this->cell_under_voltage != other.cell_under_voltage) {
      return false;
    }
    if (this->cell_volt_abnormal != other.cell_volt_abnormal) {
      return false;
    }
    if (this->mos_over_temp != other.mos_over_temp) {
      return false;
    }
    if (this->discharge_short != other.discharge_short) {
      return false;
    }
    if (this->fuse != other.fuse) {
      return false;
    }
    if (this->discharge_over_tmp != other.discharge_over_tmp) {
      return false;
    }
    if (this->discharge_under_tmp != other.discharge_under_tmp) {
      return false;
    }
    if (this->charge_over_temp != other.charge_over_temp) {
      return false;
    }
    if (this->charge_under_temp != other.charge_under_temp) {
      return false;
    }
    if (this->charge_mos_state != other.charge_mos_state) {
      return false;
    }
    if (this->discharge_mos_state != other.discharge_mos_state) {
      return false;
    }
    if (this->chg_mos_fault != other.chg_mos_fault) {
      return false;
    }
    if (this->dsg_mos_fault != other.dsg_mos_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsStatus_

// alias to use template instance with default allocator
using BmsStatus =
  protocol::msg::BmsStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BMS_STATUS__STRUCT_HPP_
