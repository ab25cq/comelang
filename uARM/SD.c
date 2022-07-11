#include "SD.h"
#include <avr/io.h>

#define FLAG_TIMEOUT        0x80
#define FLAG_PARAM_ERR        0x40
#define FLAG_ADDR_ERR        0x20
#define FLAG_ERZ_SEQ_ERR    0x10
#define FLAG_CMD_CRC_ERR    0x08
#define FLAG_ILLEGAL_CMD    0x04
#define FLAG_ERZ_RST        0x02
#define FLAG_IN_IDLE_MODE    0x01


#define SD_PIN_MOSI        ((UInt8)(1 << 6))
#define SD_PIN_MISO        ((UInt8)(1 << 6))
#define SD_PIN_SCLK        ((UInt8)(1 << 7))

Boolean gSdSpiFast = true;

static void sdSpiDelay(){

    volatile UInt16 t = 0;

    t++;
    t--;
}

static void sdClockSpeed(Boolean fast){

    gSdSpiFast = fast;
}

UInt8 sdSpiByte(UInt8 v);

UInt8 sdSpiByteSlow(UInt8 v){

    UInt8 i;

    for(i = 0; i < 8; i++){

        if(v & 0x80) PORTB |= SD_PIN_MOSI;
        else PORTB &=~ SD_PIN_MOSI;

        sdSpiDelay();

        PORTB |= SD_PIN_SCLK;

        sdSpiDelay();

        v <<= 1;
        if(PIND & SD_PIN_MISO) v++;
        PORTB &=~ SD_PIN_SCLK;

        sdSpiDelay();
    }

    PORTB &=~ SD_PIN_MOSI;

    return v;
}

static void sdSpiSingleClock(void){

    sdSpiDelay();
    PORTB |= SD_PIN_MOSI;
    sdSpiDelay();
    PORTB |= SD_PIN_SCLK;
    sdSpiDelay();
    PORTB &=~ SD_PIN_SCLK;
    sdSpiDelay();
}

UInt8 sdCrc7(UInt8* chr,UInt8 cnt,UInt8 crc){

    UInt8 i, a;
    UInt8 Data;

    for(a = 0; a < cnt; a++){

        Data = chr[a];

        for(i = 0; i < 8; i++){

            crc <<= 1;

            if( (Data & 0x80) ^ (crc & 0x80) ) crc ^= 0x09;

            Data <<= 1;
        }
    }

    return crc & 0x7F;
}

static inline void sdPrvSendCmd(UInt8 cmd, UInt32 param, Boolean crc){

    UInt8 send[6];
    UInt8 L = crc ? 6 : 5;

    send[0] = cmd | 0x40;
    send[1] = param >> 24;
    send[2] = param >> 16;
    send[3] = param >> 8;
    send[4] = param;
    send[5] = crc ? (sdCrc7(send, 5, 0) << 1) | 1 : 0;

    for(cmd = 0; cmd < L; cmd++) sdSpiByte(send[cmd]);
}

static UInt8 sdPrvSimpleCommand(UInt8 cmd, UInt32 param, Boolean crc){    //do a command, return R1 reply

    UInt8 ret;
    UInt8 i = 0;

    sdPrvSendCmd(cmd, param, crc);

    do{        //our max wait time is 128 byte clocks (1024 clock ticks)

        ret = sdSpiByte(0xFF);

    }while(i++ < 128 && (ret == 0xFF));

    return ret;
}

static UInt8 sdPrvReadData(UInt8* data, UInt16 sz){

    UInt8 ret;
    UInt8 tries = 200;

    do{
        ret = sdSpiByte(0xFF);
        if((ret & 0xF0) == 0x00) return ret;    //fail
        if(ret == 0xFE) break;
        tries--;
    }while(tries);

    if(!tries) return 0xFF;

    *data = ret;

    ret = 0;

    while(sz--) *data++ = sdSpiByte(0xFF);


    return ret;
}

static UInt8 sdPrvACMD(UInt8 cmd, UInt32 param, Boolean crc){

    UInt8 ret;

    ret = sdPrvSimpleCommand(55, 0, crc);
    if(ret & FLAG_TIMEOUT) return ret;
    if(ret & FLAG_ILLEGAL_CMD) return ret;

    return sdPrvSimpleCommand(cmd, param, crc);
}

Boolean sdPrvCardInit(Boolean sd, Boolean hc){

    UInt32 time = 0;
    UInt32 resp;
    Boolean first = true;
    UInt32 param;

    #ifdef NO_HC_CARDS
        sendHCS = 0;
    #endif

    param = hc ? (1ULL<< 30) : 0;

    while(time++ < 10000UL){    //retry 10..0 times

        //busy bit is top bit of OCR, which is top bit of resp[1]
        //busy bit at 1 means init complete
        //see pages 85 and 26

        resp = sd ? sdPrvACMD(41, param, true) : sdPrvSimpleCommand(1, param, true);

        if(resp & FLAG_TIMEOUT) break;

        if(first){

            param = (hc ? (1UL << 30) : 0UL) | 0x00200000UL;
            first = false;
        }
        else{

            if(!(resp & FLAG_IN_IDLE_MODE)) return true;
        }
    }

    return false;
}

UInt32 sdPrvGetBits(UInt8* data,UInt32 numBytesInArray,UInt32 startBit,UInt32 len){//for CID and CSD data..

    UInt32 bitWrite = 0;
    UInt32 numBitsInArray = numBytesInArray * 8;
    UInt32 ret = 0;

    do{

        UInt32 bit,byte;

        bit = numBitsInArray - startBit - 1;
        byte = bit / 8;
        bit = 7 - (bit % 8);

        ret |= ((data[byte] >> bit) & 1) << (bitWrite++);

        startBit++;
    }while(--len);

    return ret;
}

static UInt32 sdPrvGetCardNumBlocks(Boolean mmc,UInt8* csd){

    UInt32 ver = sdPrvGetBits(csd,16,126,2);
    UInt32 cardSz = 0;


    if(ver == 0 || (mmc && ver <= 2)){

        UInt32 cSize = sdPrvGetBits(csd,16,62,12);
        UInt32 cSizeMult = sdPrvGetBits(csd,16,47,3);
        UInt32 readBlLen = sdPrvGetBits(csd,16,80,4);
        UInt32 blockLen,blockNr;
        UInt32 divTimes = 9;        //from bytes to blocks division

        blockLen = 1UL << readBlLen;
        blockNr = (cSize + 1) * (1UL << (cSizeMult + 2));

        /*
             multiplying those two produces result in bytes, we need it in blocks
             so we shift right 9 times. doing it after multiplication might fuck up
             the 4GB card, so we do it before, but to avoid killing significant bits
             we only cut the zero-valued bits, if at the end we end up with non-zero
             "divTimes", divide after multiplication, and thus underuse the card a bit.
             This will never happen in reality since 512 is 2^9, and we are
             multiplying two numbers whose product is a multiple of 2^9, so they
             togethr should have at least 9 lower zero bits.
        */

        while(divTimes && !(blockLen & 1)){

            blockLen = blockLen >> 1;
            divTimes--;
        }
        while(divTimes && !(blockNr & 1)){

            blockNr = blockNr >> 1;
            divTimes--;
        }

        cardSz = (blockNr * blockLen) >> divTimes;
    }
    else if(ver == 1){

        cardSz = sdPrvGetBits(csd,16,48,22)/*num 512K blocks*/ << 10;
    }


    return cardSz;
}

Boolean sdInit(SD* sd){

    #ifdef SIM

        sd->numSec = *(volatile unsigned char*)0xD4;
        sd->numSec <<= 8;
        sd->numSec |= *(volatile unsigned char*)0xD5;
        sd->numSec <<= 8;
        sd->numSec |= *(volatile unsigned char*)0xD6;
        sd->inited = 1;

    #else

        UInt8 v;
        UInt16 tries = 0;    //needs to go high, in case we were in middle of block read before...
        UInt8 respBuf[16];

        sd->inited = false;
        sd->SD = false;

        sdClockSpeed(false);
        for(v = 0; v < 10; v++) sdSpiByte(0xFF);    //80 clocks with CS not asserted to give card time to init

        //with CS tied low, we get here with clock sync a bit weird, so we need to re-sync it, we do so here, since we know for sure what the valid RESP for CMD0 is
        do{
            sdSpiSingleClock();
            v = sdPrvSimpleCommand(0, 0, true);
            //resync usage makes this bad, so i comment it out: if(v & FLAG_TIMEOUT) return false;
            tries++;
            if(tries > 600L) return false;
        }while(v != 0x01);

        v = sdPrvSimpleCommand(8, 0x000001AAUL, true);    //try CMD8 to init SDHC cards
        if(v & FLAG_TIMEOUT) return false;
        sd->HC = !(v & FLAG_ILLEGAL_CMD);

        v = sdPrvSimpleCommand(55, 0, true);            //see if this is SD or MMC
        if(v & FLAG_TIMEOUT) return false;
        sd->SD = !(v & FLAG_ILLEGAL_CMD);

        if(sd->SD){

            if(!sdPrvCardInit(true, true) && !sdPrvCardInit(true, false)){

                return false;
            }
        }
        else{

            if(!sdPrvCardInit(false, true) && !sdPrvCardInit(false, false)){

                return false;
            }
        }

        v = sdPrvSimpleCommand(59, 0, true);        //crc off
        if(v & FLAG_TIMEOUT) return false;

        v = sdPrvSimpleCommand(9, 0, false);            //read CSD
        if(v & FLAG_TIMEOUT) return false;

        v = sdPrvReadData(respBuf, 16);
        if(v) return false;

        sd->numSec = sdPrvGetCardNumBlocks(!sd->SD, respBuf);
        sd->inited = true;

        sdClockSpeed(true);
    #endif

    return true;
}


UInt32 sdGetNumSec(SD* sd){

    return sd->inited ? sd->numSec : 0;
}

void writechar(int chr);

Boolean sdSecRead(SD* sd, UInt32 sec, void* buf){    //CMD17

    #ifdef SIM

        UInt16 t;
        UInt8* b = buf;

        *(volatile unsigned char*)0xD4 = sec >> 16;
        *(volatile unsigned char*)0xD5 = sec >> 8;
        *(volatile unsigned char*)0xD6 = sec;

        for(t = 0; t < 512; t++) *b++ = *(volatile unsigned char*)0xD7;

        return true;

    #else

        UInt8 v, retry = 0;
        Boolean ret = false;

        PIND = (UInt8)(1 << 2);    //LED_r

        if(!sd->inited) return false;

        do{

            v = sdPrvSimpleCommand(17, sd->HC ? sec : sec << 9, false);
            if(v & FLAG_TIMEOUT) return false;

            v = sdPrvReadData(buf, SD_BLOCK_SIZE);
            if(!v){
                ret = true;
                break;
            }

        }while(++retry < 5);    //retry up to 5 times

        PIND = (UInt8)(1 << 2);    //LED_r

        return ret;
    #endif
}


Boolean sdSecWrite(SD* sd, UInt32 sec, void* buf){    //CMD24

    #ifdef SIM

        UInt16 t;
        UInt8* b = buf;

        *(unsigned char*)0xD4 = sec >> 16;
        *(unsigned char*)0xD5 = sec >> 8;
        *(unsigned char*)0xD6 = sec;

        for(t = 0; t < 512; t++) *(unsigned char*)0xD7 = *b++;

        return true;

    #else

        UInt16 v16;
        UInt8 v, retry = 0;
        UInt8* buf_ = buf;
        Boolean ret = false;


        //writechar('W');

        PIND = (UInt8)(1 << 3);    //LED_w

        if(!sd->inited) return false;

        do{

            v = sdPrvSimpleCommand(24, sd->HC ? sec : sec << 9, false);
            if(v & FLAG_TIMEOUT) return false;

            sdSpiByte(0xFF);    //as per SD-spi spec, we give it 8 clocks to consider the ramifications of the command we just sent

            sdSpiByte(0xFE);    //start of data block
            for(v16 = 0; v16 < SD_BLOCK_SIZE; v16++) sdSpiByte(*buf_++);    //data


            while((v = sdSpiByte(0xFF)) == 0xFF);    //wait while card isnt answering
            while(sdSpiByte(0xFF) != 0xFF);    //wait while card is busy

            if((v & 0x1F) == 5){
                ret = true;
                break;
            }

        }while(++retry < 5);        //retry up to 5 times

        PIND = (UInt8)(1 << 3);    //LED_w

        return ret;
    #endif
}

