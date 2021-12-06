/******************************************************************************/
// Bullfrog Engine Emulation Library - for use to remake classic games like
// Syndicate Wars, Magic Carpet, Genewars or Dungeon Keeper.
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

struct mem_block { // sizeof=12
    UBYTE *Pointer; // offset=0
    ULONG Selector; // offset=4
    ULONG Size; // offset=8
};

struct mem_arena { // sizeof=18
    UBYTE *Pointer; // offset=0
    ULONG Size; // offset=4
    mem_arena *Child; // offset=8
    mem_arena *Parent; // offset=12
    UBYTE Used; // offset=16
    UBYTE Section; // offset=17
};

struct TbMemoryAvailable lbMemoryAvailable;

mem_block memory_blocks[256];

mem_arena memory_arenas[256];

void * LbMemoryAlloc(TbMemSize size)
{
  TbMemSize pad_size;
  struct mem_arena *marena;
  struct mem_arena *match_marena;
  TbMemSize match_size;

  LbMemorySetup();
  pad_size = (size + 3) & ~0x04u;
  match_size = -1;
  match_marena = 0;
  for ( marena = memory_arenas; marena != NULL; marena = marena->Child )
  {
    if ( pad_size <= marena->Size
      && marena->Size < match_size
      && !marena->Used
      && !memory_blocks[marena->Section].Selector )
    {
      match_size = marena->Size;
      match_marena = marena;
    }
  }
  if ( !match_marena || !split_arena(match_marena, pad_size) )
    return LbMemoryAllocLow();
  LbMemoryCheck();
  memset(match_marena->Pointer, 0, pad_size);
  return match_marena->Pointer;
}

int LbMemoryAllocLow()
{
// code at 0001:0006f528
}

int LbMemoryCheck()
{
  struct mem_arena *marena;

  lbMemoryAvailable.TotalBytes = 0;
  lbMemoryAvailable.TotalBytesFree = 0;
  lbMemoryAvailable.TotalBytesUsed = 0;
  lbMemoryAvailable.LargestBlock = 0;
  lbMemoryAvailable.SmallestBlock = -1;
  for ( marena = memory_arenas; marena != NULL; marena = marena->Child )
  {
    if ( marena->Used )
    {
      lbMemoryAvailable.TotalBytesUsed += marena->Size;
      lbMemoryAvailable.TotalBytes += marena->Size;
    }
    else
    {
      lbMemoryAvailable.TotalBytesFree += marena->Size;
      if ( marena->Size > lbMemoryAvailable.LargestBlock )
        lbMemoryAvailable.LargestBlock = marena->Size;
      if ( marena->Size < lbMemoryAvailable.SmallestBlock )
        lbMemoryAvailable.SmallestBlock = marena->Size;
      lbMemoryAvailable.TotalBytes += marena->Size;
    }
  }
  lbMemoryAvailable.TotalBytes &= ~0x04u;
  lbMemoryAvailable.TotalBytesFree &= ~0x04u;
  lbMemoryAvailable.TotalBytesUsed &= ~0x04u;
  lbMemoryAvailable.LargestBlock &= ~0x04u;
  lbMemoryAvailable.SmallestBlock &= ~0x04u;
  return 1;
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
