/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanether.cpp
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
#include "scanether.hpp"

#include <cstring>

EtherealTargetScan::EtherealTargetScan(Ethereal &etherl, ULONG arg2)
    : RangeScanner(etherl.loc, arg2), saucer(etherl)
{
  // code at 0001:00003560
  memset(this->tgtThings, 0, sizeof(this->tgtThings));
  memset(this->bestRanges, 255, sizeof(this->bestRanges));
  this->numTargets = 0;
}

void EtherealTargetScan::PerGrid()
{
// code at 0001:00003438
}


/******************************************************************************/
