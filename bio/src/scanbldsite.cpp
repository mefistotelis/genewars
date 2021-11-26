/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanbldsite.cpp
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
#include "scanbldsite.hpp"

#include "data.hpp"

FindHighestBuildingSite::FindHighestBuildingSite(XY cor1, ULONG arg2, UBYTE foundtSize)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:00036f98
  this->highestPoint = 0;
  this->foundationSize = foundtSize;
}

void FindHighestBuildingSite::PerGrid()
{
// code at 0001:000273ff
}

void FindLowestBuildingSite::PerGrid()
{
// code at 0001:000274aa
}

/*char unsigned NearestBuildingSite::__defarg()
{
// code at 0001:00036ce8
}*/

NearestBuildingSite::NearestBuildingSite(XY cor1, ULONG arg2, ULONG arg3, UBYTE foundtSize, UBYTE arg5)
    : PolarEverythingScan(cor1, arg2, arg3, foundtSize, 0xff, 1)
{
  // code at 0001:00036c7c
  this->foundationSize2 = foundtSize;
  this->type = arg5;
}

void NearestBuildingSite::PerGrid()
{
// code at 0001:00027fa8
}

NearestPoweredBuildingSite::NearestPoweredBuildingSite(XY cor1, ULONG arg2, UBYTE foundtSize, UBYTE plyrNo)
    : PolarRangeScan(cor1, arg2, foundtSize)
{
  // code at 0001:00036504
  this->foundationSize2 = foundtSize;
  this->b = &bio.players[plyrNo].theBase;
}

void NearestPoweredBuildingSite::PerGrid()
{
// code at 0001:0002804d
}




/******************************************************************************/
