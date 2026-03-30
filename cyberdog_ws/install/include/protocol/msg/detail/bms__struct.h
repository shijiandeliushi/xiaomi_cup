// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/Bms.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BMS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__BMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Bms in the package protocol.
typedef struct protocol__msg__Bms
{
  uint16_t batt_volt;
  int16_t batt_curr;
  uint8_t batt_soc;
  int16_t batt_temp;
  uint8_t batt_st;
  uint8_t key_val;
  uint8_t disable_charge;
  uint8_t power_supply;
  uint8_t buzze;
  uint8_t status;
  int8_t batt_health;
  int16_t batt_loop_number;
  int8_t powerboard_status;
} protocol__msg__Bms;

// Struct for a sequence of protocol__msg__Bms.
typedef struct protocol__msg__Bms__Sequence
{
  protocol__msg__Bms * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__Bms__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__BMS__STRUCT_H_
