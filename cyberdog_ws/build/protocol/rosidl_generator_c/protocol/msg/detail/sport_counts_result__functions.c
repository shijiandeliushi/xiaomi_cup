// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/SportCountsResult.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/sport_counts_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
protocol__msg__SportCountsResult__init(protocol__msg__SportCountsResult * msg)
{
  if (!msg) {
    return false;
  }
  // algo_switch
  // sport_type
  // counts
  // duration
  return true;
}

void
protocol__msg__SportCountsResult__fini(protocol__msg__SportCountsResult * msg)
{
  if (!msg) {
    return;
  }
  // algo_switch
  // sport_type
  // counts
  // duration
}

bool
protocol__msg__SportCountsResult__are_equal(const protocol__msg__SportCountsResult * lhs, const protocol__msg__SportCountsResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // algo_switch
  if (lhs->algo_switch != rhs->algo_switch) {
    return false;
  }
  // sport_type
  if (lhs->sport_type != rhs->sport_type) {
    return false;
  }
  // counts
  if (lhs->counts != rhs->counts) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
protocol__msg__SportCountsResult__copy(
  const protocol__msg__SportCountsResult * input,
  protocol__msg__SportCountsResult * output)
{
  if (!input || !output) {
    return false;
  }
  // algo_switch
  output->algo_switch = input->algo_switch;
  // sport_type
  output->sport_type = input->sport_type;
  // counts
  output->counts = input->counts;
  // duration
  output->duration = input->duration;
  return true;
}

protocol__msg__SportCountsResult *
protocol__msg__SportCountsResult__create()
{
  protocol__msg__SportCountsResult * msg = (protocol__msg__SportCountsResult *)malloc(sizeof(protocol__msg__SportCountsResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__SportCountsResult));
  bool success = protocol__msg__SportCountsResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__SportCountsResult__destroy(protocol__msg__SportCountsResult * msg)
{
  if (msg) {
    protocol__msg__SportCountsResult__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__SportCountsResult__Sequence__init(protocol__msg__SportCountsResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__SportCountsResult * data = NULL;
  if (size) {
    data = (protocol__msg__SportCountsResult *)calloc(size, sizeof(protocol__msg__SportCountsResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__SportCountsResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__SportCountsResult__fini(&data[i - 1]);
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
protocol__msg__SportCountsResult__Sequence__fini(protocol__msg__SportCountsResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__SportCountsResult__fini(&array->data[i]);
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

protocol__msg__SportCountsResult__Sequence *
protocol__msg__SportCountsResult__Sequence__create(size_t size)
{
  protocol__msg__SportCountsResult__Sequence * array = (protocol__msg__SportCountsResult__Sequence *)malloc(sizeof(protocol__msg__SportCountsResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__SportCountsResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__SportCountsResult__Sequence__destroy(protocol__msg__SportCountsResult__Sequence * array)
{
  if (array) {
    protocol__msg__SportCountsResult__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__SportCountsResult__Sequence__are_equal(const protocol__msg__SportCountsResult__Sequence * lhs, const protocol__msg__SportCountsResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__SportCountsResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__SportCountsResult__Sequence__copy(
  const protocol__msg__SportCountsResult__Sequence * input,
  protocol__msg__SportCountsResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__SportCountsResult);
    protocol__msg__SportCountsResult * data =
      (protocol__msg__SportCountsResult *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__SportCountsResult__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__SportCountsResult__fini(&data[i]);
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
    if (!protocol__msg__SportCountsResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
