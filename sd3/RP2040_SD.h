/****************************************************************************************************************************
  RP2040_SD.h - a slightly more friendly wrapper for sdfatlib

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

#ifndef __RP2040_SD_H__
#define __RP2040_SD_H__

#if !defined(ARDUINO_ARCH_RP2040)
  #error For RP2040 only
#elif defined(ARDUINO_ARCH_MBED)
  #warning Using Arduino-mbed core and architecture for RP2040
  #define RP2040_SD_VERSION     "MBED RP2040_SD v1.0.1"
#else
  #warning Using arduino-pico architecture for RP2040
  #define RP2040_SD_VERSION     "RP2040_SD v1.0.1"
#endif

#include <Arduino.h>

#include "utility/RP2040_SD_Debug.h"

#include "utility/SdFat.h"
#include "utility/SdFatUtil.h"

#define FILE_READ     O_READ
#define FILE_WRITE    (O_READ | O_WRITE | O_CREAT | O_APPEND)

namespace RP2040_SDLib
{
class File : public Stream
{
  private:

    char _name[13];         // our name
    RP2040_SdFile *_file;   // underlying file pointer

    //for debugging file open/close leaks
    uint8_t nfilecount = 0;

  public:

    File(RP2040_SdFile f, const char *name);     // wraps an underlying RP2040_SdFile
    File(void);      // 'empty' constructor

    virtual size_t  write(uint8_t);
    virtual size_t  write(const uint8_t *buf, size_t size);
    virtual int     availableForWrite();
    virtual int     read();
    virtual int     peek();
    virtual int     available();
    virtual void    flush();
    int             read(void *buf, uint16_t nbyte);
    bool            seek(uint32_t pos);
    uint32_t        position();
    uint32_t        size();
    void            close();
    operator        bool();
    char *          name();

    bool            isDirectory(void);
    File            openNextFile(uint8_t mode = O_RDONLY);
    void            rewindDirectory(void);

    using Print::write;
};

class SDClass
{
  private:

    // These are required for initialisation and use of sdfatlib
    Sd2Card         card;
    RP2040_SdVolume volume;
    RP2040_SdFile   root;

    // my quick&dirty iterator, should be replaced
    RP2040_SdFile   getParentDir(const char *filepath, int *indx);

  public:

    // This needs to be called to set up the connection to the SD card
    // before other methods are used.
    bool begin(uint8_t csPin = SD_CHIP_SELECT_PIN);
    bool begin(uint32_t clock, uint8_t csPin);

    //call this when a card is removed. It will allow you to insert and initialise a new card.
    void end();

    // Open the specified file/directory with the supplied mode (e.g. read or
    // write, etc). Returns a File object for interacting with the file.
    // Note that currently only one file can be open at a time.
    File open(const char *filename, uint8_t mode = FILE_READ);

    File open(const String &filename, uint8_t mode = FILE_READ)
    {
      return open(filename.c_str(), mode);
    }

    // Methods to determine if the requested file path exists.
    bool exists(const char *filepath);

    bool exists(const String &filepath)
    {
      return exists(filepath.c_str());
    }

    // Create the requested directory heirarchy--if intermediate directories
    // do not exist they will be created.
    bool mkdir(const char *filepath);

    bool mkdir(const String &filepath)
    {
      return mkdir(filepath.c_str());
    }

    // Delete the file.
    bool remove(const char *filepath);

    bool remove(const String &filepath)
    {
      return remove(filepath.c_str());
    }

    bool rmdir(const char *filepath);

    bool rmdir(const String &filepath)
    {
      return rmdir(filepath.c_str());
    }

  private:

    // This is used to determine the mode used to open a file
    // it's here because it's the easiest place to pass the
    // information through the directory walking function. But
    // it's probably not the best place for it.
    // It shouldn't be set directly--it is set via the parameters to `open`.
    int fileOpenMode;

    friend class File;
    friend bool callback_openPath(RP2040_SdFile&, const char *, bool, void *);
};

//extern SDClass SD;
static SDClass SD;
};

// We enclose File and SD classes in namespace RP2040_SDLib to avoid conflicts
// with others legacy libraries that redefines File class.

// This ensure compatibility with sketches that uses only SD library
using namespace RP2040_SDLib;

// This allows sketches to use SDLib::File with other libraries (in the
// sketch you must use RP2040_SdFile instead of File to disambiguate)
typedef RP2040_SDLib::File      SdFile;
typedef RP2040_SDLib::SDClass   SdFileSystemClass;

typedef RP2040_SdVolume         SdVolume;

#define SdFileSystem            RP2040_SDLib::SD

#include "File.hpp"
#include "RP2040_SD.hpp"

#endif    // __RP2040_SD_H__
