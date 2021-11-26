/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file pointscan.cpp
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
#include "pointscan.hpp"

PointSample::PointSample(XY arg1, ULONG arg2, ULONG arg3)
{
// code at 0001:00036ab4
}

PointSample::PointSample(XY arg1, ULONG arg2, UBYTE arg3)
{
// code at 0001:000369fc
}

void PointSample::Do()
{
// code at 0001:00028485
}

NewBaseScan::NewBaseScan(XY cor1, ULONG arg2, UBYTE plyrNo, UBYTE arg4)
    : PointSample(cor1, arg2, arg4)
{
  // code at 0001:00036410
  this->player = plyrNo;
  this->origin = cor1;
  this->bestScore = 0;
}

void NewBaseScan::PerGrid()
{
// code at 0001:00028625
}

BestForestSample::BestForestSample(XY cor1, ULONG arg2, UBYTE plyrNo, UBYTE forsType, ULONG arg5)
    : PointSample(cor1, arg2, arg5)
{
  // code at 0001:00036998
  this->forestType = forsType;
  this->player = plyrNo;
  this->bestValue = 0;
}

void BestForestSample::PerGrid()
{
// code at 0001:00028a6c
}

/******************************************************************************/
