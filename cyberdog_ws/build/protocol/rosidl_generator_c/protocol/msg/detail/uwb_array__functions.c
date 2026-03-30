// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/UwbArray.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/uwb_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "protocol/msg/detail/uwb_raw__functions.h"

bool
protocol__msg__UwbArray__init(protocol__msg__UwbArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    protocol__msg__UwbArray__fini(msg);
    return false;
  }
  // data
  if (!protocol__msg__UwbRaw__Sequence__init(&msg->data, 0)) {
    protocol__msg__UwbArray__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__UwbArray__fini(protocol__msg__UwbArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  protocol__msg__UwbRaw__Sequence__fini(&msg->data);
}

bool
protocol__msg__UwbArray__are_equal(const protocol__msg__UwbArray * lhs, const protocol__msg__UwbArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // data
  if (!protocol__msg__UwbRaw__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__UwbArray__copy(
  const protocol__msg__UwbArray * input,
  protocol__msg__UwbArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // data
  if (!protocol__msg__UwbRaw__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

protocol__msg__UwbArray *
protocol__msg__UwbArray__create()
{
  protocol__msg__UwbArray * msg = (protocol__msg__UwbArray *)malloc(sizeof(protocol__msg__UwbArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__UwbArray));
  bool success = protocol__msg__UwbArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__UwbArray__destroy(protocol__msg__UwbArray * msg)
{
  if (msg) {
    protocol__msg__UwbArray__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__UwbArray__Sequence__init(protocol__msg__UwbArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__UwbArray * data = NULL;
  if (size) {
    data = (protocol__msg__UwbArray *)calloc(size, sizeof(protocol__msg__UwbArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__UwbArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__UwbArray__fini(&data[i - 1]);
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
protocol__msg__UwbArray__Sequence__fini(protocol__msg__UwbArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__UwbArray__fini(&array->data[i]);
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

protocol__msg__UwbArray__Sequence *
protocol__msg__UwbArray__Sequence__create(size_t size)
{
  protocol__msg__UwbArray__Sequence * array = (protocol__msg__UwbArray__Sequence *)malloc(sizeof(protocol__msg__UwbArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__UwbArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__UwbArray__Sequence__destroy(protocol__msg__UwbArray__Sequence * array)
{
  if (array) {
    protocol__msg__UwbArray__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__UwbArray__Sequence__are_equal(const protocol__msg__UwbArray__Sequence * lhs, const protocol__msg__UwbArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__UwbArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__UwbArray__Sequence__copy(
  const protocol__msg__UwbArray__Sequence * input,
  protocol__msg__UwbArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__UwbArray);
    protocol__msg__UwbArray * data =
      (protocol__msg__UwbArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__UwbArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__UwbArray__fini(&data[i]);
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
    if (!protocol__msg__UwbArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
