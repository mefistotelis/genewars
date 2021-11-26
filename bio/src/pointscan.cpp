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

PointSample::PointSample(XY cor1, ULONG range, ULONG arg3)
{
  // code at 0001:00036ab4
  this->sectorSize = 326 * arg3 / range;
  if (this->sectorSize < 1 || this->sectorSize > 2048)
    this->sectorSize = 256;
  this->foundAThing = 0;
  this->center = cor1;
  this->range = range;
  this->squareRange = range * range;
}

PointSample::PointSample(XY cor1, ULONG range, UBYTE arg3)
{
  // code at 0001:000369fc
  if (arg3 > 0)
    this->sectorSize = 2048 / arg3;
  else
    this->sectorSize = 256;
  if (this->sectorSize < 1 || this->sectorSize > 2048)
    this->sectorSize = 256;
  this->foundAThing = 0;
  this->center = cor1;
  this->range = range;
  this->squareRange = range * range;
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
