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

#include "data.hpp"

PassableTerrainScan::PassableTerrainScan(SmartMovingThing &tng1, ULONG arg2)
    : PolarRangeScan(tng1.loc, arg2, 0), thing(tng1) // verify params
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

TurretScan::TurretScan(Building &bldng)
    : RangeScanner(bldng.loc, bldng.TurretRange()), turret(bldng)
{
  // code at 0001:00040370
  this->closestRange = 0x7FFFFFFF;
  this->tgtThing = NULL;
}

void TurretScan::PerGrid()
{
// code at 0001:000402f8
}

SawmillScan::SawmillScan(Building &bldng)
    : RangeScanner(bldng.loc, (bldng.stage == 1) ? 0x400u : 0x800u), sawmill(bldng)
{
  // code at 0001:00040278
  this->bestValue = 0x7FFFFFFF;
  this->tgtPlant = NULL;
}

void SawmillScan::PerGrid()
{
// code at 0001:00040214
}

FarmScan::FarmScan(Building &bldng)
    : RangeScanner(bldng.loc, (bldng.stage == 1) ? 0x400u : 0x600u), farm(bldng)
{
  // code at 0001:00040194
  this->bestValue = 0x7FFFFFFF;
  this->tgt = NULL;
}

void FarmScan::PerGrid()
{
// code at 0001:000400dc
}

ShieldScan::ShieldScan(Building &bldng)
    : RangeScanner(bldng.loc, bldng.ShieldRange() + 384), shield(bldng)
{
  // code at 0001:00040064
  this->squareShieldRange = bldng.ShieldRange();
  this->squareShieldRange *= this->squareShieldRange;
}

void ShieldScan::BounceThingOffShield(MovingThing *arg1, BBOOL arg2)
{
// code at 0001:0003944c
}

void ShieldScan::PerGrid()
{
// code at 0001:0003959f
}

CollectorScan::CollectorScan(Creature &crtr, BBOOL lfPlants, BBOOL lfBones)
    : WeightedTgtRangeScanner(crtr.loc, crtr.Species().smarts + 512, crtr.IsMemoryValid() ? NULL : &crtr.memory, 300), c(crtr)
{
  // code at 0001:00082f1c
  this->lookForPlants = lfPlants;
  if ( this->lookForPlants )
  {
    this->plantBonus = control_urand(8, 255);
  }
  this->lookForBones = lfBones;
  if ( this->lookForBones )
  {
    this->bonesBonus = control_urand(8, 255);
  }
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

LumberjackScan::LumberjackScan(PlSpec &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00077b34
}

void LumberjackScan::PerGrid()
{
// code at 0001:00077aa8
}

HarvestClearScan::HarvestClearScan(PlSpec &arg1, BBOOL arg2, BBOOL arg3)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00077a20
}

void HarvestClearScan::PerGrid()
{
// code at 0001:000778a0
}

void HarvestClearScan::Do()
{
// code at 0001:000777f8
}

FarmerPlantingScan::FarmerPlantingScan(PlSpec &arg1, BBOOL arg2)
    : WeightedRangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00077624
}

void FarmerPlantingScan::PerGrid()
{
// code at 0001:000774e8
}

SurvivalScan::SurvivalScan(PlSpec &arg1, ULONG arg2)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00077488
}

void SurvivalScan::PerGrid()
{
// code at 0001:000773cc
}

StudyCreatureScan::StudyCreatureScan(PlSpec &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00077358
}

void StudyCreatureScan::PerGrid()
{
// code at 0001:00077298
}

HealCreatureScan::HealCreatureScan(PlSpec &arg1)
    : RangeScanner(arg1.loc, 0) // verify params
{
// code at 0001:00077224
}

void HealCreatureScan::PerGrid()
{
// code at 0001:00077158
}

TestSlice::TestSlice(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : PolarSliceScan(cor1, arg2, arg3, arg4) // verify params
{
// code at 0001:00036f40
}

void TestSlice::PerGrid()
{
// code at 0001:00036f24
}

TestEverything::TestEverything(XY cor1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6)
    : PolarEverythingScan(cor1, arg2, arg3, arg4, arg5, arg6) // verify params
{
// code at 0001:00036ecc
}

void TestEverything::PerGrid()
{
// code at 0001:00036eb0
}

ChopTreeScan::ChopTreeScan(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:00036e70
}

void ChopTreeScan::PerGrid()
{
// code at 0001:00027570
}

ForestScan::ForestScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:00027b98
}

void ForestScan::PerGrid()
{
// code at 0001:00027ab5
}

BestForestScan::BestForestScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5)
    : PolarRangeScan(cor1, arg2, arg3) // verify params
{
// code at 0001:00036e00
}

void BestForestScan::PerGrid()
{
// code at 0001:00027c5f
}

MineralScan::MineralScan(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:00036db4
}

MineScan::MineScan(XY cor1, ULONG arg2, UBYTE arg3)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:00036d60
}

PowerScan::PowerScan(XY cor1, ULONG arg2, UBYTE arg3)
    : PolarRangeScan(cor1, arg2, arg3) // verify params
{
// code at 0001:00036d08
}

void PowerScan::PerGrid()
{
// code at 0001:00027e58
}

OldPowerTally::OldPowerTally(XY cor1, ULONG arg2, UBYTE arg3)
    : PolarRangeScan(cor1, arg2, arg3) // verify params
{
// code at 0001:00036c1c
}

void OldPowerTally::PerGrid()
{
// code at 0001:0002814d
}

NewPowerTally::NewPowerTally(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:00036bc8
}

void NewPowerTally::PerGrid()
{
// code at 0001:000281cc
}

void HarvestScan::PerGrid()
{
// code at 0001:00027d1c
}

NearestLand::NearestLand(XY cor1, ULONG arg2)
    : PolarRangeScan(cor1, arg2, 0) // verify params
{
// code at 0001:000364c0
}

void NearestLand::PerGrid()
{
// code at 0001:00028107
}

PowerStationScan::PowerStationScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : PolarRangeScan(cor1, arg2, arg3) // verify params
{
// code at 0001:00028204
}

void PowerStationScan::PerGrid()
{
// code at 0001:0002827e
}

SiteScore::SiteScore(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:00036474
}

void SiteScore::PerGrid()
{
// code at 0001:000285b4
}

PlantScan::PlantScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:000289b3
}

void PlantScan::PerGrid()
{
// code at 0001:00028892
}

ClosestTree::ClosestTree(XY cor1, ULONG arg2)
    : PolarRangeScan(cor1, arg2, 0) // verify params
{
// code at 0001:000363b8
}

void ClosestTree::PerGrid()
{
// code at 0001:00028af0
}

ClosestDeadCreature::ClosestDeadCreature(XY cor1, ULONG arg2)
    : PolarRangeScan(cor1, arg2, 0) // verify params
{
// code at 0001:00036360
}

void ClosestDeadCreature::PerGrid()
{
// code at 0001:00028b8c
}

void ClosestEnemy::PerGrid()
{
// code at 0001:00028c90
}

CountTrees::CountTrees(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:00036314
}

void CountTrees::PerGrid()
{
// code at 0001:00028e7a
}

GuardPointImportance::GuardPointImportance(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:000362c8
}

void GuardPointImportance::PerGrid()
{
// code at 0001:00028f01
}

ClosestTargets::ClosestTargets(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : PolarRangeScan(cor1, arg2, arg3) // verify params
{
// code at 0001:000361dc
}

void ClosestTargets::PerGrid()
{
// code at 0001:00028fd9
}

void MineralScan::PerGrid()
{
// code at 0001:00027dae
}

void MineScan::PerGrid()
{
// code at 0001:00027dd9
}

SatisfyBuildings::SatisfyBuildings(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5)
    : PolarRangeScan(cor1, arg2, arg3) // verify params
{
// code at 0001:00036b4c
}

void SatisfyBuildings::Do()
{
// code at 0001:0002835e
}

void SatisfyBuildings::PerGrid()
{
// code at 0001:000283d1
}

BBOOL CloseTgt::Valid()
{
// code at 0001:000373f4
}


/******************************************************************************/
