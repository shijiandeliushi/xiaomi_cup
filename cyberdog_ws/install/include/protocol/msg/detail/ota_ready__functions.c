// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/OtaReady.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/ota_ready__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__OtaReady__init(protocol__msg__OtaReady * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    protocol__msg__OtaReady__fini(msg);
    return false;
  }
  // ready
  // status
  return true;
}

void
protocol__msg__OtaReady__fini(protocol__msg__OtaReady * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // ready
  // status
}

bool
protocol__msg__OtaReady__are_equal(const protocol__msg__OtaReady * lhs, const protocol__msg__OtaReady * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // ready
  if (lhs->ready != rhs->ready) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
protocol__msg__OtaReady__copy(
  const protocol__msg__OtaReady * input,
  protocol__msg__OtaReady * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // ready
  output->ready = input->ready;
  // status
  output->status = input->status;
  return true;
}

protocol__msg__OtaReady *
protocol__msg__OtaReady__create()
{
  protocol__msg__OtaReady * msg = (protocol__msg__OtaReady *)malloc(sizeof(protocol__msg__OtaReady));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__OtaReady));
  bool success = protocol__msg__OtaReady__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__OtaReady__destroy(protocol__msg__OtaReady * msg)
{
  if (msg) {
    protocol__msg__OtaReady__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__OtaReady__Sequence__init(protocol__msg__OtaReady__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__OtaReady * data = NULL;
  if (size) {
    data = (protocol__msg__OtaReady *)calloc(size, sizeof(protocol__msg__OtaReady));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__OtaReady__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__OtaReady__fini(&data[i - 1]);
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
protocol__msg__OtaReady__Sequence__fini(protocol__msg__OtaReady__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__OtaReady__fini(&array->data[i]);
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

protocol__msg__OtaReady__Sequence *
protocol__msg__OtaReady__Sequence__create(size_t size)
{
  protocol__msg__OtaReady__Sequence * array = (protocol__msg__OtaReady__Sequence *)malloc(sizeof(protocol__msg__OtaReady__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__OtaReady__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__OtaReady__Sequence__destroy(protocol__msg__OtaReady__Sequence * array)
{
  if (array) {
    protocol__msg__OtaReady__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__OtaReady__Sequence__are_equal(const protocol__msg__OtaReady__Sequence * lhs, const protocol__msg__OtaReady__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__OtaReady__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__OtaReady__Sequence__copy(
  const protocol__msg__OtaReady__Sequence * input,
  protocol__msg__OtaReady__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__OtaReady);
    protocol__msg__OtaReady * data =
      (protocol__msg__OtaReady *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__OtaReady__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__OtaReady__fini(&data[i]);
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
    if (!protocol__msg__OtaReady__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
