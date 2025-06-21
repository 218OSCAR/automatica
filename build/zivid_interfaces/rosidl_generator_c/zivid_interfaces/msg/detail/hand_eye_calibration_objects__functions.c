// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:msg/HandEyeCalibrationObjects.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/hand_eye_calibration_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `marker_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `marker_dictionary`
#include "rosidl_runtime_c/string_functions.h"

bool
zivid_interfaces__msg__HandEyeCalibrationObjects__init(zivid_interfaces__msg__HandEyeCalibrationObjects * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // marker_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->marker_ids, 0)) {
    zivid_interfaces__msg__HandEyeCalibrationObjects__fini(msg);
    return false;
  }
  // marker_dictionary
  if (!rosidl_runtime_c__String__init(&msg->marker_dictionary)) {
    zivid_interfaces__msg__HandEyeCalibrationObjects__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__msg__HandEyeCalibrationObjects__fini(zivid_interfaces__msg__HandEyeCalibrationObjects * msg)
{
  if (!msg) {
    return;
  }
  // type
  // marker_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->marker_ids);
  // marker_dictionary
  rosidl_runtime_c__String__fini(&msg->marker_dictionary);
}

bool
zivid_interfaces__msg__HandEyeCalibrationObjects__are_equal(const zivid_interfaces__msg__HandEyeCalibrationObjects * lhs, const zivid_interfaces__msg__HandEyeCalibrationObjects * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // marker_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->marker_ids), &(rhs->marker_ids)))
  {
    return false;
  }
  // marker_dictionary
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->marker_dictionary), &(rhs->marker_dictionary)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__msg__HandEyeCalibrationObjects__copy(
  const zivid_interfaces__msg__HandEyeCalibrationObjects * input,
  zivid_interfaces__msg__HandEyeCalibrationObjects * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // marker_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->marker_ids), &(output->marker_ids)))
  {
    return false;
  }
  // marker_dictionary
  if (!rosidl_runtime_c__String__copy(
      &(input->marker_dictionary), &(output->marker_dictionary)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__msg__HandEyeCalibrationObjects *
zivid_interfaces__msg__HandEyeCalibrationObjects__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__HandEyeCalibrationObjects * msg = (zivid_interfaces__msg__HandEyeCalibrationObjects *)allocator.allocate(sizeof(zivid_interfaces__msg__HandEyeCalibrationObjects), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__msg__HandEyeCalibrationObjects));
  bool success = zivid_interfaces__msg__HandEyeCalibrationObjects__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__msg__HandEyeCalibrationObjects__destroy(zivid_interfaces__msg__HandEyeCalibrationObjects * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__msg__HandEyeCalibrationObjects__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence__init(zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__HandEyeCalibrationObjects * data = NULL;

  if (size) {
    data = (zivid_interfaces__msg__HandEyeCalibrationObjects *)allocator.zero_allocate(size, sizeof(zivid_interfaces__msg__HandEyeCalibrationObjects), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__msg__HandEyeCalibrationObjects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__msg__HandEyeCalibrationObjects__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence__fini(zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zivid_interfaces__msg__HandEyeCalibrationObjects__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence *
zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence * array = (zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence *)allocator.allocate(sizeof(zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence__destroy(zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence__are_equal(const zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence * lhs, const zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__msg__HandEyeCalibrationObjects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence__copy(
  const zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence * input,
  zivid_interfaces__msg__HandEyeCalibrationObjects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__msg__HandEyeCalibrationObjects);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__msg__HandEyeCalibrationObjects * data =
      (zivid_interfaces__msg__HandEyeCalibrationObjects *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__msg__HandEyeCalibrationObjects__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__msg__HandEyeCalibrationObjects__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__msg__HandEyeCalibrationObjects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
