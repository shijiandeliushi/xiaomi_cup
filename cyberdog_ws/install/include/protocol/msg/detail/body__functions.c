// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/Body.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/body__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
// Member `reid`
#include "rosidl_runtime_c/string_functions.h"
// Member `feats`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `keypoints`
#include "protocol/msg/detail/keypoint__functions.h"
// Member `gesture`
#include "protocol/msg/detail/gesture__functions.h"

bool
protocol__msg__Body__init(protocol__msg__Body * msg)
{
  if (!msg) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    protocol__msg__Body__fini(msg);
    return false;
  }
  // reid
  if (!rosidl_runtime_c__String__init(&msg->reid)) {
    protocol__msg__Body__fini(msg);
    return false;
  }
  // feats
  if (!rosidl_runtime_c__float__Sequence__init(&msg->feats, 0)) {
    protocol__msg__Body__fini(msg);
    return false;
  }
  // keypoints
  if (!protocol__msg__Keypoint__Sequence__init(&msg->keypoints, 0)) {
    protocol__msg__Body__fini(msg);
    return false;
  }
  // gesture
  if (!protocol__msg__Gesture__init(&msg->gesture)) {
    protocol__msg__Body__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__Body__fini(protocol__msg__Body * msg)
{
  if (!msg) {
    return;
  }
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
  // reid
  rosidl_runtime_c__String__fini(&msg->reid);
  // feats
  rosidl_runtime_c__float__Sequence__fini(&msg->feats);
  // keypoints
  protocol__msg__Keypoint__Sequence__fini(&msg->keypoints);
  // gesture
  protocol__msg__Gesture__fini(&msg->gesture);
}

bool
protocol__msg__Body__are_equal(const protocol__msg__Body * lhs, const protocol__msg__Body * rhs)
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
  // reid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reid), &(rhs->reid)))
  {
    return false;
  }
  // feats
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->feats), &(rhs->feats)))
  {
    return false;
  }
  // keypoints
  if (!protocol__msg__Keypoint__Sequence__are_equal(
      &(lhs->keypoints), &(rhs->keypoints)))
  {
    return false;
  }
  // gesture
  if (!protocol__msg__Gesture__are_equal(
      &(lhs->gesture), &(rhs->gesture)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__Body__copy(
  const protocol__msg__Body * input,
  protocol__msg__Body * output)
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
  // reid
  if (!rosidl_runtime_c__String__copy(
      &(input->reid), &(output->reid)))
  {
    return false;
  }
  // feats
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->feats), &(output->feats)))
  {
    return false;
  }
  // keypoints
  if (!protocol__msg__Keypoint__Sequence__copy(
      &(input->keypoints), &(output->keypoints)))
  {
    return false;
  }
  // gesture
  if (!protocol__msg__Gesture__copy(
      &(input->gesture), &(output->gesture)))
  {
    return false;
  }
  return true;
}

protocol__msg__Body *
protocol__msg__Body__create()
{
  protocol__msg__Body * msg = (protocol__msg__Body *)malloc(sizeof(protocol__msg__Body));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__Body));
  bool success = protocol__msg__Body__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__Body__destroy(protocol__msg__Body * msg)
{
  if (msg) {
    protocol__msg__Body__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__Body__Sequence__init(protocol__msg__Body__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__Body * data = NULL;
  if (size) {
    data = (protocol__msg__Body *)calloc(size, sizeof(protocol__msg__Body));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__Body__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__Body__fini(&data[i - 1]);
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
protocol__msg__Body__Sequence__fini(protocol__msg__Body__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__Body__fini(&array->data[i]);
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

protocol__msg__Body__Sequence *
protocol__msg__Body__Sequence__create(size_t size)
{
  protocol__msg__Body__Sequence * array = (protocol__msg__Body__Sequence *)malloc(sizeof(protocol__msg__Body__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__Body__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__Body__Sequence__destroy(protocol__msg__Body__Sequence * array)
{
  if (array) {
    protocol__msg__Body__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__Body__Sequence__are_equal(const protocol__msg__Body__Sequence * lhs, const protocol__msg__Body__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__Body__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__Body__Sequence__copy(
  const protocol__msg__Body__Sequence * input,
  protocol__msg__Body__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__Body);
    protocol__msg__Body * data =
      (protocol__msg__Body *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__Body__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__Body__fini(&data[i]);
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
    if (!protocol__msg__Body__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
