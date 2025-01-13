/*-----------------------------------------------------------------------*/
/* MMCv3/SDv1/SDv2+ (in SPI mode) control module  (C)ChaN, 2020          */
/*-----------------------------------------------------------------------*/
/*
/  Copyright (C) 2020, ChaN, all right reserved.
/
/ * This software is a free software and there is NO WARRANTY.
/ * No restriction on use. You can use, modify and redistribute it for
/   personal, non-profit or commercial products UNDER YOUR RESPONSIBILITY.
/ * Redistributions of source code must retain the above copyright notice.
/
/-------------------------------------------------------------------------*/

#include "v850es.h"
#include "diskio.h"


/* Control signals (Platform dependent) */
#define CS_LOW()	P0.6 = 0	/* MMC CS = L */
#define	CS_HIGH()	P0.6 = 1	/* MMC CS = H */

#define	MMC_CD		!(P3L & 0x08)	/* Card detect (yes:true, no:false, default:true) */
#define	MMC_WP		(P3L & 0x04)	/* Write protected (yes:true, no:false, default:false) */

#define	FCLK_SLOW()			/* Set slow clock (100k-400k) */
#define	FCLK_FAST()	{ CB0PWR=0; CB0CTL1=0x18; CB0PWR=1; }	/* Set fast clock (depends on the CSD) */


/*--------------------------------------------------------------------------

   Module Private Functions

---------------------------------------------------------------------------*/

/* Definitions for MMC/SDC command */
#define CMD0   (0)			/* GO_IDLE_STATE */
#define CMD1   (1)			/* SEND_OP_COND */
#define ACMD41 (41|0x80)	/* SEND_OP_COND (SDC) */
#define CMD8   (8)			/* SEND_IF_COND */
#define CMD9   (9)			/* SEND_CSD */
#define CMD10  (10)			/* SEND_CID */
#define CMD12  (12)			/* STOP_TRANSMISSION */
#define ACMD13 (13|0x80)	/* SD_STATUS (SDC) */
#define CMD16  (16)			/* SET_BLOCKLEN */
#define CMD17  (17)			/* READ_SINGLE_BLOCK */
#define CMD18  (18)			/* READ_MULTIPLE_BLOCK */
#define CMD23  (23)			/* SET_BLOCK_COUNT */
#define ACMD23 (23|0x80)	/* SET_WR_BLK_ERASE_COUNT (SDC) */
#define CMD24  (24)			/* WRITE_BLOCK */
#define CMD25  (25)			/* WRITE_MULTIPLE_BLOCK */
#define CMD32  (32)			/* ERASE_ER_BLK_START */
#define CMD33  (33)			/* ERASE_ER_BLK_END */
#define CMD38  (38)			/* ERASE */
#define CMD41  (41)			/* SEND_OP_COND (ACMD) */
#define CMD55  (55)			/* APP_CMD */
#define CMD58  (58)			/* READ_OCR */


static volatile
DSTATUS Stat = STA_NOINIT;	/* Disk status */

static volatile
UINT Timer1, Timer2;	/* 1000Hz decrement timer */

static
UINT CardType;			/* b0:MMC, b1:SDC, b2:Block addressing */


/*-----------------------------------------------------------------------*/
/* SPI transaction (Platform dependent)                                  */
/*-----------------------------------------------------------------------*/

/* Exchange a byte */
static BYTE xchg_spi (BYTE dat)
{
	CB0TXL = dat;
	do; while(CB0TSF);
	return CB0RXL;
}


/* Receive multiple byte */
static void rcvr_spi_multi (
	BYTE *buff,		/* Pointer to data buffer */
	UINT btr		/* Number of bytes to receive (multiple of 8) */
)
{
	WORD *dp = (WORD*)buff;


	CB0CTL0 = 0;				/* Initialize CSIB0 to 16bit R/O mode */
	CB0CTL2 = 0x08;
	CB0CTL0 = 0xA1;
	PMC4.1 = 0;					/* Disconnect MOSI and force it high */

	CB0RX;
	while (btr -= 8) {
		do; while(CB0TSF);		/* Wait for end of the SPI transaction */
		*dp++ = __bsh(CB0RX);	/* Get received 16-bit data, swap byte order and store it */
		do; while(CB0TSF);
		*dp++ = __bsh(CB0RX);
		do; while(CB0TSF);
		*dp++ = __bsh(CB0RX);
		do; while(CB0TSF);
		*dp++ = __bsh(CB0RX);
	}
	do; while(CB0TSF);
	*dp++ = __bsh(CB0RX);
	do; while(CB0TSF);
	*dp++ = __bsh(CB0RX);
	do; while(CB0TSF);
	*dp++ = __bsh(CB0RX);
	do; while(CB0TSF);
	CB0CTL0 = 0xA0;
	*dp++ = __bsh(CB0RX);

	CB0CTL0 = 0;			/* Re-initialize CSIB0 in 8bit bi-directional mode */
	CB0CTL2 = 0x00;
	CB0CTL0 = 0xE0;
	PMC4.1 = 1;
}


/* Transmit multiple byte */
static void xmit_spi_multi (
	const BYTE *buff,	/* Pointer to the data */
	UINT btx			/* Number of bytes to send (multiple of 8) */
)
{
	const WORD *sp = (const WORD*)buff;


	CB0CTL0 = 0;			/* Initialize CSIB0 in 16-bit bi-directional mode */
	CB0CTL2 = 0x08;
	CB0CTL0 = 0xE0;

	do {
		CB0TX = __bsh(*sp++);	/* Load a 16-bit data, swap byte order and transmit it */
		do; while(CB0TSF);		/* Wait for end of the SPI transaction */
		CB0TX = __bsh(*sp++);
		do; while(CB0TSF);
		CB0TX = __bsh(*sp++);
		do; while(CB0TSF);
		CB0TX = __bsh(*sp++);
		do; while(CB0TSF);
	} while (btx -= 8);

	CB0CTL0 = 0;			/* Re-initialize CSIB0 in 8bit bi-directional mode */
	CB0CTL2 = 0x00;
	CB0CTL0 = 0xE0;
}



/*-----------------------------------------------------------------------*/
/* Wait for card ready                                                   */
/*-----------------------------------------------------------------------*/

static int wait_ready (	/* 1:Ready, 0:Timeout */
	UINT wt			/* Timeout [ms] */
)
{
	BYTE d;

	Timer2 = (WORD)(wt / 10);
	do {
		d = xchg_spi(0xFF);

		/* This loop takes a time. Insert rot_rdq() here for multitask envilonment. */

	} while ((d != 0xFF) && Timer2);	/* Wait until card goes ready or timeout */

	return (d == 0xFF) ? 1 : 0;
}



/*-----------------------------------------------------------------------*/
/* Deselect the card and release SPI bus                                 */
/*-----------------------------------------------------------------------*/

static void deselect (void)
{
	CS_HIGH();			/* Set CS# high */
	xchg_spi(0xFF);		/* Dummy clock (force DO hi-z for multiple slave SPI) */
}



/*-----------------------------------------------------------------------*/
/* Select the card and wait ready                                        */
/*-----------------------------------------------------------------------*/

static int select (void)	/* 1:Successful, 0:Timeout */
{
	CS_LOW();			/* Set CS# low */
	xchg_spi(0xFF);		/* Dummy clock (force DO enabled) */

	if (wait_ready(500)) return 1;	/* Wait for card ready */

	deselect();
	return 0;	/* Timeout */
}



/*-----------------------------------------------------------------------*/
/* Power Control  (Platform dependent)                                   */
/*-----------------------------------------------------------------------*/
/* When the target system does not support socket power control, there   */
/* is nothing to do in these functions and chk_power always returns 1.   */

static void power_on (void)
{
	/* Initialize MMC I/F */

	P4  |= 0x02;			/* Default port values SOB0=high, SCKB0=low */
	PM4 &= ~0x06;

	CB0CTL0 = 0;			/* Disable CSIB0 */
	CB0CTL1 = 0x1C;			/* fclk = fxx/32, SPI mode 0 */
	CB0CTL2 = 0;			/* Word size = 8 bit */
	CB0CTL0 = 0xE0;			/* Enable CSIB0 in single transfer, MSB first */

	PMC4 |= 0x07;			/* Attach CSIB0 to I/O pad */
}


static void power_off (void)
{
	select();				/* Wait for card ready */
	deselect();

	PMC4 &= ~0x07;			/* Detach CSIB0 from I/O pad */

	CB0CTL0 = 0;			/* Disable CSIB0 */

	Stat |= STA_NOINIT;		/* Set STA_NOINIT */
}



/*-----------------------------------------------------------------------*/
/* Receive a data packet from MMC                                        */
/*-----------------------------------------------------------------------*/

static int rcvr_datablock (	/* 1:OK, 0:Error */
	BYTE *buff,			/* Data buffer */
	UINT btr			/* Data block length (byte) */
)
{
	BYTE token;


	Timer1 = 200;
	do {							/* Wait for DataStart token in timeout of 200ms */
		token = xchg_spi(0xFF);

		/* This loop will take a time. Insert rot_rdq() here for multitask envilonment. */

	} while ((token == 0xFF) && Timer1);

	if (token != 0xFE) return 0;	/* Function fails if invalid DataStart token or timeout */

	rcvr_spi_multi(buff, btr);		/* Store trailing data to the buffer */
	xchg_spi(0xFF); xchg_spi(0xFF);	/* Discard CRC */

	return 1;						/* Function succeeded */
}




/*-----------------------------------------------------------------------*/
/* Send a data packet to MMC                                             */
/*-----------------------------------------------------------------------*/

#if FF_FS_READONLY == 0
static int xmit_datablock (
	const BYTE *buff,	/* 512 byte data block to be transmitted */
	BYTE token			/* Data/Stop token */
)
{
	BYTE resp;


	if (!wait_ready(500)) return 0;		/* Leading busy check (wait for card gets ready to accept data block) */

	xchg_spi(token);					/* Send token */

	if (token == 0xFD) return 1;		/* Do not send data if token is StopTran */

	xmit_spi_multi(buff, 512);			/* Data */
	xchg_spi(0xFF); xchg_spi(0xFF);		/* Dummy CRC */
	resp = xchg_spi(0xFF);				/* Receive data resp */

	if ((resp & 0x1F) != 0x05) return 0;	/* Was the data block rejected? */

	/* Busy check is done at next command/data transmission (leading busy check) */

	return 1;
}
#endif



/*-----------------------------------------------------------------------*/
/* Send a command packet to MMC                                          */
/*-----------------------------------------------------------------------*/

static BYTE send_cmd (
	BYTE cmd,		/* Command byte */
	DWORD arg		/* Argument */
)
{
	BYTE n, res;


	if (cmd & 0x80) {	/* ACMD<n> is the command sequense of CMD55-CMD<n> */
		cmd &= 0x3F;
		res = send_cmd(CMD55, 0);
		if (res > 1) return res;
	}

	/* Select the card and wait for ready except to stop multiple block read */
	if (cmd != CMD12) {
		deselect();
		if (!select()) return 0xFF;
	}

	/* Send command packet */
	xchg_spi(0x40 | cmd);				/* Start + Command */
	xchg_spi((BYTE)(arg >> 24));		/* Argument[31..24] */
	xchg_spi((BYTE)(arg >> 16));		/* Argument[23..16] */
	xchg_spi((BYTE)(arg >> 8));			/* Argument[15..8] */
	xchg_spi((BYTE)arg);				/* Argument[7..0] */
	n = 0;								/* CRC */
	if (cmd == CMD0) n = 0x95;			/* CRC for CMD0(0) */
	if (cmd == CMD8) n = 0x87;			/* CRC for CMD8(0x1AA) */
	xchg_spi(n);

	/* Receive command response */
	if (cmd == CMD12) xchg_spi(0xFF);	/* Skip a stuff byte when stop reading */
	n = 10;								/* Wait for a valid response in timeout of 10 attempts */
	do {
		res = xchg_spi(0xFF);
	} while ((res & 0x80) && --n);

	return res;			/* Return with the response value */
}



/*--------------------------------------------------------------------------

   Public Functions

---------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------*/
/* Initialize Disk Drive                                                 */
/*-----------------------------------------------------------------------*/

DSTATUS disk_initialize (
	BYTE pdrv		/* Physical drive nmuber (0) */
)
{
	BYTE n, cmd, ty, ocr[4];


	if (pdrv) return STA_NOINIT;		/* Supports only single drive */
	if (Stat & STA_NODISK) return Stat;	/* No card in the socket */

	power_on();							/* Force socket power on */
	FCLK_SLOW();
	for (n = 10; n; n--) xchg_spi(0xFF);	/* 80 dummy clocks */

	ty = 0;
	if (send_cmd(CMD0, 0) == 1) {			/* Enter Idle state */
		Timer1 = 1000;						/* Initialization timeout of 1000 msec */
		if (send_cmd(CMD8, 0x1AA) == 1) {	/* SDC Ver2+ */
			for (n = 0; n < 4; n++) ocr[n] = xchg_spi(0xFF);	/* Get trailng data of R7 resp */
			if (ocr[2] == 0x01 && ocr[3] == 0xAA) {				/* The card can work at vdd range of 2.7-3.6V */
				while (Timer1 && send_cmd(ACMD41, 1UL << 30));	/* ACMD41 with HCS bit */
				if (Timer1 && send_cmd(CMD58, 0) == 0) {		/* Check CCS bit in the OCR */
					for (n = 0; n < 4; n++) ocr[n] = xchg_spi(0xFF);
					ty = (ocr[0] & 0x40) ? CT_BLOCK|CT_SDC2 : CT_SDC2;
				}
			}
		} else {							/* SDC Ver1 or MMC */
			if (send_cmd(ACMD41, 0) <= 1) 	{
				ty = CT_SDC1; cmd = ACMD41;	/* SDC */
			} else {
				ty = CT_MMC3; cmd = CMD1;	/* MMC */
			}
			while (Timer1 && send_cmd(cmd, 0) != 0);			/* Wait for end of initialization */
			if (!Timer1 || send_cmd(CMD16, 512) != 0) ty = 0;	/* Select R/W block length */
		}
	}
	CardType = ty;
	deselect();

	if (ty) {			/* Initialization succeded */
		FCLK_FAST();
		Stat &= ~STA_NOINIT;		/* Clear STA_NOINIT */
	} else {			/* Initialization failed */
		power_off();
	}

	return Stat;
}



/*-----------------------------------------------------------------------*/
/* Get Disk Status                                                       */
/*-----------------------------------------------------------------------*/

DSTATUS disk_status (
	BYTE pdrv		/* Physical drive nmuber (0) */
)
{
	if (pdrv) return STA_NOINIT;		/* Supports only single drive */
	return Stat;
}



/*-----------------------------------------------------------------------*/
/* Read Sector(s)                                                        */
/*-----------------------------------------------------------------------*/

DRESULT disk_read (
	BYTE pdrv,			/* Physical drive nmuber (0) */
	BYTE *buff,			/* Pointer to the data buffer to store read data */
	LBA_t sector,		/* Start sector number (LBA) */
	UINT count			/* Sector count (1..128) */
)
{
	BYTE cmd;
	DWORD sect = (DWORD)sector;


	if (pdrv || !count) return RES_PARERR;
	if (Stat & STA_NOINIT) return RES_NOTRDY;
	if (!(CardType & CT_BLOCK)) sect *= 512;	/* Convert to byte address if needed */

	cmd = count > 1 ? CMD18 : CMD17;			/*  READ_MULTIPLE_BLOCK : READ_SINGLE_BLOCK */
	if (send_cmd(cmd, sect) == 0) {
		do {
			if (!rcvr_datablock(buff, 512)) break;
			buff += 512;
		} while (--count);
		if (cmd == CMD18) send_cmd(CMD12, 0);	/* STOP_TRANSMISSION */
	}
	deselect();

	return count ? RES_ERROR : RES_OK;
}



/*-----------------------------------------------------------------------*/
/* Write Sector(s)                                                       */
/*-----------------------------------------------------------------------*/

#if FF_FS_READONLY == 0
DRESULT disk_write (
	BYTE pdrv,			/* Physical drive nmuber (0) */
	const BYTE *buff,	/* Pointer to the data to be written */
	LBA_t sector,		/* Start sector number (LBA) */
	UINT count			/* Sector count (1..128) */
)
{
	DWORD sect = (DWORD)sector;


	if (pdrv || !count) return RES_PARERR;
	if (Stat & STA_NOINIT) return RES_NOTRDY;
	if (Stat & STA_PROTECT) return RES_WRPRT;

	if (!(CardType & CT_BLOCK)) sect *= 512;	/* Convert to byte address if needed */

	if (count == 1) {	/* Single block write */
		if ((send_cmd(CMD24, sect) == 0)	/* WRITE_BLOCK */
			&& xmit_datablock(buff, 0xFE)) {
			count = 0;
		}
	}
	else {				/* Multiple block write */
		if (CardType & CT_SDC) send_cmd(ACMD23, count);
		if (send_cmd(CMD25, sect) == 0) {	/* WRITE_MULTIPLE_BLOCK */
			do {
				if (!xmit_datablock(buff, 0xFC)) break;
				buff += 512;
			} while (--count);
			if (!xmit_datablock(0, 0xFD)) count = 1;	/* STOP_TRAN token */
		}
	}
	deselect();

	return count ? RES_ERROR : RES_OK;
}
#endif



/*-----------------------------------------------------------------------*/
/* Miscellaneous Functions                                               */
/*-----------------------------------------------------------------------*/

DRESULT disk_ioctl (
	BYTE pdrv,		/* Physical drive nmuber (0) */
	BYTE cmd,		/* Control code */
	void *buff		/* Buffer to send/receive data block */
)
{
	DRESULT res;
	BYTE n, csd[16];
	DWORD cs, st, ed;
	LBA_t *dp;


	if (pdrv != 0) return RES_PARERR;
	if (Stat & STA_NOINIT) return RES_NOTRDY;

	res = RES_ERROR;
	switch (cmd) {
	case CTRL_SYNC :	/* Wait for end of internal write process */
		if (select()) res = RES_OK;
		break;

	case GET_SECTOR_COUNT :	/* Get number of sectors on the disk (WORD) */
		if ((send_cmd(CMD9, 0) == 0) && rcvr_datablock(csd, 16)) {
			if ((csd[0] >> 6) == 1) {	/* SDv2? */
				cs = csd[9] + ((WORD)csd[8] << 8) + ((DWORD)(csd[7] & 63) << 16) + 1;
				*(LBA_t*)buff = cs << 10;
			} else {					/* SDv1 or MMCv2 */
				n = (csd[5] & 15) + ((csd[10] & 128) >> 7) + ((csd[9] & 3) << 1) + 2;
				cs = (csd[8] >> 6) + ((WORD)csd[7] << 2) + ((WORD)(csd[6] & 3) << 10) + 1;
				*(LBA_t*)buff = cs << (n - 9);
			}
			res = RES_OK;
		}
		break;

	case GET_BLOCK_SIZE :	/* Get erase block size in unit of sectors (DWORD) */
		if (CardType & CT_SDC2) {	/* SDv2? */
			if (send_cmd(ACMD13, 0) == 0) {		/* Read SD status */
				xchg_spi(0xFF);
				if (rcvr_datablock(csd, 16)) {					/* Read partial block */
					for (n = 64 - 16; n; n--) xchg_spi(0xFF);	/* Purge trailing data */
					*(DWORD*)buff = 16UL << (csd[10] >> 4);
					res = RES_OK;
				}
			}
		} else {					/* SDv1 or MMCv3 */
			if ((send_cmd(CMD9, 0) == 0) && rcvr_datablock(csd, 16)) {	/* Read CSD */
				if (CardType & CT_SDC1) {	/* SDv1 */
					*(DWORD*)buff = (((csd[10] & 63) << 1) + ((WORD)(csd[11] & 128) >> 7) + 1) << ((csd[13] >> 6) - 1);
				} else {					/* MMCv3 */
					*(DWORD*)buff = ((WORD)((csd[10] & 124) >> 2) + 1) * (((csd[11] & 3) << 3) + ((csd[11] & 224) >> 5) + 1);
				}
				res = RES_OK;
			}
		}
		break;
#if FF_MIN_SS != FF_MAX_SS
	case GET_SECTOR_SIZE :	/* Get sector size in unit of byte (WORD) */
		*(WORD*)buff = 512;
		res = RES_OK;
		break;
#endif
#if FF_USE_TRIM
	case CTRL_TRIM :	/* Erase a block of sectors */
		if (!(CardType & CT_SDC)) break;				/* Check if the card is SDC */
		if (disk_ioctl(pdrv, MMC_GET_CSD, csd)) break;	/* Get CSD */
		if (!(csd[10] & 0x40)) break;					/* Check if ERASE_BLK_EN = 1 */
		dp = buff; st = (DWORD)dp[0]; ed = (DWORD)dp[1];	/* Load sector block */
		if (!(CardType & CT_BLOCK)) {
			st *= 512; ed *= 512;
		}
		if (send_cmd(CMD32, st) == 0 && send_cmd(CMD33, ed) == 0 && send_cmd(CMD38, 0) == 0 && wait_ready(30000)) {	/* Erase sector block */
			res = RES_OK;
		}
		break;
#endif
	case MMC_GET_CSD :	/* Receive CSD as a data block (16 bytes) */
		if ((send_cmd(CMD9, 0) == 0) && rcvr_datablock(buff, 16)) {	/* READ_CSD */
			res = RES_OK;
		}
		break;

	case MMC_GET_CID :	/* Receive CID as a data block (16 bytes) */
		if ((send_cmd(CMD10, 0) == 0) && rcvr_datablock(buff, 16)) {	/* READ_CID */
			res = RES_OK;
		}
		break;

	case MMC_GET_OCR :	/* Receive OCR as an R3 resp (4 bytes) */
		if (send_cmd(CMD58, 0) == 0) {	/* READ_OCR */
			for (n = 0; n < 4; n++) {
				*((BYTE*)buff+n) = xchg_spi(0xFF);
			}
			res = RES_OK;
		}
		break;

	default:
		res = RES_PARERR;
	}

	deselect();

	return res;
}



/*-----------------------------------------------------------------------*/
/* Device Timer Interrupt Procedure                                      */
/*-----------------------------------------------------------------------*/
/* This function must be called in period of 1ms                         */


void disk_timerproc (void)
{
	BYTE s;
	UINT n;


	n = Timer1;				/* 1000Hz decrement timer */
	if (n) Timer1 = --n;
	n = Timer2;
	if (n) Timer2 = --n;

	s = Stat;
	if (MMC_WP) {			/* Write protected */
		s |= STA_PROTECT;
	} else {				/* Write enabled */
		s &= ~STA_PROTECT;
	}
	if (MMC_CD) {			/* Card inserted */
		s &= ~STA_NODISK;
	} else {				/* Socket empty */
		s |= (STA_NODISK | STA_NOINIT);
	}
	Stat = s;
}

