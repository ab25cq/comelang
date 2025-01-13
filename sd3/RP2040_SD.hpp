/****************************************************************************************************************************
  RP2040_SD.hpp - a slightly more friendly wrapper for sdfatlib
  
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

/*
  Implementation Notes

  In order to handle multi-directory path traversal, functionality that
  requires this ability is implemented as callback functions.

  Individual methods call the `walkPath` function which performs the actual
  directory traversal (swapping between two different directory/file handles
  along the way) and at each level calls the supplied callback function.

  Some types of functionality will take an action at each level (e.g. exists
  or make directory) which others will only take an action at the bottom
  level (e.g. open).
*/

#pragma once

#ifndef __RP2040_SD_HPP__
#define __RP2040_SD_HPP__

//#include "RP2040_SD.h"

namespace RP2040_SDLib
{
  // Used by `getNextPathComponent`
  #define MAX_COMPONENT_LEN           12
  #define PATH_COMPONENT_BUFFER_LEN   MAX_COMPONENT_LEN + 1

  /*
  
      Parse individual path components from a path.
  
        e.g. after repeated calls '/foo/bar/baz' will be split
             into 'foo', 'bar', 'baz'.
  
      This is similar to `strtok()` but copies the component into the
      supplied buffer rather than modifying the original string.
  
  
      `buffer` needs to be PATH_COMPONENT_BUFFER_LEN in size.
  
      `p_offset` needs to point to an integer of the offset at
      which the previous path component finished.
  
      Returns `true` if more components remain.
  
      Returns `false` if this is the last component.
        (This means path ended with 'foo' or 'foo/'.)
  
  */
    
  bool getNextPathComponent(const char *path, unsigned int *p_offset, char *buffer)
  {  
    // TODO: Have buffer local to this function, so we know it's the
    //       correct length?
  
    int bufferOffset = 0;
  
    int offset = *p_offset;
  
    // Skip root or other separator
    if (path[offset] == '/')
    {
      offset++;
    }
  
    // Copy the next next path segment
    while ( (bufferOffset < MAX_COMPONENT_LEN) && (path[offset] != '/') && (path[offset] != '\0'))
    {
      buffer[bufferOffset++] = path[offset++];
    }
  
    buffer[bufferOffset] = '\0';
  
    // Skip trailing separator so we can determine if this
    // is the last component in the path or not.
    if (path[offset] == '/')
    {
      offset++;
    }
  
    *p_offset = offset;
  
    return (path[offset] != '\0');
  }
  
   /*
  
       When given a file path (and parent directory--normally root),
       this function traverses the directories in the path and at each
       level calls the supplied callback function while also providing
       the supplied object for context if required.
  
         e.g. given the path '/foo/bar/baz'
              the callback would be called at the equivalent of
        '/foo', '/foo/bar' and '/foo/bar/baz'.
  
       The implementation swaps between two different directory/file
       handles as it traverses the directories and does not use recursion
       in an attempt to use memory efficiently.
  
       If a callback wishes to stop the directory traversal it should
       return false--in this case the function will stop the traversal,
       tidy up and return false.
  
       If a directory path doesn't exist at some point this function will
       also return false and not subsequently call the callback.
  
       If a directory path specified is complete, valid and the callback
       did not indicate the traversal should be interrupted then this
       function will return true.
 
  */
  
  bool walkPath(const char *filepath, RP2040_SdFile& parentDir,
                bool (*callback) (RP2040_SdFile& parentDir, const char *filePathComponent, bool isLastComponent, void *object),
                void *object = NULL)
  {
    RP2040_SdFile subfile1;
    RP2040_SdFile subfile2;
  
    char buffer[PATH_COMPONENT_BUFFER_LEN];
  
    unsigned int offset = 0;
  
    RP2040_SdFile *p_parent;
    RP2040_SdFile *p_child;
  
    RP2040_SdFile *p_tmp_RP2040_SdFile;
  
    p_child = &subfile1;
  
    p_parent = &parentDir;
  
    while (true)
    {
  
      bool moreComponents = getNextPathComponent(filepath, &offset, buffer);
  
      bool shouldContinue = callback((*p_parent), buffer, !moreComponents, object);
  
      if (!shouldContinue)
      {
        // TODO: Don't repeat this code?
        // If it's one we've created then we
        // don't need the parent handle anymore.
        if (p_parent != &parentDir)
        {
          (*p_parent).close();
        }
  
        return false;
      }
  
      if (!moreComponents)
      {
        break;
      }
  
      bool exists = (*p_child).open(*p_parent, buffer, O_RDONLY);
  
      // If it's one we've created then we
      // don't need the parent handle anymore.
      if (p_parent != &parentDir)
      {
        (*p_parent).close();
      }
  
      // Handle case when it doesn't exist and we can't continue...
      if (exists)
      {
        // We alternate between two file handles as we go down
        // the path.
        if (p_parent == &parentDir)
        {
          p_parent = &subfile2;
        }
  
        p_tmp_RP2040_SdFile = p_parent;
        p_parent = p_child;
        p_child = p_tmp_RP2040_SdFile;
      }
      else
      {
        return false;
      }
    }
  
    if (p_parent != &parentDir)
    {
      (*p_parent).close(); // TODO: Return/ handle different?
    }
  
    return true;
  } 
  
  /*
     The callbacks used to implement various functionality follow.
  
     Each callback is supplied with a parent directory handle,
     character string with the name of the current file path component,
     a flag indicating if this component is the last in the path and
     a pointer to an arbitrary object used for context.

     Callback used to determine if a file/directory exists in parent directory.
  
     Returns true if file path exists.
  
  */
  
  bool callback_pathExists(RP2040_SdFile& parentDir, const char *filePathComponent,
                           bool /* isLastComponent */, void * /* object */)
  {
    RP2040_SdFile child;
  
    bool exists = child.open(parentDir, filePathComponent, O_RDONLY);
  
    if (exists)
    {
      child.close();
    }
  
    return exists;
  }
  
  /*
  
      Callback used to create a directory in the parent directory if
      it does not already exist.
  
      Returns true if a directory was created or it already existed.
  
  */
  
  bool callback_makeDirPath(RP2040_SdFile& parentDir, const char *filePathComponent,
                            bool isLastComponent, void *object)
  {
    
    bool result = false;
    RP2040_SdFile child;
  
    result = callback_pathExists(parentDir, filePathComponent, isLastComponent, object);
  
    if (!result)
    {
      result = child.makeDir(parentDir, filePathComponent);
    }
  
    return result;
  }
  
  bool callback_remove(RP2040_SdFile& parentDir, const char *filePathComponent,
                       bool isLastComponent, void * /* object */)
  {
    if (isLastComponent)
    {
      return RP2040_SdFile::remove(parentDir, filePathComponent);
    }
  
    return true;
  }
  
  bool callback_rmdir(RP2040_SdFile& parentDir, const char *filePathComponent,
                      bool isLastComponent, void * /* object */)
  {
    if (isLastComponent)
    {
      RP2040_SdFile f;
  
      if (!f.open(parentDir, filePathComponent, O_READ))
      {
        return false;
      }
  
      return f.rmDir();
    }
  
    return true;
  }
  
  
  // Implementation of class used to create `SDCard` object.
  /*
  
      Performs the initialisation required by the sdfatlib library.
  
      Return true if initialization succeeds, false otherwise.
  
  */
  bool SDClass::begin(uint8_t csPin) 
  {
    if (root.isOpen()) 
    {
      root.close();
    }   
     
    return card.init(SPI_HALF_SPEED, csPin) && volume.init(card) && root.openRoot(volume);
  }
  
  bool SDClass::begin(uint32_t clock, uint8_t csPin) 
  {
    if (root.isOpen()) 
    {
      root.close();
    }
  
    return card.init(SPI_HALF_SPEED, csPin) && card.setSpiClock(clock) && volume.init(card) && root.openRoot(volume);
  }
  
  //call this when a card is removed. It will allow you to insert and initialise a new card.
  void SDClass::end() 
  {
    root.close();
  }
  
  // this little helper is used to traverse paths
  RP2040_SdFile SDClass::getParentDir(const char *filepath, int *index) 
  {
    // get parent directory
    RP2040_SdFile d1;
    RP2040_SdFile d2;
  
    d1.openRoot(volume); // start with the mostparent, root!
  
    // we'll use the pointers to swap between the two objects
    RP2040_SdFile *parent = &d1;
    RP2040_SdFile *subdir = &d2;
  
    const char *origpath = filepath;
  
    while (strchr(filepath, '/')) 
    {
      // get rid of leading /'s
      if (filepath[0] == '/') 
      {
        filepath++;
        continue;
      }
  
      if (! strchr(filepath, '/')) 
      {
        // it was in the root directory, so leave now
        break;
      }
  
      // extract just the name of the next subdirectory
      uint8_t idx = strchr(filepath, '/') - filepath;
      
      if (idx > 12) 
      {
        idx = 12;  // don't let them specify long names
      }
      
      char subdirname[13];
      strncpy(subdirname, filepath, idx);
      subdirname[idx] = 0;
  
      // close the subdir (we reuse them) if open
      subdir->close();
      
      if (! subdir->open(parent, subdirname, O_READ)) 
      {
        // failed to open one of the subdirectories
        return RP2040_SdFile();
      }
      
      // move forward to the next subdirectory
      filepath += idx;
  
      // we reuse the objects, close it.
      parent->close();
  
      // swap the pointers
      RP2040_SdFile *t = parent;
      parent = subdir;
      subdir = t;
    }
  
    *index = (int)(filepath - origpath);
    
    // parent is now the parent directory of the file!
    return *parent;
  }
  
  /*
     Open the supplied file path for reading or writing.

     The file content can be accessed via the `file` property of
     the `SDClass` object--this property is currently
     a standard `RP2040_SdFile` object from `sdfatlib`.

     Defaults to read only.

     If `write` is true, default action (when `append` is true) is to
     append data to the end of the file.

     If `append` is false then the file will be truncated first.

     If the file does not exist and it is opened for writing the file
     will be created.

     An attempt to open a file for reading that does not exist is an
     error.
  */
    
  File SDClass::open(const char *filepath, uint8_t mode) 
  {
    int pathidx;
  
    // do the interactive search
    RP2040_SdFile parentdir = getParentDir(filepath, &pathidx);
    // no more subdirs!
  
    filepath += pathidx;
  
    if (! filepath[0]) 
    {
      // it was the directory itself!
      return File(parentdir, "/");
    }
  
    // Open the file itself
    RP2040_SdFile file;
  
    // failed to open a subdir!
    if (!parentdir.isOpen()) 
    {
      return File();
    }
  
    if (! file.open(parentdir, filepath, mode)) 
    {
      return File();
    }
    
    // close the parent
    parentdir.close();
  
    if ((mode & (O_APPEND | O_WRITE)) == (O_APPEND | O_WRITE)) 
    {
      file.seekSet(file.fileSize());
    }
    
    return File(file, filepath);
  }
  
  /*
    Returns true if the supplied file path exists.
  */
    
  bool SDClass::exists(const char *filepath) 
  {
    return walkPath(filepath, root, callback_pathExists);
  }

  /*  
    Makes a single directory or a hierarchy of directories.
  
    A rough equivalent to `mkdir -p`.  
  */
    
  bool SDClass::mkdir(const char *filepath) 
  {
    return walkPath(filepath, root, callback_makeDirPath);
  }

  /*  
    Remove a single directory or a hierarchy of directories.

    A rough equivalent to `rm -rf`.
  */
    
  bool SDClass::rmdir(const char *filepath) 
  {
    
    return walkPath(filepath, root, callback_rmdir);
  }
  
  bool SDClass::remove(const char *filepath) 
  {
    return walkPath(filepath, root, callback_remove);
  }
 
  //SDClass SD;
};


#endif    // __RP2040_SD_HPP__
