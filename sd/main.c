#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "pico/time.h"
#include "pico/stdio.h"
#include "ff.h"
#include "diskio.h"

#include "hardware/gpio.h"

char  sbuff[64];
#define DEF_FATBUFF  1024
char  buff_fattest[ DEF_FATBUFF ];


int  fat_test_init( void )
{
    DSTATUS  ret;
    int  result = 0;

    ret = disk_initialize( 0 );
    if( ret & STA_NOINIT ) {
        result = -1;
    }

    return  result;
}


int  fat_test_read( char *buff, int bsize )
{
    FRESULT  ret;
    FATFS  fs;
    FIL  fil;
    UINT  rdsz ;

    ret = f_mount( &fs, "", 0 );
    if( ret != FR_OK ) {
        return  -1;
    }
    ret = f_open( &fil, "test.txt", FA_READ );
    if( ret != FR_OK ) {
        return  -2;
    }

    ret = f_read( &fil, buff, (UINT)bsize, &rdsz );
    if( ret != FR_OK ) {
        return  -3;
    }

    f_close( &fil );

    return  (int)rdsz;
}


int  fat_test_write( char *filename, char *buff, int size )
{
    FRESULT  ret;
    FATFS  fs;
    FIL  fil;
    UINT  wsize ;

    ret = f_mount( &fs, "", 1 );
    if( ret != FR_OK ) {
        return  -1;
    }
    
    ret = f_open( &fil, filename, FA_WRITE|FA_CREATE_ALWAYS );
    if( ret != FR_OK ) {
        return  -2;
    }

    ret = f_write( &fil, buff, (UINT)size, &wsize );
    if( ret != FR_OK ) {
        return  -3;
    }

    f_close( &fil );

    return  (int)wsize;
}


int  main( void )
{
    int  ret;
    int  wsize;
    
    stdio_init_all();
    sleep_ms(10000);

    
    ret = fat_test_init();
    if( ret != 0 ) {
        printf("fat_test_init()  ERROR!\n" );
    }
    else {
        puts("SUCCESS");
    }

    ret = fat_test_read( buff_fattest, DEF_FATBUFF );
    sprintf( sbuff, "fat_test_read()  ret = %d\n", ret );
    puts(sbuff);
    
    if( ret > 0 ) {
        wsize = ret;
        ret = fat_test_write( "w_test1.txt", buff_fattest, wsize );
        sprintf(sbuff, "fat_test_write()  ret = %d\n", ret );
        puts(sbuff);

        ret = fat_test_write( "w_test2.txt", buff_fattest, wsize );
        sprintf(sbuff, "fat_test_write()  ret = %d\n", ret );
        puts(sbuff );
    }
    buff_fattest[ 10 ] = 0xd;
    buff_fattest[ 11 ] = 0xa;
    buff_fattest[ 12 ] = 0x0;
    puts(buff_fattest);

    return  0;
}

