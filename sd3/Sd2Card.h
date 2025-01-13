/****************************************************************************************************************************
  Sd2Card.h

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

#ifndef Sd2Card_h
#define Sd2Card_h

/**
   \file
   Sd2Card class
*/
#include "Sd2PinMap.h"
#include "SdInfo.h"

#include "RP2040_SD_Debug.h"

/** Set SCK to max rate of F_CPU/2. See Sd2Card::setSckRate(). */
#define SPI_FULL_SPEED          0
/** Set SCK rate to F_CPU/4. See Sd2Card::setSckRate(). */
#define SPI_HALF_SPEED          1
/** Set SCK rate to F_CPU/8. Sd2Card::setSckRate(). */
#define SPI_QUARTER_SPEED       2

/**
   USE_SPI_LIB: if set, use the SPI library bundled with Arduino IDE, otherwise
   run with a standalone driver for AVR.
*/
#define USE_SPI_LIB

/**
   Define RP2040_SOFT_SPI true to use software SPI on RP2040
   Pins used are SS 10, MOSI 11, MISO 12, and SCK 13.

   RP2040_SOFT_SPI allows Software SPI works with RP2040
*/
#define RP2040_SOFT_SPI         false

//------------------------------------------------------------------------------
// SPI pin definitions
//
#if ! (RP2040_SOFT_SPI)
  // include pins_arduino.h or variant.h depending on architecture, via Arduino.h
  #include <Arduino.h>

  #ifndef SDCARD_SS_PIN
    /** The default chip select pin for the SD card is SS. */
    #define SD_CHIP_SELECT_PIN        SS
  #else
    #define SD_CHIP_SELECT_PIN        SDCARD_SS_PIN
  #endif

  // The following three pins must not be redefined for hardware SPI,
  // so ensure that they are taken from pins_arduino.h or variant.h, depending on architecture.
  #ifndef SDCARD_MOSI_PIN
    /** SPI Master Out Slave In pin */
    #define SPI_MOSI_PIN        MOSI
    /** SPI Master In Slave Out pin */
    #define SPI_MISO_PIN        MISO
    /** SPI Clock pin */
    #define SPI_SCK_PIN         SCK
  #else
    #define SPI_MOSI_PIN        SDCARD_MOSI_PIN
    #define SPI_MISO_PIN        SDCARD_MISO_PIN
    #define SPI_SCK_PIN         SDCARD_SCK_PIN
  #endif

  /** optimize loops for hardware SPI */
  #ifndef USE_SPI_LIB
    #define OPTIMIZE_HARDWARE_SPI
  #endif

#else

  // SOFTWARE_SPI
  // define software SPI pins so RP2040 can use SW SPI
  /** SPI chip select pin */
  #define SD_CHIP_SELECT_PIN      10
  /** SPI Master Out Slave In pin */
  #define SPI_MOSI_PIN            11
  /** SPI Master In Slave Out pin */
  #define SPI_MISO_PIN            12
  /** SPI Clock pin */
  #define SPI_SCK_PIN             13
#endif  // SOFTWARE_SPI


//------------------------------------------------------------------------------
/** Protect block zero from write if nonzero */
#define SD_PROTECT_BLOCK_ZERO     1

/** init timeout ms */
#define SD_INIT_TIMEOUT           2000

/** erase timeout ms */
#define SD_ERASE_TIMEOUT          10000

/** read timeout ms */
#define SD_READ_TIMEOUT           300

/** write time out ms */
#define SD_WRITE_TIMEOUT          600

//------------------------------------------------------------------------------
// SD card errors

enum
{
  SD_CARD_ERROR_CMD0                = 0x01,
  SD_CARD_ERROR_CMD8                = 0x02,
  SD_CARD_ERROR_CMD17               = 0x03,
  SD_CARD_ERROR_CMD24               = 0x04,
  SD_CARD_ERROR_CMD25               = 0x05,
  SD_CARD_ERROR_CMD58               = 0x06,
  SD_CARD_ERROR_ACMD23              = 0x07,
  SD_CARD_ERROR_ACMD41              = 0x08,
  SD_CARD_ERROR_BAD_CSD             = 0x09,
  SD_CARD_ERROR_ERASE               = 0x0A,
  SD_CARD_ERROR_ERASE_SINGLE_BLOCK  = 0x0B,
  SD_CARD_ERROR_ERASE_TIMEOUT       = 0x0C,
  SD_CARD_ERROR_READ                = 0x0D,
  SD_CARD_ERROR_READ_REG            = 0x0E,
  SD_CARD_ERROR_READ_TIMEOUT        = 0x0F,
  SD_CARD_ERROR_STOP_TRAN           = 0x10,
  SD_CARD_ERROR_WRITE               = 0x11,
  SD_CARD_ERROR_WRITE_BLOCK_ZERO    = 0x12,
  SD_CARD_ERROR_WRITE_MULTIPLE      = 0x13,
  SD_CARD_ERROR_WRITE_PROGRAMMING   = 0x14,
  SD_CARD_ERROR_WRITE_TIMEOUT       = 0x15,
  SD_CARD_ERROR_SCK_RATE            = 0X16,
};


//------------------------------------------------------------------------------
// card types
enum
{
  SD_CARD_TYPE_SD1        = 1,
  SD_CARD_TYPE_SD2        = 2,
  SD_CARD_TYPE_SDHC       = 3,
};

//------------------------------------------------------------------------------

class Sd2Card
{
  public:

    Sd2Card() : errorCode_(0), inBlock_(0), partialBlockRead_(0), type_(0) {}

    uint32_t cardSize();
    uint8_t erase(uint32_t firstBlock, uint32_t lastBlock);
    uint8_t eraseSingleBlockEnable();

    /**
       \return error code for last error. See Sd2Card.h for a list of error codes.
    */
    uint8_t errorCode() const
    {
      return errorCode_;
    }

    /** \return error data for last error. */
    uint8_t errorData() const
    {
      return status_;
    }

    /**
       Initialize an SD flash memory card with default clock rate and chip
       select pin.  See sd2Card::init(uint8_t sckRateID, uint8_t chipSelectPin).
    */
    uint8_t init()
    {
      return init(SPI_FULL_SPEED, SD_CHIP_SELECT_PIN);
    }

    /**
       Initialize an SD flash memory card with the selected SPI clock rate
       and the default SD chip select pin.
       See sd2Card::init(uint8_t sckRateID, uint8_t chipSelectPin).
    */
    uint8_t init(uint8_t sckRateID)
    {
      return init(sckRateID, SD_CHIP_SELECT_PIN);
    }

    uint8_t init(uint8_t sckRateID, uint8_t chipSelectPin);

    void partialBlockRead(uint8_t value);

    /** Returns the current value, true or false, for partial block read. */
    uint8_t partialBlockRead() const
    {
      return partialBlockRead_;
    }

    uint8_t readBlock(uint32_t block, uint8_t* dst);
    uint8_t readData(uint32_t block, uint16_t offset, uint16_t count, uint8_t* dst);

    /**
       Read a cards CID register. The CID contains card identification
       information such as Manufacturer ID, Product name, Product serial
       number and Manufacturing date. */
    uint8_t readCID(cid_t* cid)
    {
      return readRegister(CMD10, cid);
    }

    /**
       Read a cards CSD register. The CSD contains Card-Specific Data that
       provides information regarding access to the card's contents. */
    uint8_t readCSD(csd_t* csd)
    {
      return readRegister(CMD9, csd);
    }

    void readEnd();
    uint8_t setSckRate(uint8_t sckRateID);

#ifdef USE_SPI_LIB
    uint8_t setSpiClock(uint32_t clock);
#endif

    /** Return the card type: SD V1, SD V2 or SDHC */
    uint8_t type() const
    {
      return type_;
    }

    uint8_t writeBlock(uint32_t blockNumber, const uint8_t* src, uint8_t blocking = 1);
    uint8_t writeData(const uint8_t* src);
    uint8_t writeStart(uint32_t blockNumber, uint32_t eraseCount);
    uint8_t writeStop();
    uint8_t isBusy();

  private:

    uint32_t block_;
    uint8_t chipSelectPin_;
    uint8_t errorCode_;
    uint8_t inBlock_;
    uint16_t offset_;
    uint8_t partialBlockRead_;
    uint8_t status_;
    uint8_t type_;

    // private functions
    uint8_t cardAcmd(uint8_t cmd, uint32_t arg)
    {
      cardCommand(CMD55, 0);
      return cardCommand(cmd, arg);
    }

    uint8_t cardCommand(uint8_t cmd, uint32_t arg);

    void error(uint8_t code)
    {
      errorCode_ = code;
    }

    uint8_t readRegister(uint8_t cmd, void* buf);
    uint8_t sendWriteCommand(uint32_t blockNumber, uint32_t eraseCount);
    void chipSelectHigh();
    void chipSelectLow();

    void type(uint8_t value)
    {
      type_ = value;
    }

    uint8_t waitNotBusy(unsigned int timeoutMillis);
    uint8_t writeData(uint8_t token, const uint8_t* src);
    uint8_t waitStartBlock();
};
#endif  // Sd2Card_h
