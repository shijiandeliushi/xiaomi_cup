// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MotionSequenceGait.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_sequence_gait__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
protocol__msg__MotionSequenceGait__init(protocol__msg__MotionSequenceGait * msg)
{
  if (!msg) {
    return false;
  }
  // right_forefoot
  // left_forefoot
  // right_hindfoot
  // left_hindfoot
  // duration
  return true;
}

void
protocol__msg__MotionSequenceGait__fini(protocol__msg__MotionSequenceGait * msg)
{
  if (!msg) {
    return;
  }
  // right_forefoot
  // left_forefoot
  // right_hindfoot
  // left_hindfoot
  // duration
}

bool
protocol__msg__MotionSequenceGait__are_equal(const protocol__msg__MotionSequenceGait * lhs, const protocol__msg__MotionSequenceGait * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // right_forefoot
  if (lhs->right_forefoot != rhs->right_forefoot) {
    return false;
  }
  // left_forefoot
  if (lhs->left_forefoot != rhs->left_forefoot) {
    return false;
  }
  // right_hindfoot
  if (lhs->right_hindfoot != rhs->right_hindfoot) {
    return false;
  }
  // left_hindfoot
  if (lhs->left_hindfoot != rhs->left_hindfoot) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
protocol__msg__MotionSequenceGait__copy(
  const protocol__msg__MotionSequenceGait * input,
  protocol__msg__MotionSequenceGait * output)
{
  if (!input || !output) {
    return false;
  }
  // right_forefoot
  output->right_forefoot = input->right_forefoot;
  // left_forefoot
  output->left_forefoot = input->left_forefoot;
  // right_hindfoot
  output->right_hindfoot = input->right_hindfoot;
  // left_hindfoot
  output->left_hindfoot = input->left_hindfoot;
  // duration
  output->duration = input->duration;
  return true;
}

protocol__msg__MotionSequenceGait *
protocol__msg__MotionSequenceGait__create()
{
  protocol__msg__MotionSequenceGait * msg = (protocol__msg__MotionSequenceGait *)malloc(sizeof(protocol__msg__MotionSequenceGait));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MotionSequenceGait));
  bool success = protocol__msg__MotionSequenceGait__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MotionSequenceGait__destroy(protocol__msg__MotionSequenceGait * msg)
{
  if (msg) {
    protocol__msg__MotionSequenceGait__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MotionSequenceGait__Sequence__init(protocol__msg__MotionSequenceGait__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MotionSequenceGait * data = NULL;
  if (size) {
    data = (protocol__msg__MotionSequenceGait *)calloc(size, sizeof(protocol__msg__MotionSequenceGait));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MotionSequenceGait__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MotionSequenceGait__fini(&data[i - 1]);
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
protocol__msg__MotionSequenceGait__Sequence__fini(protocol__msg__MotionSequenceGait__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MotionSequenceGait__fini(&array->data[i]);
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

protocol__msg__MotionSequenceGait__Sequence *
protocol__msg__MotionSequenceGait__Sequence__create(size_t size)
{
  protocol__msg__MotionSequenceGait__Sequence * array = (protocol__msg__MotionSequenceGait__Sequence *)malloc(sizeof(protocol__msg__MotionSequenceGait__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MotionSequenceGait__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MotionSequenceGait__Sequence__destroy(protocol__msg__MotionSequenceGait__Sequence * array)
{
  if (array) {
    protocol__msg__MotionSequenceGait__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MotionSequenceGait__Sequence__are_equal(const protocol__msg__MotionSequenceGait__Sequence * lhs, const protocol__msg__MotionSequenceGait__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MotionSequenceGait__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MotionSequenceGait__Sequence__copy(
  const protocol__msg__MotionSequenceGait__Sequence * input,
  protocol__msg__MotionSequenceGait__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MotionSequenceGait);
    protocol__msg__MotionSequenceGait * data =
      (protocol__msg__MotionSequenceGait *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MotionSequenceGait__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MotionSequenceGait__fini(&data[i]);
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
    if (!protocol__msg__MotionSequenceGait__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
