// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/AlgoTaskStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/algo_task_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
protocol__msg__AlgoTaskStatus__init(protocol__msg__AlgoTaskStatus * msg)
{
  if (!msg) {
    return false;
  }
  // task_status
  // task_sub_status
  return true;
}

void
protocol__msg__AlgoTaskStatus__fini(protocol__msg__AlgoTaskStatus * msg)
{
  if (!msg) {
    return;
  }
  // task_status
  // task_sub_status
}

bool
protocol__msg__AlgoTaskStatus__are_equal(const protocol__msg__AlgoTaskStatus * lhs, const protocol__msg__AlgoTaskStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_status
  if (lhs->task_status != rhs->task_status) {
    return false;
  }
  // task_sub_status
  if (lhs->task_sub_status != rhs->task_sub_status) {
    return false;
  }
  return true;
}

bool
protocol__msg__AlgoTaskStatus__copy(
  const protocol__msg__AlgoTaskStatus * input,
  protocol__msg__AlgoTaskStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // task_status
  output->task_status = input->task_status;
  // task_sub_status
  output->task_sub_status = input->task_sub_status;
  return true;
}

protocol__msg__AlgoTaskStatus *
protocol__msg__AlgoTaskStatus__create()
{
  protocol__msg__AlgoTaskStatus * msg = (protocol__msg__AlgoTaskStatus *)malloc(sizeof(protocol__msg__AlgoTaskStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__AlgoTaskStatus));
  bool success = protocol__msg__AlgoTaskStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__AlgoTaskStatus__destroy(protocol__msg__AlgoTaskStatus * msg)
{
  if (msg) {
    protocol__msg__AlgoTaskStatus__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__AlgoTaskStatus__Sequence__init(protocol__msg__AlgoTaskStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__AlgoTaskStatus * data = NULL;
  if (size) {
    data = (protocol__msg__AlgoTaskStatus *)calloc(size, sizeof(protocol__msg__AlgoTaskStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__AlgoTaskStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__AlgoTaskStatus__fini(&data[i - 1]);
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
protocol__msg__AlgoTaskStatus__Sequence__fini(protocol__msg__AlgoTaskStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__AlgoTaskStatus__fini(&array->data[i]);
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

protocol__msg__AlgoTaskStatus__Sequence *
protocol__msg__AlgoTaskStatus__Sequence__create(size_t size)
{
  protocol__msg__AlgoTaskStatus__Sequence * array = (protocol__msg__AlgoTaskStatus__Sequence *)malloc(sizeof(protocol__msg__AlgoTaskStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__AlgoTaskStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__AlgoTaskStatus__Sequence__destroy(protocol__msg__AlgoTaskStatus__Sequence * array)
{
  if (array) {
    protocol__msg__AlgoTaskStatus__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__AlgoTaskStatus__Sequence__are_equal(const protocol__msg__AlgoTaskStatus__Sequence * lhs, const protocol__msg__AlgoTaskStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__AlgoTaskStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__AlgoTaskStatus__Sequence__copy(
  const protocol__msg__AlgoTaskStatus__Sequence * input,
  protocol__msg__AlgoTaskStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__AlgoTaskStatus);
    protocol__msg__AlgoTaskStatus * data =
      (protocol__msg__AlgoTaskStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__AlgoTaskStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__AlgoTaskStatus__fini(&data[i]);
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
    if (!protocol__msg__AlgoTaskStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
