// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:msg/DetectionResultFiducialMarkers.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detected_markers`
#include "zivid_interfaces/msg/detail/marker_shape__functions.h"
// Member `allowed_marker_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
zivid_interfaces__msg__DetectionResultFiducialMarkers__init(zivid_interfaces__msg__DetectionResultFiducialMarkers * msg)
{
  if (!msg) {
    return false;
  }
  // detected_markers
  if (!zivid_interfaces__msg__MarkerShape__Sequence__init(&msg->detected_markers, 0)) {
    zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(msg);
    return false;
  }
  // allowed_marker_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->allowed_marker_ids, 0)) {
    zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(zivid_interfaces__msg__DetectionResultFiducialMarkers * msg)
{
  if (!msg) {
    return;
  }
  // detected_markers
  zivid_interfaces__msg__MarkerShape__Sequence__fini(&msg->detected_markers);
  // allowed_marker_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->allowed_marker_ids);
}

bool
zivid_interfaces__msg__DetectionResultFiducialMarkers__are_equal(const zivid_interfaces__msg__DetectionResultFiducialMarkers * lhs, const zivid_interfaces__msg__DetectionResultFiducialMarkers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detected_markers
  if (!zivid_interfaces__msg__MarkerShape__Sequence__are_equal(
      &(lhs->detected_markers), &(rhs->detected_markers)))
  {
    return false;
  }
  // allowed_marker_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->allowed_marker_ids), &(rhs->allowed_marker_ids)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__msg__DetectionResultFiducialMarkers__copy(
  const zivid_interfaces__msg__DetectionResultFiducialMarkers * input,
  zivid_interfaces__msg__DetectionResultFiducialMarkers * output)
{
  if (!input || !output) {
    return false;
  }
  // detected_markers
  if (!zivid_interfaces__msg__MarkerShape__Sequence__copy(
      &(input->detected_markers), &(output->detected_markers)))
  {
    return false;
  }
  // allowed_marker_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->allowed_marker_ids), &(output->allowed_marker_ids)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__msg__DetectionResultFiducialMarkers *
zivid_interfaces__msg__DetectionResultFiducialMarkers__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__DetectionResultFiducialMarkers * msg = (zivid_interfaces__msg__DetectionResultFiducialMarkers *)allocator.allocate(sizeof(zivid_interfaces__msg__DetectionResultFiducialMarkers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__msg__DetectionResultFiducialMarkers));
  bool success = zivid_interfaces__msg__DetectionResultFiducialMarkers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__msg__DetectionResultFiducialMarkers__destroy(zivid_interfaces__msg__DetectionResultFiducialMarkers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence__init(zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__DetectionResultFiducialMarkers * data = NULL;

  if (size) {
    data = (zivid_interfaces__msg__DetectionResultFiducialMarkers *)allocator.zero_allocate(size, sizeof(zivid_interfaces__msg__DetectionResultFiducialMarkers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__msg__DetectionResultFiducialMarkers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(&data[i - 1]);
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
zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence__fini(zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence * array)
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
      zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(&array->data[i]);
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

zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence *
zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence * array = (zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence *)allocator.allocate(sizeof(zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence__destroy(zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence__are_equal(const zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence * lhs, const zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__msg__DetectionResultFiducialMarkers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence__copy(
  const zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence * input,
  zivid_interfaces__msg__DetectionResultFiducialMarkers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__msg__DetectionResultFiducialMarkers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__msg__DetectionResultFiducialMarkers * data =
      (zivid_interfaces__msg__DetectionResultFiducialMarkers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__msg__DetectionResultFiducialMarkers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__msg__DetectionResultFiducialMarkers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
