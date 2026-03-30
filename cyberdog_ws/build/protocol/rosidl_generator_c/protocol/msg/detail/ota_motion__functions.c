// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/OtaMotion.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/ota_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `version`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__OtaMotion__init(protocol__msg__OtaMotion * msg)
{
  if (!msg) {
    return false;
  }
  // command
  // version
  if (!rosidl_runtime_c__String__init(&msg->version)) {
    protocol__msg__OtaMotion__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__OtaMotion__fini(protocol__msg__OtaMotion * msg)
{
  if (!msg) {
    return;
  }
  // command
  // version
  rosidl_runtime_c__String__fini(&msg->version);
}

bool
protocol__msg__OtaMotion__are_equal(const protocol__msg__OtaMotion * lhs, const protocol__msg__OtaMotion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__OtaMotion__copy(
  const protocol__msg__OtaMotion * input,
  protocol__msg__OtaMotion * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  // version
  if (!rosidl_runtime_c__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  return true;
}

protocol__msg__OtaMotion *
protocol__msg__OtaMotion__create()
{
  protocol__msg__OtaMotion * msg = (protocol__msg__OtaMotion *)malloc(sizeof(protocol__msg__OtaMotion));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__OtaMotion));
  bool success = protocol__msg__OtaMotion__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__OtaMotion__destroy(protocol__msg__OtaMotion * msg)
{
  if (msg) {
    protocol__msg__OtaMotion__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__OtaMotion__Sequence__init(protocol__msg__OtaMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__OtaMotion * data = NULL;
  if (size) {
    data = (protocol__msg__OtaMotion *)calloc(size, sizeof(protocol__msg__OtaMotion));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__OtaMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__OtaMotion__fini(&data[i - 1]);
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
protocol__msg__OtaMotion__Sequence__fini(protocol__msg__OtaMotion__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__OtaMotion__fini(&array->data[i]);
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

protocol__msg__OtaMotion__Sequence *
protocol__msg__OtaMotion__Sequence__create(size_t size)
{
  protocol__msg__OtaMotion__Sequence * array = (protocol__msg__OtaMotion__Sequence *)malloc(sizeof(protocol__msg__OtaMotion__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__OtaMotion__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__OtaMotion__Sequence__destroy(protocol__msg__OtaMotion__Sequence * array)
{
  if (array) {
    protocol__msg__OtaMotion__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__OtaMotion__Sequence__are_equal(const protocol__msg__OtaMotion__Sequence * lhs, const protocol__msg__OtaMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__OtaMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__OtaMotion__Sequence__copy(
  const protocol__msg__OtaMotion__Sequence * input,
  protocol__msg__OtaMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__OtaMotion);
    protocol__msg__OtaMotion * data =
      (protocol__msg__OtaMotion *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__OtaMotion__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__OtaMotion__fini(&data[i]);
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
    if (!protocol__msg__OtaMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
