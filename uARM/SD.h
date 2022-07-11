#ifndef _SD_H_
#define _SD_H_


#include "types.h"


typedef struct{

	UInt32 numSec;
	UInt8 HC	: 1;
	UInt8 inited	: 1;
	UInt8 SD	: 1;

}SD;

#define SD_BLOCK_SIZE		512

Boolean sdInit(SD* sd);
UInt32 sdGetNumSec(SD* sd);
Boolean sdSecRead(SD* sd, UInt32 sec, void* buf);
Boolean sdSecWrite(SD* sd, UInt32 sec, void* buf);



#endif
