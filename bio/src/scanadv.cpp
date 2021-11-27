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
#include "tables.hpp"
#include <cassert>

#define TILE_UNIT 256

PassableTerrainScan::PassableTerrainScan(SmartMovingThing &tng1, ULONG arg2)
    : PolarRangeScan(tng1.loc, arg2, 0), thing(tng1) // verify params
{
// code at 0001:00088da8
}

void PassableTerrainScan::PerGrid()
{
// code at 0001:00085790
}

ShotHitScan::ShotHitScan(Effect &eff1, SLONG shotRadius)
    : RangeScanner(eff1.loc, 0x100u), shot(eff1)
{
  // code at 0001:0004902c
  assert(shotRadius <= TILE_UNIT);
  this->creator = &eff1.thing;
  this->sqShotRadius = shotRadius * shotRadius;
  this->bestRange = 0x7FFFFFFF;
  this->hitThing = 0;
  this->ricochet = 0;
}

void ShotHitScan::PerGrid()
{
// code at 0001:00048ee0
}

FireScan::FireScan(Effect &eff1)
    : RangeScanner(eff1.loc, 0x100u), fire(eff1)
{
  // code at 0001:00048e90
  // done
}

void FireScan::PerGrid()
{
// code at 0001:00048cf8
}

MonolithHitScan::MonolithHitScan(Effect &eff1)
    : RangeScanner(eff1.loc, 0x100u), mono(eff1)
{
  // code at 0001:00048c94
  this->hitThing = 0;
  this->bestRange = 0x7FFFFFFF;
}

void MonolithHitScan::PerGrid()
{
// code at 0001:00048c08
}

StasisBoltScan::StasisBoltScan(Effect &eff1, SLONG shotRadius)
    : RangeScanner(eff1.loc, 0x100u), shot(eff1)
{
  // code at 0001:00048b78
  assert(shotRadius <= TILE_UNIT);
  this->sqShotRadius = shotRadius * shotRadius;
  this->hitThing = 0;
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
    this->plantBonus = URAND8(255);
  }
  this->lookForBones = lfBones;
  if ( this->lookForBones )
  {
    this->bonesBonus = URAND8(255);
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

HarvestClearScan::HarvestClearScan(PlSpec &pls1, BBOOL doCollect, BBOOL clrFlags)
    : RangeScanner(pls1.loc, pls1.FarmerHarvestRange()),
      pls(pls1), rGrid(pls1.Player().grid)
{
  // code at 0001:00077a20
  this->collect = doCollect;
  this->clearFlags = clrFlags;
  this->seedsGot = 0;
}

void HarvestClearScan::PerGrid()
{
// code at 0001:000778a0
}

void HarvestClearScan::Do()
{
// code at 0001:000777f8
}

FarmerPlantingScan::FarmerPlantingScan(PlSpec &pls1, BBOOL withAbility)
    : WeightedRangeScanner(pls1.loc, (withAbility ? (pls1.spec->ability / 30 + (URAND8(100) <= pls1.spec->resolve)) : 4) << 8),
      pls(pls1), pSpc(pSpecies[pls1.crewIDX])
{
  // code at 0001:00077624
  this->rangeInvert = (URAND8(10) < 5);
}

void FarmerPlantingScan::PerGrid()
{
// code at 0001:000774e8
}

SurvivalScan::SurvivalScan(PlSpec &pls1, ULONG arg2)
    : RangeScanner(pls1.loc, arg2), pls(pls1)
{
  // code at 0001:00077488
  this->tgtCreature = 0;
  this->bestRange = -1;
}

void SurvivalScan::PerGrid()
{
// code at 0001:000773cc
}

StudyCreatureScan::StudyCreatureScan(PlSpec &pls1)
    : RangeScanner(pls1.loc, 16 * pls1.spec->ability + 256), scientist(pls1)
{
  // code at 0001:00077358
  this->tgtCreature = 0;
  this->bestRange = -1;
}

void StudyCreatureScan::PerGrid()
{
// code at 0001:00077298
}

HealCreatureScan::HealCreatureScan(PlSpec &pls1)
    : RangeScanner(pls1.loc, 16 * pls1.spec->ability + 256), scientist(pls1)
{
  // code at 0001:00077224
  this->tgtCreature = 0;
  this->bestRange = -1;
 }

void HealCreatureScan::PerGrid()
{
// code at 0001:00077158
}

TestSlice::TestSlice(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : PolarSliceScan(cor1, arg2, arg3, arg4)
{
  // code at 0001:00036f40
  this->lowestPoint = 0x40000000;
}

void TestSlice::PerGrid()
{
// code at 0001:00036f24
}

TestEverything::TestEverything(XY cor1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6)
    : PolarEverythingScan(cor1, arg2, arg3, arg4, arg5, arg6)
{
  // code at 0001:00036ecc
  // done
}

void TestEverything::PerGrid()
{
// code at 0001:00036eb0
}

ChopTreeScan::ChopTreeScan(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:00036e70
  // done
}

void ChopTreeScan::PerGrid()
{
// code at 0001:00027570
}

ForestScan::ForestScan(XY cor1, ULONG arg2, UBYTE forsType, UBYTE plyrNo)
    : RangeScanner(cor1, arg2) // verify params
{
  // code at 0001:00027b98
  this->forestType = forsType;
  this->player = plyrNo;
  this->bestValue = 0;
  this->bestType = 0;
  for (int i = 0; i < 12; i++)
  {
    PSpecies const *specie = &pSpecies[i];
    this->plantGrowth[i] = specie->maxNeighbours + specie->lifeSpan + specie->range - specie->seedTime;
    this->forestValue[i] = 0;
  }
}

void ForestScan::PerGrid()
{
// code at 0001:00027ab5
}

BestForestScan::BestForestScan(XY cor1, ULONG arg2, UBYTE foundtSize, UBYTE plyrNo, UBYTE forsType)
    : PolarRangeScan(cor1, arg2, foundtSize)
{
  // code at 0001:00036e00
  this->foundationSize2 = foundtSize;
  this->forestType = forsType;
  this->player = plyrNo;
  this->bestValue = 0;
}

void BestForestScan::PerGrid()
{
// code at 0001:00027c5f
}

MineralScan::MineralScan(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:00036db4
  this->minerals = 0;
}

MineScan::MineScan(XY cor1, ULONG arg2, UBYTE foundtSize)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:00036d60
  this->mostMinerals = 0;
  this->mineFoundationSize = foundtSize;
}

PowerScan::PowerScan(XY cor1, ULONG arg2, UBYTE plyrNo)
    : PolarRangeScan(cor1, arg2, 1)
{
  // code at 0001:00036d08
  this->mostPower = 0;
  this->player = plyrNo;
}

void PowerScan::PerGrid()
{
// code at 0001:00027e58
}

OldPowerTally::OldPowerTally(XY cor1, ULONG arg2, UBYTE plyrNo)
    : PolarRangeScan(cor1, arg2, 3)
{
  // code at 0001:00036c1c
  this->landTiles = 0;
  this->satisfiedBuildings = 0;
  this->player = plyrNo;
}

void OldPowerTally::PerGrid()
{
// code at 0001:0002814d
}

NewPowerTally::NewPowerTally(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:00036bc8
  this->landTiles = 0;
  this->tiles = 0;
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
    : PolarRangeScan(cor1, arg2, 0)
{
  // code at 0001:000364c0
  // done
}

void NearestLand::PerGrid()
{
// code at 0001:00028107
}

PowerStationScan::PowerStationScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : PolarRangeScan(cor1, arg2, arg3)
{
  // code at 0001:00028204
  this->idx = arg4;
  this->maxLandTiles = 0;
  Computer *comp = &computers[this->idx];
  this->threshold = comp->personality.locationAwareness;
}

void PowerStationScan::PerGrid()
{
// code at 0001:0002827e
}

SiteScore::SiteScore(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:00036474
  this->score = 0;
}

void SiteScore::PerGrid()
{
// code at 0001:000285b4
}

PlantScan::PlantScan(XY cor1, ULONG arg2, UBYTE forsType, UBYTE plyrNo)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:000289b3
  this->forestType = forsType;
  this->player = plyrNo;
  this->bestValue = -1;
  this->bestType = 12;
  for (int i = 0; i < 12; i++)
  {
    PSpecies const *specie = &pSpecies[i];
    this->plantGrowth[i] = specie->maxNeighbours + specie->food;
    this->forestValue[i] = 0;
  }
}

void PlantScan::PerGrid()
{
// code at 0001:00028892
}

ClosestTree::ClosestTree(XY cor1, ULONG arg2)
    : PolarRangeScan(cor1, arg2, 0)
{
  // code at 0001:000363b8
  this->closestDistance = 0x40000000;
  this->loc = cor1;
}

void ClosestTree::PerGrid()
{
// code at 0001:00028af0
}

ClosestDeadCreature::ClosestDeadCreature(XY cor1, ULONG arg2)
    : PolarRangeScan(cor1, arg2, 0)
{
  // code at 0001:00036360
  this->closestDistance = 0x40000000;
  this->loc = cor1;
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
    : RangeScanner(cor1, arg2)
{
  // code at 0001:00036314
  this->trees = 0;
}

void CountTrees::PerGrid()
{
// code at 0001:00028e7a
}

GuardPointImportance::GuardPointImportance(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:000362c8
  this->importance = 0;
}

void GuardPointImportance::PerGrid()
{
// code at 0001:00028f01
}

ClosestTargets::ClosestTargets(XY cor1, ULONG arg2, UBYTE plyrNo, UBYTE arg4)
    : PolarRangeScan(cor1, arg2, 0), loc(cor1), player(plyrNo)
{
  // code at 0001:000361dc
  for (int i = 0; i < 3; i++)
  {
    this->currentTgt[i] = 0;
    for (int j = 0; j < 6; j++)
    {
      this->clTgts[i][j].idx = -1;
      this->clTgts[i][j].range = 255;
    }
  }
  this->defend = (arg4 == 2);
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

SatisfyBuildings::SatisfyBuildings(XY cor1, ULONG arg2, UBYTE foundtSize, UBYTE arg4, UBYTE plyrNo)
    : PolarRangeScan(cor1, arg2, foundtSize)
{
  // code at 0001:00036b4c
  this->buildingsToSatisfy = arg4;
  this->buildingsSatisfied = 0;
  this->stage = 0;
  this->foundationSize2 = foundtSize;
  this->maxLandTiles = 0;
  this->player = plyrNo;
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
