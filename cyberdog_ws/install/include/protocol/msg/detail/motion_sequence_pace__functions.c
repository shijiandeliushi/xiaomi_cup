// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MotionSequencePace.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_sequence_pace__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `twist`
// Member `weight`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `centroid`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `right_forefoot`
// Member `left_forefoot`
// Member `right_hindfoot`
// Member `left_hindfoot`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
protocol__msg__MotionSequencePace__init(protocol__msg__MotionSequencePace * msg)
{
  if (!msg) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    protocol__msg__MotionSequencePace__fini(msg);
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Pose__init(&msg->centroid)) {
    protocol__msg__MotionSequencePace__fini(msg);
    return false;
  }
  // weight
  if (!geometry_msgs__msg__Twist__init(&msg->weight)) {
    protocol__msg__MotionSequencePace__fini(msg);
    return false;
  }
  // right_forefoot
  if (!geometry_msgs__msg__Quaternion__init(&msg->right_forefoot)) {
    protocol__msg__MotionSequencePace__fini(msg);
    return false;
  }
  // left_forefoot
  if (!geometry_msgs__msg__Quaternion__init(&msg->left_forefoot)) {
    protocol__msg__MotionSequencePace__fini(msg);
    return false;
  }
  // right_hindfoot
  if (!geometry_msgs__msg__Quaternion__init(&msg->right_hindfoot)) {
    protocol__msg__MotionSequencePace__fini(msg);
    return false;
  }
  // left_hindfoot
  if (!geometry_msgs__msg__Quaternion__init(&msg->left_hindfoot)) {
    protocol__msg__MotionSequencePace__fini(msg);
    return false;
  }
  // friction_coefficient
  // landing_gain
  // use_mpc_track
  // duration
  return true;
}

void
protocol__msg__MotionSequencePace__fini(protocol__msg__MotionSequencePace * msg)
{
  if (!msg) {
    return;
  }
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // centroid
  geometry_msgs__msg__Pose__fini(&msg->centroid);
  // weight
  geometry_msgs__msg__Twist__fini(&msg->weight);
  // right_forefoot
  geometry_msgs__msg__Quaternion__fini(&msg->right_forefoot);
  // left_forefoot
  geometry_msgs__msg__Quaternion__fini(&msg->left_forefoot);
  // right_hindfoot
  geometry_msgs__msg__Quaternion__fini(&msg->right_hindfoot);
  // left_hindfoot
  geometry_msgs__msg__Quaternion__fini(&msg->left_hindfoot);
  // friction_coefficient
  // landing_gain
  // use_mpc_track
  // duration
}

bool
protocol__msg__MotionSequencePace__are_equal(const protocol__msg__MotionSequencePace * lhs, const protocol__msg__MotionSequencePace * rhs)
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
  // centroid
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->centroid), &(rhs->centroid)))
  {
    return false;
  }
  // weight
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->weight), &(rhs->weight)))
  {
    return false;
  }
  // right_forefoot
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->right_forefoot), &(rhs->right_forefoot)))
  {
    return false;
  }
  // left_forefoot
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->left_forefoot), &(rhs->left_forefoot)))
  {
    return false;
  }
  // right_hindfoot
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->right_hindfoot), &(rhs->right_hindfoot)))
  {
    return false;
  }
  // left_hindfoot
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->left_hindfoot), &(rhs->left_hindfoot)))
  {
    return false;
  }
  // friction_coefficient
  if (lhs->friction_coefficient != rhs->friction_coefficient) {
    return false;
  }
  // landing_gain
  if (lhs->landing_gain != rhs->landing_gain) {
    return false;
  }
  // use_mpc_track
  if (lhs->use_mpc_track != rhs->use_mpc_track) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
protocol__msg__MotionSequencePace__copy(
  const protocol__msg__MotionSequencePace * input,
  protocol__msg__MotionSequencePace * output)
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
  // centroid
  if (!geometry_msgs__msg__Pose__copy(
      &(input->centroid), &(output->centroid)))
  {
    return false;
  }
  // weight
  if (!geometry_msgs__msg__Twist__copy(
      &(input->weight), &(output->weight)))
  {
    return false;
  }
  // right_forefoot
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->right_forefoot), &(output->right_forefoot)))
  {
    return false;
  }
  // left_forefoot
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->left_forefoot), &(output->left_forefoot)))
  {
    return false;
  }
  // right_hindfoot
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->right_hindfoot), &(output->right_hindfoot)))
  {
    return false;
  }
  // left_hindfoot
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->left_hindfoot), &(output->left_hindfoot)))
  {
    return false;
  }
  // friction_coefficient
  output->friction_coefficient = input->friction_coefficient;
  // landing_gain
  output->landing_gain = input->landing_gain;
  // use_mpc_track
  output->use_mpc_track = input->use_mpc_track;
  // duration
  output->duration = input->duration;
  return true;
}

protocol__msg__MotionSequencePace *
protocol__msg__MotionSequencePace__create()
{
  protocol__msg__MotionSequencePace * msg = (protocol__msg__MotionSequencePace *)malloc(sizeof(protocol__msg__MotionSequencePace));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MotionSequencePace));
  bool success = protocol__msg__MotionSequencePace__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MotionSequencePace__destroy(protocol__msg__MotionSequencePace * msg)
{
  if (msg) {
    protocol__msg__MotionSequencePace__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MotionSequencePace__Sequence__init(protocol__msg__MotionSequencePace__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MotionSequencePace * data = NULL;
  if (size) {
    data = (protocol__msg__MotionSequencePace *)calloc(size, sizeof(protocol__msg__MotionSequencePace));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MotionSequencePace__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MotionSequencePace__fini(&data[i - 1]);
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
protocol__msg__MotionSequencePace__Sequence__fini(protocol__msg__MotionSequencePace__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MotionSequencePace__fini(&array->data[i]);
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

protocol__msg__MotionSequencePace__Sequence *
protocol__msg__MotionSequencePace__Sequence__create(size_t size)
{
  protocol__msg__MotionSequencePace__Sequence * array = (protocol__msg__MotionSequencePace__Sequence *)malloc(sizeof(protocol__msg__MotionSequencePace__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MotionSequencePace__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MotionSequencePace__Sequence__destroy(protocol__msg__MotionSequencePace__Sequence * array)
{
  if (array) {
    protocol__msg__MotionSequencePace__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MotionSequencePace__Sequence__are_equal(const protocol__msg__MotionSequencePace__Sequence * lhs, const protocol__msg__MotionSequencePace__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MotionSequencePace__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MotionSequencePace__Sequence__copy(
  const protocol__msg__MotionSequencePace__Sequence * input,
  protocol__msg__MotionSequencePace__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MotionSequencePace);
    protocol__msg__MotionSequencePace * data =
      (protocol__msg__MotionSequencePace *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MotionSequencePace__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MotionSequencePace__fini(&data[i]);
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
    if (!protocol__msg__MotionSequencePace__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
