// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/FaceResult.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/face_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"
// Member `face_images`
#include "protocol/msg/detail/compressed_image__functions.h"

bool
protocol__msg__FaceResult__init(protocol__msg__FaceResult * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    protocol__msg__FaceResult__fini(msg);
    return false;
  }
  // face_images
  if (!protocol__msg__CompressedImage__Sequence__init(&msg->face_images, 0)) {
    protocol__msg__FaceResult__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__FaceResult__fini(protocol__msg__FaceResult * msg)
{
  if (!msg) {
    return;
  }
  // result
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // face_images
  protocol__msg__CompressedImage__Sequence__fini(&msg->face_images);
}

bool
protocol__msg__FaceResult__are_equal(const protocol__msg__FaceResult * lhs, const protocol__msg__FaceResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  // face_images
  if (!protocol__msg__CompressedImage__Sequence__are_equal(
      &(lhs->face_images), &(rhs->face_images)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__FaceResult__copy(
  const protocol__msg__FaceResult * input,
  protocol__msg__FaceResult * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  // face_images
  if (!protocol__msg__CompressedImage__Sequence__copy(
      &(input->face_images), &(output->face_images)))
  {
    return false;
  }
  return true;
}

protocol__msg__FaceResult *
protocol__msg__FaceResult__create()
{
  protocol__msg__FaceResult * msg = (protocol__msg__FaceResult *)malloc(sizeof(protocol__msg__FaceResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__FaceResult));
  bool success = protocol__msg__FaceResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__FaceResult__destroy(protocol__msg__FaceResult * msg)
{
  if (msg) {
    protocol__msg__FaceResult__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__FaceResult__Sequence__init(protocol__msg__FaceResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__FaceResult * data = NULL;
  if (size) {
    data = (protocol__msg__FaceResult *)calloc(size, sizeof(protocol__msg__FaceResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__FaceResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__FaceResult__fini(&data[i - 1]);
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
protocol__msg__FaceResult__Sequence__fini(protocol__msg__FaceResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__FaceResult__fini(&array->data[i]);
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

protocol__msg__FaceResult__Sequence *
protocol__msg__FaceResult__Sequence__create(size_t size)
{
  protocol__msg__FaceResult__Sequence * array = (protocol__msg__FaceResult__Sequence *)malloc(sizeof(protocol__msg__FaceResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__FaceResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__FaceResult__Sequence__destroy(protocol__msg__FaceResult__Sequence * array)
{
  if (array) {
    protocol__msg__FaceResult__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__FaceResult__Sequence__are_equal(const protocol__msg__FaceResult__Sequence * lhs, const protocol__msg__FaceResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__FaceResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__FaceResult__Sequence__copy(
  const protocol__msg__FaceResult__Sequence * input,
  protocol__msg__FaceResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__FaceResult);
    protocol__msg__FaceResult * data =
      (protocol__msg__FaceResult *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__FaceResult__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__FaceResult__fini(&data[i]);
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
    if (!protocol__msg__FaceResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
