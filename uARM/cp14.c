#include "cp14.h"

/* PMNC register */
#define    PMNC_E            (1UL << 0)
#define    PMNC_P            (1UL << 1)
#define    PMNC_C            (1UL << 2)
#define    PMNC_D            (1UL << 3)
#define    PMNC_INTEN        (7UL << 4)
#define    PMNC_INTEN_PMN0        (1UL << 4)
#define    PMNC_INTEN_PMN1        (1UL << 5)
#define    PMNC_INTEN_CCNT        (1UL << 6)
#define    PMNC_FLAG        (7UL << 8)
#define    PMNC_FLAG_PMN(i)    (1UL << (8 + (i)))
#define    PMNC_FLAG_PMN0        PMNC_FLAG_PMN(0)
#define    PMNC_FLAG_PMN1        PMNC_FLAG_PMN(1)
#define    PMNC_FLAG_CCNT        (1UL << 10)
#define    PMNC_EVTCOUNT0        (0xffUL << 12)
#define    PMNC_EVTCOUNT1        (0xffUL << 20)
#define    PMNC_ALL        (PMNC_E|PMNC_P|PMNC_C|PMNC_D|PMNC_INTEN|PMNC_FLAG|PMNC_EVTCOUNT0|PMNC_EVTCOUNT1)
#define    PMNC_UPDATE        (PMNC_E|PMNC_D|PMNC_INTEN|PMNC_EVTCOUNT0|PMNC_EVTCOUNT1)

#define    PMNC_EVTNUMBER(cp14,n)    ((cp14->PMNC >> (12 + (n) * 8)) & 0xff)

static void cp14PrvRaiseLowerInts(ArmCP14* cp14){

    pxa255icInt(cp14->ic, PXA255_I_PMU, (cp14->PMNC & (PMNC_INTEN_PMN0|PMNC_FLAG_PMN0)) == (PMNC_INTEN_PMN0|PMNC_FLAG_PMN0));
    pxa255icInt(cp14->ic, PXA255_I_PMU, (cp14->PMNC & (PMNC_INTEN_PMN1|PMNC_FLAG_PMN1)) == (PMNC_INTEN_PMN1|PMNC_FLAG_PMN1));
    pxa255icInt(cp14->ic, PXA255_I_PMU, (cp14->PMNC & (PMNC_INTEN_CCNT|PMNC_FLAG_CCNT)) == (PMNC_INTEN_CCNT|PMNC_FLAG_CCNT));
}

static Boolean cp14prvCoprocRegXferFunc(struct ArmCpu* cpu, void* userData, Boolean two, Boolean read, UInt8 op1, UInt8 Rx, UInt8 CRn, UInt8 CRm, UInt8 op2){

    ArmCP14* cp14 = userData;
    UInt32 val = 0;


    if(!read) val = cpuGetRegExternal(cpu, Rx);

    if(CRm == 0 && op2 == 0 && op1 == 0 && !two){

        switch(CRn){

            case 0:    // PMNC
                if(read) val = cp14->PMNC & PMNC_ALL;
                else{

                    if((val & PMNC_E) && !(cp14->PMNC & PMNC_E)) cp14->tick = 0;
                    if(val & PMNC_P) cp14->PMN[0] = cp14->PMN[1] = 0;
                    if(val & PMNC_C) cp14->CCNT = 0;
                    if(val & PMNC_FLAG_PMN0) cp14->PMNC &= ~PMNC_FLAG_PMN0;
                    if(val & PMNC_FLAG_PMN1) cp14->PMNC &= ~PMNC_FLAG_PMN1;
                    if(val & PMNC_FLAG_CCNT) cp14->PMNC &= ~PMNC_FLAG_CCNT;
                    cp14->PMNC &= ~PMNC_UPDATE;
                    cp14->PMNC |= val & PMNC_UPDATE;
                    cp14PrvRaiseLowerInts(cp14);
                }
                goto success;

            case 1:    // CCNT
                if(read) val = cp14->CCNT;
                else cp14->CCNT = val;
                goto success;

            case 2:    // PMN0
                if(read) val = cp14->PMN[0];
                else cp14->PMN[0] = val;
                goto success;

            case 3:    // PMN1
                if(read) val = cp14->PMN[1];
                else cp14->PMN[1] = val;
                goto success;

            case 6:    // CCLKCFG
                if(read) val = 0;
                else{
                    cp14->turbo = (val & 1) != 0;
                    if(val & 2){

                        err_str("Set speed mode");
                    //    err_str("(CCCR + cp14 reg6) to 0x");
                    //    err_hex(pc->CCCR);
                    //    err_str(", 0x");
                    //    err_hex(val);
                    //    err_str("\r\n");
                    }
                }
                goto success;

            case 7:    // PWRMODE
                if(read) val = cp14->turbo ? 1 : 0;
                else if(val != 0){

                //    fprintf(stderr, "Someone tried to set processor power mode (cp14 reg7) to 0x%08lX\n", val);
                }
                goto success;
        }
    }

    return false;

success:

    if(read) cpuSetReg(cpu, Rx, val);
    return true;
}

void cp14Init(ArmCP14* cp14, ArmCpu* cpu, Pxa255ic* ic){

    ArmCoprocessor cp;

    cp.regXfer = cp14prvCoprocRegXferFunc;
    cp.dataProcessing = NULL;
    cp.memAccess = NULL;
    cp.twoRegF = NULL;
    cp.userData = cp14;

    __mem_zero(cp14, sizeof(ArmCP14));
    cp14->cpu = cpu;
    cp14->ic = ic;

    cpuCoprocessorRegister(cpu, 14, &cp);
}

void cp14Deinit(ArmCP14* cp14){

    cpuCoprocessorUnregister(cp14->cpu, 14);
}

void cp14Tick(ArmCP14* cp14){

    if(cp14->PMNC & PMNC_E){

        cp14->tick++;

        if(!(cp14->PMNC & PMNC_D) || (cp14->tick & 0x0000003FUL) == 0){

            cp14->CCNT++;
            if(cp14->CCNT == 0) cp14->PMNC |= PMNC_FLAG_CCNT;
        }
        cp14PrvRaiseLowerInts(cp14);
    }
}

void cp14Event(ArmCP14 *cp14, UInt8 evtnum){

    UInt8 i;

    if(cp14->PMNC & PMNC_E){

        for(i = 0; i < 1; i++){
            if(PMNC_EVTNUMBER(cp14, i) == evtnum){

                cp14->PMN[i]++;
                if(cp14->PMN[i] == 0) cp14->PMNC |= PMNC_FLAG_PMN(i);
            }
        }
        cp14PrvRaiseLowerInts(cp14);
    }
}

