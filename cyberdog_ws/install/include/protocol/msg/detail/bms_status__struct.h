// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/BmsStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BMS_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__BMS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/BmsStatus in the package protocol.
typedef struct protocol__msg__BmsStatus
{
  std_msgs__msg__Header header;
  uint16_t batt_volt;
  int16_t batt_curr;
  uint8_t batt_soc;
  int16_t batt_temp;
  int16_t power_adapter_temp;
  int16_t wireless_charging_temp;
  uint8_t batt_st;
  uint8_t bms_state_one;
  uint8_t bms_state_two;
  int8_t batt_health;
  int16_t batt_loop_number;
  bool power_normal;
  bool power_wired_charging;
  bool power_finished_charging;
  bool power_motor_shutdown;
  bool power_soft_shutdown;
  bool power_wp_place;
  bool power_wp_charging;
  bool power_expower_supply;
  bool charge_over_current;
  bool discharge_over_current;
  bool cell_over_voltage;
  bool cell_under_voltage;
  bool cell_volt_abnormal;
  bool mos_over_temp;
  bool discharge_short;
  bool fuse;
  bool discharge_over_tmp;
  bool discharge_under_tmp;
  bool charge_over_temp;
  bool charge_under_temp;
  bool charge_mos_state;
  bool discharge_mos_state;
  bool chg_mos_fault;
  bool dsg_mos_fault;
} protocol__msg__BmsStatus;

// Struct for a sequence of protocol__msg__BmsStatus.
typedef struct protocol__msg__BmsStatus__Sequence
{
  protocol__msg__BmsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__BmsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__BMS_STATUS__STRUCT_H_
