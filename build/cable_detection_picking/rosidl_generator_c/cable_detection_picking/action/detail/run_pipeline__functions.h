// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cable_detection_picking:action/RunPipeline.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cable_detection_picking/action/run_pipeline.h"


#ifndef CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__FUNCTIONS_H_
#define CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__FUNCTIONS_H_

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
#include "cable_detection_picking/msg/rosidl_generator_c__visibility_control.h"

#include "cable_detection_picking/action/detail/run_pipeline__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline__get_type_hash(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline__get_type_description(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline__get_individual_type_description_source(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline__get_type_description_sources(
  const rosidl_action_type_support_t * type_support);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_Goal
 * )) before or use
 * cable_detection_picking__action__RunPipeline_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Goal__init(cable_detection_picking__action__RunPipeline_Goal * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Goal__fini(cable_detection_picking__action__RunPipeline_Goal * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_Goal *
cable_detection_picking__action__RunPipeline_Goal__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Goal__destroy(cable_detection_picking__action__RunPipeline_Goal * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Goal__are_equal(const cable_detection_picking__action__RunPipeline_Goal * lhs, const cable_detection_picking__action__RunPipeline_Goal * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Goal__copy(
  const cable_detection_picking__action__RunPipeline_Goal * input,
  cable_detection_picking__action__RunPipeline_Goal * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_Goal__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_Goal__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_Goal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_Goal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Goal__Sequence__init(cable_detection_picking__action__RunPipeline_Goal__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Goal__Sequence__fini(cable_detection_picking__action__RunPipeline_Goal__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_Goal__Sequence *
cable_detection_picking__action__RunPipeline_Goal__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Goal__Sequence__destroy(cable_detection_picking__action__RunPipeline_Goal__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Goal__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_Goal__Sequence * lhs, const cable_detection_picking__action__RunPipeline_Goal__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Goal__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_Goal__Sequence * input,
  cable_detection_picking__action__RunPipeline_Goal__Sequence * output);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_Result
 * )) before or use
 * cable_detection_picking__action__RunPipeline_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Result__init(cable_detection_picking__action__RunPipeline_Result * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Result__fini(cable_detection_picking__action__RunPipeline_Result * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_Result *
cable_detection_picking__action__RunPipeline_Result__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Result__destroy(cable_detection_picking__action__RunPipeline_Result * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Result__are_equal(const cable_detection_picking__action__RunPipeline_Result * lhs, const cable_detection_picking__action__RunPipeline_Result * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Result__copy(
  const cable_detection_picking__action__RunPipeline_Result * input,
  cable_detection_picking__action__RunPipeline_Result * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_Result__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_Result__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_Result__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_Result__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Result__Sequence__init(cable_detection_picking__action__RunPipeline_Result__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Result__Sequence__fini(cable_detection_picking__action__RunPipeline_Result__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_Result__Sequence *
cable_detection_picking__action__RunPipeline_Result__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Result__Sequence__destroy(cable_detection_picking__action__RunPipeline_Result__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Result__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_Result__Sequence * lhs, const cable_detection_picking__action__RunPipeline_Result__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Result__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_Result__Sequence * input,
  cable_detection_picking__action__RunPipeline_Result__Sequence * output);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_Feedback
 * )) before or use
 * cable_detection_picking__action__RunPipeline_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Feedback__init(cable_detection_picking__action__RunPipeline_Feedback * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Feedback__fini(cable_detection_picking__action__RunPipeline_Feedback * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_Feedback *
cable_detection_picking__action__RunPipeline_Feedback__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Feedback__destroy(cable_detection_picking__action__RunPipeline_Feedback * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Feedback__are_equal(const cable_detection_picking__action__RunPipeline_Feedback * lhs, const cable_detection_picking__action__RunPipeline_Feedback * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Feedback__copy(
  const cable_detection_picking__action__RunPipeline_Feedback * input,
  cable_detection_picking__action__RunPipeline_Feedback * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_Feedback__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_Feedback__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_Feedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_Feedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Feedback__Sequence__init(cable_detection_picking__action__RunPipeline_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Feedback__Sequence__fini(cable_detection_picking__action__RunPipeline_Feedback__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_Feedback__Sequence *
cable_detection_picking__action__RunPipeline_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_Feedback__Sequence__destroy(cable_detection_picking__action__RunPipeline_Feedback__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Feedback__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_Feedback__Sequence * lhs, const cable_detection_picking__action__RunPipeline_Feedback__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_Feedback__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_Feedback__Sequence * input,
  cable_detection_picking__action__RunPipeline_Feedback__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_SendGoal__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_SendGoal__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_SendGoal__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_SendGoal__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_SendGoal_Request
 * )) before or use
 * cable_detection_picking__action__RunPipeline_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Request__init(cable_detection_picking__action__RunPipeline_SendGoal_Request * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Request__fini(cable_detection_picking__action__RunPipeline_SendGoal_Request * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_SendGoal_Request *
cable_detection_picking__action__RunPipeline_SendGoal_Request__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Request__destroy(cable_detection_picking__action__RunPipeline_SendGoal_Request * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Request__are_equal(const cable_detection_picking__action__RunPipeline_SendGoal_Request * lhs, const cable_detection_picking__action__RunPipeline_SendGoal_Request * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Request__copy(
  const cable_detection_picking__action__RunPipeline_SendGoal_Request * input,
  cable_detection_picking__action__RunPipeline_SendGoal_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_SendGoal_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_SendGoal_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_SendGoal_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_SendGoal_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence__init(cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence__fini(cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence *
cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence__destroy(cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence * lhs, const cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence * input,
  cable_detection_picking__action__RunPipeline_SendGoal_Request__Sequence * output);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_SendGoal_Response
 * )) before or use
 * cable_detection_picking__action__RunPipeline_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Response__init(cable_detection_picking__action__RunPipeline_SendGoal_Response * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Response__fini(cable_detection_picking__action__RunPipeline_SendGoal_Response * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_SendGoal_Response *
cable_detection_picking__action__RunPipeline_SendGoal_Response__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Response__destroy(cable_detection_picking__action__RunPipeline_SendGoal_Response * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Response__are_equal(const cable_detection_picking__action__RunPipeline_SendGoal_Response * lhs, const cable_detection_picking__action__RunPipeline_SendGoal_Response * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Response__copy(
  const cable_detection_picking__action__RunPipeline_SendGoal_Response * input,
  cable_detection_picking__action__RunPipeline_SendGoal_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_SendGoal_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_SendGoal_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_SendGoal_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_SendGoal_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence__init(cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence__fini(cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence *
cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence__destroy(cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence * lhs, const cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence * input,
  cable_detection_picking__action__RunPipeline_SendGoal_Response__Sequence * output);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_SendGoal_Event
 * )) before or use
 * cable_detection_picking__action__RunPipeline_SendGoal_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Event__init(cable_detection_picking__action__RunPipeline_SendGoal_Event * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Event__fini(cable_detection_picking__action__RunPipeline_SendGoal_Event * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_SendGoal_Event *
cable_detection_picking__action__RunPipeline_SendGoal_Event__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Event__destroy(cable_detection_picking__action__RunPipeline_SendGoal_Event * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Event__are_equal(const cable_detection_picking__action__RunPipeline_SendGoal_Event * lhs, const cable_detection_picking__action__RunPipeline_SendGoal_Event * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Event__copy(
  const cable_detection_picking__action__RunPipeline_SendGoal_Event * input,
  cable_detection_picking__action__RunPipeline_SendGoal_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_SendGoal_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_SendGoal_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_SendGoal_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_SendGoal_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence__init(cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence__fini(cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence *
cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence__destroy(cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence * lhs, const cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence * input,
  cable_detection_picking__action__RunPipeline_SendGoal_Event__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_GetResult__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_GetResult__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_GetResult__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_GetResult__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_GetResult_Request
 * )) before or use
 * cable_detection_picking__action__RunPipeline_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Request__init(cable_detection_picking__action__RunPipeline_GetResult_Request * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Request__fini(cable_detection_picking__action__RunPipeline_GetResult_Request * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_GetResult_Request *
cable_detection_picking__action__RunPipeline_GetResult_Request__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Request__destroy(cable_detection_picking__action__RunPipeline_GetResult_Request * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Request__are_equal(const cable_detection_picking__action__RunPipeline_GetResult_Request * lhs, const cable_detection_picking__action__RunPipeline_GetResult_Request * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Request__copy(
  const cable_detection_picking__action__RunPipeline_GetResult_Request * input,
  cable_detection_picking__action__RunPipeline_GetResult_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_GetResult_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_GetResult_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_GetResult_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_GetResult_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence__init(cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence__fini(cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence *
cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence__destroy(cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence * lhs, const cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence * input,
  cable_detection_picking__action__RunPipeline_GetResult_Request__Sequence * output);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_GetResult_Response
 * )) before or use
 * cable_detection_picking__action__RunPipeline_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Response__init(cable_detection_picking__action__RunPipeline_GetResult_Response * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Response__fini(cable_detection_picking__action__RunPipeline_GetResult_Response * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_GetResult_Response *
cable_detection_picking__action__RunPipeline_GetResult_Response__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Response__destroy(cable_detection_picking__action__RunPipeline_GetResult_Response * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Response__are_equal(const cable_detection_picking__action__RunPipeline_GetResult_Response * lhs, const cable_detection_picking__action__RunPipeline_GetResult_Response * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Response__copy(
  const cable_detection_picking__action__RunPipeline_GetResult_Response * input,
  cable_detection_picking__action__RunPipeline_GetResult_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_GetResult_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_GetResult_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_GetResult_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_GetResult_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence__init(cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence__fini(cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence *
cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence__destroy(cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence * lhs, const cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence * input,
  cable_detection_picking__action__RunPipeline_GetResult_Response__Sequence * output);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_GetResult_Event
 * )) before or use
 * cable_detection_picking__action__RunPipeline_GetResult_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Event__init(cable_detection_picking__action__RunPipeline_GetResult_Event * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Event__fini(cable_detection_picking__action__RunPipeline_GetResult_Event * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_GetResult_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_GetResult_Event *
cable_detection_picking__action__RunPipeline_GetResult_Event__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Event__destroy(cable_detection_picking__action__RunPipeline_GetResult_Event * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Event__are_equal(const cable_detection_picking__action__RunPipeline_GetResult_Event * lhs, const cable_detection_picking__action__RunPipeline_GetResult_Event * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Event__copy(
  const cable_detection_picking__action__RunPipeline_GetResult_Event * input,
  cable_detection_picking__action__RunPipeline_GetResult_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_GetResult_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_GetResult_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_GetResult_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_GetResult_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_GetResult_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence__init(cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence__fini(cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence *
cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence__destroy(cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence * lhs, const cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence * input,
  cable_detection_picking__action__RunPipeline_GetResult_Event__Sequence * output);

/// Initialize action/RunPipeline message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cable_detection_picking__action__RunPipeline_FeedbackMessage
 * )) before or use
 * cable_detection_picking__action__RunPipeline_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_FeedbackMessage__init(cable_detection_picking__action__RunPipeline_FeedbackMessage * msg);

/// Finalize action/RunPipeline message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_FeedbackMessage__fini(cable_detection_picking__action__RunPipeline_FeedbackMessage * msg);

/// Create action/RunPipeline message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cable_detection_picking__action__RunPipeline_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_FeedbackMessage *
cable_detection_picking__action__RunPipeline_FeedbackMessage__create(void);

/// Destroy action/RunPipeline message.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_FeedbackMessage__destroy(cable_detection_picking__action__RunPipeline_FeedbackMessage * msg);

/// Check for action/RunPipeline message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_FeedbackMessage__are_equal(const cable_detection_picking__action__RunPipeline_FeedbackMessage * lhs, const cable_detection_picking__action__RunPipeline_FeedbackMessage * rhs);

/// Copy a action/RunPipeline message.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_FeedbackMessage__copy(
  const cable_detection_picking__action__RunPipeline_FeedbackMessage * input,
  cable_detection_picking__action__RunPipeline_FeedbackMessage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_type_hash_t *
cable_detection_picking__action__RunPipeline_FeedbackMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeDescription *
cable_detection_picking__action__RunPipeline_FeedbackMessage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource *
cable_detection_picking__action__RunPipeline_FeedbackMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cable_detection_picking__action__RunPipeline_FeedbackMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/RunPipeline messages.
/**
 * It allocates the memory for the number of elements and calls
 * cable_detection_picking__action__RunPipeline_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence__init(cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence__fini(cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence * array);

/// Create array of action/RunPipeline messages.
/**
 * It allocates the memory for the array and calls
 * cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence *
cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RunPipeline messages.
/**
 * It calls
 * cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
void
cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence__destroy(cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence * array);

/// Check for action/RunPipeline message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence__are_equal(const cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence * lhs, const cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RunPipeline messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cable_detection_picking
bool
cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence__copy(
  const cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence * input,
  cable_detection_picking__action__RunPipeline_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CABLE_DETECTION_PICKING__ACTION__DETAIL__RUN_PIPELINE__FUNCTIONS_H_
