/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanaware.cpp
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
#include "scanaware.hpp"

#include "data.hpp"

BaseAwarenessScan::BaseAwarenessScan(BaseScan &arg1, XY cor2, ULONG arg3, UBYTE plyrNo)
    : TimeSliceScan(arg1, cor2, arg3)
{
  // code at 0001:000365b4
  this->baseNo = arg1.baseNo;
  this->player = &bio.players[plyrNo];
  this->comp = &computers[plyrNo];
  this->aware = &this->comp->baseAwareness[this->baseNo];
  this->center = cor2;
}

UBYTE BaseAwarenessScan::PointInSector(XY cor1, XY cor2)
{
// code at 0001:00036574
}

void BaseAwarenessScan::PerGrid()
{
// code at 0001:000275a8
}

void BaseAwareness::Reset()
{
// code at 0001:00027995
}

AwarenessScan::AwarenessScan(Creature &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00083c1c
}

void AwarenessScan::PerGrid()
{
// code at 0001:00083440
}

void AwarenessScan::Do()
{
// code at 0001:00083208
}

/******************************************************************************/
