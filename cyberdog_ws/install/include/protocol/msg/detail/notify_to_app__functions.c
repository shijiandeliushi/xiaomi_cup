// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/NotifyToApp.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/notify_to_app__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `ssid`
// Member `ip`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__NotifyToApp__init(protocol__msg__NotifyToApp * msg)
{
  if (!msg) {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__init(&msg->ssid)) {
    protocol__msg__NotifyToApp__fini(msg);
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    protocol__msg__NotifyToApp__fini(msg);
    return false;
  }
  // code
  return true;
}

void
protocol__msg__NotifyToApp__fini(protocol__msg__NotifyToApp * msg)
{
  if (!msg) {
    return;
  }
  // ssid
  rosidl_runtime_c__String__fini(&msg->ssid);
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // code
}

bool
protocol__msg__NotifyToApp__are_equal(const protocol__msg__NotifyToApp * lhs, const protocol__msg__NotifyToApp * rhs)
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
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
protocol__msg__NotifyToApp__copy(
  const protocol__msg__NotifyToApp * input,
  protocol__msg__NotifyToApp * output)
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
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // code
  output->code = input->code;
  return true;
}

protocol__msg__NotifyToApp *
protocol__msg__NotifyToApp__create()
{
  protocol__msg__NotifyToApp * msg = (protocol__msg__NotifyToApp *)malloc(sizeof(protocol__msg__NotifyToApp));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__NotifyToApp));
  bool success = protocol__msg__NotifyToApp__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__NotifyToApp__destroy(protocol__msg__NotifyToApp * msg)
{
  if (msg) {
    protocol__msg__NotifyToApp__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__NotifyToApp__Sequence__init(protocol__msg__NotifyToApp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__NotifyToApp * data = NULL;
  if (size) {
    data = (protocol__msg__NotifyToApp *)calloc(size, sizeof(protocol__msg__NotifyToApp));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__NotifyToApp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__NotifyToApp__fini(&data[i - 1]);
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
protocol__msg__NotifyToApp__Sequence__fini(protocol__msg__NotifyToApp__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__NotifyToApp__fini(&array->data[i]);
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

protocol__msg__NotifyToApp__Sequence *
protocol__msg__NotifyToApp__Sequence__create(size_t size)
{
  protocol__msg__NotifyToApp__Sequence * array = (protocol__msg__NotifyToApp__Sequence *)malloc(sizeof(protocol__msg__NotifyToApp__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__NotifyToApp__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__NotifyToApp__Sequence__destroy(protocol__msg__NotifyToApp__Sequence * array)
{
  if (array) {
    protocol__msg__NotifyToApp__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__NotifyToApp__Sequence__are_equal(const protocol__msg__NotifyToApp__Sequence * lhs, const protocol__msg__NotifyToApp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__NotifyToApp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__NotifyToApp__Sequence__copy(
  const protocol__msg__NotifyToApp__Sequence * input,
  protocol__msg__NotifyToApp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__NotifyToApp);
    protocol__msg__NotifyToApp * data =
      (protocol__msg__NotifyToApp *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__NotifyToApp__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__NotifyToApp__fini(&data[i]);
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
    if (!protocol__msg__NotifyToApp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
