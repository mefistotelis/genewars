/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scan.hpp
 *     *Scan classes.
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
#ifndef SCANADV_HPP_
#define SCANADV_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "smvthing.hpp"
#include "scan.hpp"
#include "effect.hpp"
#include "building.hpp"
#include "creature.hpp"

class PassableTerrainScan : public PolarRangeScan { // sizeof=60
public:
    //PassableTerrainScan(PassableTerrainScan *rscan1);
    void PerGrid();
    PassableTerrainScan(SmartMovingThing &arg1, ULONG arg2);
    //void (**__vfptr)();
    SmartMovingThing thing;
    BBOOL foundAPlace; // offset=51
    XY goToXY; // offset=52
};

class ShotHitScan : public RangeScanner { // sizeof=62
public:
    //ShotHitScan(ShotHitScan *arg1);
    void PerGrid();
    ShotHitScan(Effect &arg1, SLONG arg2);
    //void (**__vfptr)();
    ULONG bestRange;
    ULONG sqShotRadius;
    Thing *creator;
    Effect shot;
    Thing *hitThing; // offset=41
    BBOOL ricochet; // offset=45
};

class FireScan : public RangeScanner { // sizeof=45
public:
    //FireScan(FireScan *arg1);
    void PerGrid();
    FireScan(Effect &arg1);
    //void (**__vfptr)();
    Effect fire;
};

class MonolithHitScan : public RangeScanner { // sizeof=53
public:
    //MonolithHitScan(MonolithHitScan *arg1);
    void PerGrid();
    MonolithHitScan(Effect &arg1);
    //void (**__vfptr)();
    ULONG bestRange;
    Effect mono;
    Thing *hitThing; // offset=41
};

class StasisBoltScan : public RangeScanner { // sizeof=50
public:
    //StasisBoltScan(class StasisBoltScan *arg1);
    void PerGrid();
    StasisBoltScan(Effect &arg1, SLONG arg2);
    //void (**__vfptr)();
    ULONG sqShotRadius;
    Effect shot;
    BBOOL hitThing; // offset=41
};

class TurretScan : public RangeScanner { // sizeof=53
public:
    //TurretScan(TurretScan *arg1);
    void PerGrid();
    TurretScan(Building &arg1);
    //void (**__vfptr)();
    SLONG closestRange;
    Building turret;
    Thing *tgtThing; // offset=41
};

class SawmillScan : public RangeScanner { // sizeof=53
public:
    //SawmillScan(SawmillScan *arg1);
    void PerGrid();
    SawmillScan(Building &arg1);
    //void (**__vfptr)();
    SLONG bestValue;
    Building sawmill;
    Plant *tgtPlant; // offset=41
};

class FarmScan : public RangeScanner { // sizeof=53
public:
    //FarmScan(FarmScan *arg1);
    void PerGrid();
    FarmScan(Building &arg1);
    //void (**__vfptr)();
    SLONG bestValue;
    Building farm;
    Thing *tgt; // offset=41
};

class ShieldScan : public RangeScanner { // sizeof=49
public:
    //ShieldScan(class ShieldScan *arg1);
    void BounceThingOffShield(MovingThing *arg1, BBOOL arg2);
    void PerGrid();
    ShieldScan(Building &arg1);
    //void (**__vfptr)();
    ULONG squareShieldRange;
    Building shield;
};

class CollectorScan : public WeightedTgtRangeScanner { // sizeof=246
public:
    //CollectorScan(CollectorScan *arg1);
    void PerGrid();
    CollectorScan(Creature &arg1, BBOOL arg2, BBOOL arg3);
    //void (**__vfptr)();
    UBYTE bonesBonus;
    UBYTE plantBonus;
    BBOOL lookForBones;
    BBOOL lookForPlants;
    Creature c;
};

class BuilderTreeScan : public RangeScanner { // sizeof=49
public:
    //BuilderTreeScan(BuilderTreeScan *arg1);
    void PerGrid();
    BuilderTreeScan(Creature &arg1);
    //void (**__vfptr)();
    ULONG bestRange;
    Plant *tgtPlant; // offset=41
};

class ChopperScan : public WeightedTgtRangeScanner { // sizeof=110
public:
    //ChopperScan(ChopperScan *arg1);
    void PerGrid();
    ChopperScan(Creature &arg1);
    //void (**__vfptr)();
    int bestRanges[15];
    Plant *closestPerSector[15];
};

class FindHighestBuildingSite : public RangeScanner { // sizeof=59
public:
    //FindHighestBuildingSite(FindHighestBuildingSite *arg1);
    BBOOL FoundASite();
    void PerGrid();
    FindHighestBuildingSite(XY arg1, ULONG arg2, UBYTE arg3);
    //void (**__vfptr)();
    UBYTE foundationSize;
    SLONG highestPoint;
    XY bestPos; // offset=41
    UWORD errors[3]; // offset=45
    UBYTE error_type; // offset=53
};

class TestSlice : public PolarSliceScan { // sizeof=65
public:
    //TestSlice(TestSlice *arg1);
    void PerGrid();
    TestSlice(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    //void (**__vfptr)();
    SLONG lowestPoint;
    XY bestPos; // offset=48
    UWORD errors[3]; // offset=52
    UBYTE error_type; // offset=60
};

class TestEverything : public PolarEverythingScan { // sizeof=60
public:
    //TestEverything(TestEverything *arg1);
    void PerGrid();
    TestEverything(XY arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6);
    //void (**__vfptr)();
    XY bestPos; // offset=47
    UWORD errors[3]; // offset=51
    UBYTE error_type; // offset=59
};

class ChopTreeScan : public RangeScanner { // sizeof=41
public:
    //ChopTreeScan(ChopTreeScan *arg1);
    //void PerGrid();
    ChopTreeScan(XY arg1, ULONG arg2);
    void (**__vfptr)();
};

class BestForestScan : public PolarRangeScan { // sizeof=62
public:
    //BestForestScan(BestForestScan *arg1);
    void PerGrid();
    BestForestScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5);
    //void (**__vfptr)();
    SLONG bestValue;
    UBYTE forestType;
    UBYTE player;
    UBYTE foundationSize;
    XY bestPos; // offset=51
};

class MineralScan : public RangeScanner { // sizeof=45
public:
    //MineralScan(MineralScan *arg1);
    void PerGrid();
    MineralScan(XY arg1, ULONG arg2);
    //void (**__vfptr)();
    ULONG minerals; // offset=41
};

class MineScan : public RangeScanner { // sizeof=50
public:
    //MineScan(MineScan *arg1);
    void PerGrid();
    MineScan(XY arg1, ULONG arg2, UBYTE arg3);
    //void (**__vfptr)();
    UBYTE mineFoundationSize;
    ULONG mostMinerals;
    XY bestPos; // offset=41
};

class PowerScan : public PolarRangeScan { // sizeof=59
public:
    //PowerScan(PowerScan *arg1);
    void PerGrid();
    PowerScan(XY arg1, ULONG arg2, UBYTE arg3);
    //void (**__vfptr)();
    UBYTE player;
    UBYTE foundationSize;
    UBYTE mostPower;
    XY bestPos; // offset=51
    UBYTE bestType; // offset=55
};

class NearestBuildingSite : public PolarEverythingScan { // sizeof=53
public:
    //NearestBuildingSite(class NearestBuildingSite *arg1);
    void PerGrid();
    NearestBuildingSite(XY arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5);
    //void (**__vfptr)();
    UBYTE foundationSize;
    XY bestPos; // offset=47
    UBYTE type; // offset=51
};

class OldPowerTally : public PolarRangeScan { // sizeof=57
public:
    //OldPowerTally(OldPowerTally *arg1);
    OldPowerTally(XY arg1, ULONG arg2, UBYTE arg3);
    void PerGrid();
    //void (**__vfptr)();
    UBYTE player;
    UBYTE satisfiedBuildings; // offset=51
    ULONG landTiles; // offset=52
};

class NewPowerTally : public RangeScanner { // sizeof=49
public:
    //NewPowerTally(NewPowerTally *arg1);
    NewPowerTally(XY arg1, ULONG arg2);
    void PerGrid();
    //void (**__vfptr)();
    ULONG landTiles; // offset=41
    ULONG tiles; // offset=45
};

class SatisfyBuildings : public PolarRangeScan { // sizeof=64
public:
    //SatisfyBuildings(SatisfyBuildings *arg1);
    SatisfyBuildings(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5);
    void PerGrid();
    void Do();
    //void (**__vfptr)();
    UBYTE player;
    ULONG maxLandTiles;
    UBYTE buildingsSatisfied;
    UBYTE buildingsToSatisfy;
    UBYTE foundationSize;
    XY bestPos; // offset=51
    UBYTE stage; // offset=55
};

#endif // SCANADV_HPP_
/******************************************************************************/
