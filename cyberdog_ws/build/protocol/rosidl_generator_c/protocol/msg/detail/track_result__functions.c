// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/TrackResult.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/track_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
protocol__msg__TrackResult__init(protocol__msg__TrackResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    protocol__msg__TrackResult__fini(msg);
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    protocol__msg__TrackResult__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__TrackResult__fini(protocol__msg__TrackResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

bool
protocol__msg__TrackResult__are_equal(const protocol__msg__TrackResult * lhs, const protocol__msg__TrackResult * rhs)
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
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__TrackResult__copy(
  const protocol__msg__TrackResult * input,
  protocol__msg__TrackResult * output)
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
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  return true;
}

protocol__msg__TrackResult *
protocol__msg__TrackResult__create()
{
  protocol__msg__TrackResult * msg = (protocol__msg__TrackResult *)malloc(sizeof(protocol__msg__TrackResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__TrackResult));
  bool success = protocol__msg__TrackResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__TrackResult__destroy(protocol__msg__TrackResult * msg)
{
  if (msg) {
    protocol__msg__TrackResult__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__TrackResult__Sequence__init(protocol__msg__TrackResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__TrackResult * data = NULL;
  if (size) {
    data = (protocol__msg__TrackResult *)calloc(size, sizeof(protocol__msg__TrackResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__TrackResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__TrackResult__fini(&data[i - 1]);
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
protocol__msg__TrackResult__Sequence__fini(protocol__msg__TrackResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__TrackResult__fini(&array->data[i]);
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

protocol__msg__TrackResult__Sequence *
protocol__msg__TrackResult__Sequence__create(size_t size)
{
  protocol__msg__TrackResult__Sequence * array = (protocol__msg__TrackResult__Sequence *)malloc(sizeof(protocol__msg__TrackResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__TrackResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__TrackResult__Sequence__destroy(protocol__msg__TrackResult__Sequence * array)
{
  if (array) {
    protocol__msg__TrackResult__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__TrackResult__Sequence__are_equal(const protocol__msg__TrackResult__Sequence * lhs, const protocol__msg__TrackResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__TrackResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__TrackResult__Sequence__copy(
  const protocol__msg__TrackResult__Sequence * input,
  protocol__msg__TrackResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__TrackResult);
    protocol__msg__TrackResult * data =
      (protocol__msg__TrackResult *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__TrackResult__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__TrackResult__fini(&data[i]);
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
    if (!protocol__msg__TrackResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
