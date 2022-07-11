#include "pxa255_PwrClk.h"


static Boolean pxa255pwrClkPrvClockMgrMemAccessF(void* userData, UInt32 pa, UInt8 size, Boolean write, void* buf){

    Pxa255pwrClk* pc = userData;
    UInt32 val = 0;

    if(size != 4) {
        err_str(__FILE__ ": Unexpected ");
    //    err_str(write ? "write" : "read");
    //    err_str(" of ");
    //    err_dec(size);
    //    err_str(" bytes to 0x");
    //    err_hex(pa);
    //    err_str("\r\n");
        return true;        //we do not support non-word accesses
    }

    pa = (pa - PXA255_CLOCK_MANAGER_BASE) >> 2;

    if(write) val = *(UInt32*)buf;

    switch(pa){

        case 0:        //CCCR
            if(write) pc->CCCR = val;
            else val = pc->CCCR;
            break;

        case 1:        //CKEN
            if(write) pc->CKEN = val;
            else val = pc->CKEN;
            break;

        case 2:        //OSCR
            if(!write) val = pc->OSCR;
            //no writing to this register
            break;
    }

    if(!write) *(UInt32*)buf = val;

    return true;
}

static Boolean pxa255pwrClkPrvPowerMgrMemAccessF(void* userData, UInt32 pa, UInt8 size, Boolean write, void* buf){

    Pxa255pwrClk* pc = userData;
    UInt32 val = 0;

    if(size != 4) {
        err_str(__FILE__ ": Unexpected ");
    //    err_str(write ? "write" : "read");
    //    err_str(" of ");
    //    err_dec(size);
    //    err_str(" bytes to 0x");
    //    err_hex(pa);
    //    err_str("\r\n");
        return true;        //we do not support non-word accesses
    }

    pa = (pa - PXA255_POWER_MANAGER_BASE) >> 2;

    if(write) val = *(UInt32*)buf;

    if(pa < 13){

        if(write) pc->pwrRegs[pa] = val;
        else val = pc->pwrRegs[pa];
    }

    if(!write) *(UInt32*)buf = val;

    return true;
}

Boolean pxa255pwrClkInit(Pxa255pwrClk* pc, ArmCpu* cpu, ArmMem* physMem){

    Boolean ok = true;

    __mem_zero(pc, sizeof(Pxa255pwrClk));

    pc->cpu = cpu;
    pc->CCCR = 0x00000122UL;    //set CCCR to almost default value (we use mult 32 not 27)
    pc->CKEN = 0x000179EFUL;    //set CKEN to default value
    pc->OSCR = 0x00000003UL;    //32KHz oscillator on and stable
    pc->pwrRegs[1] = 0x20;    //set PSSR
    pc->pwrRegs[3] = 3;    //set PWER
    pc->pwrRegs[4] = 3;    //set PRER
    pc->pwrRegs[5] = 3;    //set PFER
    pc->pwrRegs[12] = 1;    //set RCSR

    ok = ok && memRegionAdd(physMem, PXA255_CLOCK_MANAGER_BASE, PXA255_CLOCK_MANAGER_SIZE, pxa255pwrClkPrvClockMgrMemAccessF, pc);
    ok = ok && memRegionAdd(physMem, PXA255_POWER_MANAGER_BASE, PXA255_POWER_MANAGER_SIZE, pxa255pwrClkPrvPowerMgrMemAccessF, pc);

    return ok;
}

