// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/visual_programming_operate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `type`
// Member `id`
// Member `target_id`
// Member `describe`
// Member `style`
// Member `operate`
// Member `mode`
// Member `condition`
// Member `body`
// Member `fsm`
// Member `dependent`
// Member `be_depended`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__VisualProgrammingOperate__init(protocol__msg__VisualProgrammingOperate * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // target_id
  if (!rosidl_runtime_c__String__Sequence__init(&msg->target_id, 0)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // describe
  if (!rosidl_runtime_c__String__init(&msg->describe)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // style
  if (!rosidl_runtime_c__String__init(&msg->style)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__init(&msg->operate)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // condition
  if (!rosidl_runtime_c__String__init(&msg->condition)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // body
  if (!rosidl_runtime_c__String__init(&msg->body)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // fsm
  if (!rosidl_runtime_c__String__init(&msg->fsm)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // dependent
  if (!rosidl_runtime_c__String__Sequence__init(&msg->dependent, 0)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  // be_depended
  if (!rosidl_runtime_c__String__Sequence__init(&msg->be_depended, 0)) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__VisualProgrammingOperate__fini(protocol__msg__VisualProgrammingOperate * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // target_id
  rosidl_runtime_c__String__Sequence__fini(&msg->target_id);
  // describe
  rosidl_runtime_c__String__fini(&msg->describe);
  // style
  rosidl_runtime_c__String__fini(&msg->style);
  // operate
  rosidl_runtime_c__String__fini(&msg->operate);
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // condition
  rosidl_runtime_c__String__fini(&msg->condition);
  // body
  rosidl_runtime_c__String__fini(&msg->body);
  // fsm
  rosidl_runtime_c__String__fini(&msg->fsm);
  // dependent
  rosidl_runtime_c__String__Sequence__fini(&msg->dependent);
  // be_depended
  rosidl_runtime_c__String__Sequence__fini(&msg->be_depended);
}

bool
protocol__msg__VisualProgrammingOperate__are_equal(const protocol__msg__VisualProgrammingOperate * lhs, const protocol__msg__VisualProgrammingOperate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // target_id
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->target_id), &(rhs->target_id)))
  {
    return false;
  }
  // describe
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->describe), &(rhs->describe)))
  {
    return false;
  }
  // style
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->style), &(rhs->style)))
  {
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operate), &(rhs->operate)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // condition
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->condition), &(rhs->condition)))
  {
    return false;
  }
  // body
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body), &(rhs->body)))
  {
    return false;
  }
  // fsm
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fsm), &(rhs->fsm)))
  {
    return false;
  }
  // dependent
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->dependent), &(rhs->dependent)))
  {
    return false;
  }
  // be_depended
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->be_depended), &(rhs->be_depended)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__VisualProgrammingOperate__copy(
  const protocol__msg__VisualProgrammingOperate * input,
  protocol__msg__VisualProgrammingOperate * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // target_id
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->target_id), &(output->target_id)))
  {
    return false;
  }
  // describe
  if (!rosidl_runtime_c__String__copy(
      &(input->describe), &(output->describe)))
  {
    return false;
  }
  // style
  if (!rosidl_runtime_c__String__copy(
      &(input->style), &(output->style)))
  {
    return false;
  }
  // operate
  if (!rosidl_runtime_c__String__copy(
      &(input->operate), &(output->operate)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // condition
  if (!rosidl_runtime_c__String__copy(
      &(input->condition), &(output->condition)))
  {
    return false;
  }
  // body
  if (!rosidl_runtime_c__String__copy(
      &(input->body), &(output->body)))
  {
    return false;
  }
  // fsm
  if (!rosidl_runtime_c__String__copy(
      &(input->fsm), &(output->fsm)))
  {
    return false;
  }
  // dependent
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->dependent), &(output->dependent)))
  {
    return false;
  }
  // be_depended
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->be_depended), &(output->be_depended)))
  {
    return false;
  }
  return true;
}

protocol__msg__VisualProgrammingOperate *
protocol__msg__VisualProgrammingOperate__create()
{
  protocol__msg__VisualProgrammingOperate * msg = (protocol__msg__VisualProgrammingOperate *)malloc(sizeof(protocol__msg__VisualProgrammingOperate));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__VisualProgrammingOperate));
  bool success = protocol__msg__VisualProgrammingOperate__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__VisualProgrammingOperate__destroy(protocol__msg__VisualProgrammingOperate * msg)
{
  if (msg) {
    protocol__msg__VisualProgrammingOperate__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__VisualProgrammingOperate__Sequence__init(protocol__msg__VisualProgrammingOperate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__VisualProgrammingOperate * data = NULL;
  if (size) {
    data = (protocol__msg__VisualProgrammingOperate *)calloc(size, sizeof(protocol__msg__VisualProgrammingOperate));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__VisualProgrammingOperate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__VisualProgrammingOperate__fini(&data[i - 1]);
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
protocol__msg__VisualProgrammingOperate__Sequence__fini(protocol__msg__VisualProgrammingOperate__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__VisualProgrammingOperate__fini(&array->data[i]);
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

protocol__msg__VisualProgrammingOperate__Sequence *
protocol__msg__VisualProgrammingOperate__Sequence__create(size_t size)
{
  protocol__msg__VisualProgrammingOperate__Sequence * array = (protocol__msg__VisualProgrammingOperate__Sequence *)malloc(sizeof(protocol__msg__VisualProgrammingOperate__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__VisualProgrammingOperate__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__VisualProgrammingOperate__Sequence__destroy(protocol__msg__VisualProgrammingOperate__Sequence * array)
{
  if (array) {
    protocol__msg__VisualProgrammingOperate__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__VisualProgrammingOperate__Sequence__are_equal(const protocol__msg__VisualProgrammingOperate__Sequence * lhs, const protocol__msg__VisualProgrammingOperate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__VisualProgrammingOperate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__VisualProgrammingOperate__Sequence__copy(
  const protocol__msg__VisualProgrammingOperate__Sequence * input,
  protocol__msg__VisualProgrammingOperate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__VisualProgrammingOperate);
    protocol__msg__VisualProgrammingOperate * data =
      (protocol__msg__VisualProgrammingOperate *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__VisualProgrammingOperate__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__VisualProgrammingOperate__fini(&data[i]);
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
    if (!protocol__msg__VisualProgrammingOperate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
