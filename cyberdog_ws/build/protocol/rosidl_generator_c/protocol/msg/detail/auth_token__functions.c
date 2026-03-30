// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/AuthToken.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/auth_token__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `uid`
// Member `token_access`
// Member `token_fresh`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__AuthToken__init(protocol__msg__AuthToken * msg)
{
  if (!msg) {
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__init(&msg->uid)) {
    protocol__msg__AuthToken__fini(msg);
    return false;
  }
  // token_access
  if (!rosidl_runtime_c__String__init(&msg->token_access)) {
    protocol__msg__AuthToken__fini(msg);
    return false;
  }
  // token_fresh
  if (!rosidl_runtime_c__String__init(&msg->token_fresh)) {
    protocol__msg__AuthToken__fini(msg);
    return false;
  }
  // token_expirein
  return true;
}

void
protocol__msg__AuthToken__fini(protocol__msg__AuthToken * msg)
{
  if (!msg) {
    return;
  }
  // uid
  rosidl_runtime_c__String__fini(&msg->uid);
  // token_access
  rosidl_runtime_c__String__fini(&msg->token_access);
  // token_fresh
  rosidl_runtime_c__String__fini(&msg->token_fresh);
  // token_expirein
}

bool
protocol__msg__AuthToken__are_equal(const protocol__msg__AuthToken * lhs, const protocol__msg__AuthToken * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uid), &(rhs->uid)))
  {
    return false;
  }
  // token_access
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->token_access), &(rhs->token_access)))
  {
    return false;
  }
  // token_fresh
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->token_fresh), &(rhs->token_fresh)))
  {
    return false;
  }
  // token_expirein
  if (lhs->token_expirein != rhs->token_expirein) {
    return false;
  }
  return true;
}

bool
protocol__msg__AuthToken__copy(
  const protocol__msg__AuthToken * input,
  protocol__msg__AuthToken * output)
{
  if (!input || !output) {
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__copy(
      &(input->uid), &(output->uid)))
  {
    return false;
  }
  // token_access
  if (!rosidl_runtime_c__String__copy(
      &(input->token_access), &(output->token_access)))
  {
    return false;
  }
  // token_fresh
  if (!rosidl_runtime_c__String__copy(
      &(input->token_fresh), &(output->token_fresh)))
  {
    return false;
  }
  // token_expirein
  output->token_expirein = input->token_expirein;
  return true;
}

protocol__msg__AuthToken *
protocol__msg__AuthToken__create()
{
  protocol__msg__AuthToken * msg = (protocol__msg__AuthToken *)malloc(sizeof(protocol__msg__AuthToken));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__AuthToken));
  bool success = protocol__msg__AuthToken__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__AuthToken__destroy(protocol__msg__AuthToken * msg)
{
  if (msg) {
    protocol__msg__AuthToken__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__AuthToken__Sequence__init(protocol__msg__AuthToken__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__AuthToken * data = NULL;
  if (size) {
    data = (protocol__msg__AuthToken *)calloc(size, sizeof(protocol__msg__AuthToken));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__AuthToken__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__AuthToken__fini(&data[i - 1]);
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
protocol__msg__AuthToken__Sequence__fini(protocol__msg__AuthToken__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__AuthToken__fini(&array->data[i]);
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

protocol__msg__AuthToken__Sequence *
protocol__msg__AuthToken__Sequence__create(size_t size)
{
  protocol__msg__AuthToken__Sequence * array = (protocol__msg__AuthToken__Sequence *)malloc(sizeof(protocol__msg__AuthToken__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__AuthToken__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__AuthToken__Sequence__destroy(protocol__msg__AuthToken__Sequence * array)
{
  if (array) {
    protocol__msg__AuthToken__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__AuthToken__Sequence__are_equal(const protocol__msg__AuthToken__Sequence * lhs, const protocol__msg__AuthToken__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__AuthToken__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__AuthToken__Sequence__copy(
  const protocol__msg__AuthToken__Sequence * input,
  protocol__msg__AuthToken__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__AuthToken);
    protocol__msg__AuthToken * data =
      (protocol__msg__AuthToken *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__AuthToken__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__AuthToken__fini(&data[i]);
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
    if (!protocol__msg__AuthToken__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
