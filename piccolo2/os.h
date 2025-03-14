/*
 * Copyright (C) 2021-2022 Gary Sims
 * Copyright (C) 2022 Keith Standiford
 * All rights reserved.
 * 
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef PICCOLO_OS_H
#define PICCOLO_OS_H

/* Size of our user task stacks in words */
#define PICCOLO_OS_STACK_SIZE 256

/* Number of user task */
#define PICCOLO_OS_TASK_LIMIT 3

/* Exception return behavior */
#define PICCOLO_OS_THREAD_PSP 0xFFFFFFFD

/*  Time slice in usec for each task execution. Task will be preempted
    if it runs longer (set small for testing!) */
#define PICCOLO_OS_TIME_SLICE 1000

typedef struct {
  unsigned int task_stacks[PICCOLO_OS_TASK_LIMIT][PICCOLO_OS_STACK_SIZE];
  unsigned int *the_tasks[PICCOLO_OS_TASK_LIMIT];
  size_t task_count;
  size_t current_task;
  bool started;
} piccolo_os_internals_t;

typedef uint32_t piccolo_sleep_t;

void piccolo_yield(void);
void piccolo_syscall(void);
void piccolo_task_init(void);
int piccolo_create_task(void (*pointer_to_task_function)(void));
void piccolo_sleep(piccolo_sleep_t *pointer_to_task_function, int ticks);
void piccolo_sleep_ms(int ticks);
void piccolo_init();
void piccolo_start();
#endif

#ifndef piccolo_os_lock_core
#define piccolo_os_lock_core

#include "pico.h"

/* force mutex for malloc even if multicore is not loaded */
#define PICO_USE_MALLOC_MUTEX 1



#ifndef lock_owner_id_t
/*! \brief  type to use to store the 'owner' of a lock.
 *  \ingroup lock_core
 * By default this is int8_t as it only needs to store the core number or -1, however it may be
 * overridden if a larger type is required (e.g. for an RTOS task id)
 */
#define lock_owner_id_t int8_t
#endif

#ifndef LOCK_INVALID_OWNER_ID
/*! \brief  marker value to use for a lock_owner_id_t which does not refer to any valid owner
 *  \ingroup lock_core
 */
#define LOCK_INVALID_OWNER_ID ((lock_owner_id_t)-1)
#endif

#ifndef __ASSEMBLER__
#ifdef __cplusplus
extern "C" {
#endif

//lock_owner_id_t piccolo_get_task_id();
void piccolo_lock_wait();
bool piccolo_lock_wait_until(absolute_time_t timeout_timestamp);
void piccolo_lock_yield();

#ifdef __cplusplus
}
#endif

#endif

#ifndef lock_get_caller_owner_id
/*! \brief  return the owner id for the caller
 *  \ingroup lock_core
 * By default this returns the calling core number, but may be overridden (e.g. to return an RTOS task id)
 * 
 * For Piccolo OS, return the task ID if the scheduler is running. Otherwise, return the core number.
 */
#define lock_get_caller_owner_id() ((lock_owner_id_t) piccolo_get_task_id())
#endif


#ifndef lock_internal_spin_unlock_with_wait
/*! \brief   Atomically unlock the lock's spin lock, and wait for a notification.
 *  \ingroup lock_core
 *
 * _Atomic_ here refers to the fact that it should not be possible for a concurrent lock_internal_spin_unlock_with_notify
 * to insert itself between the spin unlock and this wait in a way that the wait does not see the notification (i.e. causing
 * a missed notification). In other words this method should always wake up in response to a lock_internal_spin_unlock_with_notify
 * for the same lock, which completes after this call starts.
 *
 * In an ideal implementation, this method would return exactly after the corresponding lock_internal_spin_unlock_with_notify
 * has subsequently been called on the same lock instance, however this method is free to return at _any_ point before that;
 * this macro is _always_ used in a loop which locks the spin lock, checks the internal locking primitive state and then
 * waits again if the calling thread should not proceed.
 *
 * By default this macro simply unlocks the spin lock, and then performs a WFE, but may be overridden
 * (e.g. to actually block the RTOS task).
 *
 * \param lock the lock_core for the primitive which needs to block
 * \param save the uint32_t value that should be passed to spin_unlock when the spin lock is unlocked. (i.e. the `PRIMASK`
 *             state when the spin lock was acquire
 * 
 * For Piccolo OS, if the scheduler is running we will just yield
 */


#define lock_internal_spin_unlock_with_wait(lock, save) ({spin_unlock((lock)->spin_lock, save);piccolo_lock_wait();})
#endif

#ifndef lock_internal_spin_unlock_with_best_effort_wait_or_timeout
/*! \brief   Atomically unlock the lock's spin lock, and wait for a notification or a timeout
 *  \ingroup lock_core
 *
 * _Atomic_ here refers to the fact that it should not be possible for a concurrent lock_internal_spin_unlock_with_notify
 * to insert itself between the spin unlock and this wait in a way that the wait does not see the notification (i.e. causing
 * a missed notification). In other words this method should always wake up in response to a lock_internal_spin_unlock_with_notify
 * for the same lock, which completes after this call starts.
 *
 * In an ideal implementation, this method would return exactly after the corresponding lock_internal_spin_unlock_with_notify
 * has subsequently been called on the same lock instance or the timeout has been reached, however this method is free to return
 * at _any_ point before that; this macro is _always_ used in a loop which locks the spin lock, checks the internal locking
 * primitive state and then waits again if the calling thread should not proceed.
 *
 * By default this simply unlocks the spin lock, and then calls \ref best_effort_wfe_or_timeout
 * but may be overridden (e.g. to actually block the RTOS task with a timeout).
 *
 * \param lock the lock_core for the primitive which needs to block
 * \param save the uint32_t value that should be passed to spin_unlock when the spin lock is unlocked. (i.e. the PRIMASK
 *             state when the spin lock was acquire)
 * \param until the \ref absolute_time_t value
 * \return true if the timeout has been reached
 * 
 *  For Piccolo OS, if the scheduler is running we will sleep until and then just yield
 */
#define lock_internal_spin_unlock_with_best_effort_wait_or_timeout(lock, save, until) ({ \
    spin_unlock((lock)->spin_lock,save); piccolo_lock_wait_until(until);                       \
})
#endif

#ifndef sync_internal_yield_until_before
/*! \brief   yield to other processing until some time before the requested time
 *  \ingroup lock_core
 *
 * This method is provided for cases where the caller has no useful work to do
 * until the specified time.
 *
 * By default this method does nothing, however it can be overridden (for example by an
 * RTOS which is able to block the current task until the scheduler tick before
 * the given time)
 *
 * \param until the \ref absolute_time_t value
 * 
 * For Piccolo OS, if the scheduler is running, we will yield
 */
#define sync_internal_yield_until_before(until) (piccolo_lock_yield();)
#endif



#endif
