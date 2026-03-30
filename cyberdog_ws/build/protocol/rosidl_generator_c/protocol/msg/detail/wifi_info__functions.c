// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/WifiInfo.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/wifi_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `ssid`
// Member `pwd`
// Member `ip`
// Member `mac`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__WifiInfo__init(protocol__msg__WifiInfo * msg)
{
  if (!msg) {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__init(&msg->ssid)) {
    protocol__msg__WifiInfo__fini(msg);
    return false;
  }
  // pwd
  if (!rosidl_runtime_c__String__init(&msg->pwd)) {
    protocol__msg__WifiInfo__fini(msg);
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    protocol__msg__WifiInfo__fini(msg);
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__init(&msg->mac)) {
    protocol__msg__WifiInfo__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    protocol__msg__WifiInfo__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__WifiInfo__fini(protocol__msg__WifiInfo * msg)
{
  if (!msg) {
    return;
  }
  // ssid
  rosidl_runtime_c__String__fini(&msg->ssid);
  // pwd
  rosidl_runtime_c__String__fini(&msg->pwd);
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // mac
  rosidl_runtime_c__String__fini(&msg->mac);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
}

bool
protocol__msg__WifiInfo__are_equal(const protocol__msg__WifiInfo * lhs, const protocol__msg__WifiInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ssid), &(rhs->ssid)))
  {
    return false;
  }
  // pwd
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pwd), &(rhs->pwd)))
  {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mac), &(rhs->mac)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__WifiInfo__copy(
  const protocol__msg__WifiInfo * input,
  protocol__msg__WifiInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__copy(
      &(input->ssid), &(output->ssid)))
  {
    return false;
  }
  // pwd
  if (!rosidl_runtime_c__String__copy(
      &(input->pwd), &(output->pwd)))
  {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__copy(
      &(input->mac), &(output->mac)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

protocol__msg__WifiInfo *
protocol__msg__WifiInfo__create()
{
  protocol__msg__WifiInfo * msg = (protocol__msg__WifiInfo *)malloc(sizeof(protocol__msg__WifiInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__WifiInfo));
  bool success = protocol__msg__WifiInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__WifiInfo__destroy(protocol__msg__WifiInfo * msg)
{
  if (msg) {
    protocol__msg__WifiInfo__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__WifiInfo__Sequence__init(protocol__msg__WifiInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__WifiInfo * data = NULL;
  if (size) {
    data = (protocol__msg__WifiInfo *)calloc(size, sizeof(protocol__msg__WifiInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__WifiInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__WifiInfo__fini(&data[i - 1]);
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
protocol__msg__WifiInfo__Sequence__fini(protocol__msg__WifiInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__WifiInfo__fini(&array->data[i]);
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

protocol__msg__WifiInfo__Sequence *
protocol__msg__WifiInfo__Sequence__create(size_t size)
{
  protocol__msg__WifiInfo__Sequence * array = (protocol__msg__WifiInfo__Sequence *)malloc(sizeof(protocol__msg__WifiInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__WifiInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__WifiInfo__Sequence__destroy(protocol__msg__WifiInfo__Sequence * array)
{
  if (array) {
    protocol__msg__WifiInfo__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__WifiInfo__Sequence__are_equal(const protocol__msg__WifiInfo__Sequence * lhs, const protocol__msg__WifiInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__WifiInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__WifiInfo__Sequence__copy(
  const protocol__msg__WifiInfo__Sequence * input,
  protocol__msg__WifiInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__WifiInfo);
    protocol__msg__WifiInfo * data =
      (protocol__msg__WifiInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__WifiInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__WifiInfo__fini(&data[i]);
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
    if (!protocol__msg__WifiInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
