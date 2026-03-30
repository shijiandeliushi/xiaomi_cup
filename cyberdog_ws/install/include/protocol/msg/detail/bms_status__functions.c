// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/BmsStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/bms_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
protocol__msg__BmsStatus__init(protocol__msg__BmsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    protocol__msg__BmsStatus__fini(msg);
    return false;
  }
  // batt_volt
  // batt_curr
  // batt_soc
  // batt_temp
  // power_adapter_temp
  // wireless_charging_temp
  // batt_st
  // bms_state_one
  // bms_state_two
  // batt_health
  // batt_loop_number
  // power_normal
  // power_wired_charging
  // power_finished_charging
  // power_motor_shutdown
  // power_soft_shutdown
  // power_wp_place
  // power_wp_charging
  // power_expower_supply
  // charge_over_current
  // discharge_over_current
  // cell_over_voltage
  // cell_under_voltage
  // cell_volt_abnormal
  // mos_over_temp
  // discharge_short
  // fuse
  // discharge_over_tmp
  // discharge_under_tmp
  // charge_over_temp
  // charge_under_temp
  // charge_mos_state
  // discharge_mos_state
  // chg_mos_fault
  // dsg_mos_fault
  return true;
}

void
protocol__msg__BmsStatus__fini(protocol__msg__BmsStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // batt_volt
  // batt_curr
  // batt_soc
  // batt_temp
  // power_adapter_temp
  // wireless_charging_temp
  // batt_st
  // bms_state_one
  // bms_state_two
  // batt_health
  // batt_loop_number
  // power_normal
  // power_wired_charging
  // power_finished_charging
  // power_motor_shutdown
  // power_soft_shutdown
  // power_wp_place
  // power_wp_charging
  // power_expower_supply
  // charge_over_current
  // discharge_over_current
  // cell_over_voltage
  // cell_under_voltage
  // cell_volt_abnormal
  // mos_over_temp
  // discharge_short
  // fuse
  // discharge_over_tmp
  // discharge_under_tmp
  // charge_over_temp
  // charge_under_temp
  // charge_mos_state
  // discharge_mos_state
  // chg_mos_fault
  // dsg_mos_fault
}

bool
protocol__msg__BmsStatus__are_equal(const protocol__msg__BmsStatus * lhs, const protocol__msg__BmsStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // batt_volt
  if (lhs->batt_volt != rhs->batt_volt) {
    return false;
  }
  // batt_curr
  if (lhs->batt_curr != rhs->batt_curr) {
    return false;
  }
  // batt_soc
  if (lhs->batt_soc != rhs->batt_soc) {
    return false;
  }
  // batt_temp
  if (lhs->batt_temp != rhs->batt_temp) {
    return false;
  }
  // power_adapter_temp
  if (lhs->power_adapter_temp != rhs->power_adapter_temp) {
    return false;
  }
  // wireless_charging_temp
  if (lhs->wireless_charging_temp != rhs->wireless_charging_temp) {
    return false;
  }
  // batt_st
  if (lhs->batt_st != rhs->batt_st) {
    return false;
  }
  // bms_state_one
  if (lhs->bms_state_one != rhs->bms_state_one) {
    return false;
  }
  // bms_state_two
  if (lhs->bms_state_two != rhs->bms_state_two) {
    return false;
  }
  // batt_health
  if (lhs->batt_health != rhs->batt_health) {
    return false;
  }
  // batt_loop_number
  if (lhs->batt_loop_number != rhs->batt_loop_number) {
    return false;
  }
  // power_normal
  if (lhs->power_normal != rhs->power_normal) {
    return false;
  }
  // power_wired_charging
  if (lhs->power_wired_charging != rhs->power_wired_charging) {
    return false;
  }
  // power_finished_charging
  if (lhs->power_finished_charging != rhs->power_finished_charging) {
    return false;
  }
  // power_motor_shutdown
  if (lhs->power_motor_shutdown != rhs->power_motor_shutdown) {
    return false;
  }
  // power_soft_shutdown
  if (lhs->power_soft_shutdown != rhs->power_soft_shutdown) {
    return false;
  }
  // power_wp_place
  if (lhs->power_wp_place != rhs->power_wp_place) {
    return false;
  }
  // power_wp_charging
  if (lhs->power_wp_charging != rhs->power_wp_charging) {
    return false;
  }
  // power_expower_supply
  if (lhs->power_expower_supply != rhs->power_expower_supply) {
    return false;
  }
  // charge_over_current
  if (lhs->charge_over_current != rhs->charge_over_current) {
    return false;
  }
  // discharge_over_current
  if (lhs->discharge_over_current != rhs->discharge_over_current) {
    return false;
  }
  // cell_over_voltage
  if (lhs->cell_over_voltage != rhs->cell_over_voltage) {
    return false;
  }
  // cell_under_voltage
  if (lhs->cell_under_voltage != rhs->cell_under_voltage) {
    return false;
  }
  // cell_volt_abnormal
  if (lhs->cell_volt_abnormal != rhs->cell_volt_abnormal) {
    return false;
  }
  // mos_over_temp
  if (lhs->mos_over_temp != rhs->mos_over_temp) {
    return false;
  }
  // discharge_short
  if (lhs->discharge_short != rhs->discharge_short) {
    return false;
  }
  // fuse
  if (lhs->fuse != rhs->fuse) {
    return false;
  }
  // discharge_over_tmp
  if (lhs->discharge_over_tmp != rhs->discharge_over_tmp) {
    return false;
  }
  // discharge_under_tmp
  if (lhs->discharge_under_tmp != rhs->discharge_under_tmp) {
    return false;
  }
  // charge_over_temp
  if (lhs->charge_over_temp != rhs->charge_over_temp) {
    return false;
  }
  // charge_under_temp
  if (lhs->charge_under_temp != rhs->charge_under_temp) {
    return false;
  }
  // charge_mos_state
  if (lhs->charge_mos_state != rhs->charge_mos_state) {
    return false;
  }
  // discharge_mos_state
  if (lhs->discharge_mos_state != rhs->discharge_mos_state) {
    return false;
  }
  // chg_mos_fault
  if (lhs->chg_mos_fault != rhs->chg_mos_fault) {
    return false;
  }
  // dsg_mos_fault
  if (lhs->dsg_mos_fault != rhs->dsg_mos_fault) {
    return false;
  }
  return true;
}

bool
protocol__msg__BmsStatus__copy(
  const protocol__msg__BmsStatus * input,
  protocol__msg__BmsStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // batt_volt
  output->batt_volt = input->batt_volt;
  // batt_curr
  output->batt_curr = input->batt_curr;
  // batt_soc
  output->batt_soc = input->batt_soc;
  // batt_temp
  output->batt_temp = input->batt_temp;
  // power_adapter_temp
  output->power_adapter_temp = input->power_adapter_temp;
  // wireless_charging_temp
  output->wireless_charging_temp = input->wireless_charging_temp;
  // batt_st
  output->batt_st = input->batt_st;
  // bms_state_one
  output->bms_state_one = input->bms_state_one;
  // bms_state_two
  output->bms_state_two = input->bms_state_two;
  // batt_health
  output->batt_health = input->batt_health;
  // batt_loop_number
  output->batt_loop_number = input->batt_loop_number;
  // power_normal
  output->power_normal = input->power_normal;
  // power_wired_charging
  output->power_wired_charging = input->power_wired_charging;
  // power_finished_charging
  output->power_finished_charging = input->power_finished_charging;
  // power_motor_shutdown
  output->power_motor_shutdown = input->power_motor_shutdown;
  // power_soft_shutdown
  output->power_soft_shutdown = input->power_soft_shutdown;
  // power_wp_place
  output->power_wp_place = input->power_wp_place;
  // power_wp_charging
  output->power_wp_charging = input->power_wp_charging;
  // power_expower_supply
  output->power_expower_supply = input->power_expower_supply;
  // charge_over_current
  output->charge_over_current = input->charge_over_current;
  // discharge_over_current
  output->discharge_over_current = input->discharge_over_current;
  // cell_over_voltage
  output->cell_over_voltage = input->cell_over_voltage;
  // cell_under_voltage
  output->cell_under_voltage = input->cell_under_voltage;
  // cell_volt_abnormal
  output->cell_volt_abnormal = input->cell_volt_abnormal;
  // mos_over_temp
  output->mos_over_temp = input->mos_over_temp;
  // discharge_short
  output->discharge_short = input->discharge_short;
  // fuse
  output->fuse = input->fuse;
  // discharge_over_tmp
  output->discharge_over_tmp = input->discharge_over_tmp;
  // discharge_under_tmp
  output->discharge_under_tmp = input->discharge_under_tmp;
  // charge_over_temp
  output->charge_over_temp = input->charge_over_temp;
  // charge_under_temp
  output->charge_under_temp = input->charge_under_temp;
  // charge_mos_state
  output->charge_mos_state = input->charge_mos_state;
  // discharge_mos_state
  output->discharge_mos_state = input->discharge_mos_state;
  // chg_mos_fault
  output->chg_mos_fault = input->chg_mos_fault;
  // dsg_mos_fault
  output->dsg_mos_fault = input->dsg_mos_fault;
  return true;
}

protocol__msg__BmsStatus *
protocol__msg__BmsStatus__create()
{
  protocol__msg__BmsStatus * msg = (protocol__msg__BmsStatus *)malloc(sizeof(protocol__msg__BmsStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__BmsStatus));
  bool success = protocol__msg__BmsStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__BmsStatus__destroy(protocol__msg__BmsStatus * msg)
{
  if (msg) {
    protocol__msg__BmsStatus__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__BmsStatus__Sequence__init(protocol__msg__BmsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__BmsStatus * data = NULL;
  if (size) {
    data = (protocol__msg__BmsStatus *)calloc(size, sizeof(protocol__msg__BmsStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__BmsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__BmsStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
protocol__msg__BmsStatus__Sequence__fini(protocol__msg__BmsStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__BmsStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

protocol__msg__BmsStatus__Sequence *
protocol__msg__BmsStatus__Sequence__create(size_t size)
{
  protocol__msg__BmsStatus__Sequence * array = (protocol__msg__BmsStatus__Sequence *)malloc(sizeof(protocol__msg__BmsStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__BmsStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__BmsStatus__Sequence__destroy(protocol__msg__BmsStatus__Sequence * array)
{
  if (array) {
    protocol__msg__BmsStatus__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__BmsStatus__Sequence__are_equal(const protocol__msg__BmsStatus__Sequence * lhs, const protocol__msg__BmsStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__BmsStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__BmsStatus__Sequence__copy(
  const protocol__msg__BmsStatus__Sequence * input,
  protocol__msg__BmsStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__BmsStatus);
    protocol__msg__BmsStatus * data =
      (protocol__msg__BmsStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__BmsStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__BmsStatus__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__BmsStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
