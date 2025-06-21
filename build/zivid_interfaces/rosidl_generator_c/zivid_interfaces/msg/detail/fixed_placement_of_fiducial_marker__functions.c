// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:msg/FixedPlacementOfFiducialMarker.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/fixed_placement_of_fiducial_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__init(zivid_interfaces__msg__FixedPlacementOfFiducialMarker * msg)
{
  if (!msg) {
    return false;
  }
  // marker_id
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    zivid_interfaces__msg__FixedPlacementOfFiducialMarker__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__fini(zivid_interfaces__msg__FixedPlacementOfFiducialMarker * msg)
{
  if (!msg) {
    return;
  }
  // marker_id
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__are_equal(const zivid_interfaces__msg__FixedPlacementOfFiducialMarker * lhs, const zivid_interfaces__msg__FixedPlacementOfFiducialMarker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // marker_id
  if (lhs->marker_id != rhs->marker_id) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__copy(
  const zivid_interfaces__msg__FixedPlacementOfFiducialMarker * input,
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker * output)
{
  if (!input || !output) {
    return false;
  }
  // marker_id
  output->marker_id = input->marker_id;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__msg__FixedPlacementOfFiducialMarker *
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker * msg = (zivid_interfaces__msg__FixedPlacementOfFiducialMarker *)allocator.allocate(sizeof(zivid_interfaces__msg__FixedPlacementOfFiducialMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__msg__FixedPlacementOfFiducialMarker));
  bool success = zivid_interfaces__msg__FixedPlacementOfFiducialMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__destroy(zivid_interfaces__msg__FixedPlacementOfFiducialMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__msg__FixedPlacementOfFiducialMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__init(zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker * data = NULL;

  if (size) {
    data = (zivid_interfaces__msg__FixedPlacementOfFiducialMarker *)allocator.zero_allocate(size, sizeof(zivid_interfaces__msg__FixedPlacementOfFiducialMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__msg__FixedPlacementOfFiducialMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__msg__FixedPlacementOfFiducialMarker__fini(&data[i - 1]);
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
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__fini(zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * array)
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
      zivid_interfaces__msg__FixedPlacementOfFiducialMarker__fini(&array->data[i]);
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

zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence *
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * array = (zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence *)allocator.allocate(sizeof(zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__destroy(zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__are_equal(const zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * lhs, const zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__msg__FixedPlacementOfFiducialMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence__copy(
  const zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * input,
  zivid_interfaces__msg__FixedPlacementOfFiducialMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__msg__FixedPlacementOfFiducialMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__msg__FixedPlacementOfFiducialMarker * data =
      (zivid_interfaces__msg__FixedPlacementOfFiducialMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__msg__FixedPlacementOfFiducialMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__msg__FixedPlacementOfFiducialMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__msg__FixedPlacementOfFiducialMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
