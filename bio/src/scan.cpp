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

near TurretScan::TurretScan( Building & )
{
// code at 0001:00040370
}

void TurretScan::PerGrid()
{
// code at 0001:000402f8
}

near SawmillScan::SawmillScan( Building & )
{
// code at 0001:00040278
}

void SawmillScan::PerGrid()
{
// code at 0001:00040214
}

near FarmScan::FarmScan( Building & )
{
// code at 0001:00040194
}

void FarmScan::PerGrid()
{
// code at 0001:000400dc
}

near ShieldScan::ShieldScan( Building & )
{
// code at 0001:00040064
}

void ShieldScan::BounceThingOffShield( MovingThing *, char unsigned )
{
// code at 0001:0003944c
}

void ShieldScan::PerGrid()
{
// code at 0001:0003959f
}

WeightedRangeScanner::WeightedRangeScanner( XY &, long unsigned, XY *, long )
{
// code at 0001:00084770
}

WeightedTgtRangeScanner::WeightedTgtRangeScanner( XY &, long unsigned )
{
// code at 0001:00084708
}

WeightedTgtRangeScanner::WeightedTgtRangeScanner( XY &, long unsigned, XY *, long )
{
// code at 0001:00084698
}

AwarenessScan::AwarenessScan( Creature & )
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

ChopperScan::ChopperScan( Creature & )
{
// code at 0001:000831b8
}

void ChopperScan::PerGrid()
{
// code at 0001:000830f0
}

near CollectorScan::CollectorScan( Creature &, char unsigned, char unsigned )
{
// code at 0001:00082f1c
}

void CollectorScan::PerGrid()
{
// code at 0001:00082cd0
}

near BuilderTreeScan::BuilderTreeScan( Creature & )
{
// code at 0001:00082c6c
}

void BuilderTreeScan::PerGrid()
{
// code at 0001:00082c08
}


/******************************************************************************/
