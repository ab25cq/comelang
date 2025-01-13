/****************************************************************************************************************************
  SdInfo.h

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

#ifndef SdInfo_h
#define SdInfo_h

#include <stdint.h>

// Based on the document:
//
// SD Specifications
// Part 1
// Physical Layer
// Simplified Specification
// Version 2.00
// September 25, 2006
//
// www.sdcard.org/developers/tech/sdcard/pls/Simplified_Physical_Layer_Spec.pdf
//------------------------------------------------------------------------------
// SD card commands

enum
{
  CMD0    = 0x00,     // GO_IDLE_STATE - init card in spi mode if CS low
  CMD8    = 0x08,     // SEND_IF_COND - verify SD Memory Card interface operating condition.
  CMD9    = 0x09,     // SEND_CSD - read the Card Specific Data (CSD register)
  CMD10   = 0x0A,     // SEND_CID - read the card identification information (CID register)
  CMD13   = 0x0D,     // SEND_STATUS - read the card status register
  CMD17   = 0x11,     // READ_BLOCK - read a single data block from the card
  CMD24   = 0x18,     // WRITE_BLOCK - write a single data block to the card
  CMD25   = 0x19,     // WRITE_MULTIPLE_BLOCK - write blocks of data until a STOP_TRANSMISSION
  CMD32   = 0x20,     // ERASE_WR_BLK_START - sets the address of the first block to be erased
  CMD33   = 0x21,     // ERASE_WR_BLK_END - sets the address of the last block of the continuous range to be erased
  CMD38   = 0x26,     // ERASE - erase all previously selected blocks
  CMD55   = 0x37,     // APP_CMD - escape for application specific command
  CMD58   = 0x3A,     // READ_OCR - read the OCR register of a card
  ACMD23  = 0x17,     // SET_WR_BLK_ERASE_COUNT - Set the number of write blocks to be pre-erased before writing
  ACMD41  = 0x29,     // SD_SEND_OP_COMD - Sends host capacity support information and activates the card's initialization process
};

// SD card status
enum
{
  R1_READY_STATE        = 0x00,     // status for card in the ready state
  R1_IDLE_STATE         = 0x01,     // status for card in the idle state
  R1_ILLEGAL_COMMAND    = 0x04,     // status bit for illegal command
  WRITE_MULTIPLE_TOKEN  = 0xFC,     // start data token for write multiple blocks
  STOP_TRAN_TOKEN       = 0xFD,     // stop token for write multiple blocks
  DATA_START_BLOCK      = 0xFE,     // start data token for read or write single block
};


/** mask for data response tokens after a write block operation */
#define DATA_RES_MASK       0x1F

/** write data accepted token */
#define DATA_RES_ACCEPTED   0x05

//------------------------------------------------------------------------------
typedef struct CID
{
  // byte 0
  uint8_t mid;  // Manufacturer ID
  // byte 1-2
  char oid[2];  // OEM/Application ID
  // byte 3-7
  char pnm[5];  // Product name
  // byte 8
  unsigned prv_m : 4;  // Product revision n.m
  unsigned prv_n : 4;
  // byte 9-12
  uint32_t psn;  // Product serial number
  // byte 13
  unsigned mdt_year_high : 4;  // Manufacturing date
  unsigned reserved : 4;
  // byte 14
  unsigned mdt_month : 4;
  unsigned mdt_year_low : 4;
  // byte 15
  unsigned always1 : 1;
  unsigned crc : 7;
} cid_t;

//------------------------------------------------------------------------------
// CSD for version 1.00 cards
typedef struct CSDV1
{
  // byte 0
  unsigned reserved1 : 6;
  unsigned csd_ver : 2;
  // byte 1
  uint8_t taac;
  // byte 2
  uint8_t nsac;
  // byte 3
  uint8_t tran_speed;
  // byte 4
  uint8_t ccc_high;
  // byte 5
  unsigned read_bl_len : 4;
  unsigned ccc_low : 4;
  // byte 6
  unsigned c_size_high : 2;
  unsigned reserved2 : 2;
  unsigned dsr_imp : 1;
  unsigned read_blk_misalign : 1;
  unsigned write_blk_misalign : 1;
  unsigned read_bl_partial : 1;
  // byte 7
  uint8_t c_size_mid;
  // byte 8
  unsigned vdd_r_curr_max : 3;
  unsigned vdd_r_curr_min : 3;
  unsigned c_size_low : 2;
  // byte 9
  unsigned c_size_mult_high : 2;
  unsigned vdd_w_cur_max : 3;
  unsigned vdd_w_curr_min : 3;
  // byte 10
  unsigned sector_size_high : 6;
  unsigned erase_blk_en : 1;
  unsigned c_size_mult_low : 1;
  // byte 11
  unsigned wp_grp_size : 7;
  unsigned sector_size_low : 1;
  // byte 12
  unsigned write_bl_len_high : 2;
  unsigned r2w_factor : 3;
  unsigned reserved3 : 2;
  unsigned wp_grp_enable : 1;
  // byte 13
  unsigned reserved4 : 5;
  unsigned write_partial : 1;
  unsigned write_bl_len_low : 2;
  // byte 14
  unsigned reserved5: 2;
  unsigned file_format : 2;
  unsigned tmp_write_protect : 1;
  unsigned perm_write_protect : 1;
  unsigned copy : 1;
  unsigned file_format_grp : 1;
  // byte 15
  unsigned always1 : 1;
  unsigned crc : 7;
} csd1_t;

//------------------------------------------------------------------------------
// CSD for version 2.00 cards
typedef struct CSDV2
{
  // byte 0
  unsigned reserved1 : 6;
  unsigned csd_ver : 2;
  // byte 1
  uint8_t taac;
  // byte 2
  uint8_t nsac;
  // byte 3
  uint8_t tran_speed;
  // byte 4
  uint8_t ccc_high;
  // byte 5
  unsigned read_bl_len : 4;
  unsigned ccc_low : 4;
  // byte 6
  unsigned reserved2 : 4;
  unsigned dsr_imp : 1;
  unsigned read_blk_misalign : 1;
  unsigned write_blk_misalign : 1;
  unsigned read_bl_partial : 1;
  // byte 7
  unsigned reserved3 : 2;
  unsigned c_size_high : 6;
  // byte 8
  uint8_t c_size_mid;
  // byte 9
  uint8_t c_size_low;
  // byte 10
  unsigned sector_size_high : 6;
  unsigned erase_blk_en : 1;
  unsigned reserved4 : 1;
  // byte 11
  unsigned wp_grp_size : 7;
  unsigned sector_size_low : 1;
  // byte 12
  unsigned write_bl_len_high : 2;
  unsigned r2w_factor : 3;
  unsigned reserved5 : 2;
  unsigned wp_grp_enable : 1;
  // byte 13
  unsigned reserved6 : 5;
  unsigned write_partial : 1;
  unsigned write_bl_len_low : 2;
  // byte 14
  unsigned reserved7: 2;
  unsigned file_format : 2;
  unsigned tmp_write_protect : 1;
  unsigned perm_write_protect : 1;
  unsigned copy : 1;
  unsigned file_format_grp : 1;
  // byte 15
  unsigned always1 : 1;
  unsigned crc : 7;
} csd2_t;

//------------------------------------------------------------------------------
// union of old and new style CSD register
union csd_t
{
  csd1_t v1;
  csd2_t v2;
};

#endif  // SdInfo_h
