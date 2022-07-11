#ifndef _CP14_H_
#define _CP14_H_

#include "types.h"
#include "CPU.h"
#include "pxa255_IC.h"

typedef struct{

	ArmCpu* cpu;
	Pxa255ic* ic;

	/* Performance Monitor */
	UInt32 PMNC;	// Performance Monitor Control Register
	UInt32 CCNT;	// Clock Count Register
	UInt32 PMN[2];	// Performance Count Register 0-1
	UInt32 tick;

	/* XXX Clock and Power Management */
	Boolean turbo;

	/* XXX Software Debug */
}ArmCP14;

void cp14Init(ArmCP14* cp14, ArmCpu* cpu, Pxa255ic* ic);
void cp14Tick(ArmCP14* cp14);
void cp14Event(ArmCP14 *cp14, UInt8 evtnum);

#endif
