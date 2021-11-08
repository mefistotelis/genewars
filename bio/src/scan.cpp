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

void ResearchGrid::CountAMonolithTouch( Creature * )
{
// code at 0001:00049314
}

void Event::Free()
{
// code at 0001:000490e0
}

near ShotHitScan::ShotHitScan( Effect &, long )
{
// code at 0001:0004902c
}

void ShotHitScan::PerGrid()
{
// code at 0001:00048ee0
}

near FireScan::FireScan( Effect & )
{
// code at 0001:00048e90
}

void FireScan::PerGrid()
{
// code at 0001:00048cf8
}

near MonolithHitScan::MonolithHitScan( Effect & )
{
// code at 0001:00048c94
}

void MonolithHitScan::PerGrid()
{
// code at 0001:00048c08
}

near StasisBoltScan::StasisBoltScan( Effect &, long )
{
// code at 0001:00048b78
}

void StasisBoltScan::PerGrid()
{
// code at 0001:00048a20
}

void FlickerStuff::Invalidate()
{
// code at 0001:000489fc
}

char unsigned FlickerStuff::Valid()
{
// code at 0001:000489d0
}

void FlickerHandler::Free( char unsigned )
{
// code at 0001:000489a0
}


/******************************************************************************/
