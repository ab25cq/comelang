/****************************************************************************************************************************
  RP2040_SD_Debug.h

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

#ifndef RP2040_SD_Debug_H
#define RP2040_SD_Debug_H

#include <stdio.h>

#ifdef DEBUG_RP2040_SD_PORT
  #define RP2040_SD_DBG_PORT     DEBUG_RP2040_SD_PORT
#else
  #define RP2040_SD_DBG_PORT     Serial
#endif

// Change _RP2040_SD_LOGLEVEL_ to set tracing and logging verbosity
// 0: DISABLED: no logging
// 1: ERROR: errors
// 2: WARN: errors and warnings
// 3: INFO: errors, warnings and informational (default)
// 4: DEBUG: errors, warnings, informational and debug

#ifndef _RP2040_SD_LOGLEVEL_
  #define _RP2040_SD_LOGLEVEL_       0
#endif

///////////////////////////////////////

const char RP2040_SD_MARK[]  = "[SD] ";
const char RP2040_SD_SP[]    = " ";

#define RP2040_SD_PRINT          RP2040_SD_DBG_PORT.print
#define RP2040_SD_PRINTLN        RP2040_SD_DBG_PORT.println
#define RP2040_SD_FLUSH          RP2040_SD_DBG_PORT.flush

#define RP2040_SD_PRINT_MARK     RP2040_SD_PRINT(RP2040_SD_MARK)
#define RP2040_SD_PRINT_SP       RP2040_SD_PRINT(RP2040_SD_SP)

///////////////////////////////////////

#define RP2040_SD_LOG(x)         { RP2040_SD_PRINTLN(x); }
#define RP2040_SD_LOG0(x)        { RP2040_SD_PRINT(x); }
#define RP2040_SD_LOG1(x,y)      { RP2040_SD_PRINT(x); RP2040_SD_PRINTLN(y); }
#define RP2040_SD_LOG2(x,y,z)    { RP2040_SD_PRINT(x); RP2040_SD_PRINT(y); RP2040_SD_PRINTLN(z); }
#define RP2040_SD_LOG3(x,y,z,w)  { RP2040_SD_PRINT(x); RP2040_SD_PRINT(y); RP2040_SD_PRINT(z); RP2040_SD_PRINTLN(w); }

///////////////////////////////////////

#define RP2040_SD_LOGERROR(x)         if(_RP2040_SD_LOGLEVEL_>0) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINTLN(x); }
#define RP2040_SD_LOGERROR0(x)        if(_RP2040_SD_LOGLEVEL_>0) { RP2040_SD_PRINT(x); }
#define RP2040_SD_LOGERROR1(x,y)      if(_RP2040_SD_LOGLEVEL_>0) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(y); }
#define RP2040_SD_LOGERROR2(x,y,z)    if(_RP2040_SD_LOGLEVEL_>0) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(y); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(z); }
#define RP2040_SD_LOGERROR3(x,y,z,w)  if(_RP2040_SD_LOGLEVEL_>0) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(y); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(z); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(w); }

///////////////////////////////////////

#define RP2040_SD_LOGWARN(x)          if(_RP2040_SD_LOGLEVEL_>1) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINTLN(x); }
#define RP2040_SD_LOGWARN0(x)         if(_RP2040_SD_LOGLEVEL_>1) { RP2040_SD_PRINT(x); }
#define RP2040_SD_LOGWARN1(x,y)       if(_RP2040_SD_LOGLEVEL_>1) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(y); }
#define RP2040_SD_LOGWARN2(x,y,z)     if(_RP2040_SD_LOGLEVEL_>1) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(y); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(z); }
#define RP2040_SD_LOGWARN3(x,y,z,w)   if(_RP2040_SD_LOGLEVEL_>1) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(y); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(z); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(w); }

///////////////////////////////////////

#define RP2040_SD_LOGINFO(x)          if(_RP2040_SD_LOGLEVEL_>2) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINTLN(x); }
#define RP2040_SD_LOGINFO0(x)         if(_RP2040_SD_LOGLEVEL_>2) { RP2040_SD_PRINT(x); }
#define RP2040_SD_LOGINFO1(x,y)       if(_RP2040_SD_LOGLEVEL_>2) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(y); }
#define RP2040_SD_LOGINFO2(x,y,z)     if(_RP2040_SD_LOGLEVEL_>2) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(y); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(z); }
#define RP2040_SD_LOGINFO3(x,y,z,w)   if(_RP2040_SD_LOGLEVEL_>2) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(y); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(z); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(w); }

///////////////////////////////////////

#define RP2040_SD_LOGDEBUG(x)         if(_RP2040_SD_LOGLEVEL_>3) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINTLN(x); }
#define RP2040_SD_LOGDEBUG0(x)        if(_RP2040_SD_LOGLEVEL_>3) { RP2040_SD_PRINT(x); }
#define RP2040_SD_LOGDEBUG1(x,y)      if(_RP2040_SD_LOGLEVEL_>3) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(y); }
#define RP2040_SD_LOGDEBUG2(x,y,z)    if(_RP2040_SD_LOGLEVEL_>3) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(y); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(z); }
#define RP2040_SD_LOGDEBUG3(x,y,z,w)  if(_RP2040_SD_LOGLEVEL_>3) { RP2040_SD_PRINT_MARK; RP2040_SD_PRINT(x); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(y); RP2040_SD_PRINT_SP; RP2040_SD_PRINT(z); RP2040_SD_PRINT_SP; RP2040_SD_PRINTLN(w); }

///////////////////////////////////////

#endif    // RP2040_SD_Generic_Debug_H
