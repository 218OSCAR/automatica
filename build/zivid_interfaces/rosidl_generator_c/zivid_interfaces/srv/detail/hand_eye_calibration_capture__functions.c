// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:srv/HandEyeCalibrationCapture.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__init(zivid_interfaces__srv__HandEyeCalibrationCapture_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_pose
  if (!geometry_msgs__msg__Pose__init(&msg->robot_pose)) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Request__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__fini(zivid_interfaces__srv__HandEyeCalibrationCapture_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_pose
  geometry_msgs__msg__Pose__fini(&msg->robot_pose);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCapture_Request * lhs, const zivid_interfaces__srv__HandEyeCalibrationCapture_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->robot_pose), &(rhs->robot_pose)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Request * input,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->robot_pose), &(output->robot_pose)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__srv__HandEyeCalibrationCapture_Request *
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request * msg = (zivid_interfaces__srv__HandEyeCalibrationCapture_Request *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Request));
  bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__destroy(zivid_interfaces__srv__HandEyeCalibrationCapture_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__init(zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__HandEyeCalibrationCapture_Request *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__HandEyeCalibrationCapture_Request__fini(&data[i - 1]);
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
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__fini(zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence * array)
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
      zivid_interfaces__srv__HandEyeCalibrationCapture_Request__fini(&array->data[i]);
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

zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence * array = (zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__destroy(zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence * lhs, const zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence * input,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__HandEyeCalibrationCapture_Request * data =
      (zivid_interfaces__srv__HandEyeCalibrationCapture_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__HandEyeCalibrationCapture_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `detection_result_calibration_board`
#include "zivid_interfaces/msg/detail/detection_result_calibration_board__functions.h"
// Member `detection_result_fiducial_markers`
#include "zivid_interfaces/msg/detail/detection_result_fiducial_markers__functions.h"

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__init(zivid_interfaces__srv__HandEyeCalibrationCapture_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Response__fini(msg);
    return false;
  }
  // capture_handle
  msg->capture_handle = -1l;
  // detection_result_calibration_board
  if (!zivid_interfaces__msg__DetectionResultCalibrationBoard__init(&msg->detection_result_calibration_board)) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Response__fini(msg);
    return false;
  }
  // detection_result_fiducial_markers
  if (!zivid_interfaces__msg__DetectionResultFiducialMarkers__init(&msg->detection_result_fiducial_markers)) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Response__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__fini(zivid_interfaces__srv__HandEyeCalibrationCapture_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // capture_handle
  // detection_result_calibration_board
  zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(&msg->detection_result_calibration_board);
  // detection_result_fiducial_markers
  zivid_interfaces__msg__DetectionResultFiducialMarkers__fini(&msg->detection_result_fiducial_markers);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCapture_Response * lhs, const zivid_interfaces__srv__HandEyeCalibrationCapture_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // capture_handle
  if (lhs->capture_handle != rhs->capture_handle) {
    return false;
  }
  // detection_result_calibration_board
  if (!zivid_interfaces__msg__DetectionResultCalibrationBoard__are_equal(
      &(lhs->detection_result_calibration_board), &(rhs->detection_result_calibration_board)))
  {
    return false;
  }
  // detection_result_fiducial_markers
  if (!zivid_interfaces__msg__DetectionResultFiducialMarkers__are_equal(
      &(lhs->detection_result_fiducial_markers), &(rhs->detection_result_fiducial_markers)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Response * input,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // capture_handle
  output->capture_handle = input->capture_handle;
  // detection_result_calibration_board
  if (!zivid_interfaces__msg__DetectionResultCalibrationBoard__copy(
      &(input->detection_result_calibration_board), &(output->detection_result_calibration_board)))
  {
    return false;
  }
  // detection_result_fiducial_markers
  if (!zivid_interfaces__msg__DetectionResultFiducialMarkers__copy(
      &(input->detection_result_fiducial_markers), &(output->detection_result_fiducial_markers)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__srv__HandEyeCalibrationCapture_Response *
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response * msg = (zivid_interfaces__srv__HandEyeCalibrationCapture_Response *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Response));
  bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__destroy(zivid_interfaces__srv__HandEyeCalibrationCapture_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__init(zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__HandEyeCalibrationCapture_Response *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__HandEyeCalibrationCapture_Response__fini(&data[i - 1]);
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
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__fini(zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence * array)
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
      zivid_interfaces__srv__HandEyeCalibrationCapture_Response__fini(&array->data[i]);
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

zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence * array = (zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__destroy(zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence * lhs, const zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence * input,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__HandEyeCalibrationCapture_Response * data =
      (zivid_interfaces__srv__HandEyeCalibrationCapture_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__HandEyeCalibrationCapture_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "zivid_interfaces/srv/detail/hand_eye_calibration_capture__functions.h"

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__init(zivid_interfaces__srv__HandEyeCalibrationCapture_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Event__fini(msg);
    return false;
  }
  // request
  if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__init(&msg->request, 0)) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Event__fini(msg);
    return false;
  }
  // response
  if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__init(&msg->response, 0)) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Event__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__fini(zivid_interfaces__srv__HandEyeCalibrationCapture_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__fini(&msg->request);
  // response
  zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__fini(&msg->response);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCapture_Event * lhs, const zivid_interfaces__srv__HandEyeCalibrationCapture_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Event * input,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__srv__HandEyeCalibrationCapture_Event *
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event * msg = (zivid_interfaces__srv__HandEyeCalibrationCapture_Event *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Event));
  bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__destroy(zivid_interfaces__srv__HandEyeCalibrationCapture_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence__init(zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__HandEyeCalibrationCapture_Event *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__HandEyeCalibrationCapture_Event__fini(&data[i - 1]);
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
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence__fini(zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence * array)
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
      zivid_interfaces__srv__HandEyeCalibrationCapture_Event__fini(&array->data[i]);
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

zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence *
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence * array = (zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence__destroy(zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence__are_equal(const zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence * lhs, const zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence__copy(
  const zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence * input,
  zivid_interfaces__srv__HandEyeCalibrationCapture_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__HandEyeCalibrationCapture_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__HandEyeCalibrationCapture_Event * data =
      (zivid_interfaces__srv__HandEyeCalibrationCapture_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__HandEyeCalibrationCapture_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__HandEyeCalibrationCapture_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
