// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/CompressedImage.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/compressed_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `format`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
protocol__msg__CompressedImage__init(protocol__msg__CompressedImage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    protocol__msg__CompressedImage__fini(msg);
    return false;
  }
  // format
  if (!rosidl_runtime_c__String__init(&msg->format)) {
    protocol__msg__CompressedImage__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->data, 0)) {
    protocol__msg__CompressedImage__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__CompressedImage__fini(protocol__msg__CompressedImage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // format
  rosidl_runtime_c__String__fini(&msg->format);
  // data
  rosidl_runtime_c__int8__Sequence__fini(&msg->data);
}

bool
protocol__msg__CompressedImage__are_equal(const protocol__msg__CompressedImage * lhs, const protocol__msg__CompressedImage * rhs)
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
  // format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->format), &(rhs->format)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__CompressedImage__copy(
  const protocol__msg__CompressedImage * input,
  protocol__msg__CompressedImage * output)
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
  // format
  if (!rosidl_runtime_c__String__copy(
      &(input->format), &(output->format)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

protocol__msg__CompressedImage *
protocol__msg__CompressedImage__create()
{
  protocol__msg__CompressedImage * msg = (protocol__msg__CompressedImage *)malloc(sizeof(protocol__msg__CompressedImage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__CompressedImage));
  bool success = protocol__msg__CompressedImage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__CompressedImage__destroy(protocol__msg__CompressedImage * msg)
{
  if (msg) {
    protocol__msg__CompressedImage__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__CompressedImage__Sequence__init(protocol__msg__CompressedImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__CompressedImage * data = NULL;
  if (size) {
    data = (protocol__msg__CompressedImage *)calloc(size, sizeof(protocol__msg__CompressedImage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__CompressedImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__CompressedImage__fini(&data[i - 1]);
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
protocol__msg__CompressedImage__Sequence__fini(protocol__msg__CompressedImage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__CompressedImage__fini(&array->data[i]);
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

protocol__msg__CompressedImage__Sequence *
protocol__msg__CompressedImage__Sequence__create(size_t size)
{
  protocol__msg__CompressedImage__Sequence * array = (protocol__msg__CompressedImage__Sequence *)malloc(sizeof(protocol__msg__CompressedImage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__CompressedImage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__CompressedImage__Sequence__destroy(protocol__msg__CompressedImage__Sequence * array)
{
  if (array) {
    protocol__msg__CompressedImage__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__CompressedImage__Sequence__are_equal(const protocol__msg__CompressedImage__Sequence * lhs, const protocol__msg__CompressedImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__CompressedImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__CompressedImage__Sequence__copy(
  const protocol__msg__CompressedImage__Sequence * input,
  protocol__msg__CompressedImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__CompressedImage);
    protocol__msg__CompressedImage * data =
      (protocol__msg__CompressedImage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__CompressedImage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__CompressedImage__fini(&data[i]);
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
    if (!protocol__msg__CompressedImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
