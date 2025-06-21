// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from zivid_interfaces:msg/DetectionResultCalibrationBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "zivid_interfaces/msg/detection_result_calibration_board.h"


#ifndef ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__FUNCTIONS_H_
#define ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "zivid_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "zivid_interfaces/msg/detail/detection_result_calibration_board__struct.h"

/// Initialize msg/DetectionResultCalibrationBoard message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * zivid_interfaces__msg__DetectionResultCalibrationBoard
 * )) before or use
 * zivid_interfaces__msg__DetectionResultCalibrationBoard__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__init(zivid_interfaces__msg__DetectionResultCalibrationBoard * msg);

/// Finalize msg/DetectionResultCalibrationBoard message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__msg__DetectionResultCalibrationBoard__fini(zivid_interfaces__msg__DetectionResultCalibrationBoard * msg);

/// Create msg/DetectionResultCalibrationBoard message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * zivid_interfaces__msg__DetectionResultCalibrationBoard__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
zivid_interfaces__msg__DetectionResultCalibrationBoard *
zivid_interfaces__msg__DetectionResultCalibrationBoard__create(void);

/// Destroy msg/DetectionResultCalibrationBoard message.
/**
 * It calls
 * zivid_interfaces__msg__DetectionResultCalibrationBoard__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__msg__DetectionResultCalibrationBoard__destroy(zivid_interfaces__msg__DetectionResultCalibrationBoard * msg);

/// Check for msg/DetectionResultCalibrationBoard message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__are_equal(const zivid_interfaces__msg__DetectionResultCalibrationBoard * lhs, const zivid_interfaces__msg__DetectionResultCalibrationBoard * rhs);

/// Copy a msg/DetectionResultCalibrationBoard message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__copy(
  const zivid_interfaces__msg__DetectionResultCalibrationBoard * input,
  zivid_interfaces__msg__DetectionResultCalibrationBoard * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_type_hash_t *
zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_runtime_c__type_description__TypeSource *
zivid_interfaces__msg__DetectionResultCalibrationBoard__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
zivid_interfaces__msg__DetectionResultCalibrationBoard__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/DetectionResultCalibrationBoard messages.
/**
 * It allocates the memory for the number of elements and calls
 * zivid_interfaces__msg__DetectionResultCalibrationBoard__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__init(zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * array, size_t size);

/// Finalize array of msg/DetectionResultCalibrationBoard messages.
/**
 * It calls
 * zivid_interfaces__msg__DetectionResultCalibrationBoard__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__fini(zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * array);

/// Create array of msg/DetectionResultCalibrationBoard messages.
/**
 * It allocates the memory for the array and calls
 * zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence *
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__create(size_t size);

/// Destroy array of msg/DetectionResultCalibrationBoard messages.
/**
 * It calls
 * zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
void
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__destroy(zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * array);

/// Check for msg/DetectionResultCalibrationBoard message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__are_equal(const zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * lhs, const zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * rhs);

/// Copy an array of msg/DetectionResultCalibrationBoard messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_zivid_interfaces
bool
zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence__copy(
  const zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * input,
  zivid_interfaces__msg__DetectionResultCalibrationBoard__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ZIVID_INTERFACES__MSG__DETAIL__DETECTION_RESULT_CALIBRATION_BOARD__FUNCTIONS_H_
