// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/BLEInfo.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/ble_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `mac`
// Member `name`
// Member `addr_type`
// Member `firmware_version`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__BLEInfo__init(protocol__msg__BLEInfo * msg)
{
  if (!msg) {
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__init(&msg->mac)) {
    protocol__msg__BLEInfo__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    protocol__msg__BLEInfo__fini(msg);
    return false;
  }
  // addr_type
  if (!rosidl_runtime_c__String__init(&msg->addr_type)) {
    protocol__msg__BLEInfo__fini(msg);
    return false;
  }
  // device_type
  // battery_level
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    protocol__msg__BLEInfo__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__BLEInfo__fini(protocol__msg__BLEInfo * msg)
{
  if (!msg) {
    return;
  }
  // mac
  rosidl_runtime_c__String__fini(&msg->mac);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // addr_type
  rosidl_runtime_c__String__fini(&msg->addr_type);
  // device_type
  // battery_level
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
}

bool
protocol__msg__BLEInfo__are_equal(const protocol__msg__BLEInfo * lhs, const protocol__msg__BLEInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mac), &(rhs->mac)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // addr_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->addr_type), &(rhs->addr_type)))
  {
    return false;
  }
  // device_type
  if (lhs->device_type != rhs->device_type) {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__BLEInfo__copy(
  const protocol__msg__BLEInfo * input,
  protocol__msg__BLEInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__copy(
      &(input->mac), &(output->mac)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // addr_type
  if (!rosidl_runtime_c__String__copy(
      &(input->addr_type), &(output->addr_type)))
  {
    return false;
  }
  // device_type
  output->device_type = input->device_type;
  // battery_level
  output->battery_level = input->battery_level;
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  return true;
}

protocol__msg__BLEInfo *
protocol__msg__BLEInfo__create()
{
  protocol__msg__BLEInfo * msg = (protocol__msg__BLEInfo *)malloc(sizeof(protocol__msg__BLEInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__BLEInfo));
  bool success = protocol__msg__BLEInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__BLEInfo__destroy(protocol__msg__BLEInfo * msg)
{
  if (msg) {
    protocol__msg__BLEInfo__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__BLEInfo__Sequence__init(protocol__msg__BLEInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__BLEInfo * data = NULL;
  if (size) {
    data = (protocol__msg__BLEInfo *)calloc(size, sizeof(protocol__msg__BLEInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__BLEInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__BLEInfo__fini(&data[i - 1]);
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
protocol__msg__BLEInfo__Sequence__fini(protocol__msg__BLEInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__BLEInfo__fini(&array->data[i]);
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

protocol__msg__BLEInfo__Sequence *
protocol__msg__BLEInfo__Sequence__create(size_t size)
{
  protocol__msg__BLEInfo__Sequence * array = (protocol__msg__BLEInfo__Sequence *)malloc(sizeof(protocol__msg__BLEInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__BLEInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__BLEInfo__Sequence__destroy(protocol__msg__BLEInfo__Sequence * array)
{
  if (array) {
    protocol__msg__BLEInfo__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__BLEInfo__Sequence__are_equal(const protocol__msg__BLEInfo__Sequence * lhs, const protocol__msg__BLEInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__BLEInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__BLEInfo__Sequence__copy(
  const protocol__msg__BLEInfo__Sequence * input,
  protocol__msg__BLEInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__BLEInfo);
    protocol__msg__BLEInfo * data =
      (protocol__msg__BLEInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__BLEInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__BLEInfo__fini(&data[i]);
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
    if (!protocol__msg__BLEInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
