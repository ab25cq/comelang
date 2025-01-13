/****************************************************************************************************************************
  SdFatUtil.h

  For all RP2040 boads using Arduimo-mbed or arduino-pico core

  RP2040_SD is a library enable the usage of SD on RP2040-based boards

  This Library is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

  This Library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  You should have received a copy of the GNU General Public License along with the Arduino SdFat Library.
  If not, see <http://www.gnu.org/licenses/>.

  Based on and modified from  Arduino SdFat Library (https://github.com/arduino/Arduino)

  (C) Copyright 2009 by William Greiman
  (C) Copyright 2010 SparkFun Electronics
  (C) Copyright 2021 by Khoi Hoang

  Built by Khoi Hoang https://github.com/khoih-prog/RP2040_SD
  Licensed under GPL-3.0 license

  Version: 1.0.1

  Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
  1.0.0  K Hoang       18/06/2021 Port to RP2040-based boards using Arduimo-mbed or arduino-pico core
  1.0.1  K Hoang       22/10/2021 Fix platform in library.json for PIO
 *****************************************************************************************************************************/

#pragma once

#ifndef SdFatUtil_h
#define SdFatUtil_h

#include <Arduino.h>

#define NOINLINE    __attribute__((noinline,unused))
#define UNUSEDOK    __attribute__((unused))

//------------------------------------------------------------------------------
/** Return the number of bytes currently free in RAM. */
static UNUSEDOK int FreeRam()
{
  extern int  __bss_end;
  extern int* __brkval;
  int free_memory;

  if (reinterpret_cast<int>(__brkval) == 0)
  {
    // if no heap use from end of bss section
    free_memory = reinterpret_cast<int>(&free_memory) - reinterpret_cast<int>(&__bss_end);
  }
  else
  {
    // use from top of stack to heap
    free_memory = reinterpret_cast<int>(&free_memory) - reinterpret_cast<int>(__brkval);
  }

  return free_memory;
}
#endif  // #define SdFatUtil_h
