// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MultipleTofPayload.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/multiple_tof_payload__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `left_head`
// Member `left_rear`
// Member `right_head`
// Member `right_rear`
#include "protocol/msg/detail/single_tof_payload__functions.h"

bool
protocol__msg__MultipleTofPayload__init(protocol__msg__MultipleTofPayload * msg)
{
  if (!msg) {
    return false;
  }
  // left_head
  if (!protocol__msg__SingleTofPayload__init(&msg->left_head)) {
    protocol__msg__MultipleTofPayload__fini(msg);
    return false;
  }
  // left_rear
  if (!protocol__msg__SingleTofPayload__init(&msg->left_rear)) {
    protocol__msg__MultipleTofPayload__fini(msg);
    return false;
  }
  // right_head
  if (!protocol__msg__SingleTofPayload__init(&msg->right_head)) {
    protocol__msg__MultipleTofPayload__fini(msg);
    return false;
  }
  // right_rear
  if (!protocol__msg__SingleTofPayload__init(&msg->right_rear)) {
    protocol__msg__MultipleTofPayload__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__MultipleTofPayload__fini(protocol__msg__MultipleTofPayload * msg)
{
  if (!msg) {
    return;
  }
  // left_head
  protocol__msg__SingleTofPayload__fini(&msg->left_head);
  // left_rear
  protocol__msg__SingleTofPayload__fini(&msg->left_rear);
  // right_head
  protocol__msg__SingleTofPayload__fini(&msg->right_head);
  // right_rear
  protocol__msg__SingleTofPayload__fini(&msg->right_rear);
}

bool
protocol__msg__MultipleTofPayload__are_equal(const protocol__msg__MultipleTofPayload * lhs, const protocol__msg__MultipleTofPayload * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_head
  if (!protocol__msg__SingleTofPayload__are_equal(
      &(lhs->left_head), &(rhs->left_head)))
  {
    return false;
  }
  // left_rear
  if (!protocol__msg__SingleTofPayload__are_equal(
      &(lhs->left_rear), &(rhs->left_rear)))
  {
    return false;
  }
  // right_head
  if (!protocol__msg__SingleTofPayload__are_equal(
      &(lhs->right_head), &(rhs->right_head)))
  {
    return false;
  }
  // right_rear
  if (!protocol__msg__SingleTofPayload__are_equal(
      &(lhs->right_rear), &(rhs->right_rear)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__MultipleTofPayload__copy(
  const protocol__msg__MultipleTofPayload * input,
  protocol__msg__MultipleTofPayload * output)
{
  if (!input || !output) {
    return false;
  }
  // left_head
  if (!protocol__msg__SingleTofPayload__copy(
      &(input->left_head), &(output->left_head)))
  {
    return false;
  }
  // left_rear
  if (!protocol__msg__SingleTofPayload__copy(
      &(input->left_rear), &(output->left_rear)))
  {
    return false;
  }
  // right_head
  if (!protocol__msg__SingleTofPayload__copy(
      &(input->right_head), &(output->right_head)))
  {
    return false;
  }
  // right_rear
  if (!protocol__msg__SingleTofPayload__copy(
      &(input->right_rear), &(output->right_rear)))
  {
    return false;
  }
  return true;
}

protocol__msg__MultipleTofPayload *
protocol__msg__MultipleTofPayload__create()
{
  protocol__msg__MultipleTofPayload * msg = (protocol__msg__MultipleTofPayload *)malloc(sizeof(protocol__msg__MultipleTofPayload));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MultipleTofPayload));
  bool success = protocol__msg__MultipleTofPayload__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MultipleTofPayload__destroy(protocol__msg__MultipleTofPayload * msg)
{
  if (msg) {
    protocol__msg__MultipleTofPayload__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MultipleTofPayload__Sequence__init(protocol__msg__MultipleTofPayload__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MultipleTofPayload * data = NULL;
  if (size) {
    data = (protocol__msg__MultipleTofPayload *)calloc(size, sizeof(protocol__msg__MultipleTofPayload));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MultipleTofPayload__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MultipleTofPayload__fini(&data[i - 1]);
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
protocol__msg__MultipleTofPayload__Sequence__fini(protocol__msg__MultipleTofPayload__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MultipleTofPayload__fini(&array->data[i]);
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

protocol__msg__MultipleTofPayload__Sequence *
protocol__msg__MultipleTofPayload__Sequence__create(size_t size)
{
  protocol__msg__MultipleTofPayload__Sequence * array = (protocol__msg__MultipleTofPayload__Sequence *)malloc(sizeof(protocol__msg__MultipleTofPayload__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MultipleTofPayload__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MultipleTofPayload__Sequence__destroy(protocol__msg__MultipleTofPayload__Sequence * array)
{
  if (array) {
    protocol__msg__MultipleTofPayload__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MultipleTofPayload__Sequence__are_equal(const protocol__msg__MultipleTofPayload__Sequence * lhs, const protocol__msg__MultipleTofPayload__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MultipleTofPayload__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MultipleTofPayload__Sequence__copy(
  const protocol__msg__MultipleTofPayload__Sequence * input,
  protocol__msg__MultipleTofPayload__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MultipleTofPayload);
    protocol__msg__MultipleTofPayload * data =
      (protocol__msg__MultipleTofPayload *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MultipleTofPayload__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MultipleTofPayload__fini(&data[i]);
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
    if (!protocol__msg__MultipleTofPayload__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
