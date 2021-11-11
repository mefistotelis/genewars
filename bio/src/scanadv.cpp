/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanadv.cpp
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
#include "scanadv.hpp"

PassableTerrainScan::PassableTerrainScan(SmartMovingThing &arg1, ULONG arg2)
    : PolarRangeScan(arg1.loc, arg2, 0) // verify params
{
// code at 0001:00088da8
}

void PassableTerrainScan::PerGrid()
{
// code at 0001:00085790
}

ShotHitScan::ShotHitScan(Effect &arg1, SLONG arg2)
    : RangeScanner(arg1.loc, arg2) // verify params
{
// code at 0001:0004902c
}

void ShotHitScan::PerGrid()
{
// code at 0001:00048ee0
}

FireScan::FireScan(Effect &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00048e90
}

void FireScan::PerGrid()
{
// code at 0001:00048cf8
}

MonolithHitScan::MonolithHitScan(Effect &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00048c94
}

void MonolithHitScan::PerGrid()
{
// code at 0001:00048c08
}

StasisBoltScan::StasisBoltScan(Effect &arg1, SLONG arg2)
    : RangeScanner(arg1.loc, arg2) // verify params
{
// code at 0001:00048b78
}

void StasisBoltScan::PerGrid()
{
// code at 0001:00048a20
}

TurretScan::TurretScan(Building &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00040370
}

void TurretScan::PerGrid()
{
// code at 0001:000402f8
}

SawmillScan::SawmillScan(Building &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00040278
}

void SawmillScan::PerGrid()
{
// code at 0001:00040214
}

FarmScan::FarmScan(Building &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00040194
}

void FarmScan::PerGrid()
{
// code at 0001:000400dc
}

ShieldScan::ShieldScan(Building &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00040064
}

void ShieldScan::BounceThingOffShield(MovingThing *arg1, BBOOL arg2)
{
// code at 0001:0003944c
}

void ShieldScan::PerGrid()
{
// code at 0001:0003959f
}

CollectorScan::CollectorScan(Creature &arg1, BBOOL arg2, BBOOL arg3)
    : WeightedTgtRangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00082f1c
}

void CollectorScan::PerGrid()
{
// code at 0001:00082cd0
}

BuilderTreeScan::BuilderTreeScan(Creature &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00082c6c
}

void BuilderTreeScan::PerGrid()
{
// code at 0001:00082c08
}

ChopperScan::ChopperScan(Creature &arg1)
    : WeightedTgtRangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:000831b8
}

void ChopperScan::PerGrid()
{
// code at 0001:000830f0
}

/******************************************************************************/
