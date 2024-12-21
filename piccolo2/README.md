# Piccolo OS
Piccolo OS is a small multitasking OS for the Raspberry Pi Pico. It is designed primarily as a teaching tool.
It demonstrates the fundamentals of a pre-emptive multitasking OS and the Arm Cortex-M0+.

This is v1.1 of Piccolo OS. v1.1 takes the basic concepts of v1.0 (which used co-operative multitasking) and adds pre-emptive multitasking (see below).

To understand v1.1 it is first best to [understand v1.0](https://github.com/garyexplains/piccolo_os_v1/blob/main/README.md)

You might also want to watch [the Piccolo OS v1.1 video on Gary Explains](https://youtu.be/g1VFJHjLVMU)

## Credits
Many thanks to [Keith Standiford](https://github.com/KStandiford) for his pre-emptive multitasking code, insights, and encouragement.

Thanks also to [Bjorn](https://github.com/BjornTheProgrammer) for his interest and encouragement.

## Primary Copyrights
```
Copyright (C) 2021-2022 Gary Sims
Copyright (C) 2022 Keith Standiford
All rights reserved.
```

## A Comma A Day Keeps The Pedants Away
Since the Internet seems to be full of people with way too much time on their hands, I would just like to kindly shoo away any C/C++ pedants out there.
Yes, I am sure there are a million different ways to achieve many of the same results. Yes, I am sure there are some fine points of language semantics that could be argued about. Yes, I am sure you have a more efficient way of writing some of the functions.

To be honest, I am not interested.

Having said that, like-minded people who wish to contribute and extend Piccolo OS are welcome. See __Contributing__

## Build Instructions
Make sure you have the Pico C/C++ SDK installed and working on your machine. [Getting started with Raspberry Pi Pico is
the best place to start.](https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf)

You need to have PICO_SDK_PATH defined, e.g. `export PICO_SDK_PATH=/home/pi/pico/pico-sdk/`

Clone the code from the repository. Create the `build` directory (`mkdir build`), if you don't have one. Change directory into `build` and run `cmake -DCMAKE_BUILD_TYPE=Debug ..` (for a debug build) or `cmake ..` (for a release build).

Run `make`

The resulting file `piccolo_os_demo.elf` can be flashed on your Pico in the normal way.

## Design
First to define some terminology. The _kernel_ is `piccolo_start()` which is called by `main()` and never returns. Tasks are created during initialization (before `piccolo_start()` is called) and then the job of the kernel is to pick the next task that needs to be run (in a round-robin fashion), save the kernel stack, restore the task's stack and jump to the program counter (PC) last used by the user task.

A _task_ (i.e. _user task_) is a function that is run by Piccolo in a round-robin fashion along with the other _tasks_. For example, a function that flashes the onboard LED. Each _task_ has its own stack, separate from the main stack (which is used by the kernel).

So, there are two types of stack, the Main Stack Pointer (MSP) and Process Stack Pointer (PSP). The Process Stack Pointer (PSP) is used by the current task, and the MSP is used by OS Kernel and exception handlers.

To switch from the kernel to a task, Piccolo needs to save the kernel state on the main stack, restore the user state from the process stack, and jump to the task PC that was saved. To switch from a task to the kernel, the opposite happens, in that the user stack is saved, the kernel stack is restored. The task to kernel switch happens via an interrupt, a SVC.

Piccolo OS uses a set of stacks, one for each task. The stacks are defined in `piccolo_os_internals_t` along with the number of created tasks, plus the index to the current task.

### piccolo_init()
`piccolo_init()` initializes the number of created tasks to zero, then calls the standard Pico SDK initialization function `stdio_init_all()`.

### piccolo_create_task()
To create a task the initial stack frame is created. It needs to mimic what would be saved by hardware and by the software.

### piccolo_start()
After reset, the processor is in thread (privileged) mode. `piccolo_start()` calls `__piccolo_task_init_stack()` which causes the processor to switch to handler mode. From herein `piccolo_start()` runs in handler mode.

Next the function enters an infinite loop that picks the next stack (i.e. next task) to use in a round-robin fashion. When a predefined amount of time has passed (hard-coded as`PICCOLO_OS_TIME_SLICE`) then a SysTick exception is raised by the hardware. This is handled by the interrupt handler `isr_systick` defeined in `context_switch.s`.

Alternativly when `piccolo_yield()` or `piccolo_syscall()` is called by a task, an SVC exception is raised, which causes the interrupt handler `isr_svcall` to be called. `isr_systick` and `isr_svcall` are in fact the same code as the handling is identical for a co-operative switch or a pre-emptive switch.

### piccolo_yield() / piccolo_syscall()
This function is very simple:

```
nop
svc 0
nop
bx lr
```

The SVC instruction causes an exception which is handled by `isr_svcall`.

### isr_svcall()
This is invoked via the SVC exception. It saves the current user task onto the PSP and then restores the kernel stack. It then returns to the last PC used by the kernel before it was switched out. Control returns to the kernel (`main()` or  `piccolo_start()`).

### __piccolo_pre_switch()
`__piccolo_pre_switch()` saves the kernel state, i.e. R4 to R12 (which contains the PSR) and the LR (the return address), onto the main stack. Then, the task state (the register R4 to R11 and the LR) are restored from the task's PSP stack. This is in R0, which is used to set the PSP register. The code then jumps to the LR (restored from the PSP).

If the LR is THREAD_PSP (i.e. 0xFFFFFFFD, a special return address recognized by the CPU) then THREAD_PSP forces a return to Thread mode, execution continues using the PSP.

### piccolo_sleep() and piccolo_sleep_ms()
`piccolo_sleep()` and `piccolo_sleep_ms()` are replacement functions for the Pico's C/C++ sleep function, as the SDK functions will block until the specified time has passed. `piccolo_sleep()` and `piccolo_sleep_ms()` are alternative functions that call `piccolo_yield()` while waiting for the specified amount of time to pass.

## Thread mode and Handler mode in the Cortex-M0+
When the Cortex-M0+ processor is running a program it can be either in Thread mode or Handler mode. Thread mode and Handler mode are almost completely the same.
The only difference is that Thread mode uses (if desired) the Process Stack Pointer (PSP) rather than the Main Stack Pointer (MSP).

After reset, the processor is in Thread mode.

## Context Switching
The Cortex-M0 and Cortex-M0+ processors (also applicable to Cortex-M3/M4/M7) have two Stack Pointers (SPs).
There are two types of stack, the Main Stack Pointer (MSP) and Process Stack Pointer (PSP).
The Process Stack Pointer (PSP) is used by the current task, and the MSP is used by OS Kernel and exception handlers. The stack pointer selection is
determined by the CONTROL register, a special registers.
When a context switch occurs the status is saved on the stack.

### Overview
1. Piccolo OS -> save kernel state on MSP ->
2. restore TASK1 state from PSP_1 -> TASK1 -> save TASK1 state to PSP_1 ->
3. restore kernel state from MSP -> Piccolo OS -> save kernel on MSP ->
4. restore TASK2 state from PSP_2 -> TASK2 -> save TASK2 state to PSP_2 ->
5. restore kernel state from MSP -> Piccolo OS -> save kernel on MSP ->
6. restore TASK3 state from PSP_3 -> TASK3 -> save TASK3 state to PSP_3 ->
7. restore kernel state from MSP -> Go to step 1.

### Process Stack Pointer
```
        Exception frame saved by the hardware onto stack:
        +------+
        | xPSR | 0x01000000 i.e. PSR Thumb bit
        |  PC  | Pointer to task function
        |  LR  |
        |  R12 |
        |  R3  |
        |  R2  |
        |  R1  |
        |  R0  |
        +------+
        Registers saved by the software (isr_svcall):
        +------+
        |  LR  | THREAD_PSP i.e. 0xFFFFFFFD
        |  R7  |
        |  R6  |
        |  R5  |
        |  R4  |
        |  R11 |
        |  R10 |
        |  R9  |
        |  R8  |
        +------+
```

### Main Stack Pointer
```
        Registers saved by the software (__piccolo_pre_switch):
        +------+
        |  LR  |
        |  R7  |
        |  R6  |
        |  R5  |
        |  R4  |
        |  R12 | NB: R12  (i.e IP) is included, unlike user state
        |  R11 |
        |  R10 |
        |  R9  |
        |  R8  |
        +------+
```

### R0 to R3
When the CPU is interrupted, the hardware will store R0 to R3, the PC etc., onto the stack. It is automatic. The interrupt handler `isr_svcall()` needs to save __all__ the registers (the whole context) so it saves R4 to R11, etc. This means all the registered are saved. However, you may have noticed that when there is a switch from the _kernel_ to a _task_ via `__piccolo_pre_switch()` then this is software only (no SVC instruction, no interrupt) and so the kernel's R0 to R3 are not saved on the main stack. The reason is that the calling ARM calling convention (when you call a function) states that R0 to R3 are scratch registers and you can't rely on their contents after a branch to another bit of code. So R0 to R3 don't need to be saved as the C compiler knows not to rely on the value of those registers after a function call, and invoking `__piccolo_pre_switch()` is a function call!

## More Details in the Piccolo v1.0 Documentation

For a fully and detailed explanation of how the tasking switch works please see the [v1.0 README file](https://github.com/garyexplains/piccolo_os_v1/blob/main/README.md).

## Pre-emptive
v1.0 of Piccolo OS was co-operative, in that a task will continue to run until `piccolo_yield()` is called.

v1.1 adds pre-emptive multitasking. In essence, a SysTick exception is raised by the hardware when the SysTick counter reaches zero. The SysTick Control, Reload, and Status resisters control how long it takes between exceptions, and if the exception is enabled or disabled.

The SysTick timer uses a 1μs pulse as a clock enable

Further details about how Piccolo OS uses the SysTick exception including details of interrupt priority levels and locks, please see [Notes on Pre-emptive Scheduling](https://github.com/garyexplains/piccolo_os_v1.1/blob/main/Preemption_Notes.md)

## Contributing
Piccolo OS is a learning tool.

v1.0 is about the simplest version of a co-operative multitasking OS for the Pico that I could make.

v1.1 adds pre-emptive multitasking and it is a little more complex, however still accessible to those who are keen to learn

v2.0 doesn't exist yet, and it may never. However if it does it will be limited to avoid feature bloat:
- Piccolo OS will remain strictly for the Raspberry Pi Pico. This has basically already happened as all the stuff we are talking about is related to the Pico SDK and how to work with it to make Piccolo OS.
- Aim to keep it simple. So for example we could never support dynamic task creation/destruction, or anything other than a round-robin scheduler.
- If something already exists in the Pico SDK, then we don't need to re-invent it for Piccolo OS. I am thinking about things like networking etc. As long as Piccolo OS plays happily with the SDK then everything should be good.

## Resources
https://datasheets.raspberrypi.org/pico/raspberry-pi-pico-c-sdk.pdf

https://raspberrypi.github.io/pico-sdk-doxygen/index.html

https://interrupt.memfault.com/blog/cortex-m-rtos-context-switching

https://www.adamh.cz/blog/2016/07/context-switch-on-the-arm-cortex-m0/

https://chromium.googlesource.com/chromiumos/platform/ec/

https://github.com/n-k/cortexm-threads

https://github.com/scttnlsn/cmcm

https://github.com/chris-stones/ShovelOS

https://github.com/jserv/mini-arm-os

https://stackoverflow.com/questions/48537618/cortex-m0-setting-the-priority-of-the-system-exception

https://developer.arm.com/documentation/dui0552/a/the-cortex-m3-processor/exception-model/exception-entry-and-return

https://developer.arm.com/documentation/dui0497/a/the-cortex-m0-processor/programmers-model/core-registers

https://github.com/dwelch67/raspberrypi-pico

https://github.com/davidgiven/FUZIX/tree/rpipico/Kernel/platform-rpipico

https://archive.fosdem.org/2018/schedule/event/multitasking_on_cortexm/attachments/slides/2602/export/events/attachments/multitasking_on_cortexm/slides/2602/Slides.pdf

## License - 3-Clause BSD License
Copyright (C) 2021, Gary Sims
All rights reserved.

SPDX short identifier: BSD-3-Clause

## Additional Copyrights
Some portions of code, intentionally or unintentionally, may or may not be attributed to the following people:

Copyright (C) 2017 Scott Nelson: CMCM - https://github.com/scttnlsn/cmcm

Copyright (C) 2015-2018 National Cheng Kung University, Taiwan: mini-arm-os - https://github.com/jserv/mini-arm-os

Copyright (C) 2014-2017 Chris Stones: Shovel OS - https://github.com/chris-stones/ShovelOS
