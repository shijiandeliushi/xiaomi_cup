// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MotionSequenceParam.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_sequence_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `centroid_height`
// Member `right_forefoot`
// Member `left_forefoot`
// Member `right_hindfoot`
// Member `left_hindfoot`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
protocol__msg__MotionSequenceParam__init(protocol__msg__MotionSequenceParam * msg)
{
  if (!msg) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    protocol__msg__MotionSequenceParam__fini(msg);
    return false;
  }
  // centroid_height
  if (!geometry_msgs__msg__Point__init(&msg->centroid_height)) {
    protocol__msg__MotionSequenceParam__fini(msg);
    return false;
  }
  // right_forefoot
  if (!geometry_msgs__msg__Point__init(&msg->right_forefoot)) {
    protocol__msg__MotionSequenceParam__fini(msg);
    return false;
  }
  // left_forefoot
  if (!geometry_msgs__msg__Point__init(&msg->left_forefoot)) {
    protocol__msg__MotionSequenceParam__fini(msg);
    return false;
  }
  // right_hindfoot
  if (!geometry_msgs__msg__Point__init(&msg->right_hindfoot)) {
    protocol__msg__MotionSequenceParam__fini(msg);
    return false;
  }
  // left_hindfoot
  if (!geometry_msgs__msg__Point__init(&msg->left_hindfoot)) {
    protocol__msg__MotionSequenceParam__fini(msg);
    return false;
  }
  // forefoot_height
  // hindfoot_height
  // friction_coefficient
  // duration_ms
  return true;
}

void
protocol__msg__MotionSequenceParam__fini(protocol__msg__MotionSequenceParam * msg)
{
  if (!msg) {
    return;
  }
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // centroid_height
  geometry_msgs__msg__Point__fini(&msg->centroid_height);
  // right_forefoot
  geometry_msgs__msg__Point__fini(&msg->right_forefoot);
  // left_forefoot
  geometry_msgs__msg__Point__fini(&msg->left_forefoot);
  // right_hindfoot
  geometry_msgs__msg__Point__fini(&msg->right_hindfoot);
  // left_hindfoot
  geometry_msgs__msg__Point__fini(&msg->left_hindfoot);
  // forefoot_height
  // hindfoot_height
  // friction_coefficient
  // duration_ms
}

bool
protocol__msg__MotionSequenceParam__are_equal(const protocol__msg__MotionSequenceParam * lhs, const protocol__msg__MotionSequenceParam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // centroid_height
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->centroid_height), &(rhs->centroid_height)))
  {
    return false;
  }
  // right_forefoot
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->right_forefoot), &(rhs->right_forefoot)))
  {
    return false;
  }
  // left_forefoot
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->left_forefoot), &(rhs->left_forefoot)))
  {
    return false;
  }
  // right_hindfoot
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->right_hindfoot), &(rhs->right_hindfoot)))
  {
    return false;
  }
  // left_hindfoot
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->left_hindfoot), &(rhs->left_hindfoot)))
  {
    return false;
  }
  // forefoot_height
  if (lhs->forefoot_height != rhs->forefoot_height) {
    return false;
  }
  // hindfoot_height
  if (lhs->hindfoot_height != rhs->hindfoot_height) {
    return false;
  }
  // friction_coefficient
  if (lhs->friction_coefficient != rhs->friction_coefficient) {
    return false;
  }
  // duration_ms
  if (lhs->duration_ms != rhs->duration_ms) {
    return false;
  }
  return true;
}

bool
protocol__msg__MotionSequenceParam__copy(
  const protocol__msg__MotionSequenceParam * input,
  protocol__msg__MotionSequenceParam * output)
{
  if (!input || !output) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // centroid_height
  if (!geometry_msgs__msg__Point__copy(
      &(input->centroid_height), &(output->centroid_height)))
  {
    return false;
  }
  // right_forefoot
  if (!geometry_msgs__msg__Point__copy(
      &(input->right_forefoot), &(output->right_forefoot)))
  {
    return false;
  }
  // left_forefoot
  if (!geometry_msgs__msg__Point__copy(
      &(input->left_forefoot), &(output->left_forefoot)))
  {
    return false;
  }
  // right_hindfoot
  if (!geometry_msgs__msg__Point__copy(
      &(input->right_hindfoot), &(output->right_hindfoot)))
  {
    return false;
  }
  // left_hindfoot
  if (!geometry_msgs__msg__Point__copy(
      &(input->left_hindfoot), &(output->left_hindfoot)))
  {
    return false;
  }
  // forefoot_height
  output->forefoot_height = input->forefoot_height;
  // hindfoot_height
  output->hindfoot_height = input->hindfoot_height;
  // friction_coefficient
  output->friction_coefficient = input->friction_coefficient;
  // duration_ms
  output->duration_ms = input->duration_ms;
  return true;
}

protocol__msg__MotionSequenceParam *
protocol__msg__MotionSequenceParam__create()
{
  protocol__msg__MotionSequenceParam * msg = (protocol__msg__MotionSequenceParam *)malloc(sizeof(protocol__msg__MotionSequenceParam));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MotionSequenceParam));
  bool success = protocol__msg__MotionSequenceParam__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MotionSequenceParam__destroy(protocol__msg__MotionSequenceParam * msg)
{
  if (msg) {
    protocol__msg__MotionSequenceParam__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MotionSequenceParam__Sequence__init(protocol__msg__MotionSequenceParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MotionSequenceParam * data = NULL;
  if (size) {
    data = (protocol__msg__MotionSequenceParam *)calloc(size, sizeof(protocol__msg__MotionSequenceParam));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MotionSequenceParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MotionSequenceParam__fini(&data[i - 1]);
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
protocol__msg__MotionSequenceParam__Sequence__fini(protocol__msg__MotionSequenceParam__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MotionSequenceParam__fini(&array->data[i]);
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

protocol__msg__MotionSequenceParam__Sequence *
protocol__msg__MotionSequenceParam__Sequence__create(size_t size)
{
  protocol__msg__MotionSequenceParam__Sequence * array = (protocol__msg__MotionSequenceParam__Sequence *)malloc(sizeof(protocol__msg__MotionSequenceParam__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MotionSequenceParam__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MotionSequenceParam__Sequence__destroy(protocol__msg__MotionSequenceParam__Sequence * array)
{
  if (array) {
    protocol__msg__MotionSequenceParam__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MotionSequenceParam__Sequence__are_equal(const protocol__msg__MotionSequenceParam__Sequence * lhs, const protocol__msg__MotionSequenceParam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MotionSequenceParam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MotionSequenceParam__Sequence__copy(
  const protocol__msg__MotionSequenceParam__Sequence * input,
  protocol__msg__MotionSequenceParam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MotionSequenceParam);
    protocol__msg__MotionSequenceParam * data =
      (protocol__msg__MotionSequenceParam *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MotionSequenceParam__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MotionSequenceParam__fini(&data[i]);
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
    if (!protocol__msg__MotionSequenceParam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
