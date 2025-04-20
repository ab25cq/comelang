#ifndef	DEV_I2C_RP2040_H
#define	DEV_I2C_RP2040_H

#define	DEV_I2C_UNITNM      (2)	/* Number of devive units */
#define	DEV_I2C_0           (0)	/* I2C1 */
#define	DEV_I2C_1           (1)	/* I2C2 */

/*
 * RCC レジスタ ( I2C Clock setting )
 */
#define	RCC_CCIPR_I2CSEL	0x00003000	// I2C Clock source

/*----------------------------------------------------------------------
 * I2C レジスタ
 */
/* Base address */
#define	I2C0_BASE               0x40044000
#define	I2C1_BASE               0x40048000

/* Register offset */
#define	I2Cx_CON                (0x00)      // I2C Control Register
#define	I2Cx_TAR                (0x04)      // I2C Target Address Register
#define	I2Cx_SAR                (0x08)      // I2C Slave Address Register
#define	I2Cx_DATA_CMD           (0x10)      // I2C Rx/Tx Data Buffer and Command Register

#define	I2Cx_SS_SCL_HCNT        (0x14)      // Standard Speed I2C Clock SCL High Count Register
#define	I2Cx_SS_SCL_LCNT        (0x18)      // Standard Speed I2C Clock SCL Low Count Register
#define	I2Cx_FS_SCL_HCNT        (0x1C)      // Fast Mode or Fast Mode Plus I2C Clock SCL High Count Register
#define	I2Cx_FS_SCL_LCNT        (0x20)      // Fast Mode or Fast Mode Plus I2C Clock SCL Low Count Register

#define	I2Cx_INTR_STAT          (0x2C)      // I2C Interrupt Status Register
#define	I2Cx_INTR_MASK          (0x30)      // I2C Interrupt Mask Register
#define I2Cx_RAW_INTR_STAT      (0x34)      // I2C Raw Interrupt Status Register

#define	I2Cx_RX_TL              (0x38)      // I2C Receive FIFO Threshold Register
#define	I2Cx_TX_TL              (0x3C)      // I2C Transmit FIFO Threshold Register

#define	I2Cx_CLR_INTR           (0x40)      // Clear Combined and Individual Interrupt Register
#define	I2Cx_CLR_RX_UNDER       (0x44)      // Clear RX_UNDER Interrupt Register
#define	I2Cx_CLR_RX_OVER        (0x48)      // Clear RX_OVER Interrupt Register
#define	I2Cx_CLR_TX_OVER        (0x4C)      // Clear TX_OVER Interrupt Register
#define	I2Cx_CLR_RD_REQ         (0x50)      // Clear RD_REQ Interrupt Register
#define	I2Cx_CLR_TX_ABRT        (0x54)      // Clear TX_ABRT Interrupt Register
#define	I2Cx_CLR_RX_DONE        (0x58)      // Clear RX_DONE Interrupt Register
#define	I2Cx_CLR_ACTIVITY       (0x5C)      // Clear ACTIVITY Interrupt Register
#define	I2Cx_CLR_STOP_DET       (0x60)      // Clear STOP_DET Interrupt Register
#define	I2Cx_CLR_START_DET      (0x64)      // Clear START_DET Interrupt Register
#define	I2Cx_CLR_GEN_CALL       (0x68)      // Clear GEN_CALL Interrupt Register

#define	I2Cx_ENABLE             (0x6C)      // I2C ENABLE Register
#define	I2Cx_STATUS             (0x70)      // I2C STATUS Register
#define	I2Cx_TXFLR              (0x74)      // I2C Transmit FIFO Level Register
#define	I2Cx_RXFLR              (0x78)      // I2C Receive FIFO Level Register
#define	I2Cx_SDA_HOLD           (0x7C)      // I2C SDA Hold Time Length Register
#define	I2Cx_TX_ABRT_SOURCE     (0x80)      // I2C Transmit Abort Source Register
#define	I2Cx_SLV_DATA_NACK_ONLY (0x84)      // Generate Slave Data NACK Register

#define	I2Cx_DMA_CR             (0x88)      // DMA Control Register
#define	I2Cx_DMA_TDLR           (0x8C)      // DMA Transmit Data Level Register
#define	I2Cx_DMA_RDLR           (0x90)      // DMA Transmit Data Level Register

#define	I2Cx_SDA_SETUP          (0x94)      // I2C SDA Setup Register
#define	I2Cx_ACK_GENERAL_CALL   (0x98)      // I2C ACK General Call Register
#define	I2Cx_ENABLE_STATUS      (0x9C)      // I2C Enable Status Register
#define	I2Cx_FS_SPKLEN          (0xA0)      // I2C SS, FS or FM+ spike suppression limit
#define	I2Cx_CLR_RESTART_DET    (0xA8)      // Clear RESTART_DET Interrupt Register
#define	I2Cx_COMP_PARAM_1       (0xF4)      // Component Parameter Register 1
#define	I2Cx_COMP_VERSION       (0xF8)      // I2C Component Version Register
#define	I2Cx_COMP_TYPE          (0xFc)      // I2C Component Type Register

/* Register bit definition */
#define	I2C_CON_TX_EMPTY_CTRL   (1<<8)
#define	I2C_CON_SLAVE_DISABLE   (1<<6)
#define	I2C_CON_RESTART_EN      (1<<5)
#define	I2C_CON_7BIT_ADR        (0<<4)
#define	I2C_CON_10BIT_ADR       (1<<4)
#define	I2C_CON_SPEED_HIGH      (3<<1)
#define	I2C_CON_SPEED_FAST      (2<<1)
#define	I2C_CON_SPEED_STANDARD  (1<<1)
#define	I2C_CON_MASTER_MODE     (1<<0)

#define	I2C_TAR_7BIT_ADR        (0x007F)
#define	I2C_TAR_10BIT_ADR       (0x03FF)

#define	I2C_ENABLE_TX_CMD_BLOCK (1<<2)
#define	I2C_ENABLE_ABORT        (1<<1)
#define	I2C_ENABLE_ENABLE       (1<<0)

#define	I2C_DATA_CMD_FIRST_DATA_BYTE    1<<11)
#define	I2C_DATA_CMD_RESTART            (1<<10)
#define	I2C_DATA_CMD_STOP               (1<<9)
#define	I2C_DATA_CMD_CMD_WRITE          (0<<8)
#define	I2C_DATA_CMD_CMD_READ           (1<<8)
#define	I2C_DATA_CMD_DAT                (0x000000FF)

#define	I2C_RAW_INTR_STAT_RX_DONE   (1<<7)
#define	I2C_RAW_INTR_STAT_TX_EMPTY  (1<<4)

#define	I2C_STATUS_RFF          (1<<4)
#define	I2C_STATUS_RFNE         (1<<3)
#define	I2C_STATUS_TFE          (1<<2)
#define	I2C_STATUS_TFNF         (1<<1)
#define	I2C_STATUS_ACTIVITY     (1<<0)

#define	I2C_DMA_CR_TDMAE        (1<<1)
#define	I2C_DMA_CR_RDMAE        (1<<0)

/*----------------------------------------------------------------------
 * I2C レジスタアクセス・マクロ
 */
#define	I2C_CON(u)                  (ba[u] + I2Cx_CON)	                // I2C Control Register
#define	I2C_TAR(u)                  (ba[u] + I2Cx_TAR)	                // I2C Target Address Register
#define	I2C_SAR(u)                  (ba[u] + I2Cx_SAR)	                // I2C Slave Address Register
#define	I2C_DATA_CMD(u)	            (ba[u] + I2Cx_DATA_CMD)             // I2C Rx/Tx Data Buffer and Command Register
#define	I2C_SS_SCL_HCNT(u)          (ba[u] + I2Cx_SS_SCL_HCNT)          // Standard Speed I2C Clock SCL High Count Register
#define	I2C_SS_SCL_LCNT(u)          (ba[u] + I2Cx_SS_SCL_LCNT)          // Standard Speed I2C Clock SCL Low Count Register
#define	I2C_FS_SCL_HCNT(u)          (ba[u] + I2Cx_FS_SCL_HCNT)          // Fast Mode or Fast Mode Plus I2C Clock SCL High Count Register
#define	I2C_FS_SCL_LCNT(u)          (ba[u] + I2Cx_FS_SCL_LCNT)          // Fast Mode or Fast Mode Plus I2C Clock SCL Low Count Register
#define	I2C_INTR_STAT(u)            (ba[u] + I2Cx_INTR_STAT)            // I2C Interrupt Status Register
#define	I2C_INTR_MASK(u)            (ba[u] + I2Cx_INTR_MASK)            // I2C Interrupt Mask Register
#define I2C_RAW_INTR_STAT(u)        (ba[u] + I2Cx_RAW_INTR_STAT)        // I2C Raw Interrupt Status Register
#define	I2C_RX_TL(u)                (ba[u] + I2Cx_RX_TL)                // I2C Receive FIFO Threshold Register
#define	I2C_TX_TL(u)                (ba[u] + I2Cx_TX_TL)                // I2C Transmit FIFO Threshold Register
#define	I2C_CLR_INTR(u)             (ba[u] + I2Cx_CLR_INTR)             // Clear Combined and Individual Interrupt Register
#define	I2C_CLR_RX_UNDER(u)         (ba[u] + I2Cx_CLR_RX_UNDER)	        // Clear RX_UNDER Interrupt Register
#define	I2C_CLR_RX_OVER(u)          (ba[u] + I2Cx_CLR_RX_OVER)          // Clear RX_OVER Interrupt Register
#define	I2C_CLR_TX_OVER(u)          (ba[u] + I2Cx_CLR_TX_OVER)          // Clear TX_OVER Interrupt Register
#define	I2C_CLR_RD_REQ(u)           (ba[u] + I2Cx_CLR_RD_REQ)           // Clear RD_REQ Interrupt Register
#define	I2C_CLR_TX_ABRT(u)          (ba[u] + I2Cx_CLR_TX_ABRT)          // Clear TX_ABRT Interrupt Register
#define	I2C_CLR_RX_DONE(u)          (ba[u] + I2Cx_CLR_RX_DONE)          // Clear RX_DONE Interrupt Register
#define	I2C_CLR_ACTIVITY(u)         (ba[u] + I2Cx_CLR_ACTIVITY)         // Clear ACTIVITY Interrupt Register
#define	I2C_CLR_STOP_DET(u)         (ba[u] + I2Cx_CLR_STOP_DET)         // Clear STOP_DET Interrupt Register
#define	I2C_CLR_START_DET(u)        (ba[u] + I2Cx_CLR_START_DE)         // Clear START_DET Interrupt Register
#define	I2C_CLR_GEN_CALL(u)         (ba[u] + I2Cx_CLR_GEN_CALL)         // Clear GEN_CALL Interrupt Register
#define	I2C_ENABLE(u)	            (ba[u] + I2Cx_ENABLE)               // I2C ENABLE Register
#define	I2C_STATUS(u)	            (ba[u] + I2Cx_STATUS)               // I2C STATUS Register
#define	I2C_TXFLR(u)	            (ba[u] + I2Cx_TXFLR)                // I2C Transmit FIFO Level Register
#define	I2C_RXFLR(u)	            (ba[u] + I2Cx_RXFLR)                // I2C Receive FIFO Level Register
#define	I2C_SDA_HOLD(u)	            (ba[u] + I2Cx_SDA_HOLD)             // I2C SDA Hold Time Length Register
#define	I2C_TX_ABRT_SOURCE(u)       (ba[u] + I2Cx_TX_ABRT_SOURCE)       // I2C Transmit Abort Source Register
#define	I2C_SLV_DATA_NACK_ONLY(u)   (ba[u] + I2Cx_SLV_DATA_NACK_ONLY)   // Generate Slave Data NACK Register
#define	I2C_DMA_CR(u)               (ba[u] + I2Cx_DMA_CR)               // DMA Control Register
#define	I2C_DMA_TDLR(u)             (ba[u] + I2Cx_DMA_TDLR)             // DMA Transmit Data Level Register
#define	I2C_DMA_RDLR(u)             (ba[u] + I2Cx_DMA_RDLR)             // DMA Transmit Data Level Register
#define	I2C_SDA_SETUP(u)            (ba[u] + I2Cx_SDA_SETUP)            // I2C SDA Setup Register
#define	I2C_ACK_GENERAL_CALL(u)     (ba[u] + I2Cx_ACK_GENERAL_CALL)     // I2C ACK General Call Register
#define	I2C_ENABLE_STATUS(u)        (ba[u] + I2Cx_ENABLE_STATUS)        // I2C Enable Status Register
#define	I2C_FS_SPKLEN(u)            (ba[u] + I2Cx_FS_SPKLEN)            // I2C SS, FS or FM+ spike suppression limit
#define	I2C_CLR_RESTART_DET(u)      (ba[u] + I2Cx_CLR_RESTART_DET)      // Clear RESTART_DET Interrupt Register
#define	I2C_COMP_PARAM_1(u)         (ba[u] + I2Cx_COMP_PARAM_1)         // Component Parameter Register 1
#define	I2C_COMP_VERSION(u)         (ba[u] + I2Cx_COMP_VERSION)         // I2C Component Version Register
#define	I2C_COMP_TYPE(u)            (ba[u] + I2Cx_COMP_TYPE)            // I2C Component Type Register

/* 
 * I2C 割込み番号
 */
#define INTNO_I2C0                  23
#define INTNO_I2C1                  24

#endif      /* DEV_I2C_RP2040_H */
