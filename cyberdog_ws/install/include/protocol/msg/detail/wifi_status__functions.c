// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/WifiStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/wifi_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `ip`
// Member `ssid`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__WifiStatus__init(protocol__msg__WifiStatus * msg)
{
  if (!msg) {
    return false;
  }
  // is_connected
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    protocol__msg__WifiStatus__fini(msg);
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__init(&msg->ssid)) {
    protocol__msg__WifiStatus__fini(msg);
    return false;
  }
  // strength
  return true;
}

void
protocol__msg__WifiStatus__fini(protocol__msg__WifiStatus * msg)
{
  if (!msg) {
    return;
  }
  // is_connected
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // ssid
  rosidl_runtime_c__String__fini(&msg->ssid);
  // strength
}

bool
protocol__msg__WifiStatus__are_equal(const protocol__msg__WifiStatus * lhs, const protocol__msg__WifiStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_connected
  if (lhs->is_connected != rhs->is_connected) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ssid), &(rhs->ssid)))
  {
    return false;
  }
  // strength
  if (lhs->strength != rhs->strength) {
    return false;
  }
  return true;
}

bool
protocol__msg__WifiStatus__copy(
  const protocol__msg__WifiStatus * input,
  protocol__msg__WifiStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // is_connected
  output->is_connected = input->is_connected;
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__copy(
      &(input->ssid), &(output->ssid)))
  {
    return false;
  }
  // strength
  output->strength = input->strength;
  return true;
}

protocol__msg__WifiStatus *
protocol__msg__WifiStatus__create()
{
  protocol__msg__WifiStatus * msg = (protocol__msg__WifiStatus *)malloc(sizeof(protocol__msg__WifiStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__WifiStatus));
  bool success = protocol__msg__WifiStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__WifiStatus__destroy(protocol__msg__WifiStatus * msg)
{
  if (msg) {
    protocol__msg__WifiStatus__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__WifiStatus__Sequence__init(protocol__msg__WifiStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__WifiStatus * data = NULL;
  if (size) {
    data = (protocol__msg__WifiStatus *)calloc(size, sizeof(protocol__msg__WifiStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__WifiStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__WifiStatus__fini(&data[i - 1]);
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
protocol__msg__WifiStatus__Sequence__fini(protocol__msg__WifiStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__WifiStatus__fini(&array->data[i]);
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

protocol__msg__WifiStatus__Sequence *
protocol__msg__WifiStatus__Sequence__create(size_t size)
{
  protocol__msg__WifiStatus__Sequence * array = (protocol__msg__WifiStatus__Sequence *)malloc(sizeof(protocol__msg__WifiStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__WifiStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__WifiStatus__Sequence__destroy(protocol__msg__WifiStatus__Sequence * array)
{
  if (array) {
    protocol__msg__WifiStatus__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__WifiStatus__Sequence__are_equal(const protocol__msg__WifiStatus__Sequence * lhs, const protocol__msg__WifiStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__WifiStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__WifiStatus__Sequence__copy(
  const protocol__msg__WifiStatus__Sequence * input,
  protocol__msg__WifiStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__WifiStatus);
    protocol__msg__WifiStatus * data =
      (protocol__msg__WifiStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__WifiStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__WifiStatus__fini(&data[i]);
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
    if (!protocol__msg__WifiStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
