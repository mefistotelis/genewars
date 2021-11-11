/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scan.cpp
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
#include "scan.hpp"

RangeScan::RangeScan(XY &arg1, ULONG arg2, BBOOL arg3)
{
// code at 0001:00004ad8
}

void BaseScan::Reset()
{
// code at 0001:00027a86
}

void RangeScan::Init(XY &arg1, ULONG arg2, BBOOL arg3)
{
// code at 0001:0005d721
}

RangeScanner::RangeScanner(XY &arg1, ULONG arg2)
    : RangeScan(arg1, arg2, true) // verify params
{
// code at 0001:00004a74
}

void RangeScanner::Do()
{
// code at 0001:0005d926
}

PolarRangeScan::PolarRangeScan(XY &arg1, ULONG arg2, UBYTE arg3)
    : RangeScan(arg1, arg2, 0) // verify params
{
// code at 0001:000371ac
}

void PolarRangeScan::Do()
{
// code at 0001:00026334
}

void PolarRangeScan::displayDebug(XY arg1, ULONG &arg2)
{
// code at 0001:0002678c
}

WeightedRangeScanner::WeightedRangeScanner(XY &arg1, ULONG arg2)
    : RangeScanner(arg1, arg2) // verify params
{
// code at 0001:00078154
}

WeightedRangeScanner::WeightedRangeScanner(XY &arg1, ULONG arg2, XY *arg3, SLONG arg4)
    : RangeScanner(arg1, arg2) // verify params
{
// code at 0001:00084770
}

void WeightedRangeScanner::Do()
{
// code at 0001:0005d9f1
}

PolarSliceScan::PolarSliceScan(XY &arg1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : RangeScan(arg1, arg2, 0) // verify params
{
// code at 0001:00037124
}

void PolarSliceScan::displayDebug(XY arg1, UBYTE arg2, ULONG &arg3)
{
// code at 0001:000267ef
}

void PolarSliceScan::Do()
{
// code at 0001:00026923
}

PolarEverythingScan::PolarEverythingScan(XY &arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6)
    : RangeScan(arg1, arg2, 0) // verify params
{
// code at 0001:00037088
}

void PolarEverythingScan::displayDebug(XY arg1, UBYTE arg2, ULONG &arg3)
{
// code at 0001:00026889
}

BBOOL PolarEverythingScan::Scan(UBYTE arg1)
{
// code at 0001:00036664
}

void PolarEverythingScan::Do()
{
// code at 0001:00026dc0
}

/******************************************************************************/
