# Pre-emptive multitasking
This document is taken from the [notes of Keith Standiford](https://gist.github.com/KStandiford/785bbea1e542ee4032a0ed28d38ed57b) as he was working on the
pre-emptive multitasking code. I have taken the liberty of editing, collating, and rearranging to create a concise summary of the issues and solutions.

## What is Pre-emptive multitasking?
In a co-operative multitasking environment it is up to each to yield control back to the kernel so that another task has the chance to run.
In a pre-emptive environment the kernel forces control away from a task and lets another task run. 

To do this, Piccolo OS uses the SysTick exception. In essence, a SysTick exception is raised by the hardware when the SysTick counter reaches zero.
The SysTick Control, Reload, and Status resisters control how long it takes between exceptions, and if the exception is enabled or disabled. The SysTick timer uses a 1μs pulse as a clock enable

## How do we avoid breaking the rest of the Pico SDK system?
Truth be told, we *cannot* do a perfect job. The Pico SDK documentation specifically states that 
much of the standard C library is not "core safe". (They mean you cannot call it from multiple
cores, but this would also apply to multiple tasks if preemption is allowed.) They do promise that 
`printf()` and the `malloc(), calloc(), free()` family *are* core safe. They also advise users that
the SDK provides mutexes which a user could use to gate library function use. In order to get these
protections, we must include the `pico_multicore` library so that the SDK compiles with the protections 
included.

I originally had concerns that the preemptive switch might break the Pico SDK spinlocks. This turns out *not* 
to be an issue, because the spinlocks disable interrupts using `PRIMASK` which will *also* disable 
both the SVC interrupt and the systick interrupt.

We should worry, however, about systick preempting interrupt service handlers and timer routines. 
The Pico SDK configures all external interrupt priorities to level 2. (The AMR Cortex M0 has four levels,
with 0 being highest priority and 3 being lowest.) This means that the default systick (and SVC) priorities
(set to 0) will be higher than any IRQ's used by the SDK or the user. Doing a preemptive context switch during an
Interrupt Service Routine would be a **disaster**! Since the user can also lower IRQ priorities further, we
should set the IRQ priorities for SVC and systick to the lowest possible level.

## Do we create any race conditions with two exceptions doing the same thing?
The short answer is yes! The timer can expire just before the SVC, or simultaneously. It can also expire
while the scheduler is running (after the SVC)! We did at least make sure that neither exception
will preempt the other when we set *both* their priorities to the lowest level.
- If the timer gets in before the SVC instruction executes, then the task misses the boat and will skip
a turn when it resumes and executes the SVC instruction. (So sad!)
- If both the SVC and systick happen at the same time then SVC wins with a lower exception number and
the systick interrupt will be pending. This is the same as systick expiring while the scheduler is running 
because of an SVC, and will be discussed below.
- I think it's unlikely but it may be possible for the processor to decide to take the exception for the
systick interrupt in just such a way that the SVC still gets executed and the SVC interrupt ends up pending while
the systick one is processed. The would cause two context switches in a row so that the task after the preempted 
one would skip a turn. (So sorry!) I don't think it can happen, and it is ugly to fix, so I propose to ignore it.
- The systick timer can expire while the scheduler is running due to an SVC instruction. The scheduler is the
exception handler and will not be preempted by the systick interrupt because they are at the same
priority level. But the systick exception will be pending and will happen as soon as the scheduler switches to 
the next task! We can solve this by making sure that the scheduler specifically disables the systick timer
and then clears any pending systick exceptions. The timer can then be restarted, and the next task run.

## malloc and free
`malloc()` and `free()` are not protected from preemption on a single core, even with multicore loaded, because the SDK mutexes only protect cores from each other.
The solution is to override the defaults from lock_core.h in the SDK and provide interfaces to Piccolo OS. This means that essentially Piccolo OS and the Pico are using the
same locks and therefore an non-thread safe code will be exclusively locked.

The overrides are found in `piccolo_os_lock_core_v1.1.c` and `piccolo_os_lock_core_v1.1.h`.

## Why is __piccolo_systick_config() called for every iteration of the round-robin scheduler?
Resetting the timer before every task runs makes sure that the task gets the full time slice microseconds of computing.
Without resetting the timer each time, preemption comes at completely random times from the task point of view. 
The timer may even expire while the scheduler is running, in which case the pending exception will be serviced as soon as the next task starts,
and the task will miss an entire turn! This last case is why __piccolo_systick_config() is so careful about disabling the timer and then
clearing any pending timer interrupt.
