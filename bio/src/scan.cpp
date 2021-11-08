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

near PassableTerrainScan::PassableTerrainScan( SmartMovingThing &, long unsigned )
{
// code at 0001:00088da8
}

near ScanRecord::ScanRecord()
{
// code at 0001:00088d70
}

int ScanRecord::Hash( XY )
{
// code at 0001:00088d34
}

void PassableTerrainScan::PerGrid()
{
// code at 0001:00085790
}

void ScanRecord::Add( XY )
{
// code at 0001:000857e9
}

char unsigned ScanRecord::IsRecorded( XY )
{
// code at 0001:0008584c
}

void RangeScan::Init( XY &, long unsigned, char unsigned )
{
// code at 0001:0005d721
}

void RangeScanner::Do()
{
// code at 0001:0005d926
}

void WeightedRangeScanner::Do()
{
// code at 0001:0005d9f1
}

void WeightedTgtRangeScanner::Do()
{
// code at 0001:0005dbb7
}


/******************************************************************************/
