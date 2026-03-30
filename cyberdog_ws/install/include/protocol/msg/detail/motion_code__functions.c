// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MotionCode.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
protocol__msg__MotionCode__init(protocol__msg__MotionCode * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
protocol__msg__MotionCode__fini(protocol__msg__MotionCode * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
protocol__msg__MotionCode__are_equal(const protocol__msg__MotionCode * lhs, const protocol__msg__MotionCode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
protocol__msg__MotionCode__copy(
  const protocol__msg__MotionCode * input,
  protocol__msg__MotionCode * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

protocol__msg__MotionCode *
protocol__msg__MotionCode__create()
{
  protocol__msg__MotionCode * msg = (protocol__msg__MotionCode *)malloc(sizeof(protocol__msg__MotionCode));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MotionCode));
  bool success = protocol__msg__MotionCode__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MotionCode__destroy(protocol__msg__MotionCode * msg)
{
  if (msg) {
    protocol__msg__MotionCode__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MotionCode__Sequence__init(protocol__msg__MotionCode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MotionCode * data = NULL;
  if (size) {
    data = (protocol__msg__MotionCode *)calloc(size, sizeof(protocol__msg__MotionCode));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MotionCode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MotionCode__fini(&data[i - 1]);
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
protocol__msg__MotionCode__Sequence__fini(protocol__msg__MotionCode__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MotionCode__fini(&array->data[i]);
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

protocol__msg__MotionCode__Sequence *
protocol__msg__MotionCode__Sequence__create(size_t size)
{
  protocol__msg__MotionCode__Sequence * array = (protocol__msg__MotionCode__Sequence *)malloc(sizeof(protocol__msg__MotionCode__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MotionCode__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MotionCode__Sequence__destroy(protocol__msg__MotionCode__Sequence * array)
{
  if (array) {
    protocol__msg__MotionCode__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MotionCode__Sequence__are_equal(const protocol__msg__MotionCode__Sequence * lhs, const protocol__msg__MotionCode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MotionCode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MotionCode__Sequence__copy(
  const protocol__msg__MotionCode__Sequence * input,
  protocol__msg__MotionCode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MotionCode);
    protocol__msg__MotionCode * data =
      (protocol__msg__MotionCode *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MotionCode__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MotionCode__fini(&data[i]);
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
    if (!protocol__msg__MotionCode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
