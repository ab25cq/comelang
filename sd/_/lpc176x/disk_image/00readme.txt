This project includes disk image feature. It is one of the virtual drive feature
to mount a FAT volume image file on the FAT volume as showin in disk_image.png.

To turn-on the disk image feature, define VIRTUAL_DISK with physical drive number
as virtual drive somewhere in diskio.c.

The virtual drive feature is implemented in mmc_176x_ssp.c as code blocks
enclosed with #if VIRTUAL_DISK ... #endif. It will able be ported to any projects
without any platform dependency.

The disk image feature can be used as follows:

#define VIRTUAL_DISK 1	/* Assign pd# 1 as virtual disk (in diskio.h) */

f_mount("0:", &fs1);                       /* Initialize logical drive 0 */
f_open(&file1, "0:file1.txt", FA_READ);    /* This is normal file access */

disk_ioctl(VIRTUAL_DISK, OPEN_VIRTUAL_DISK, "0:disk.img");  /* Initialize virtual disk (opens disk image file) */

f_mount("1:", &fs2);                       /* Initialize logical drive 1 associated with virtual disk */
f_open(&file2, "1:file.txt", FA_READ);     /* Accessing a file in the virtual disk */

