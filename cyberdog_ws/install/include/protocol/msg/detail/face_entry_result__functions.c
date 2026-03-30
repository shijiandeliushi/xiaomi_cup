// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/FaceEntryResult.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/face_entry_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `username`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__FaceEntryResult__init(protocol__msg__FaceEntryResult * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // username
  if (!rosidl_runtime_c__String__init(&msg->username)) {
    protocol__msg__FaceEntryResult__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__FaceEntryResult__fini(protocol__msg__FaceEntryResult * msg)
{
  if (!msg) {
    return;
  }
  // result
  // username
  rosidl_runtime_c__String__fini(&msg->username);
}

bool
protocol__msg__FaceEntryResult__are_equal(const protocol__msg__FaceEntryResult * lhs, const protocol__msg__FaceEntryResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // username
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->username), &(rhs->username)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__FaceEntryResult__copy(
  const protocol__msg__FaceEntryResult * input,
  protocol__msg__FaceEntryResult * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // username
  if (!rosidl_runtime_c__String__copy(
      &(input->username), &(output->username)))
  {
    return false;
  }
  return true;
}

protocol__msg__FaceEntryResult *
protocol__msg__FaceEntryResult__create()
{
  protocol__msg__FaceEntryResult * msg = (protocol__msg__FaceEntryResult *)malloc(sizeof(protocol__msg__FaceEntryResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__FaceEntryResult));
  bool success = protocol__msg__FaceEntryResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__FaceEntryResult__destroy(protocol__msg__FaceEntryResult * msg)
{
  if (msg) {
    protocol__msg__FaceEntryResult__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__FaceEntryResult__Sequence__init(protocol__msg__FaceEntryResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__FaceEntryResult * data = NULL;
  if (size) {
    data = (protocol__msg__FaceEntryResult *)calloc(size, sizeof(protocol__msg__FaceEntryResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__FaceEntryResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__FaceEntryResult__fini(&data[i - 1]);
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
protocol__msg__FaceEntryResult__Sequence__fini(protocol__msg__FaceEntryResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__FaceEntryResult__fini(&array->data[i]);
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

protocol__msg__FaceEntryResult__Sequence *
protocol__msg__FaceEntryResult__Sequence__create(size_t size)
{
  protocol__msg__FaceEntryResult__Sequence * array = (protocol__msg__FaceEntryResult__Sequence *)malloc(sizeof(protocol__msg__FaceEntryResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__FaceEntryResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__FaceEntryResult__Sequence__destroy(protocol__msg__FaceEntryResult__Sequence * array)
{
  if (array) {
    protocol__msg__FaceEntryResult__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__FaceEntryResult__Sequence__are_equal(const protocol__msg__FaceEntryResult__Sequence * lhs, const protocol__msg__FaceEntryResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__FaceEntryResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__FaceEntryResult__Sequence__copy(
  const protocol__msg__FaceEntryResult__Sequence * input,
  protocol__msg__FaceEntryResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__FaceEntryResult);
    protocol__msg__FaceEntryResult * data =
      (protocol__msg__FaceEntryResult *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__FaceEntryResult__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__FaceEntryResult__fini(&data[i]);
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
    if (!protocol__msg__FaceEntryResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
