/****************************************************************************************************************************
  File.hpp - a slightly more friendly wrapper for sdfatlib
  
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

#ifndef __RP2040_FILE_HPP__
#define __RP2040_FILE_HPP__

//#include <RP2040_SD.h>
//#include "utility/RP2040_SD_Debug.h"

namespace RP2040_SDLib
{
  File::File(RP2040_SdFile f, const char *n)
  {
    _file = (RP2040_SdFile *) malloc(sizeof(RP2040_SdFile));

    if (_file)
    {
      memcpy(_file, &f, sizeof(RP2040_SdFile));

      strncpy(_name, n, 12);
      _name[12] = 0;

       nfilecount++;
    }
  }

  File::File()
  {
    _file = 0;
    _name[0] = 0;
  }

  // returns a pointer to the file name
  char *File::name()
  {
    return _name;
  }

  // a directory is a special type of file
  bool File::isDirectory()
  {
    return (_file && _file->isDir());
  }


  size_t File::write(uint8_t val) 
  {
    return write(&val, 1);
  }

  size_t File::write(const uint8_t *buf, size_t size) 
  {
    size_t t;
    
    if (!_file) 
    {
      setWriteError();
      return 0;
    }
    
    _file->clearWriteError();
    t = _file->write(buf, size);
    
    if (_file->getWriteError()) 
    {
      setWriteError();
      return 0;
    }
    
    return t;
  }

  int File::availableForWrite() 
  {
    if (_file) 
    {
      return _file->availableForWrite();
    }
    
    return 0;
  }

  int File::peek() 
  {
    if (! _file) 
    {
      return 0;
    }

    int c = _file->read();
    
    if (c != -1) 
    {
      _file->seekCur(-1);
    }
    
    return c;
  }

  int File::read() 
  {
    if (_file) 
    {
      return _file->read();
    }
    
    return -1;
  }

  // buffered read for more efficient, high speed reading
  int File::read(void *buf, uint16_t nbyte) 
  {
    if (_file) 
    {
      return _file->read(buf, nbyte);
    }
    
    return 0;
  }

  int File::available() 
  {
    if (! _file) 
    {
      return 0;
    }

    uint32_t n = size() - position();

    return n > 0X7FFF ? 0X7FFF : n;
  }

  void File::flush() 
  {
    if (_file) 
    {
      _file->sync();
    }
  }

  bool File::seek(uint32_t pos) 
  {
    if (! _file) 
    {
      return false;
    }

    return _file->seekSet(pos);
  }

  uint32_t File::position() 
  {
    if (! _file) 
    {
      return -1;
    }
    
    return _file->curPosition();
  }

  uint32_t File::size() 
  {
    if (! _file) 
    {
      return 0;
    }
    
    return _file->fileSize();
  }

  void File::close() 
  {
    if (_file) 
    {
      _file->close();
      
      free(_file);
      _file = 0;
      
      // for debugging file open/close leaks
      nfilecount--;
      
      RP2040_SD_LOGINFO3("Closed \"", _name,"\", nfilecount = ", nfilecount);
    }
  }

  File::operator bool()
  {
    if (_file) 
    {
      return  _file->isOpen();
    }
    
    return false;
  }
  
// allows you to recurse into a directory
  File File::openNextFile(uint8_t mode) 
  {
    dir_t p;
  
    RP2040_SD_LOGINFO("Reading dir...");
    
    while (_file->readDir(&p) > 0) 
    {
  
      // done if past last used entry
      if (p.name[0] == DIR_NAME_FREE) 
      {
        RP2040_SD_LOGINFO("end");
        
        return File();
      }
  
      // skip deleted entry and entries for . and  ..
      if (p.name[0] == DIR_NAME_DELETED || p.name[0] == '.') 
      {
        RP2040_SD_LOGINFO("dots");
        
        continue;
      }
  
      // only list subdirectories and files
      if (!DIR_IS_FILE_OR_SUBDIR(&p)) 
      {
        RP2040_SD_LOGINFO("notafile");
        
        continue;
      }
  
      // print file name with possible blank fill
      RP2040_SdFile f;
      char name[13];
      
      _file->dirName(p, name);
      
      RP2040_SD_LOGINFO1("try to open file ", name);
  
      if (f.open(_file, name, mode)) 
      {
        RP2040_SD_LOGINFO("OK!");
        
        return File(f, name);
      } 
      else 
      {
        RP2040_SD_LOGINFO("ugh");
        
        return File();
      }
    }
  
    RP2040_SD_LOGINFO("nothing");
    
    return File();
  }
  
  void File::rewindDirectory()
  {
    if (isDirectory()) 
    {
      _file->rewind();
    }
  }  
}

#endif    // __RP2040_FILE_HPP__
