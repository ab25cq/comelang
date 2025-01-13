/****************************************************************************************************************************
  SdFat.h

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

#ifndef SdFat_h
#define SdFat_h

/**
   \file
   RP2040_SdFile and RP2040_SdVolume classes
*/

#include "Sd2Card.h"
#include "FatStructs.h"
#include <Print.h>

#include "RP2040_SD_Debug.h"

//------------------------------------------------------------------------------
/**
   Allow use of deprecated functions if non-zero
*/
#define ALLOW_DEPRECATED_FUNCTIONS      1

//------------------------------------------------------------------------------
// forward declaration since RP2040_SdVolume is used in RP2040_SdFile
class RP2040_SdVolume;

//==============================================================================
// RP2040_SdFile class

#ifdef O_RDONLY
  //ARDUINO_ARCH_MBED such as Arduino-mbed RP2040 core
  #undef O_READ
  #undef O_RDONLY
  #undef O_WRITE
  #undef O_WRONLY
  #undef O_RDWR
  #undef O_ACCMODE
  #undef O_APPEND
  #undef O_SYNC
  #undef O_CREAT
  #undef O_EXCL
  #undef O_TRUNC
#endif

// flags for ls()
enum
{
  LS_DATE = 1,
  LS_SIZE = 2,
  LS_R    = 4
};

enum
{
  O_READ      = 0x01,
  O_RDONLY    = O_READ,
  O_WRITE     = 0x02,
  O_WRONLY    = O_WRITE,
  O_RDWR      = (O_READ | O_WRITE),
  O_ACCMODE   = (O_READ | O_WRITE),
  O_APPEND    = 0X04,
  O_SYNC      = 0X08,
  O_CREAT     = 0X10,
  O_EXCL      = 0X20,
  O_TRUNC     = 0X40
};


// flags for timestamp
enum
{
  T_ACCESS  = 1,
  T_CREATE  = 2,
  T_WRITE   = 4
};


// values for type_
enum
{
  FAT_FILE_TYPE_CLOSED  = 0,
  FAT_FILE_TYPE_NORMAL  = 1,
  FAT_FILE_TYPE_ROOT16  = 2,
  FAT_FILE_TYPE_ROOT32  = 3,
  FAT_FILE_TYPE_SUBDIR  = 4,
  FAT_FILE_TYPE_MIN_DIR = FAT_FILE_TYPE_ROOT16
};

/** date field for FAT directory entry */
static inline uint16_t FAT_DATE(uint16_t year, uint8_t month, uint8_t day)
{
  return (year - 1980) << 9 | month << 5 | day;
}

/** year part of FAT directory date field */
static inline uint16_t FAT_YEAR(uint16_t fatDate)
{
  return 1980 + (fatDate >> 9);
}

/** month part of FAT directory date field */
static inline uint8_t FAT_MONTH(uint16_t fatDate)
{
  return (fatDate >> 5) & 0XF;
}

/** day part of FAT directory date field */
static inline uint8_t FAT_DAY(uint16_t fatDate)
{
  return fatDate & 0X1F;
}

/** time field for FAT directory entry */
static inline uint16_t FAT_TIME(uint8_t hour, uint8_t minute, uint8_t second)
{
  return hour << 11 | minute << 5 | second >> 1;
}

/** hour part of FAT directory time field */
static inline uint8_t FAT_HOUR(uint16_t fatTime)
{
  return fatTime >> 11;
}

/** minute part of FAT directory time field */
static inline uint8_t FAT_MINUTE(uint16_t fatTime)
{
  return (fatTime >> 5) & 0X3F;
}
/** second part of FAT directory time field */
static inline uint8_t FAT_SECOND(uint16_t fatTime)
{
  return 2 * (fatTime & 0X1F);
}

/** Default date for file timestamps is 1 Jan 2000 */
#define FAT_DEFAULT_DATE    ( ((2000 - 1980) << 9) | (1 << 5) | 1 )

/** Default time for file timestamp is 1 am */
#define FAT_DEFAULT_TIME    ( (1 << 11) )

//------------------------------------------------------------------------------
/**
   \class RP2040_SdFile
   \brief Access FAT16 and FAT32 files on SD and SDHC cards.
*/
class RP2040_SdFile : public Print
{
  public:
    /** Create an instance of RP2040_SdFile. */
    RP2040_SdFile() : type_(FAT_FILE_TYPE_CLOSED) {}
    /**
       writeError is set to true if an error occurs during a write().
       Set writeError to false before calling print() and/or write() and check
       for true after calls to print() and/or write().
    */
    //bool writeError;
    /**
       Cancel unbuffered reads for this file.
       See setUnbufferedRead()
    */
    void clearUnbufferedRead()
    {
      flags_ &= ~F_FILE_UNBUFFERED_READ;
    }

    uint8_t close();
    uint8_t contiguousRange(uint32_t* bgnBlock, uint32_t* endBlock);
    uint8_t createContiguous(RP2040_SdFile* dirFile, const char* fileName, uint32_t size);

    /** \return The current cluster number for a file or directory. */
    uint32_t curCluster()const
    {
      return curCluster_;
    }

    /** \return The current position for a file or directory. */
    uint32_t curPosition()const
    {
      return curPosition_;
    }

    /**
       Set the date/time callback function

       \param[in] dateTime The user's call back function.  The callback
       function is of the form:

       \code
       void dateTime(uint16_t* date, uint16_t* time) {
         uint16_t year;
         uint8_t month, day, hour, minute, second;

         // User gets date and time from GPS or real-time clock here

         // return date using FAT_DATE macro to format fields
     *   *date = FAT_DATE(year, month, day);

         // return time using FAT_TIME macro to format fields
     *   *time = FAT_TIME(hour, minute, second);
       }
       \endcode

       Sets the function that is called when a file is created or when
       a file's directory entry is modified by sync(). All timestamps,
       access, creation, and modify, are set when a file is created.
       sync() maintains the last access date and last modify date/time.

       See the timestamp() function.
    */
    static void dateTimeCallback(void (*dateTime)(uint16_t* date, uint16_t* time))
    {
      dateTime_ = dateTime;
    }

    /**
       Cancel the date/time callback function.
    */
    static void dateTimeCallbackCancel()
    {
      // use explicit zero since NULL is not defined for Sanguino
      dateTime_ = 0;
    }

    /** \return Address of the block that contains this file's directory. */
    uint32_t dirBlock()const
    {
      return dirBlock_;
    }

    uint8_t dirEntry(dir_t* dir);

    /** \return Index of this file's directory in the block dirBlock. */
    uint8_t dirIndex()const
    {
      return dirIndex_;
    }

    static void dirName(const dir_t& dir, char* name);

    /** \return The total number of bytes in a file or directory. */
    uint32_t fileSize()const
    {
      return fileSize_;
    }

    /** \return The first cluster number for a file or directory. */
    uint32_t firstCluster()const
    {
      return firstCluster_;
    }

    /** \return True if this is a RP2040_SdFile for a directory else false. */
    uint8_t isDir()const
    {
      return type_ >= FAT_FILE_TYPE_MIN_DIR;
    }

    /** \return True if this is a RP2040_SdFile for a file else false. */
    uint8_t isFile()const
    {
      return type_ == FAT_FILE_TYPE_NORMAL;
    }

    /** \return True if this is a RP2040_SdFile for an open file/directory else false. */
    uint8_t isOpen()const
    {
      return type_ != FAT_FILE_TYPE_CLOSED;
    }
    /** \return True if this is a RP2040_SdFile for a subdirectory else false. */
    uint8_t isSubDir()const
    {
      return type_ == FAT_FILE_TYPE_SUBDIR;
    }

    /** \return True if this is a RP2040_SdFile for the root directory. */
    uint8_t isRoot()const
    {
      return type_ == FAT_FILE_TYPE_ROOT16 || type_ == FAT_FILE_TYPE_ROOT32;
    }

    void    ls(uint8_t flags = 0, uint8_t indent = 0);
    uint8_t makeDir(RP2040_SdFile* dir, const char* dirName);
    uint8_t open(RP2040_SdFile* dirFile, uint16_t index, uint8_t oflag);
    uint8_t open(RP2040_SdFile* dirFile, const char* fileName, uint8_t oflag);

    uint8_t     openRoot(RP2040_SdVolume* vol);
    static void printDirName(const dir_t& dir, uint8_t width);
    static void printFatDate(uint16_t fatDate);
    static void printFatTime(uint16_t fatTime);
    static void printTwoDigits(uint8_t v);

    /**
       Read the next byte from a file.

       \return For success read returns the next byte in the file as an int.
       If an error occurs or end of file is reached -1 is returned.
    */
    int16_t read()
    {
      uint8_t b;
      return read(&b, 1) == 1 ? b : -1;
    }

    int16_t         read(void* buf, uint16_t nbyte);
    int8_t          readDir(dir_t* dir);
    static uint8_t  remove(RP2040_SdFile* dirFile, const char* fileName);
    uint8_t         remove();

    /** Set the file's current position to zero. */
    void rewind()
    {
      curPosition_ = curCluster_ = 0;
    }

    uint8_t rmDir();
    uint8_t rmRfStar();

    /** Set the files position to current position + \a pos. See seekSet(). */
    uint8_t seekCur(uint32_t pos)
    {
      return seekSet(curPosition_ + pos);
    }

    /**
        Set the files current position to end of file.  Useful to position
        a file for append. See seekSet().
    */
    uint8_t seekEnd()
    {
      return seekSet(fileSize_);
    }

    uint8_t seekSet(uint32_t pos);

    /**
       Use unbuffered reads to access this file.  Used with Wave
       Shield ISR.  Used with Sd2Card::partialBlockRead() in WaveRP.

       Not recommended for normal applications.
    */
    void setUnbufferedRead()
    {
      if (isFile())
      {
        flags_ |= F_FILE_UNBUFFERED_READ;
      }
    }

    uint8_t timestamp(uint8_t flag, uint16_t year, uint8_t month, uint8_t day,
                      uint8_t hour, uint8_t minute, uint8_t second);

    uint8_t sync(uint8_t blocking = 1);

    /** Type of this RP2040_SdFile.  You should use isFile() or isDir() instead of type()
       if possible.

       \return The file or directory type.
    */
    uint8_t type()const
    {
      return type_;
    }

    uint8_t truncate(uint32_t size);

    /** \return Unbuffered read flag. */
    uint8_t unbufferedRead()const
    {
      return flags_ & F_FILE_UNBUFFERED_READ;
    }

    /** \return RP2040_SdVolume that contains this file. */
    RP2040_SdVolume* volume()const
    {
      return vol_;
    }

    size_t write(uint8_t b);
    size_t write(const void* buf, uint16_t nbyte);
    size_t write(const char* str);

    int availableForWrite();

    //------------------------------------------------------------------------------
#if ALLOW_DEPRECATED_FUNCTIONS

    // Deprecated functions  - suppress cpplint warnings with NOLINT comment
    /** \deprecated Use:
       uint8_t RP2040_SdFile::contiguousRange(uint32_t* bgnBlock, uint32_t* endBlock);
    */
    uint8_t contiguousRange(uint32_t& bgnBlock, uint32_t& endBlock)
    {
      return contiguousRange(&bgnBlock, &endBlock);
    }

    /** \deprecated Use:
        uint8_t RP2040_SdFile::createContiguous(RP2040_SdFile* dirFile,
          const char* fileName, uint32_t size)
    */
    uint8_t createContiguous(RP2040_SdFile& dirFile, const char* fileName, uint32_t size)
    {
      return createContiguous(&dirFile, fileName, size);
    }

    /**
       \deprecated Use:
       static void RP2040_SdFile::dateTimeCallback(
         void (*dateTime)(uint16_t* date, uint16_t* time));
    */
    static void dateTimeCallback(void (*dateTime)(uint16_t& date, uint16_t& time))
    {
      oldDateTime_ = dateTime;
      dateTime_ = dateTime ? oldToNew : 0;
    }

    /** \deprecated Use: uint8_t RP2040_SdFile::dirEntry(dir_t* dir); */
    uint8_t dirEntry(dir_t& dir)
    {
      return dirEntry(&dir);
    }

    /** \deprecated Use:
       uint8_t RP2040_SdFile::makeDir(RP2040_SdFile* dir, const char* dirName);
    */
    uint8_t makeDir(RP2040_SdFile& dir, const char* dirName)
    {
      return makeDir(&dir, dirName);
    }
    /** \deprecated Use:
       uint8_t RP2040_SdFile::open(RP2040_SdFile* dirFile, const char* fileName, uint8_t oflag);
    */
    uint8_t open(RP2040_SdFile& dirFile, const char* fileName, uint8_t oflag)
    {
      return open(&dirFile, fileName, oflag);
    }

    /** \deprecated  Do not use in new apps */
    uint8_t open(RP2040_SdFile& dirFile, const char* fileName)
    {
      return open(dirFile, fileName, O_RDWR);
    }

    /** \deprecated Use:
       uint8_t RP2040_SdFile::open(RP2040_SdFile* dirFile, uint16_t index, uint8_t oflag);
    */
    uint8_t open(RP2040_SdFile& dirFile, uint16_t index, uint8_t oflag)
    {
      return open(&dirFile, index, oflag);
    }

    /** \deprecated Use: uint8_t RP2040_SdFile::openRoot(RP2040_SdVolume* vol); */
    uint8_t openRoot(RP2040_SdVolume& vol)
    {
      return openRoot(&vol);
    }

    /** \deprecated Use: int8_t RP2040_SdFile::readDir(dir_t* dir); */
    int8_t readDir(dir_t& dir)
    {
      return readDir(&dir);
    }

    /** \deprecated Use:
       static uint8_t RP2040_SdFile::remove(RP2040_SdFile* dirFile, const char* fileName);
    */
    static uint8_t remove(RP2040_SdFile& dirFile, const char* fileName)
    {
      return remove(&dirFile, fileName);
    }

    //------------------------------------------------------------------------------
    // rest are private
  private:
    static void (*oldDateTime_)(uint16_t& date, uint16_t& time);

    static void oldToNew(uint16_t* date, uint16_t* time)
    {
      uint16_t d;
      uint16_t t;
      oldDateTime_(d, t);
      *date = d;
      *time = t;
    }
#endif  // ALLOW_DEPRECATED_FUNCTIONS

  private:
    // bits defined in flags_
    // should be 0XF
    static uint8_t const F_OFLAG = (O_ACCMODE | O_APPEND | O_SYNC);

    // available bits
    static uint8_t const F_FILE_NON_BLOCKING_WRITE = 0X10;

    // a new cluster was added to the file
    static uint8_t const F_FILE_CLUSTER_ADDED = 0X20;

    // use unbuffered SD read
    static uint8_t const F_FILE_UNBUFFERED_READ = 0X40;

    // sync of directory entry required
    static uint8_t const F_FILE_DIR_DIRTY = 0X80;

    // make sure F_OFLAG is ok
#if ((F_FILE_NON_BLOCKING_WRITE | F_FILE_CLUSTER_ADDED | F_FILE_UNBUFFERED_READ | F_FILE_DIR_DIRTY) & F_OFLAG)
#error flags_ bits conflict
#endif  // flags_ bits

    // private data
    uint8_t   flags_;         // See above for definition of flags_ bits
    uint8_t   type_;          // type of file see above for values
    uint32_t  curCluster_;    // cluster for current file position
    uint32_t  curPosition_;   // current file position in bytes from beginning
    uint32_t  dirBlock_;      // SD block that contains directory entry for file
    uint8_t   dirIndex_;      // index of entry in dirBlock 0 <= dirIndex_ <= 0XF
    uint32_t  fileSize_;      // file size in bytes
    uint32_t  firstCluster_;  // first cluster of file
    RP2040_SdVolume* vol_;           // volume where file is located

    // private functions
    uint8_t         addCluster();
    uint8_t         addDirCluster();
    dir_t*          cacheDirEntry(uint8_t action);
    static void     (*dateTime_)(uint16_t* date, uint16_t* time);
    static uint8_t  make83Name(const char* str, uint8_t* name);
    uint8_t         openCachedEntry(uint8_t cacheIndex, uint8_t oflags);
    dir_t*          readDirCache();
};
//==============================================================================
// RP2040_SdVolume class
/**
   \brief Cache for an SD data block
*/
union cache_t
{
  /** Used to access cached file data blocks. */
  uint8_t  data[512];
  /** Used to access cached FAT16 entries. */
  uint16_t fat16[256];
  /** Used to access cached FAT32 entries. */
  uint32_t fat32[128];
  /** Used to access cached directory entries. */
  dir_t    dir[16];
  /** Used to access a cached MasterBoot Record. */
  mbr_t    mbr;
  /** Used to access to a cached FAT boot sector. */
  fbs_t    fbs;
};

//------------------------------------------------------------------------------
/**
   \class RP2040_SdVolume
   \brief Access FAT16 and FAT32 volumes on SD and SDHC cards.
*/
class RP2040_SdVolume
{
  public:
    /** Create an instance of RP2040_SdVolume */
    RP2040_SdVolume(): allocSearchStart_(2), fatType_(0) {}

    /** Clear the cache and returns a pointer to the cache.  Used by the WaveRP
        recorder to do raw write to the SD card.  Not for normal apps.
    */
    static uint8_t* cacheClear()
    {
      cacheFlush();
      cacheBlockNumber_ = 0XFFFFFFFF;
      return cacheBuffer_.data;
    }

    /**
       Initialize a FAT volume.  Try partition one first then try super
       floppy format.

       \param[in] dev The Sd2Card where the volume is located.

       \return The value one, true, is returned for success and
       the value zero, false, is returned for failure.  Reasons for
       failure include not finding a valid partition, not finding a valid
       FAT file system or an I/O error.
    */
    uint8_t init(Sd2Card* dev)
    {
      return init(dev, 1) ? true : init(dev, 0);
    }

    uint8_t init(Sd2Card* dev, uint8_t part);

    // inline functions that return volume info
    /** \return The volume's cluster size in blocks. */
    uint8_t blocksPerCluster()const
    {
      return blocksPerCluster_;
    }

    /** \return The number of blocks in one FAT. */
    uint32_t blocksPerFat() const
    {
      return blocksPerFat_;
    }

    /** \return The total number of clusters in the volume. */
    uint32_t clusterCount()const
    {
      return clusterCount_;
    }

    /** \return The shift count required to multiply by blocksPerCluster. */
    uint8_t clusterSizeShift()const
    {
      return clusterSizeShift_;
    }

    /** \return The logical block number for the start of file data. */
    uint32_t dataStartBlock()const
    {
      return dataStartBlock_;
    }

    /** \return The number of FAT structures on the volume. */
    uint8_t fatCount()const
    {
      return fatCount_;
    }

    /** \return The logical block number for the start of the first FAT. */
    uint32_t fatStartBlock()const
    {
      return fatStartBlock_;
    }

    /** \return The FAT type of the volume. Values are 12, 16 or 32. */
    uint8_t fatType()const
    {
      return fatType_;
    }

    /** \return The number of entries in the root directory for FAT16 volumes. */
    uint32_t rootDirEntryCount()const
    {
      return rootDirEntryCount_;
    }

    /** \return The logical block number for the start of the root directory
         on FAT16 volumes or the first cluster number on FAT32 volumes. */
    uint32_t rootDirStart()const
    {
      return rootDirStart_;
    }

    /** return a pointer to the Sd2Card object for this volume */
    static Sd2Card* sdCard()
    {
      return sdCard_;
    }

    //------------------------------------------------------------------------------
#if ALLOW_DEPRECATED_FUNCTIONS
    // Deprecated functions  - suppress cpplint warnings with NOLINT comment
    /** \deprecated Use: uint8_t RP2040_SdVolume::init(Sd2Card* dev); */
    uint8_t init(Sd2Card& dev)
    {
      return init(&dev);
    }

    /** \deprecated Use: uint8_t RP2040_SdVolume::init(Sd2Card* dev, uint8_t vol); */
    uint8_t init(Sd2Card& dev, uint8_t part)
    {
      return init(&dev, part);
    }
#endif  // ALLOW_DEPRECATED_FUNCTIONS

    //------------------------------------------------------------------------------
  private:
    // Allow RP2040_SdFile access to RP2040_SdVolume private data.
    friend class RP2040_SdFile;

    // value for action argument in cacheRawBlock to indicate read from cache
    static uint8_t const CACHE_FOR_READ = 0;
    // value for action argument in cacheRawBlock to indicate cache dirty
    static uint8_t const CACHE_FOR_WRITE = 1;

    static cache_t    cacheBuffer_;         // 512 byte cache for device blocks
    static uint32_t   cacheBlockNumber_;    // Logical number of block in the cache
    static Sd2Card*   sdCard_;              // Sd2Card object for cache
    static uint8_t    cacheDirty_;          // cacheFlush() will write block if true
    static uint32_t   cacheMirrorBlock_;    // block number for mirror FAT
    //
    uint32_t  allocSearchStart_;            // start cluster for alloc search
    uint8_t   blocksPerCluster_;            // cluster size in blocks
    uint32_t  blocksPerFat_;                // FAT size in blocks
    uint32_t  clusterCount_;                // clusters in one FAT
    uint8_t   clusterSizeShift_;            // shift to convert cluster count to block count
    uint32_t  dataStartBlock_;              // first data block number
    uint8_t   fatCount_;                    // number of FATs on volume
    uint32_t  fatStartBlock_;               // start block for first FAT
    uint8_t   fatType_;                     // volume type (12, 16, OR 32)
    uint16_t  rootDirEntryCount_;           // number of entries in FAT16 root dir
    uint32_t  rootDirStart_;                // root start block for FAT16, cluster for FAT32
    //----------------------------------------------------------------------------

    uint8_t allocContiguous(uint32_t count, uint32_t* curCluster);

    uint8_t blockOfCluster(uint32_t position) const
    {
      return (position >> 9) & (blocksPerCluster_ - 1);
    }

    uint32_t clusterStartBlock(uint32_t cluster) const
    {
      return dataStartBlock_ + ((cluster - 2) << clusterSizeShift_);
    }

    uint32_t blockNumber(uint32_t cluster, uint32_t position) const
    {
      return clusterStartBlock(cluster) + blockOfCluster(position);
    }

    static uint8_t cacheFlush(uint8_t blocking = 1);
    static uint8_t cacheMirrorBlockFlush(uint8_t blocking);
    static uint8_t cacheRawBlock(uint32_t blockNumber, uint8_t action);

    static void cacheSetDirty()
    {
      cacheDirty_ |= CACHE_FOR_WRITE;
    }

    static uint8_t cacheZeroBlock(uint32_t blockNumber);
    uint8_t chainSize(uint32_t beginCluster, uint32_t* size) const;
    uint8_t fatGet(uint32_t cluster, uint32_t* value) const;
    uint8_t fatPut(uint32_t cluster, uint32_t value);

    uint8_t fatPutEOC(uint32_t cluster)
    {
      return fatPut(cluster, 0x0FFFFFFF);
    }

    uint8_t freeChain(uint32_t cluster);

    uint8_t isEOC(uint32_t cluster) const
    {
      return  cluster >= (fatType_ == 16 ? FAT16EOC_MIN : FAT32EOC_MIN);
    }

    uint8_t readBlock(uint32_t block, uint8_t* dst)
    {
      return sdCard_->readBlock(block, dst);
    }

    uint8_t readData(uint32_t block, uint16_t offset, uint16_t count, uint8_t* dst)
    {
      return sdCard_->readData(block, offset, count, dst);
    }

    uint8_t writeBlock(uint32_t block, const uint8_t* dst, uint8_t blocking = 1)
    {
      return sdCard_->writeBlock(block, dst, blocking);
    }

    uint8_t isBusy()
    {
      return sdCard_->isBusy();
    }

    uint8_t isCacheMirrorBlockDirty()
    {
      return (cacheMirrorBlock_ != 0);
    }
};
#endif  // SdFat_h
