// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/Face.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/face__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__Face__init(protocol__msg__Face * msg)
{
  if (!msg) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    protocol__msg__Face__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    protocol__msg__Face__fini(msg);
    return false;
  }
  // score
  // match
  // yaw
  // pitch
  // row
  // is_host
  // age
  // emotion
  return true;
}

void
protocol__msg__Face__fini(protocol__msg__Face * msg)
{
  if (!msg) {
    return;
  }
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // score
  // match
  // yaw
  // pitch
  // row
  // is_host
  // age
  // emotion
}

bool
protocol__msg__Face__are_equal(const protocol__msg__Face * lhs, const protocol__msg__Face * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // match
  if (lhs->match != rhs->match) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // row
  if (lhs->row != rhs->row) {
    return false;
  }
  // is_host
  if (lhs->is_host != rhs->is_host) {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // emotion
  if (lhs->emotion != rhs->emotion) {
    return false;
  }
  return true;
}

bool
protocol__msg__Face__copy(
  const protocol__msg__Face * input,
  protocol__msg__Face * output)
{
  if (!input || !output) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // match
  output->match = input->match;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // row
  output->row = input->row;
  // is_host
  output->is_host = input->is_host;
  // age
  output->age = input->age;
  // emotion
  output->emotion = input->emotion;
  return true;
}

protocol__msg__Face *
protocol__msg__Face__create()
{
  protocol__msg__Face * msg = (protocol__msg__Face *)malloc(sizeof(protocol__msg__Face));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__Face));
  bool success = protocol__msg__Face__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__Face__destroy(protocol__msg__Face * msg)
{
  if (msg) {
    protocol__msg__Face__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__Face__Sequence__init(protocol__msg__Face__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__Face * data = NULL;
  if (size) {
    data = (protocol__msg__Face *)calloc(size, sizeof(protocol__msg__Face));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__Face__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__Face__fini(&data[i - 1]);
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
protocol__msg__Face__Sequence__fini(protocol__msg__Face__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__Face__fini(&array->data[i]);
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

protocol__msg__Face__Sequence *
protocol__msg__Face__Sequence__create(size_t size)
{
  protocol__msg__Face__Sequence * array = (protocol__msg__Face__Sequence *)malloc(sizeof(protocol__msg__Face__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__Face__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__Face__Sequence__destroy(protocol__msg__Face__Sequence * array)
{
  if (array) {
    protocol__msg__Face__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__Face__Sequence__are_equal(const protocol__msg__Face__Sequence * lhs, const protocol__msg__Face__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__Face__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__Face__Sequence__copy(
  const protocol__msg__Face__Sequence * input,
  protocol__msg__Face__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__Face);
    protocol__msg__Face * data =
      (protocol__msg__Face *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__Face__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__Face__fini(&data[i]);
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
    if (!protocol__msg__Face__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
