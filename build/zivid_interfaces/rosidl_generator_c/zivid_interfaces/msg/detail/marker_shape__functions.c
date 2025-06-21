// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:msg/MarkerShape.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/marker_shape__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `corners_in_pixel_coordinates`
// Member `corners_in_camera_coordinates`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
zivid_interfaces__msg__MarkerShape__init(zivid_interfaces__msg__MarkerShape * msg)
{
  if (!msg) {
    return false;
  }
  // corners_in_pixel_coordinates
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point__init(&msg->corners_in_pixel_coordinates[i])) {
      zivid_interfaces__msg__MarkerShape__fini(msg);
      return false;
    }
  }
  // corners_in_camera_coordinates
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point__init(&msg->corners_in_camera_coordinates[i])) {
      zivid_interfaces__msg__MarkerShape__fini(msg);
      return false;
    }
  }
  // id
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    zivid_interfaces__msg__MarkerShape__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__msg__MarkerShape__fini(zivid_interfaces__msg__MarkerShape * msg)
{
  if (!msg) {
    return;
  }
  // corners_in_pixel_coordinates
  for (size_t i = 0; i < 4; ++i) {
    geometry_msgs__msg__Point__fini(&msg->corners_in_pixel_coordinates[i]);
  }
  // corners_in_camera_coordinates
  for (size_t i = 0; i < 4; ++i) {
    geometry_msgs__msg__Point__fini(&msg->corners_in_camera_coordinates[i]);
  }
  // id
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
zivid_interfaces__msg__MarkerShape__are_equal(const zivid_interfaces__msg__MarkerShape * lhs, const zivid_interfaces__msg__MarkerShape * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // corners_in_pixel_coordinates
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point__are_equal(
        &(lhs->corners_in_pixel_coordinates[i]), &(rhs->corners_in_pixel_coordinates[i])))
    {
      return false;
    }
  }
  // corners_in_camera_coordinates
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point__are_equal(
        &(lhs->corners_in_camera_coordinates[i]), &(rhs->corners_in_camera_coordinates[i])))
    {
      return false;
    }
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__msg__MarkerShape__copy(
  const zivid_interfaces__msg__MarkerShape * input,
  zivid_interfaces__msg__MarkerShape * output)
{
  if (!input || !output) {
    return false;
  }
  // corners_in_pixel_coordinates
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point__copy(
        &(input->corners_in_pixel_coordinates[i]), &(output->corners_in_pixel_coordinates[i])))
    {
      return false;
    }
  }
  // corners_in_camera_coordinates
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point__copy(
        &(input->corners_in_camera_coordinates[i]), &(output->corners_in_camera_coordinates[i])))
    {
      return false;
    }
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__msg__MarkerShape *
zivid_interfaces__msg__MarkerShape__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__MarkerShape * msg = (zivid_interfaces__msg__MarkerShape *)allocator.allocate(sizeof(zivid_interfaces__msg__MarkerShape), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__msg__MarkerShape));
  bool success = zivid_interfaces__msg__MarkerShape__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__msg__MarkerShape__destroy(zivid_interfaces__msg__MarkerShape * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__msg__MarkerShape__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__msg__MarkerShape__Sequence__init(zivid_interfaces__msg__MarkerShape__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__MarkerShape * data = NULL;

  if (size) {
    data = (zivid_interfaces__msg__MarkerShape *)allocator.zero_allocate(size, sizeof(zivid_interfaces__msg__MarkerShape), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__msg__MarkerShape__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__msg__MarkerShape__fini(&data[i - 1]);
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
zivid_interfaces__msg__MarkerShape__Sequence__fini(zivid_interfaces__msg__MarkerShape__Sequence * array)
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
      zivid_interfaces__msg__MarkerShape__fini(&array->data[i]);
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

zivid_interfaces__msg__MarkerShape__Sequence *
zivid_interfaces__msg__MarkerShape__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__MarkerShape__Sequence * array = (zivid_interfaces__msg__MarkerShape__Sequence *)allocator.allocate(sizeof(zivid_interfaces__msg__MarkerShape__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__msg__MarkerShape__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__msg__MarkerShape__Sequence__destroy(zivid_interfaces__msg__MarkerShape__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__msg__MarkerShape__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__msg__MarkerShape__Sequence__are_equal(const zivid_interfaces__msg__MarkerShape__Sequence * lhs, const zivid_interfaces__msg__MarkerShape__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__msg__MarkerShape__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__msg__MarkerShape__Sequence__copy(
  const zivid_interfaces__msg__MarkerShape__Sequence * input,
  zivid_interfaces__msg__MarkerShape__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__msg__MarkerShape);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__msg__MarkerShape * data =
      (zivid_interfaces__msg__MarkerShape *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__msg__MarkerShape__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__msg__MarkerShape__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__msg__MarkerShape__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
