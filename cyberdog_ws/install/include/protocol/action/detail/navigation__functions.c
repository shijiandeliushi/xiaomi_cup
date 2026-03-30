// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:action/Navigation.idl
// generated code does not contain a copyright notice
#include "protocol/action/detail/navigation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `label_id`
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracking_roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
protocol__action__Navigation_Goal__init(protocol__action__Navigation_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // nav_type
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->poses, 0)) {
    protocol__action__Navigation_Goal__fini(msg);
    return false;
  }
  // label_id
  if (!rosidl_runtime_c__String__init(&msg->label_id)) {
    protocol__action__Navigation_Goal__fini(msg);
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    protocol__action__Navigation_Goal__fini(msg);
    return false;
  }
  // tracking_roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->tracking_roi)) {
    protocol__action__Navigation_Goal__fini(msg);
    return false;
  }
  // relative_pos
  // keep_distance
  // outdoor
  // object_tracking
  return true;
}

void
protocol__action__Navigation_Goal__fini(protocol__action__Navigation_Goal * msg)
{
  if (!msg) {
    return;
  }
  // nav_type
  // poses
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->poses);
  // label_id
  rosidl_runtime_c__String__fini(&msg->label_id);
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // tracking_roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->tracking_roi);
  // relative_pos
  // keep_distance
  // outdoor
  // object_tracking
}

bool
protocol__action__Navigation_Goal__are_equal(const protocol__action__Navigation_Goal * lhs, const protocol__action__Navigation_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nav_type
  if (lhs->nav_type != rhs->nav_type) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // label_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label_id), &(rhs->label_id)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // tracking_roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->tracking_roi), &(rhs->tracking_roi)))
  {
    return false;
  }
  // relative_pos
  if (lhs->relative_pos != rhs->relative_pos) {
    return false;
  }
  // keep_distance
  if (lhs->keep_distance != rhs->keep_distance) {
    return false;
  }
  // outdoor
  if (lhs->outdoor != rhs->outdoor) {
    return false;
  }
  // object_tracking
  if (lhs->object_tracking != rhs->object_tracking) {
    return false;
  }
  return true;
}

bool
protocol__action__Navigation_Goal__copy(
  const protocol__action__Navigation_Goal * input,
  protocol__action__Navigation_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // nav_type
  output->nav_type = input->nav_type;
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // label_id
  if (!rosidl_runtime_c__String__copy(
      &(input->label_id), &(output->label_id)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // tracking_roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->tracking_roi), &(output->tracking_roi)))
  {
    return false;
  }
  // relative_pos
  output->relative_pos = input->relative_pos;
  // keep_distance
  output->keep_distance = input->keep_distance;
  // outdoor
  output->outdoor = input->outdoor;
  // object_tracking
  output->object_tracking = input->object_tracking;
  return true;
}

protocol__action__Navigation_Goal *
protocol__action__Navigation_Goal__create()
{
  protocol__action__Navigation_Goal * msg = (protocol__action__Navigation_Goal *)malloc(sizeof(protocol__action__Navigation_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__Navigation_Goal));
  bool success = protocol__action__Navigation_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__Navigation_Goal__destroy(protocol__action__Navigation_Goal * msg)
{
  if (msg) {
    protocol__action__Navigation_Goal__fini(msg);
  }
  free(msg);
}


bool
protocol__action__Navigation_Goal__Sequence__init(protocol__action__Navigation_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__Navigation_Goal * data = NULL;
  if (size) {
    data = (protocol__action__Navigation_Goal *)calloc(size, sizeof(protocol__action__Navigation_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__Navigation_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__Navigation_Goal__fini(&data[i - 1]);
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
protocol__action__Navigation_Goal__Sequence__fini(protocol__action__Navigation_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__Navigation_Goal__fini(&array->data[i]);
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

protocol__action__Navigation_Goal__Sequence *
protocol__action__Navigation_Goal__Sequence__create(size_t size)
{
  protocol__action__Navigation_Goal__Sequence * array = (protocol__action__Navigation_Goal__Sequence *)malloc(sizeof(protocol__action__Navigation_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__Navigation_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__Navigation_Goal__Sequence__destroy(protocol__action__Navigation_Goal__Sequence * array)
{
  if (array) {
    protocol__action__Navigation_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__Navigation_Goal__Sequence__are_equal(const protocol__action__Navigation_Goal__Sequence * lhs, const protocol__action__Navigation_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__Navigation_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__Navigation_Goal__Sequence__copy(
  const protocol__action__Navigation_Goal__Sequence * input,
  protocol__action__Navigation_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__Navigation_Goal);
    protocol__action__Navigation_Goal * data =
      (protocol__action__Navigation_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__Navigation_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__Navigation_Goal__fini(&data[i]);
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
    if (!protocol__action__Navigation_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
protocol__action__Navigation_Result__init(protocol__action__Navigation_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
protocol__action__Navigation_Result__fini(protocol__action__Navigation_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
protocol__action__Navigation_Result__are_equal(const protocol__action__Navigation_Result * lhs, const protocol__action__Navigation_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
protocol__action__Navigation_Result__copy(
  const protocol__action__Navigation_Result * input,
  protocol__action__Navigation_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

protocol__action__Navigation_Result *
protocol__action__Navigation_Result__create()
{
  protocol__action__Navigation_Result * msg = (protocol__action__Navigation_Result *)malloc(sizeof(protocol__action__Navigation_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__Navigation_Result));
  bool success = protocol__action__Navigation_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__Navigation_Result__destroy(protocol__action__Navigation_Result * msg)
{
  if (msg) {
    protocol__action__Navigation_Result__fini(msg);
  }
  free(msg);
}


bool
protocol__action__Navigation_Result__Sequence__init(protocol__action__Navigation_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__Navigation_Result * data = NULL;
  if (size) {
    data = (protocol__action__Navigation_Result *)calloc(size, sizeof(protocol__action__Navigation_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__Navigation_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__Navigation_Result__fini(&data[i - 1]);
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
protocol__action__Navigation_Result__Sequence__fini(protocol__action__Navigation_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__Navigation_Result__fini(&array->data[i]);
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

protocol__action__Navigation_Result__Sequence *
protocol__action__Navigation_Result__Sequence__create(size_t size)
{
  protocol__action__Navigation_Result__Sequence * array = (protocol__action__Navigation_Result__Sequence *)malloc(sizeof(protocol__action__Navigation_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__Navigation_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__Navigation_Result__Sequence__destroy(protocol__action__Navigation_Result__Sequence * array)
{
  if (array) {
    protocol__action__Navigation_Result__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__Navigation_Result__Sequence__are_equal(const protocol__action__Navigation_Result__Sequence * lhs, const protocol__action__Navigation_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__Navigation_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__Navigation_Result__Sequence__copy(
  const protocol__action__Navigation_Result__Sequence * input,
  protocol__action__Navigation_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__Navigation_Result);
    protocol__action__Navigation_Result * data =
      (protocol__action__Navigation_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__Navigation_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__Navigation_Result__fini(&data[i]);
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
    if (!protocol__action__Navigation_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
protocol__action__Navigation_Feedback__init(protocol__action__Navigation_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_code
  // feedback_msg
  if (!rosidl_runtime_c__String__init(&msg->feedback_msg)) {
    protocol__action__Navigation_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__Navigation_Feedback__fini(protocol__action__Navigation_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_code
  // feedback_msg
  rosidl_runtime_c__String__fini(&msg->feedback_msg);
}

bool
protocol__action__Navigation_Feedback__are_equal(const protocol__action__Navigation_Feedback * lhs, const protocol__action__Navigation_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback_code
  if (lhs->feedback_code != rhs->feedback_code) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_msg), &(rhs->feedback_msg)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__Navigation_Feedback__copy(
  const protocol__action__Navigation_Feedback * input,
  protocol__action__Navigation_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_code
  output->feedback_code = input->feedback_code;
  // feedback_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_msg), &(output->feedback_msg)))
  {
    return false;
  }
  return true;
}

protocol__action__Navigation_Feedback *
protocol__action__Navigation_Feedback__create()
{
  protocol__action__Navigation_Feedback * msg = (protocol__action__Navigation_Feedback *)malloc(sizeof(protocol__action__Navigation_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__Navigation_Feedback));
  bool success = protocol__action__Navigation_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__Navigation_Feedback__destroy(protocol__action__Navigation_Feedback * msg)
{
  if (msg) {
    protocol__action__Navigation_Feedback__fini(msg);
  }
  free(msg);
}


bool
protocol__action__Navigation_Feedback__Sequence__init(protocol__action__Navigation_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__Navigation_Feedback * data = NULL;
  if (size) {
    data = (protocol__action__Navigation_Feedback *)calloc(size, sizeof(protocol__action__Navigation_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__Navigation_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__Navigation_Feedback__fini(&data[i - 1]);
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
protocol__action__Navigation_Feedback__Sequence__fini(protocol__action__Navigation_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__Navigation_Feedback__fini(&array->data[i]);
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

protocol__action__Navigation_Feedback__Sequence *
protocol__action__Navigation_Feedback__Sequence__create(size_t size)
{
  protocol__action__Navigation_Feedback__Sequence * array = (protocol__action__Navigation_Feedback__Sequence *)malloc(sizeof(protocol__action__Navigation_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__Navigation_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__Navigation_Feedback__Sequence__destroy(protocol__action__Navigation_Feedback__Sequence * array)
{
  if (array) {
    protocol__action__Navigation_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__Navigation_Feedback__Sequence__are_equal(const protocol__action__Navigation_Feedback__Sequence * lhs, const protocol__action__Navigation_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__Navigation_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__Navigation_Feedback__Sequence__copy(
  const protocol__action__Navigation_Feedback__Sequence * input,
  protocol__action__Navigation_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__Navigation_Feedback);
    protocol__action__Navigation_Feedback * data =
      (protocol__action__Navigation_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__Navigation_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__Navigation_Feedback__fini(&data[i]);
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
    if (!protocol__action__Navigation_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "protocol/action/detail/navigation__functions.h"

bool
protocol__action__Navigation_SendGoal_Request__init(protocol__action__Navigation_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    protocol__action__Navigation_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!protocol__action__Navigation_Goal__init(&msg->goal)) {
    protocol__action__Navigation_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__Navigation_SendGoal_Request__fini(protocol__action__Navigation_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  protocol__action__Navigation_Goal__fini(&msg->goal);
}

bool
protocol__action__Navigation_SendGoal_Request__are_equal(const protocol__action__Navigation_SendGoal_Request * lhs, const protocol__action__Navigation_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!protocol__action__Navigation_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__Navigation_SendGoal_Request__copy(
  const protocol__action__Navigation_SendGoal_Request * input,
  protocol__action__Navigation_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!protocol__action__Navigation_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

protocol__action__Navigation_SendGoal_Request *
protocol__action__Navigation_SendGoal_Request__create()
{
  protocol__action__Navigation_SendGoal_Request * msg = (protocol__action__Navigation_SendGoal_Request *)malloc(sizeof(protocol__action__Navigation_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__Navigation_SendGoal_Request));
  bool success = protocol__action__Navigation_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__Navigation_SendGoal_Request__destroy(protocol__action__Navigation_SendGoal_Request * msg)
{
  if (msg) {
    protocol__action__Navigation_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__action__Navigation_SendGoal_Request__Sequence__init(protocol__action__Navigation_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__Navigation_SendGoal_Request * data = NULL;
  if (size) {
    data = (protocol__action__Navigation_SendGoal_Request *)calloc(size, sizeof(protocol__action__Navigation_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__Navigation_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__Navigation_SendGoal_Request__fini(&data[i - 1]);
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
protocol__action__Navigation_SendGoal_Request__Sequence__fini(protocol__action__Navigation_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__Navigation_SendGoal_Request__fini(&array->data[i]);
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

protocol__action__Navigation_SendGoal_Request__Sequence *
protocol__action__Navigation_SendGoal_Request__Sequence__create(size_t size)
{
  protocol__action__Navigation_SendGoal_Request__Sequence * array = (protocol__action__Navigation_SendGoal_Request__Sequence *)malloc(sizeof(protocol__action__Navigation_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__Navigation_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__Navigation_SendGoal_Request__Sequence__destroy(protocol__action__Navigation_SendGoal_Request__Sequence * array)
{
  if (array) {
    protocol__action__Navigation_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__Navigation_SendGoal_Request__Sequence__are_equal(const protocol__action__Navigation_SendGoal_Request__Sequence * lhs, const protocol__action__Navigation_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__Navigation_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__Navigation_SendGoal_Request__Sequence__copy(
  const protocol__action__Navigation_SendGoal_Request__Sequence * input,
  protocol__action__Navigation_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__Navigation_SendGoal_Request);
    protocol__action__Navigation_SendGoal_Request * data =
      (protocol__action__Navigation_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__Navigation_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__Navigation_SendGoal_Request__fini(&data[i]);
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
    if (!protocol__action__Navigation_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
protocol__action__Navigation_SendGoal_Response__init(protocol__action__Navigation_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    protocol__action__Navigation_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__Navigation_SendGoal_Response__fini(protocol__action__Navigation_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
protocol__action__Navigation_SendGoal_Response__are_equal(const protocol__action__Navigation_SendGoal_Response * lhs, const protocol__action__Navigation_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__Navigation_SendGoal_Response__copy(
  const protocol__action__Navigation_SendGoal_Response * input,
  protocol__action__Navigation_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

protocol__action__Navigation_SendGoal_Response *
protocol__action__Navigation_SendGoal_Response__create()
{
  protocol__action__Navigation_SendGoal_Response * msg = (protocol__action__Navigation_SendGoal_Response *)malloc(sizeof(protocol__action__Navigation_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__Navigation_SendGoal_Response));
  bool success = protocol__action__Navigation_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__Navigation_SendGoal_Response__destroy(protocol__action__Navigation_SendGoal_Response * msg)
{
  if (msg) {
    protocol__action__Navigation_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__action__Navigation_SendGoal_Response__Sequence__init(protocol__action__Navigation_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__Navigation_SendGoal_Response * data = NULL;
  if (size) {
    data = (protocol__action__Navigation_SendGoal_Response *)calloc(size, sizeof(protocol__action__Navigation_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__Navigation_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__Navigation_SendGoal_Response__fini(&data[i - 1]);
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
protocol__action__Navigation_SendGoal_Response__Sequence__fini(protocol__action__Navigation_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__Navigation_SendGoal_Response__fini(&array->data[i]);
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

protocol__action__Navigation_SendGoal_Response__Sequence *
protocol__action__Navigation_SendGoal_Response__Sequence__create(size_t size)
{
  protocol__action__Navigation_SendGoal_Response__Sequence * array = (protocol__action__Navigation_SendGoal_Response__Sequence *)malloc(sizeof(protocol__action__Navigation_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__Navigation_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__Navigation_SendGoal_Response__Sequence__destroy(protocol__action__Navigation_SendGoal_Response__Sequence * array)
{
  if (array) {
    protocol__action__Navigation_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__Navigation_SendGoal_Response__Sequence__are_equal(const protocol__action__Navigation_SendGoal_Response__Sequence * lhs, const protocol__action__Navigation_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__Navigation_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__Navigation_SendGoal_Response__Sequence__copy(
  const protocol__action__Navigation_SendGoal_Response__Sequence * input,
  protocol__action__Navigation_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__Navigation_SendGoal_Response);
    protocol__action__Navigation_SendGoal_Response * data =
      (protocol__action__Navigation_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__Navigation_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__Navigation_SendGoal_Response__fini(&data[i]);
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
    if (!protocol__action__Navigation_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
protocol__action__Navigation_GetResult_Request__init(protocol__action__Navigation_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    protocol__action__Navigation_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__Navigation_GetResult_Request__fini(protocol__action__Navigation_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
protocol__action__Navigation_GetResult_Request__are_equal(const protocol__action__Navigation_GetResult_Request * lhs, const protocol__action__Navigation_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__Navigation_GetResult_Request__copy(
  const protocol__action__Navigation_GetResult_Request * input,
  protocol__action__Navigation_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

protocol__action__Navigation_GetResult_Request *
protocol__action__Navigation_GetResult_Request__create()
{
  protocol__action__Navigation_GetResult_Request * msg = (protocol__action__Navigation_GetResult_Request *)malloc(sizeof(protocol__action__Navigation_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__Navigation_GetResult_Request));
  bool success = protocol__action__Navigation_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__Navigation_GetResult_Request__destroy(protocol__action__Navigation_GetResult_Request * msg)
{
  if (msg) {
    protocol__action__Navigation_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__action__Navigation_GetResult_Request__Sequence__init(protocol__action__Navigation_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__Navigation_GetResult_Request * data = NULL;
  if (size) {
    data = (protocol__action__Navigation_GetResult_Request *)calloc(size, sizeof(protocol__action__Navigation_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__Navigation_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__Navigation_GetResult_Request__fini(&data[i - 1]);
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
protocol__action__Navigation_GetResult_Request__Sequence__fini(protocol__action__Navigation_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__Navigation_GetResult_Request__fini(&array->data[i]);
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

protocol__action__Navigation_GetResult_Request__Sequence *
protocol__action__Navigation_GetResult_Request__Sequence__create(size_t size)
{
  protocol__action__Navigation_GetResult_Request__Sequence * array = (protocol__action__Navigation_GetResult_Request__Sequence *)malloc(sizeof(protocol__action__Navigation_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__Navigation_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__Navigation_GetResult_Request__Sequence__destroy(protocol__action__Navigation_GetResult_Request__Sequence * array)
{
  if (array) {
    protocol__action__Navigation_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__Navigation_GetResult_Request__Sequence__are_equal(const protocol__action__Navigation_GetResult_Request__Sequence * lhs, const protocol__action__Navigation_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__Navigation_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__Navigation_GetResult_Request__Sequence__copy(
  const protocol__action__Navigation_GetResult_Request__Sequence * input,
  protocol__action__Navigation_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__Navigation_GetResult_Request);
    protocol__action__Navigation_GetResult_Request * data =
      (protocol__action__Navigation_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__Navigation_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__Navigation_GetResult_Request__fini(&data[i]);
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
    if (!protocol__action__Navigation_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "protocol/action/detail/navigation__functions.h"

bool
protocol__action__Navigation_GetResult_Response__init(protocol__action__Navigation_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!protocol__action__Navigation_Result__init(&msg->result)) {
    protocol__action__Navigation_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__Navigation_GetResult_Response__fini(protocol__action__Navigation_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  protocol__action__Navigation_Result__fini(&msg->result);
}

bool
protocol__action__Navigation_GetResult_Response__are_equal(const protocol__action__Navigation_GetResult_Response * lhs, const protocol__action__Navigation_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!protocol__action__Navigation_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__Navigation_GetResult_Response__copy(
  const protocol__action__Navigation_GetResult_Response * input,
  protocol__action__Navigation_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!protocol__action__Navigation_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

protocol__action__Navigation_GetResult_Response *
protocol__action__Navigation_GetResult_Response__create()
{
  protocol__action__Navigation_GetResult_Response * msg = (protocol__action__Navigation_GetResult_Response *)malloc(sizeof(protocol__action__Navigation_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__Navigation_GetResult_Response));
  bool success = protocol__action__Navigation_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__Navigation_GetResult_Response__destroy(protocol__action__Navigation_GetResult_Response * msg)
{
  if (msg) {
    protocol__action__Navigation_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__action__Navigation_GetResult_Response__Sequence__init(protocol__action__Navigation_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__Navigation_GetResult_Response * data = NULL;
  if (size) {
    data = (protocol__action__Navigation_GetResult_Response *)calloc(size, sizeof(protocol__action__Navigation_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__Navigation_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__Navigation_GetResult_Response__fini(&data[i - 1]);
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
protocol__action__Navigation_GetResult_Response__Sequence__fini(protocol__action__Navigation_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__Navigation_GetResult_Response__fini(&array->data[i]);
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

protocol__action__Navigation_GetResult_Response__Sequence *
protocol__action__Navigation_GetResult_Response__Sequence__create(size_t size)
{
  protocol__action__Navigation_GetResult_Response__Sequence * array = (protocol__action__Navigation_GetResult_Response__Sequence *)malloc(sizeof(protocol__action__Navigation_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__Navigation_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__Navigation_GetResult_Response__Sequence__destroy(protocol__action__Navigation_GetResult_Response__Sequence * array)
{
  if (array) {
    protocol__action__Navigation_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__Navigation_GetResult_Response__Sequence__are_equal(const protocol__action__Navigation_GetResult_Response__Sequence * lhs, const protocol__action__Navigation_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__Navigation_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__Navigation_GetResult_Response__Sequence__copy(
  const protocol__action__Navigation_GetResult_Response__Sequence * input,
  protocol__action__Navigation_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__Navigation_GetResult_Response);
    protocol__action__Navigation_GetResult_Response * data =
      (protocol__action__Navigation_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__Navigation_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__Navigation_GetResult_Response__fini(&data[i]);
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
    if (!protocol__action__Navigation_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "protocol/action/detail/navigation__functions.h"

bool
protocol__action__Navigation_FeedbackMessage__init(protocol__action__Navigation_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    protocol__action__Navigation_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!protocol__action__Navigation_Feedback__init(&msg->feedback)) {
    protocol__action__Navigation_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
protocol__action__Navigation_FeedbackMessage__fini(protocol__action__Navigation_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  protocol__action__Navigation_Feedback__fini(&msg->feedback);
}

bool
protocol__action__Navigation_FeedbackMessage__are_equal(const protocol__action__Navigation_FeedbackMessage * lhs, const protocol__action__Navigation_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!protocol__action__Navigation_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
protocol__action__Navigation_FeedbackMessage__copy(
  const protocol__action__Navigation_FeedbackMessage * input,
  protocol__action__Navigation_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!protocol__action__Navigation_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

protocol__action__Navigation_FeedbackMessage *
protocol__action__Navigation_FeedbackMessage__create()
{
  protocol__action__Navigation_FeedbackMessage * msg = (protocol__action__Navigation_FeedbackMessage *)malloc(sizeof(protocol__action__Navigation_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__action__Navigation_FeedbackMessage));
  bool success = protocol__action__Navigation_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__action__Navigation_FeedbackMessage__destroy(protocol__action__Navigation_FeedbackMessage * msg)
{
  if (msg) {
    protocol__action__Navigation_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
protocol__action__Navigation_FeedbackMessage__Sequence__init(protocol__action__Navigation_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__action__Navigation_FeedbackMessage * data = NULL;
  if (size) {
    data = (protocol__action__Navigation_FeedbackMessage *)calloc(size, sizeof(protocol__action__Navigation_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__action__Navigation_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__action__Navigation_FeedbackMessage__fini(&data[i - 1]);
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
protocol__action__Navigation_FeedbackMessage__Sequence__fini(protocol__action__Navigation_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__action__Navigation_FeedbackMessage__fini(&array->data[i]);
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

protocol__action__Navigation_FeedbackMessage__Sequence *
protocol__action__Navigation_FeedbackMessage__Sequence__create(size_t size)
{
  protocol__action__Navigation_FeedbackMessage__Sequence * array = (protocol__action__Navigation_FeedbackMessage__Sequence *)malloc(sizeof(protocol__action__Navigation_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__action__Navigation_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__action__Navigation_FeedbackMessage__Sequence__destroy(protocol__action__Navigation_FeedbackMessage__Sequence * array)
{
  if (array) {
    protocol__action__Navigation_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__action__Navigation_FeedbackMessage__Sequence__are_equal(const protocol__action__Navigation_FeedbackMessage__Sequence * lhs, const protocol__action__Navigation_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__action__Navigation_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__action__Navigation_FeedbackMessage__Sequence__copy(
  const protocol__action__Navigation_FeedbackMessage__Sequence * input,
  protocol__action__Navigation_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__action__Navigation_FeedbackMessage);
    protocol__action__Navigation_FeedbackMessage * data =
      (protocol__action__Navigation_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__action__Navigation_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__action__Navigation_FeedbackMessage__fini(&data[i]);
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
    if (!protocol__action__Navigation_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
