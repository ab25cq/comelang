/****************************************************************************************************************************
  ReadWrite.ino

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
 *****************************************************************************************************************************/
/*
  SD card connection

  This example shows how to read and write data to and from an SD card file
  The circuit:
   SD card attached to SPI bus as follows:
   // Arduino-pico core
   ** MISO - pin 16
   ** MOSI - pin 19
   ** CS   - pin 17
   ** SCK  - pin 18

   // Arduino-mbed core
   ** MISO - pin 4
   ** MOSI - pin 3
   ** CS   - pin 5
   ** SCK  - pin 2
*/


#if !defined(ARDUINO_ARCH_RP2040)
  #error For RP2040 only
#endif

#if defined(ARDUINO_ARCH_MBED)

  #define PIN_SD_MOSI       PIN_SPI_MOSI
  #define PIN_SD_MISO       PIN_SPI_MISO
  #define PIN_SD_SCK        PIN_SPI_SCK
  #define PIN_SD_SS         PIN_SPI_SS

#else

  #define PIN_SD_MOSI       PIN_SPI0_MOSI
  #define PIN_SD_MISO       PIN_SPI0_MISO
  #define PIN_SD_SCK        PIN_SPI0_SCK
  #define PIN_SD_SS         PIN_SPI0_SS

#endif

#define _RP2040_SD_LOGLEVEL_       4

#include <SPI.h>
#include <RP2040_SD.h>

File myFile;

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(115200);

  while (!Serial);

  delay(1000);

#if defined(ARDUINO_ARCH_MBED)
  Serial.print("Starting SD Card ReadWrite on MBED ");
#else
  Serial.print("Starting SD Card ReadWrite on ");
#endif

  Serial.println(BOARD_NAME);
  Serial.println(RP2040_SD_VERSION);

  Serial.print("Initializing SD card with SS = ");
  Serial.println(PIN_SD_SS);
  Serial.print("SCK = ");
  Serial.println(PIN_SD_SCK);
  Serial.print("MOSI = ");
  Serial.println(PIN_SD_MOSI);
  Serial.print("MISO = ");
  Serial.println(PIN_SD_MISO);

  if (!SD.begin(PIN_SD_SS))
  {
    Serial.println("Initialization failed!");
    return;
  }

  Serial.println("Initialization done.");

#define fileName  "newtest0.txt"
  char writeData[]  = "Testing writing to " fileName;

  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  myFile = SD.open(fileName, FILE_WRITE);

  // if the file opened okay, write to it:
  if (myFile)
  {
    Serial.print("Writing to ");
    Serial.print(fileName);
    Serial.print(" ==> ");
    Serial.println(writeData);

    myFile.println(writeData);

    // close the file:
    myFile.close();
    Serial.println("done.");
  }
  else
  {
    // if the file didn't open, print an error:
    Serial.print("Error opening ");
    Serial.println(fileName);
  }

  // re-open the file for reading:
  myFile = SD.open(fileName, FILE_READ);

  if (myFile)
  {
    Serial.print("Reading from ");
    Serial.println(fileName);
    Serial.println("===============");

    // read from the file until there's nothing else in it:
    while (myFile.available())
    {
      Serial.write(myFile.read());
    }

    // close the file:
    myFile.close();

    Serial.println("===============");
  }
  else
  {
    // if the file didn't open, print an error:
    Serial.print("Error opening ");
    Serial.println(fileName);
  }
}

void loop()
{
  // nothing happens after setup
}
