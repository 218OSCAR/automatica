// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:msg/FixedPlacementOfCalibrationObjects.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `calibration_board`
#include "zivid_interfaces/msg/detail/fixed_placement_of_calibration_board__functions.h"
// Member `marker_dictionary`
#include "rosidl_runtime_c/string_functions.h"
// Member `markers`
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__functions.h"

bool
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__init(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // calibration_board
  if (!zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__init(&msg->calibration_board)) {
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(msg);
    return false;
  }
  // marker_dictionary
  if (!rosidl_runtime_c__String__init(&msg->marker_dictionary)) {
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(msg);
    return false;
  }
  // markers
  if (!zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__init(&msg->markers, 0)) {
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * msg)
{
  if (!msg) {
    return;
  }
  // type
  // calibration_board
  zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__fini(&msg->calibration_board);
  // marker_dictionary
  rosidl_runtime_c__String__fini(&msg->marker_dictionary);
  // markers
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__fini(&msg->markers);
}

bool
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__are_equal(const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * lhs, const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // calibration_board
  if (!zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__are_equal(
      &(lhs->calibration_board), &(rhs->calibration_board)))
  {
    return false;
  }
  // marker_dictionary
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->marker_dictionary), &(rhs->marker_dictionary)))
  {
    return false;
  }
  // markers
  if (!zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__copy(
  const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * input,
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // calibration_board
  if (!zivid_interfaces__msg__FixedPlacementOfCalibrationBoard__copy(
      &(input->calibration_board), &(output->calibration_board)))
  {
    return false;
  }
  // marker_dictionary
  if (!rosidl_runtime_c__String__copy(
      &(input->marker_dictionary), &(output->marker_dictionary)))
  {
    return false;
  }
  // markers
  if (!zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__msg__FixedPlacementOfCalibrationObjects *
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * msg = (zivid_interfaces__msg__FixedPlacementOfCalibrationObjects *)allocator.allocate(sizeof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects));
  bool success = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__destroy(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence__init(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * data = NULL;

  if (size) {
    data = (zivid_interfaces__msg__FixedPlacementOfCalibrationObjects *)allocator.zero_allocate(size, sizeof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(&data[i - 1]);
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
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence__fini(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence * array)
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
      zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(&array->data[i]);
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

zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence *
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence * array = (zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence *)allocator.allocate(sizeof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence__destroy(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence__are_equal(const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence * lhs, const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence__copy(
  const zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence * input,
  zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__msg__FixedPlacementOfCalibrationObjects);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__msg__FixedPlacementOfCalibrationObjects * data =
      (zivid_interfaces__msg__FixedPlacementOfCalibrationObjects *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__msg__FixedPlacementOfCalibrationObjects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
