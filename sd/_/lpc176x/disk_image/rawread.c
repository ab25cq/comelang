/*-------------------------------------*/
/* RawRead - Diskette Image Creator    */
/*-------------------------------------*/

#include <windows.h>
#include <stdio.h>

#define FDD		"A:"


int main (int argc, char* argv[])
{
	HANDLE h;
	DISK_GEOMETRY parms;
	DWORD rb, sectors, tc, sz_cyl;
	char dev[8];
	BYTE *buff;


	if (argc != 2) {
		printf("Diskette Image Creator\n");
		printf("Usage: rawread <out_file>\n");
		return -1;
	}

	/* Open floppy disk device */
	printf("Opening \"" FDD "\"\r\n");
	sprintf(dev, "\\\\.\\%s", FDD);
	h = CreateFile(dev, GENERIC_READ, 0, 0, OPEN_EXISTING, FILE_FLAG_NO_BUFFERING, 0);
	if (h == INVALID_HANDLE_VALUE || !DeviceIoControl(h, IOCTL_DISK_GET_DRIVE_GEOMETRY, 0, 0, &parms, sizeof parms, &rb, 0)) {
		printf("Could not get drive geometry.\n");
		return 1;
	}

	/* Get drive geometry and allocate read buffer */
	sectors = parms.SectorsPerTrack * parms.TracksPerCylinder * (DWORD)parms.Cylinders.QuadPart;	/* Total count of sectors */
	sz_cyl = parms.SectorsPerTrack * parms.TracksPerCylinder * parms.BytesPerSector;				/* Cylinder size */
	printf("Drive size is %uK bytes in %u bytes/sector.\n", sectors * parms.BytesPerSector / 1024, parms.BytesPerSector);
	buff = VirtualAlloc(0, sectors * parms.BytesPerSector, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	if (!buff) {
		printf("Too large medium.\r\n");
		return 1;
	}

	/* Read disk data into the buffer */
	for (tc = 0; tc < (DWORD)parms.Cylinders.QuadPart; tc++) {
		printf("\rReading track %u/%u...", tc + 1, (DWORD)parms.Cylinders.QuadPart);
		if (!ReadFile(h, &buff[sz_cyl * tc], sz_cyl, &rb, 0) || rb != sz_cyl) {
			printf(" failed to read disk.\r\n");
			return 1;
		}
	}
	CloseHandle(h);
	printf("Ok.\n");

	/* Write it to the file */
	printf("Writing to \"%s\"...", argv[1]);
	h = CreateFile(argv[1], GENERIC_WRITE, 0, 0, CREATE_ALWAYS, 0, 0);
	if (h == INVALID_HANDLE_VALUE) {
		printf("Could not create output file.\r\n");
		return 1;
	}
	if (!WriteFile(h, buff, sectors * parms.BytesPerSector, &rb, 0) || rb != sectors * parms.BytesPerSector) {
		printf("Could not write output file.\r\n");
		return 1;
	}
	CloseHandle(h);

	printf("Ok.\n");
	return 0;
}
