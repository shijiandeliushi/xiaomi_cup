// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/Bms.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/bms__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
protocol__msg__Bms__init(protocol__msg__Bms * msg)
{
  if (!msg) {
    return false;
  }
  // batt_volt
  // batt_curr
  // batt_soc
  // batt_temp
  // batt_st
  // key_val
  // disable_charge
  // power_supply
  // buzze
  // status
  // batt_health
  // batt_loop_number
  // powerboard_status
  return true;
}

void
protocol__msg__Bms__fini(protocol__msg__Bms * msg)
{
  if (!msg) {
    return;
  }
  // batt_volt
  // batt_curr
  // batt_soc
  // batt_temp
  // batt_st
  // key_val
  // disable_charge
  // power_supply
  // buzze
  // status
  // batt_health
  // batt_loop_number
  // powerboard_status
}

bool
protocol__msg__Bms__are_equal(const protocol__msg__Bms * lhs, const protocol__msg__Bms * rhs)
{
  if (!lhs || !rhs) {
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
  // batt_st
  if (lhs->batt_st != rhs->batt_st) {
    return false;
  }
  // key_val
  if (lhs->key_val != rhs->key_val) {
    return false;
  }
  // disable_charge
  if (lhs->disable_charge != rhs->disable_charge) {
    return false;
  }
  // power_supply
  if (lhs->power_supply != rhs->power_supply) {
    return false;
  }
  // buzze
  if (lhs->buzze != rhs->buzze) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
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
  // powerboard_status
  if (lhs->powerboard_status != rhs->powerboard_status) {
    return false;
  }
  return true;
}

bool
protocol__msg__Bms__copy(
  const protocol__msg__Bms * input,
  protocol__msg__Bms * output)
{
  if (!input || !output) {
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
  // batt_st
  output->batt_st = input->batt_st;
  // key_val
  output->key_val = input->key_val;
  // disable_charge
  output->disable_charge = input->disable_charge;
  // power_supply
  output->power_supply = input->power_supply;
  // buzze
  output->buzze = input->buzze;
  // status
  output->status = input->status;
  // batt_health
  output->batt_health = input->batt_health;
  // batt_loop_number
  output->batt_loop_number = input->batt_loop_number;
  // powerboard_status
  output->powerboard_status = input->powerboard_status;
  return true;
}

protocol__msg__Bms *
protocol__msg__Bms__create()
{
  protocol__msg__Bms * msg = (protocol__msg__Bms *)malloc(sizeof(protocol__msg__Bms));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__Bms));
  bool success = protocol__msg__Bms__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__Bms__destroy(protocol__msg__Bms * msg)
{
  if (msg) {
    protocol__msg__Bms__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__Bms__Sequence__init(protocol__msg__Bms__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__Bms * data = NULL;
  if (size) {
    data = (protocol__msg__Bms *)calloc(size, sizeof(protocol__msg__Bms));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__Bms__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__Bms__fini(&data[i - 1]);
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
protocol__msg__Bms__Sequence__fini(protocol__msg__Bms__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__Bms__fini(&array->data[i]);
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

protocol__msg__Bms__Sequence *
protocol__msg__Bms__Sequence__create(size_t size)
{
  protocol__msg__Bms__Sequence * array = (protocol__msg__Bms__Sequence *)malloc(sizeof(protocol__msg__Bms__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__Bms__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__Bms__Sequence__destroy(protocol__msg__Bms__Sequence * array)
{
  if (array) {
    protocol__msg__Bms__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__Bms__Sequence__are_equal(const protocol__msg__Bms__Sequence * lhs, const protocol__msg__Bms__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__Bms__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__Bms__Sequence__copy(
  const protocol__msg__Bms__Sequence * input,
  protocol__msg__Bms__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__Bms);
    protocol__msg__Bms * data =
      (protocol__msg__Bms *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__Bms__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__Bms__fini(&data[i]);
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
    if (!protocol__msg__Bms__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
