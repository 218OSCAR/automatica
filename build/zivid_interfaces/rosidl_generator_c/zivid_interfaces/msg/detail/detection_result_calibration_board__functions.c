// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status_description`
#include "rosidl_runtime_c/string_functions.h"
// Member `centroid`
// Member `feature_points`
// Member `feature_points_2d`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__init(zivid_interfaces__msg__DetectionResultCalibrationBoard * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // status_description
  if (!rosidl_runtime_c__String__init(&msg->status_description)) {
    zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(msg);
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__init(&msg->centroid)) {
    zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(msg);
    return false;
  }
  // feature_points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->feature_points, 0)) {
    zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(msg);
    return false;
  }
  // feature_points_2d
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->feature_points_2d, 0)) {
    zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(msg);
    return false;
  }
  // feature_points_width
  // feature_points_height
  return true;
}

void
zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(zivid_interfaces__msg__DetectionResultCalibrationBoard * msg)
{
  if (!msg) {
    return;
  }
  // status
  // status_description
  rosidl_runtime_c__String__fini(&msg->status_description);
  // centroid
  geometry_msgs__msg__Point__fini(&msg->centroid);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // feature_points
  geometry_msgs__msg__Point__Sequence__fini(&msg->feature_points);
  // feature_points_2d
  geometry_msgs__msg__Point__Sequence__fini(&msg->feature_points_2d);
  // feature_points_width
  // feature_points_height
}

bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__are_equal(const zivid_interfaces__msg__DetectionResultCalibrationBoard * lhs, const zivid_interfaces__msg__DetectionResultCalibrationBoard * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // status_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_description), &(rhs->status_description)))
  {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->centroid), &(rhs->centroid)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // feature_points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->feature_points), &(rhs->feature_points)))
  {
    return false;
  }
  // feature_points_2d
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->feature_points_2d), &(rhs->feature_points_2d)))
  {
    return false;
  }
  // feature_points_width
  if (lhs->feature_points_width != rhs->feature_points_width) {
    return false;
  }
  // feature_points_height
  if (lhs->feature_points_height != rhs->feature_points_height) {
    return false;
  }
  return true;
}

bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__copy(
  const zivid_interfaces__msg__DetectionResultCalibrationBoard * input,
  zivid_interfaces__msg__DetectionResultCalibrationBoard * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // status_description
  if (!rosidl_runtime_c__String__copy(
      &(input->status_description), &(output->status_description)))
  {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__copy(
      &(input->centroid), &(output->centroid)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // feature_points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->feature_points), &(output->feature_points)))
  {
    return false;
  }
  // feature_points_2d
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->feature_points_2d), &(output->feature_points_2d)))
  {
    return false;
  }
  // feature_points_width
  output->feature_points_width = input->feature_points_width;
  // feature_points_height
  output->feature_points_height = input->feature_points_height;
  return true;
}

zivid_interfaces__msg__DetectionResultCalibrationBoard *
zivid_interfaces__msg__DetectionResultCalibrationBoard__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__DetectionResultCalibrationBoard * msg = (zivid_interfaces__msg__DetectionResultCalibrationBoard *)allocator.allocate(sizeof(zivid_interfaces__msg__DetectionResultCalibrationBoard), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__msg__DetectionResultCalibrationBoard));
  bool success = zivid_interfaces__msg__DetectionResultCalibrationBoard__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__msg__DetectionResultCalibrationBoard__destroy(zivid_interfaces__msg__DetectionResultCalibrationBoard * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__init(zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__DetectionResultCalibrationBoard * data = NULL;

  if (size) {
    data = (zivid_interfaces__msg__DetectionResultCalibrationBoard *)allocator.zero_allocate(size, sizeof(zivid_interfaces__msg__DetectionResultCalibrationBoard), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__msg__DetectionResultCalibrationBoard__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(&data[i - 1]);
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
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__fini(zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * array)
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
      zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(&array->data[i]);
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

zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence *
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * array = (zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence *)allocator.allocate(sizeof(zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__destroy(zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__are_equal(const zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * lhs, const zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__msg__DetectionResultCalibrationBoard__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__copy(
  const zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * input,
  zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__msg__DetectionResultCalibrationBoard);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__msg__DetectionResultCalibrationBoard * data =
      (zivid_interfaces__msg__DetectionResultCalibrationBoard *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__msg__DetectionResultCalibrationBoard__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__msg__DetectionResultCalibrationBoard__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
