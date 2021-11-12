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

NewBaseScan::NewBaseScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : PointSample(arg1, arg2, arg3) // verify params
{
// code at 0001:00036410
}

void NewBaseScan::PerGrid()
{
// code at 0001:00028625
}

BestForestSample::BestForestSample(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4, ULONG arg5)
    : PointSample(arg1, arg2, arg3) // verify params
{
// code at 0001:00036998
}

void BestForestSample::PerGrid()
{
// code at 0001:00028a6c
}

/******************************************************************************/
