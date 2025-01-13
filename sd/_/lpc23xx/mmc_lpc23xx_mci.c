/*-----------------------------------------------------------------------*/
/* MMC/SDC native mode control module                                    */
/*-----------------------------------------------------------------------*/
/* This program is opened under license policy of following trems.
/
/  Copyright (C) 2020, ChaN, all right reserved.
/
/ * This program is a free software and there is NO WARRANTY.
/ * No restriction on use. You can use, modify and redistribute it for
/   personal, non-profit or commercial use UNDER YOUR RESPONSIBILITY.
/ * Redistributions of source code must retain the above copyright notice.
/
/------------------------------------------------------------------------*/

#include <string.h>
#include "LPC2300.h"
#include "interrupt.h"
#include "diskio.h"


/* These functions are defined in asmfunc.S */
void Copy_al2un (BYTE *dst, const DWORD *src, int count);	/* Copy aligned to unaligned. */
void Copy_un2al (DWORD *dst, const BYTE *src, int count);	/* Copy unaligned to aligned. */


/* --- MCI configurations --- */
#define N_BUF		4			/* Block transfer FIFO depth (>= 2) */
#define PCLK		72000000UL	/* PCLK supplied to MCI module */
#define MCLK_ID		400000UL	/* MCICLK for initilization (100k-400k) */
#define MCLK_RW1	18000000UL	/* MCICLK for standard-speed data (PCLK divided by even number) */
#define MCLK_RW2	36000000UL	/* MCICLK for high-speed data (PCLK divided by even number) */
#define MCLK_RW3	3000000UL	/* MCICLK for quench data */

/* ----- Port definitions ----- */
#define	MMC_CD		!(FIO0PIN2 & 0x20)	/* Card detect (yes:true, no:false, default:true) */
#define	MMC_WP		0				 	/* Write protected (yes:true, no:false, default:false) */


/* ----- MMC/SDC command ----- */
#define CMD0	(0)				/* GO_IDLE_STATE */
#define CMD1	(1)				/* SEND_OP_COND (MMC) */
#define CMD2	(2)				/* ALL_SEND_CID */
#define CMD3	(3)				/* SEND_RELATIVE_ADDR */
#define CMD6	(6)				/* SWITCH */
#define ACMD6	(6|0x80)		/* SET_BUS_WIDTH (SDC) */
#define CMD7	(7)				/* SELECT_CARD */
#define CMD8	(8)				/* SEND_IF_COND (SDCv2) / SEND_EXT_CSD (MMCv4) */
#define CMD9	(9)				/* SEND_CSD */
#define CMD10	(10)			/* SEND_CID */
#define CMD12	(12)			/* STOP_TRANSMISSION */
#define CMD13	(13)			/* SEND_STATUS */
#define ACMD13	(13|0x80)		/* SD_STATUS (SDC) */
#define CMD16	(16)			/* SET_BLOCKLEN */
#define CMD17	(17)			/* READ_SINGLE_BLOCK */
#define CMD18	(18)			/* READ_MULTIPLE_BLOCK */
#define	CMD23	(23)			/* SET_BLK_COUNT (MMC) */
#define	ACMD23	(23|0x80)		/* SET_WR_BLK_ERASE_COUNT (SDC) */
#define CMD24	(24)			/* WRITE_BLOCK */
#define CMD25	(25)			/* WRITE_MULTIPLE_BLOCK */
#define CMD32	(32)			/* ERASE_ER_BLK_START */
#define CMD33	(33)			/* ERASE_ER_BLK_END */
#define CMD38	(38)			/* ERASE */
#define	ACMD41	(41|0x80)		/* SEND_OP_COND (SDC) */
#define CMD55	(55)			/* APP_CMD */

/*--------------------------------------------------------------------------

   Module Private Functions

---------------------------------------------------------------------------*/

static volatile DSTATUS Stat = STA_NOINIT;	/* Disk status */

static volatile WORD Timer[2];			/* 1000Hz decrement timer for Transaction and Command */

static DWORD Fclk_RW;			/* Read-Write frequency */
static WORD CardRCA;			/* Assigned RCA */
static BYTE CardType;			/* Card type flag */
static BYTE CardCSD[16];		/* Card CSD */
static BYTE CardCID[16];		/* Card CID */
static BYTE CardOCR[4];			/* Card OCR */

static volatile BYTE XferStat;	/* b4:Wait for underrun, b3:MCI error, b2:Underrun/Overrun, b1:Write, b0:Read */
static volatile BYTE XferWc;	/* Write block counter */
static volatile BYTE BufWp, BufRp, BufCt;	/* R/W index of block FIFO */
static BYTE MclkTran, MclkQuench;	/* Clock divider for normal transfer and quench transfer */

/* Block transfer buffer (located in USB RAM) */
static DWORD DmaBuff[N_BUF][128] __attribute__ ((section(".usbram")));	/* Block transfer FIFO */
static DWORD LinkList[N_BUF][4] __attribute__ ((section(".usbram")));	/* DMA link list */



/*-----------------------------------------------------------------------*/
/* Interrupt service routine for data transfer                           */
/*-----------------------------------------------------------------------*/

static void Isr_MCI (void)
{
	DWORD ms;
	BYTE n, xs;


	ms = MCI_STATUS & 0x073A;	/* Clear MCI interrupt status */
	MCI_CLEAR = ms;

	xs = XferStat;
	if (ms & 0x400) {			/* A block transfer completed (DataBlockEnd) */
		if (xs & 1) {				/* In read transfer */
			if (ms & 0x100) {			/* When last block was received (DataEnd), */
				GPDMA_SOFT_BREQ = 0x10;	/* Pop off remaining data in the MCIFIFO */
			}
			BufWp = (BufWp + 1) % N_BUF;	/* Next write buffer */
			BufCt = n = BufCt + 1;
			if (n == N_BUF - 1) {		/* Is buffer closely full? (filling last block) */
				MCI_CLOCK = (MCI_CLOCK & 0xF00) | MclkQuench;	/* Slow MCI clock down to prevent buffer overrun */
			}
			if (n == N_BUF) xs |= 4;	/* Check buffer overrun */
		} else {					/* In write transfer */
			BufRp = (BufRp + 1) % N_BUF;	/* Next read buffer */
			BufCt = n = BufCt - 1;
			if (n == 1 && !(xs & 0x10)) {	/* Is buffer closely empty and not last block? */
				MCI_CLOCK = (MCI_CLOCK & 0xF00) | MclkQuench;	/* Slow MCI clock down to prevent buffer underrun */
			}
			if (n == 0) xs |= 4;	/* Check buffer underrun */
		}
	} else {					/* An MCI error occured (not DataBlockEnd) */
		xs |= 8;
	}
	XferStat = xs;
}



static void Isr_GPDMA (void)
{
	GPDMA_INT_TCCLR = 0x01;				/* Clear GPDMA interrupt flag */

	if (XferStat & 2) {					/* In write operation */
		if (--XferWc == N_BUF) {		/* Terminate LLI */
			LinkList[BufRp % N_BUF][2] = 0;
		}
	}
}




/*-----------------------------------------------------------------------*/
/* Ready for data reception                                              */
/*-----------------------------------------------------------------------*/

static void ready_reception (
	UINT blks,		/* Number of blocks to receive (1..127) */
	UINT bs			/* Block size (64 or 512) */
)
{
	UINT n;
	DWORD dma_ctrl;


	/* ------ Setting up GPDMA Ch-0 ------ */

	GPDMA_CH0_CFG &= 0xFFF80420;		/* Disable ch-0 */
	GPDMA_INT_TCCLR = 0x01;				/* Clear interrupt flag */
	dma_ctrl = 0x88492000 | (bs / 4);	/* 1_000_1_0_00_010_010_010_010_************ */

	/* Create link list */
	for (n = 0; n < N_BUF; n++) {
		LinkList[n][0] = (DWORD)&MCI_FIFO;
		LinkList[n][1] = (DWORD)DmaBuff[n];
		LinkList[n][2] = (DWORD)LinkList[(n + 1) % N_BUF];
		LinkList[n][3] = dma_ctrl;
	}

	/* Load first LLI */
	GPDMA_CH0_SRC = LinkList[0][0];
	GPDMA_CH0_DEST = LinkList[0][1];
	GPDMA_CH0_LLI = LinkList[0][2];
	GPDMA_CH0_CTRL = LinkList[0][3];

	/* Enable ch-0 */
	GPDMA_CH0_CFG |= 0x19009;			/* *************_0_0_1_1_0_010_*_0000_*_0100_1 */

	/* --------- Setting up MCI ---------- */

	BufWp = 0; BufCt = 0;					/* Block FIFO R/W index */
	XferStat = 1;							/* Transfer status: MCI --> Memory */

	MCI_DATA_LEN = bs * blks;				/* Set total data length */
	MCI_DATA_TMR = Fclk_RW / 5;				/* Data timer: 0.2sec */
	MCI_CLEAR = 0x72A;						/* Clear status flags */
	MCI_MASK0 = 0x72A;						/* DataBlockEnd StartBitErr DataEnd RxOverrun DataTimeOut DataCrcFail */
	for (n = 0; bs > 1; bs >>= 1, n += 0x10);
	MCI_DATA_CTRL  = n | 0xB;				/* Start to receive data blocks */
}




/*-----------------------------------------------------------------------*/
/* Start to transmit a data block                                        */
/*-----------------------------------------------------------------------*/

static void start_transmission (
	UINT blks			/* Number of blocks to be transmitted (1..127) */
)
{
	UINT n;
	DWORD dma_ctrl;


	/* ------ Setting up GPDMA Ch-0 ------ */

	GPDMA_CH0_CFG &= 0xFFF80420;		/* Disable ch-0 */
	GPDMA_INT_TCCLR = 0x01;				/* Clear interrupt flag */
	dma_ctrl = 0x84492080;				/* 1_000_0_1_00_010_010_010_010_000010000000 */

	/* Create link list */
	for (n = 0; n < N_BUF; n++) {
		LinkList[n][0] = (DWORD)DmaBuff[n];
		LinkList[n][1] = (DWORD)&MCI_FIFO;
		LinkList[n][2] = (n == blks - 1) ? 0 : (DWORD)LinkList[(n + 1) % N_BUF];
		LinkList[n][3] = dma_ctrl;
	}

	/* Load first LLI */
	GPDMA_CH0_SRC = LinkList[0][0];
	GPDMA_CH0_DEST = LinkList[0][1];
	GPDMA_CH0_LLI = LinkList[0][2];
	GPDMA_CH0_CTRL = LinkList[0][3];

	/* Enable ch-0 */
	GPDMA_CH0_CFG |= 0x18901;			/* *************_0_0_1_1_0_001_*_0100_*_0000_1 */

	/* --------- Setting up MCI ---------- */

	BufRp = 0;								/* Block FIFO read index */
	XferWc = (BYTE)blks;
	XferStat = 2;							/* Transfer status: Memroy --> MCI */

	MCI_DATA_LEN = 512 * (blks + 1);		/* Set total data length */
	MCI_DATA_TMR = Fclk_RW / 2;				/* Data timer: 0.5sec */
	MCI_CLEAR = 0x51A;						/* Clear status flags */
	MCI_MASK0 = 0x51A;						/* DataBlockEnd DataEnd TxUnderrun DataTimeOut DataCrcFail */
	MCI_DATA_CTRL  = (9 << 4) | 0x9;		/* Start to transmit data blocks */
}




/*-----------------------------------------------------------------------*/
/* Stop data transfer                                                    */
/*-----------------------------------------------------------------------*/

static void stop_transfer (void)
{
	MCI_MASK0 = 0;			/* Disable MCI interrupt */
	MCI_DATA_CTRL = 0;		/* Stop MCI data transfer */
	MCI_CLOCK = (MCI_CLOCK & 0xF00) | MclkTran;	/* Restore MCI clock */

	GPDMA_CH0_CFG &= 0xFFF80420;	/* Disable DMA ch-0 */
}




/*-----------------------------------------------------------------------*/
/* Power Control (Device dependent)                                      */
/*-----------------------------------------------------------------------*/

static void power_on (void)
{
	/* Enable MCI and GPDMA power */
	__set_PCONP(PCSDC|PCGPDMA);

	/* Enable GPDMA controller with little-endian */
	GPDMA_CH0_CFG &= 0xFFF80000;	/* Disable DMA ch-0 */
	GPDMA_CONFIG = 0x01;

	/* Select PCLK for MCI, CCLK/1 = 72MHz */
	__set_PCLKSEL(PCLK_MCI, PCLKDIV_1);

	/* Attach MCI to I/O pad */
	__set_PINSEL(0, 19, 2);	/* MCICLK -> P0.19 */
	__set_PINSEL(0, 20, 2);	/* MCICMD -> P0.20 */
	__set_PINSEL(0, 21, 2);	/* MCIPWR -> P0.21 */
	__set_PINSEL(0, 22, 2);	/* MCIDAT0 -> P0.22 */
	__set_PINSEL(2, 11, 2);	/* MCIDAT1 -> P2.11 */
	__set_PINSEL(2, 12, 2);	/* MCIDAT2 -> P2.12 */
	__set_PINSEL(2, 13, 2);	/* MCIDAT3 -> P2.13 */

	MCI_MASK0 = 0;
	MCI_COMMAND = 0;
	MCI_DATA_CTRL = 0;

	/* Register interrupt handlers for MCI,DMA event */
	RegisterIrq(MCI_IRQn, Isr_MCI, PRI_LOWEST-1);
	RegisterIrq(GPDMA_IRQn, Isr_GPDMA, PRI_LOWEST-1);

	/* Power-on (VCC is always tied to the socket on this board) */
	MCI_POWER = 0x01;					/* Socket power on */
	for (Timer[0] = 10; Timer[0]; ) ;	/* 10ms */
	MCI_POWER = 0x03;					/* Enable signals */
}


static void power_off (void)
{
	MCI_MASK0 = 0;
	MCI_COMMAND = 0;
	MCI_DATA_CTRL = 0;

	MCI_POWER = 0;			/* Power-off */
	MCI_CLOCK = 0;

	Stat |= STA_NOINIT;
}


/*-----------------------------------------------------------------------*/
/* Send a command token to the card and receive a response               */
/*-----------------------------------------------------------------------*/

static int send_cmd (	/* Returns 1 when function succeeded otherwise returns 0 */
	UINT idx,		/* Command index (bit[5..0]), ACMD flag (bit7) */
	DWORD arg,		/* Command argument */
	UINT rt,		/* Expected response type. None(0), Short(1) or Long(2) */
	DWORD *buff		/* Response return buffer */
)
{
	UINT s, mc;


	if (idx & 0x80) {				/* Send a CMD55 prior to the specified command if it is ACMD class */
		if (!send_cmd(CMD55, (DWORD)CardRCA << 16, 1, buff)	/* When CMD55 is faild, */
			|| !(buff[0] & 0x00000020)) return 0;		/* exit with error */
	}
	idx &= 0x3F;					/* Mask out ACMD flag */

	do {							/* Wait while CmdActive bit is set */
		MCI_COMMAND = 0;			/* Cancel to transmit command */
		MCI_CLEAR = 0x0C5;			/* Clear status flags */
		for (s = 0; s < 10; s++) MCI_STATUS;	/* Skip lock out time of command reg. */
	} while (MCI_STATUS & 0x00800);

	MCI_ARGUMENT = arg;				/* Set the argument into argument register */
	mc = 0x400 | idx;				/* Enable bit + index */
	if (rt == 1) mc |= 0x040;		/* Set Response bit to reveice short resp */
	if (rt > 1) mc |= 0x0C0;		/* Set Response and LongResp bit to receive long resp */
	MCI_COMMAND = mc;				/* Initiate command transaction */

	Timer[1] = 100;
	for (;;) {						/* Wait for end of the cmd/resp transaction */
		if (!Timer[1]) return 0;
		s = MCI_STATUS;				/* Get the transaction status */
		if (rt == 0) {
			if (s & 0x080) return 1;	/* CmdSent */
		} else {
			if (s & 0x040) break;	/* CmdRespEnd */
			if (s & 0x001) { 		/* CmdCrcFail */
				if (idx == 1 || idx == 12 || idx == 41) break;	/* Ignore resp CRC error on CMD1/12/41 */
				return 0;
			}
			if (s & 0x004) return 0;	/* CmdTimeOut */
		}
	}

	buff[0] = MCI_RESP0;			/* Read the response words */
	if (rt == 2) {
		buff[1] = MCI_RESP1;
		buff[2] = MCI_RESP2;
		buff[3] = MCI_RESP3;
	}

	return 1;		/* Return with success */
}




/*-----------------------------------------------------------------------*/
/* Wait card ready                                                       */
/*-----------------------------------------------------------------------*/

static int wait_ready (	/* Returns 1 when card is in tran state, otherwise returns 0 */
	WORD tmr		/* Timeout in unit of 1ms */
)
{
	DWORD rc;


	Timer[0] = tmr;
	while (Timer[0]) {
		if (send_cmd(CMD13, (DWORD)CardRCA << 16, 1, &rc) && ((rc & 0x01E00) == 0x00800)) break;

		/* This loop takes a time. Insert rot_rdq() here for multitask envilonment. */

	}
	return Timer[0] ? 1 : 0;
}



/*-----------------------------------------------------------------------*/
/* Read a long register                                                  */
/*-----------------------------------------------------------------------*/

static int read_register (
	BYTE cmd,	/* CMD8(MMC):EXT_CSD, ACMD13(SDC):SD_STATUS, ACMD51(SDC):SCR, CMD6(SDC):SCR */
	DWORD arg,	/*                 0,                     0,               0,        Switch */
	UINT len	/*               512,                    64,              64,            64 */
)
{
	int rv = 0;
	DWORD resp;


	if (wait_ready(500)) {
		ready_reception(1, len);	/* Ready to receive a data block */
		if (send_cmd(cmd, arg, 1, &resp) && !(resp & 0xC0580000)) {	/* Start to read register */
			while (BufCt == 0 && !(XferStat & 0xC)) ;
			if (!(XferStat & 0xC)) rv = 1;
		}
		stop_transfer();	/* Close data path */
	}
	return rv;
}



/*-----------------------------------------------------------------------*/
/* Swap byte order                                                       */
/*-----------------------------------------------------------------------*/

static void bswap_cp (BYTE *dst, const DWORD *src)
{
	DWORD d;


	d = *src;
	*dst++ = (BYTE)(d >> 24);
	*dst++ = (BYTE)(d >> 16);
	*dst++ = (BYTE)(d >> 8);
	*dst++ = (BYTE)(d >> 0);
}




/*--------------------------------------------------------------------------

   Public Functions

---------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------*/
/* Initialize Disk Drive                                                 */
/*-----------------------------------------------------------------------*/

DSTATUS MCI_initialize (void)
{
	int rc;
	UINT n;
	DWORD arg, resp[4];
	BYTE ty, cmd;


	if (Stat & STA_NODISK) return Stat;		/* No card in the socket */

	power_on();								/* Force socket power on */

	Fclk_RW = MCLK_ID;						/* Set MCICLK = MCLK_ID */
	MCI_CLOCK = 0x100 | (PCLK / Fclk_RW / 2 - 1);
	for (Timer[0] = 2; Timer[0]; );			/* Delay >= 1ms */
	CardRCA = 0;

	send_cmd(CMD0, 0, 0, 0);	 			/* Put the card into idle state */
	for (Timer[0] = 2; Timer[0]; );			/* Delay >= 1ms */

	/*---- Card is 'idle' state ----*/

	if (send_cmd(CMD8, 0x1AA, 1, resp) && (resp[0] & 0xFFF) == 0x1AA) {	/* Is the card SDv2+? */
		ty = CT_WIDE | CT_SDC2;				/* CMD8 ok --> SDCv2+ */
		cmd = ACMD41; arg = 0x40FF8000;		/* Initialize with ACMD41 with HCS = 1 */
	} else {								/* CMD8 failed --> SDCv1 or MMC */
		if (send_cmd(ACMD41, 0x00FF8000, 1, resp)) {	/* ACMD41 with b30 cleared */
			ty = CT_WIDE | CT_SDC1;			/* ACMD41 ok --> SDCv1 */
			cmd = ACMD41; arg = 0x00FF8000;	/* Initialize with ACMD41 with HCS = 0 */
		} else {
			ty = CT_MMC3;					/* ACMD41 failed --> MMC (temp setting) */
			cmd = CMD1; arg = 0x40FF8000;	/* Initialize with CMD1 with b30:29 = 10 */
		}
	}
	Timer[0] = 1000;						/* Initialization timeout: 1000 msec */
	do {	/* Wait for the card goes ready state */
		/* This loop takes a time. Put here a sync process for multitask envilonment. */

		if (!Timer[0]) goto di_fail;
	} while (!send_cmd(cmd, arg, 1, resp) || !(resp[0] & 0x80000000));

	if (resp[0] & 0x40000000) ty |= CT_BLOCK;	/* Block addressing? */
	bswap_cp(&CardOCR[0], resp);			/* Save OCR */

	/*---- Card is 'ready' state ----*/

	if (!send_cmd(CMD2, 0, 2, resp)) goto di_fail;	/* Enter ident state */
	for (n = 0; n < 4; n++) bswap_cp(&CardCID[n * 4], &resp[n]);	/* Save CID */

	/*---- Card is 'ident' state ----*/

	if (ty & CT_SDC) {						/* SDC: Get generated RCA and save it */
		if (!send_cmd(CMD3, 0, 1, resp)) goto di_fail;
		CardRCA = resp[0] >> 16;
	} else {								/* MMC: Assign RCA to the card */
		if (!send_cmd(CMD3, 1UL << 16, 1, resp)) goto di_fail;
		CardRCA = 1;
	}

	/*---- Card is 'stby' state ----*/

	if (!send_cmd(CMD9, (DWORD)CardRCA << 16, 2, resp)) goto di_fail;	/* Get CSD and save it */
	for (n = 0; n < 4; n++) bswap_cp(&CardCSD[n * 4], &resp[n]);

	if (ty & CT_MMC3) {		/* Determine MMC type, v3 or v4 */
		if ((CardCSD[0] & 0xBC) == 0x90) ty = (ty & CT_BLOCK) | CT_WIDE | CT_MMC4;
	}

	if (!send_cmd(CMD7, (DWORD)CardRCA << 16, 1, resp)) goto di_fail;	/* Select card */

	/*---- Card is 'tran' state ----*/

	if (!(ty & CT_BLOCK)) {		/* Set data block length to 512 (for byte addressing cards) */
		if (!send_cmd(CMD16, 512, 1, resp) || (resp[0] & 0xFDF90000)) goto di_fail;
	}

	if (ty & CT_WIDE) {		/* Set wide bus mode if available */
		rc = (ty & CT_SDC) ? send_cmd(ACMD6, 2, 1, resp) : send_cmd(CMD6, 0x03B70100, 1, resp);	/* Set the card 4-bit mode */
		if (!rc || (resp[0] & 0xFDF90080)) goto di_fail;
		MCI_CLOCK |= 0x800;					/* Set MCI 4-bit mode */
	}

	/* Select bus clock for data transfer */
	Fclk_RW = MCLK_RW1;
	if (MCLK_RW2 > MCLK_RW1) {
		if ((ty & CT_MMC4) && send_cmd(CMD6, 0x03B90100, 1, resp) && !(resp[0] & 0xFDF90080)) {	/* Is MMCv4 high-speed mode avaiable? */
			n = 4;	/* Set power sypply capability [mA] {200(default), 220, 250, 280, 300, 320, 350, 400, 450, 500, 550} */
			send_cmd(CMD6, 0x03BB0000 | n << 8, 1, resp);
			Fclk_RW = MCLK_RW2;
		}
		if ((ty & CT_SDC2) && read_register(CMD6, 0x8FFFFFF1, 64)) {	/* Set SDC high-speed mode */
			Fclk_RW = MCLK_RW2;
		}
		for (Timer[0] = 2; Timer[0]; );			/* Delay >= 1ms */
	}
	MclkQuench = PCLK / MCLK_RW3 / 2 - 1;	/* Clock divider for quench data */
	MclkTran = PCLK / Fclk_RW / 2 - 1;		/* Clock divider for normal data */
	MCI_CLOCK = (MCI_CLOCK & 0xF00) | 0x200 | MclkTran;		/* Set MCICLK = MCLK_RW, power-save mode */

	CardType = ty;			/* Save card type */
	Stat &= ~STA_NOINIT;	/* Clear STA_NOINIT */
	return Stat;

di_fail:
	power_off();
	Stat |= STA_NOINIT;		/* Set STA_NOINIT */
	return Stat;
}




/*-----------------------------------------------------------------------*/
/* Get Disk Status                                                       */
/*-----------------------------------------------------------------------*/

DSTATUS MCI_status (void)
{
	return Stat;
}




/*-----------------------------------------------------------------------*/
/* Read Sector(s)                                                        */
/*-----------------------------------------------------------------------*/

DRESULT MCI_read (
	BYTE *buff,			/* Pointer to the data buffer to store read data */
	LBA_t sector,		/* Start sector number (LBA) */
	UINT count			/* Sector count (1..127) */
)
{
	DWORD resp, sect = (DWORD)sector;
	UINT cmd;
	BYTE rp, n;


	if (count < 1 || count > 127) return RES_PARERR;	/* Check parameter */
	if (Stat & STA_NOINIT) return RES_NOTRDY;	/* Check drive status */

	if (!(CardType & CT_BLOCK)) sect *= 512;	/* Convert LBA to byte address if needed */
	if (!wait_ready(500)) return RES_ERROR;		/* Make sure that card is tran state */

	ready_reception(count, 512);				/* Ready to receive data blocks */
	cmd = (count > 1) ? CMD18 : CMD17;			/* Transfer type: Single block or Multiple block */
	if (send_cmd(cmd, sect, 1, &resp)			/* Start to read */
		&& !(resp & 0xC0580000)) {
		rp = 0;
		do {
			while (BufCt == 0 && !(XferStat & 0xC)) {	/* Wait for block arrival */
				/* This loop will take a time. Put here a sync process for multitask envilonment. */
			}
			if (XferStat & 0xC) break;			/* Abort if any error has occured */
			Copy_al2un(buff, DmaBuff[rp], 512);	/* Pop an block */
			rp = (rp + 1) % N_BUF;				/* Next DMA buffer */
			buff += 512; 						/* Next user buffer address */
			IrqDisable();
			BufCt = n = BufCt - 1;
			if (n == 1) {						/* Is there enough space to receive? */
				MCI_CLOCK = (MCI_CLOCK & 0xF00) | MclkTran;	/* Restore MCI clock */
			}
			IrqEnable();
			if (XferStat & 0xC) break;			/* Abort if rx overrun has occured */
		} while (--count);
	}
	stop_transfer();							/* Close data path */
	if (count || cmd == CMD18) {				/* Stop read operation (on error or multi-block) */
		send_cmd(CMD12, 0, 1, &resp);
	}

	return count ? RES_ERROR : RES_OK;
}




/*-----------------------------------------------------------------------*/
/* Write Sector(s)                                                       */
/*-----------------------------------------------------------------------*/

DRESULT MCI_write (
	const BYTE *buff,	/* Pointer to the data to be written */
	LBA_t sector,		/* Start sector number (LBA) */
	UINT count			/* Sector count (1..127) */
)
{
	DWORD resp, sect = (DWORD)sector;
	UINT cmd;
	BYTE wp, xc, n;

	if (count < 1 || count > 127) return RES_PARERR;	/* Check parameter */
	if (Stat & STA_NOINIT) return RES_NOTRDY;	/* Check drive status */
	if (Stat & STA_PROTECT) return RES_WRPRT;	/* Check write protection */

	if (!(CardType & CT_BLOCK)) sect *= 512;	/* Convert LBA to byte address if needed */
	if (!wait_ready(500)) return RES_ERROR;		/* Make sure that card is tran state */

	if (count == 1) {	/* Single block write */
		cmd = CMD24;
	} else {			/* Multiple block write */
		cmd = (CardType & CT_SDC) ? ACMD23 : CMD23;
		if (!send_cmd(cmd, count, 1, &resp) || (resp & 0xC0580000)) {	/* Preset number of blocks to write */
			return RES_ERROR;
		}
		cmd = CMD25;
	}

	if (!send_cmd(cmd, sect, 1, &resp)			/* Send a write command */
		|| (resp & 0xC0580000)) {
		return RES_ERROR;
	}

	wp = 0; xc = count;
	do {									/* Fill block FIFO */
		Copy_un2al(DmaBuff[wp], buff, 512);	/* Push a block */
		wp++;								/* Next DMA buffer */
		count--; buff += 512; 			 	/* Next user buffer address */
	} while (count && wp < N_BUF);
	BufCt = wp; wp %= N_BUF;
	start_transmission(xc);					/* Start transmission */

	while (count) {
		while(BufCt == N_BUF && !(XferStat & 0xC)) {	/* Wait for a room in FIFO */
			/* This loop will take a time. Put here a sync process for multitask envilonment. */
		}
		if (XferStat & 0xC) break;			/* Abort if tx underrun or any MCI error has occured */
		Copy_un2al(DmaBuff[wp], buff, 512);	/* Push a block */
		wp = (wp + 1) % N_BUF;				/* Next DMA buffer */
		buff += 512;						/* Next user buffer address */
		IrqDisable();
		BufCt = n = BufCt + 1;
		if (n == N_BUF - 1) {				/* Is there enough data in the buffer? */
			MCI_CLOCK = (MCI_CLOCK & 0xF00) | MclkTran;	/* Restore MCI clock */
		}
		IrqEnable();
		if (XferStat & 0xC) break;			/* Abort if tx underrun has occured */
		count--;
	}
	IrqDisable();
	XferStat |= 0x10;					/* Set last block flag */
	MCI_CLOCK = (MCI_CLOCK & 0xF00) | MclkTran;	/* Restore MCI clock */
	IrqEnable();

	while (!(XferStat & 0xC)) ;			/* Wait for last block sent (tx underrun) */
	if (XferStat & 0x8) count = 1;		/* Abort if any MCI error has occured */

	stop_transfer();					/* Close data path */
	if (count || (cmd == CMD25 && (CardType & CT_SDC))) { /* Stop write operation (on error or SDC multi-block) */
		send_cmd(CMD12, 0, 1, &resp);
	}

	return count ? RES_ERROR : RES_OK;
}




/*-----------------------------------------------------------------------*/
/* Miscellaneous Functions                                               */
/*-----------------------------------------------------------------------*/

DRESULT MCI_ioctl (
	BYTE cmd,		/* Control code */
	void *buff		/* Buffer to send/receive data block */
)
{
	DRESULT res = RES_ERROR;
	BYTE b, *ptr = buff, sdstat[64];
	DWORD resp, d, st, ed;
	LBA_t *dp;
	static const DWORD au_size[] = {1, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 24576, 32768, 49152, 65536, 131072};


	if (Stat & STA_NOINIT) return RES_NOTRDY;

	switch (cmd) {
		case CTRL_SYNC :	/* Make sure that all data has been written on the media */
			if (wait_ready(500)) res = RES_OK;	/* Wait for card enters tarn state */
			break;

		case GET_SECTOR_COUNT :	/* Get number of sectors on the drive (DWORD) */
			if (CardType & CT_SDC2) {	/* SDCv2+ */
				d = CardCSD[9] + ((WORD)CardCSD[8] << 8) + ((DWORD)(CardCSD[7] & 63) << 16) + 1;
				*(LBA_t*)buff = d << 10;
				res = RES_OK;
			} else {					/* MMC or SDCv1 */
				d = (CardCSD[8] >> 6) + ((WORD)CardCSD[7] << 2) + ((WORD)(CardCSD[6] & 3) << 10) + 1;
				if (d == 4096 && (CardType & CT_MMC4)) {	/* >2GB and MMCv4? */
					if (read_register(CMD8, 0, 512)) {
						*(LBA_t*)buff = DmaBuff[0][53];		/* Value from EXT_CSD */
						res = RES_OK;
					}
				} else {
					b = (CardCSD[5] & 15) + ((CardCSD[10] & 128) >> 7) + ((CardCSD[9] & 3) << 1) - 7;
					*(LBA_t*)buff = d << b;	/* Value from CSD */
					res = RES_OK;
				}
			}
			break;

		case GET_BLOCK_SIZE :	/* Get erase block size in unit of sectors (DWORD) */
			if (CardType & CT_SDC2) {	/* SDC ver2 */
				if (MCI_ioctl(MMC_GET_SDSTAT, sdstat)) break;
				*(DWORD*)buff = au_size[sdstat[10] >> 4];
			} else {					/* SDC ver1 or MMC */
				if (CardType & CT_SDC1) {	/* SDC ver1 */
					*(DWORD*)buff = (((CardCSD[10] & 63) << 1) + ((WORD)(CardCSD[11] & 128) >> 7) + 1) << ((CardCSD[13] >> 6) - 1);
				} else {					/* MMC */
					*(DWORD*)buff = ((WORD)((CardCSD[10] & 124) >> 2) + 1) * (((CardCSD[11] & 3) << 3) + ((CardCSD[11] & 224) >> 5) + 1);
				}
			}
			res = RES_OK;
			break;

		case CTRL_TRIM :		/* Erase a block of sectors */
			if ((CardType & CT_MMC) && ((CardCSD[0] & 0xFC) != 0xD0)) break;	/* MMC without TRIM feature? */
			if ((CardType & CT_SDC) && !(CardCSD[10] & 0x40)) break;	/* SDC without ERASE_BLK_EN = 1? */
			dp = buff; st = (DWORD)dp[0]; ed = (DWORD)dp[1];
			if (!(CardType & CT_BLOCK)) {
				st *= 512; ed *= 512;
			}
			if (send_cmd(CMD32, st, 1, &resp) && send_cmd(CMD33, ed, 1, &resp) && send_cmd(CMD38, 1, 1, &resp) && wait_ready(30000)) {
				res = RES_OK;
			}
			break;

		case CTRL_POWER_OFF :
			power_off();		/* Power off */
			res = RES_OK;
			break;

		case MMC_GET_TYPE :		/* Get card type flags (1 byte) */
			*ptr = CardType;
			res = RES_OK;
			break;

		case MMC_GET_CSD :		/* Get CSD (16 bytes) */
			memcpy(buff, CardCSD, 16);
			res = RES_OK;
			break;

		case MMC_GET_CID :		/* Get CID (16 bytes) */
			memcpy(buff, CardCID, 16);
			res = RES_OK;
			break;

		case MMC_GET_OCR :		/* Get OCR (4 bytes) */
			memcpy(buff, CardOCR, 4);
			res = RES_OK;
			break;

		case MMC_GET_SDSTAT :	/* Receive SD status as a data block (64 bytes) */
			if ((CardType & CT_SDC) && read_register(ACMD13, 0, 64)) {	/* SDC? */
				Copy_al2un(buff, DmaBuff[0], 64);
				res = RES_OK;
			}
			break;

		case MMC_GET_EXTCSD :	/* Receive Extended CSD as a data block (512 bytes) */
			if ((CardType & CT_MMC4) && read_register(CMD8, 0, 512)) {	/* MMCv4? */
				Copy_al2un(buff, DmaBuff[0], 512);
				res = RES_OK;
			}
			break;

		default:
			res = RES_PARERR;
	}

	return res;
}




/*-----------------------------------------------------------------------*/
/* Device Timer Interrupt Procedure                                      */
/*-----------------------------------------------------------------------*/
/* This function must be called in period of 1ms                         */

void MCI_timerproc (void)
{
	BYTE s;
	WORD n;


	/* 1000Hz decrement timers */
	if ((n = Timer[0]) > 0) Timer[0] = --n;
	if ((n = Timer[1]) > 0) Timer[1] = --n;

	s = Stat;
	if (MMC_WP) {			/* Write protected */
		s |= STA_PROTECT;
	} else {				/* Write enabled */
		s &= ~STA_PROTECT;
	}
	if (MMC_CD) {			/* Card is in socket */
		s &= ~STA_NODISK;
	} else {				/* Socket empty */
		s |= (STA_NODISK | STA_NOINIT);
	}
	Stat = s;
}

