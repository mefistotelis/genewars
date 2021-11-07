/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file smemory.cpp
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
#include "bfmemory.h"

#include "bftypes.h"

struct TbMemoryAvailable { // sizeof=20
    ULONG TotalBytes; // offset=0
    ULONG TotalBytesFree; // offset=4
    ULONG TotalBytesUsed; // offset=8
    ULONG LargestBlock; // offset=12
    ULONG SmallestBlock; // offset=16
};

typedef struct TbMemoryAvailable TbMemoryAvailable;

struct mem_block { // sizeof=12
    UBYTE *Pointer; // offset=0
    ULONG Selector; // offset=4
    ULONG Size; // offset=8
};

typedef struct mem_block mem_block;

typedef struct mem_arena mem_arena;

struct mem_arena { // sizeof=18
    UBYTE *Pointer; // offset=0
    ULONG Size; // offset=4
    mem_arena *Child; // offset=8
    mem_arena *Parent; // offset=12
    UBYTE Used; // offset=16
    UBYTE Section; // offset=17
};

TbMemoryAvailable lbMemoryAvailable;

mem_block memory_blocks[2]; // size to be determined

mem_arena memory_arenas[2]; // size to be determined

int LbMemoryAlloc()
{
// code at 0001:0006f444
}

int LbMemoryAllocLow()
{
// code at 0001:0006f528
}

int LbMemoryCheck()
{
// code at 0001:0006f608
}

int LbMemoryFree()
{
// code at 0001:0006f712
}

int LbMemoryGrow()
{
// code at 0001:0006f7ce
}

int LbMemoryReset()
{
// code at 0001:0006f95f
}

int LbMemorySetup()
{
// code at 0001:0006f9de
}

int LbMemoryShrink()
{
// code at 0001:0006fce9
}

/******************************************************************************/
