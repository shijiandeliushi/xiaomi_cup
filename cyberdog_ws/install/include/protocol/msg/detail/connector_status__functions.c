// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/ConnectorStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/connector_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `ssid`
// Member `robot_ip`
// Member `provider_ip`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__ConnectorStatus__init(protocol__msg__ConnectorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // is_connected
  // is_internet
  // ssid
  if (!rosidl_runtime_c__String__init(&msg->ssid)) {
    protocol__msg__ConnectorStatus__fini(msg);
    return false;
  }
  // robot_ip
  if (!rosidl_runtime_c__String__init(&msg->robot_ip)) {
    protocol__msg__ConnectorStatus__fini(msg);
    return false;
  }
  // provider_ip
  if (!rosidl_runtime_c__String__init(&msg->provider_ip)) {
    protocol__msg__ConnectorStatus__fini(msg);
    return false;
  }
  // strength
  // code
  return true;
}

void
protocol__msg__ConnectorStatus__fini(protocol__msg__ConnectorStatus * msg)
{
  if (!msg) {
    return;
  }
  // is_connected
  // is_internet
  // ssid
  rosidl_runtime_c__String__fini(&msg->ssid);
  // robot_ip
  rosidl_runtime_c__String__fini(&msg->robot_ip);
  // provider_ip
  rosidl_runtime_c__String__fini(&msg->provider_ip);
  // strength
  // code
}

bool
protocol__msg__ConnectorStatus__are_equal(const protocol__msg__ConnectorStatus * lhs, const protocol__msg__ConnectorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_connected
  if (lhs->is_connected != rhs->is_connected) {
    return false;
  }
  // is_internet
  if (lhs->is_internet != rhs->is_internet) {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ssid), &(rhs->ssid)))
  {
    return false;
  }
  // robot_ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_ip), &(rhs->robot_ip)))
  {
    return false;
  }
  // provider_ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->provider_ip), &(rhs->provider_ip)))
  {
    return false;
  }
  // strength
  if (lhs->strength != rhs->strength) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
protocol__msg__ConnectorStatus__copy(
  const protocol__msg__ConnectorStatus * input,
  protocol__msg__ConnectorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // is_connected
  output->is_connected = input->is_connected;
  // is_internet
  output->is_internet = input->is_internet;
  // ssid
  if (!rosidl_runtime_c__String__copy(
      &(input->ssid), &(output->ssid)))
  {
    return false;
  }
  // robot_ip
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_ip), &(output->robot_ip)))
  {
    return false;
  }
  // provider_ip
  if (!rosidl_runtime_c__String__copy(
      &(input->provider_ip), &(output->provider_ip)))
  {
    return false;
  }
  // strength
  output->strength = input->strength;
  // code
  output->code = input->code;
  return true;
}

protocol__msg__ConnectorStatus *
protocol__msg__ConnectorStatus__create()
{
  protocol__msg__ConnectorStatus * msg = (protocol__msg__ConnectorStatus *)malloc(sizeof(protocol__msg__ConnectorStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__ConnectorStatus));
  bool success = protocol__msg__ConnectorStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__ConnectorStatus__destroy(protocol__msg__ConnectorStatus * msg)
{
  if (msg) {
    protocol__msg__ConnectorStatus__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__ConnectorStatus__Sequence__init(protocol__msg__ConnectorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__ConnectorStatus * data = NULL;
  if (size) {
    data = (protocol__msg__ConnectorStatus *)calloc(size, sizeof(protocol__msg__ConnectorStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__ConnectorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__ConnectorStatus__fini(&data[i - 1]);
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
protocol__msg__ConnectorStatus__Sequence__fini(protocol__msg__ConnectorStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__ConnectorStatus__fini(&array->data[i]);
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

protocol__msg__ConnectorStatus__Sequence *
protocol__msg__ConnectorStatus__Sequence__create(size_t size)
{
  protocol__msg__ConnectorStatus__Sequence * array = (protocol__msg__ConnectorStatus__Sequence *)malloc(sizeof(protocol__msg__ConnectorStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__ConnectorStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__ConnectorStatus__Sequence__destroy(protocol__msg__ConnectorStatus__Sequence * array)
{
  if (array) {
    protocol__msg__ConnectorStatus__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__ConnectorStatus__Sequence__are_equal(const protocol__msg__ConnectorStatus__Sequence * lhs, const protocol__msg__ConnectorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__ConnectorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__ConnectorStatus__Sequence__copy(
  const protocol__msg__ConnectorStatus__Sequence * input,
  protocol__msg__ConnectorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__ConnectorStatus);
    protocol__msg__ConnectorStatus * data =
      (protocol__msg__ConnectorStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__ConnectorStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__ConnectorStatus__fini(&data[i]);
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
    if (!protocol__msg__ConnectorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
