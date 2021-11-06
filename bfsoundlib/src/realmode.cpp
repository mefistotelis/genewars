/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file realmode.cpp
 *     Implementation of related functions.
 * @par Purpose:
 *     Unknown.
 * @par Comment:
 *     None.
 * @author   Tomasz Lis
 * @date     12 Nov 2008 - 05 Nov 2021
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#include "realmode.h"

#include "bfdos.h"

struct realmode_registers { // size=unknown
    int a1;
};

typedef struct realmode_registers realmode_registers;

short unsigned EAL_init_realmode_mem()
{
// code at 0001:000d6820
}

short unsigned EAL_alloc_dos_mem( short unsigned )
{
// code at 0001:000d6890
}

short unsigned EAL_free_dos_mem( short unsigned )
{
// code at 0001:000d68d0
}

SREGS EAL_psr;

REGS EAL_pr;

realmode_registers EAL_rmr;

short unsigned EAL_realmode_segment;

short unsigned EAL_realmode_selector;


/******************************************************************************/
