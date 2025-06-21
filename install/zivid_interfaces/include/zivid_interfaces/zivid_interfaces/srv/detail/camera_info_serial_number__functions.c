// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zivid_interfaces:srv/CameraInfoSerialNumber.idl
// generated code does not contain a copyright notice
#include "zivid_interfaces/srv/detail/camera_info_serial_number__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__init(zivid_interfaces__srv__CameraInfoSerialNumber_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Request__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Request * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Request * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

zivid_interfaces__srv__CameraInfoSerialNumber_Request *
zivid_interfaces__srv__CameraInfoSerialNumber_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Request * msg = (zivid_interfaces__srv__CameraInfoSerialNumber_Request *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Request));
  bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Request__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__init(zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Request * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__CameraInfoSerialNumber_Request *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__CameraInfoSerialNumber_Request__fini(&data[i - 1]);
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
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * array)
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
      zivid_interfaces__srv__CameraInfoSerialNumber_Request__fini(&array->data[i]);
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

zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence *
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * array = (zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoSerialNumber_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__CameraInfoSerialNumber_Request * data =
      (zivid_interfaces__srv__CameraInfoSerialNumber_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__CameraInfoSerialNumber_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__CameraInfoSerialNumber_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoSerialNumber_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `serial_number`
#include "rosidl_runtime_c/string_functions.h"

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__init(zivid_interfaces__srv__CameraInfoSerialNumber_Response * msg)
{
  if (!msg) {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Response * msg)
{
  if (!msg) {
    return;
  }
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Response * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Response * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__srv__CameraInfoSerialNumber_Response *
zivid_interfaces__srv__CameraInfoSerialNumber_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Response * msg = (zivid_interfaces__srv__CameraInfoSerialNumber_Response *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Response));
  bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Response__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__init(zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Response * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__CameraInfoSerialNumber_Response *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini(&data[i - 1]);
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
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * array)
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
      zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini(&array->data[i]);
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

zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence *
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * array = (zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoSerialNumber_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__CameraInfoSerialNumber_Response * data =
      (zivid_interfaces__srv__CameraInfoSerialNumber_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__CameraInfoSerialNumber_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__CameraInfoSerialNumber_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoSerialNumber_Response__copy(
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
// #include "zivid_interfaces/srv/detail/camera_info_serial_number__functions.h"

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Event__init(zivid_interfaces__srv__CameraInfoSerialNumber_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Event__fini(msg);
    return false;
  }
  // request
  if (!zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__init(&msg->request, 0)) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Event__fini(msg);
    return false;
  }
  // response
  if (!zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__init(&msg->response, 0)) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Event__fini(msg);
    return false;
  }
  return true;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Event__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__fini(&msg->request);
  // response
  zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__fini(&msg->response);
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Event__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Event * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Event * rhs)
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
  if (!zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Event__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Event * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Event * output)
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
  if (!zivid_interfaces__srv__CameraInfoSerialNumber_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!zivid_interfaces__srv__CameraInfoSerialNumber_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

zivid_interfaces__srv__CameraInfoSerialNumber_Event *
zivid_interfaces__srv__CameraInfoSerialNumber_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Event * msg = (zivid_interfaces__srv__CameraInfoSerialNumber_Event *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Event));
  bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Event__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence__init(zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Event * data = NULL;

  if (size) {
    data = (zivid_interfaces__srv__CameraInfoSerialNumber_Event *)allocator.zero_allocate(size, sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zivid_interfaces__srv__CameraInfoSerialNumber_Event__fini(&data[i - 1]);
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
zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence__fini(zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence * array)
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
      zivid_interfaces__srv__CameraInfoSerialNumber_Event__fini(&array->data[i]);
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

zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence *
zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence * array = (zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence *)allocator.allocate(sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence__destroy(zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence__are_equal(const zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence * lhs, const zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoSerialNumber_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence__copy(
  const zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence * input,
  zivid_interfaces__srv__CameraInfoSerialNumber_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zivid_interfaces__srv__CameraInfoSerialNumber_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zivid_interfaces__srv__CameraInfoSerialNumber_Event * data =
      (zivid_interfaces__srv__CameraInfoSerialNumber_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zivid_interfaces__srv__CameraInfoSerialNumber_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zivid_interfaces__srv__CameraInfoSerialNumber_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zivid_interfaces__srv__CameraInfoSerialNumber_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
