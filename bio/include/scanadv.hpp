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
#include "plspec.hpp"
#include "research.hpp"

class PassableTerrainScan : public PolarRangeScan { // sizeof=60
public:
    BBOOL foundAPlace; // offset=51
    XY goToXY; // offset=52
    SmartMovingThing &thing;
//internal:
    //void (**__vfptr)(); // offset=47
public:
    PassableTerrainScan(SmartMovingThing &tng1, ULONG arg2);
    virtual void PerGrid();
    //PassableTerrainScan(PassableTerrainScan const &rscan1); -- generate default copy constructor
};

class ShotHitScan : public RangeScanner { // sizeof=62
public:
    Thing *hitThing; // offset=41
    BBOOL ricochet; // offset=45
    Effect shot;
    Thing *creator; // offset=50
    ULONG sqShotRadius; // offset=54
    ULONG bestRange; // offset=58
//internal:
    //void (**__vfptr)(); // offset=37
public:
    ShotHitScan(Effect &eff1, SLONG arg2);
    virtual void PerGrid();
    //ShotHitScan(ShotHitScan const &rscan1); -- generate default copy constructor
};

class FireScan : public RangeScanner { // sizeof=45
public:
    Effect fire;
//internal:
    //void (**__vfptr)(); // offset=37
public:
    FireScan(Effect &eff1);
    virtual void PerGrid();
    //FireScan(FireScan const &arg1);
};

class MonolithHitScan : public RangeScanner { // sizeof=53
public:
    Thing *hitThing; // offset=41
    Effect mono;
    ULONG bestRange; // offset=49
//internal:
    //void (**__vfptr)(); // offset=37
public:
    MonolithHitScan(Effect &eff1);
    virtual void PerGrid();
    //MonolithHitScan(MonolithHitScan const &rscan1); -- generate default copy constructor
};

class StasisBoltScan : public RangeScanner { // sizeof=50
public:
    BBOOL hitThing; // offset=41
    Effect &shot;
    ULONG sqShotRadius; // offset=46
//internal:
    //void (**__vfptr)(); // offset=37
public:
    StasisBoltScan(Effect &eff1, SLONG arg2);
    virtual void PerGrid();
    //StasisBoltScan(StasisBoltScan const &rscan1); -- generate default copy constructor
};

class TurretScan : public RangeScanner { // sizeof=53
public:
    Thing *tgtThing; // offset=41
    Building &turret;
    SLONG closestRange; // offset=49
//internal:
    //void (**__vfptr)(); // offset=37
public:
    TurretScan(Building &bldng);
    virtual void PerGrid();
    //TurretScan(TurretScan const &rscan1); -- generate default copy constructor
};

class SawmillScan : public RangeScanner { // sizeof=53
public:
    Plant *tgtPlant; // offset=41
    Building &sawmill;
    SLONG bestValue; // offset=49
//internal:
    //void (**__vfptr)(); // offset=37
public:
    SawmillScan(Building &bldng);
    virtual void PerGrid();
    //SawmillScan(SawmillScan const &rscan1); -- generate default copy constructor
};

class FarmScan : public RangeScanner { // sizeof=53
public:
    Thing *tgt; // offset=41
    Building &farm;
    SLONG bestValue; // offset=49
//internal:
    //void (**__vfptr)(); // offset=37
public:
    FarmScan(Building &bldng);
    virtual void PerGrid();
    //FarmScan(FarmScan const &rscan1); -- generate default copy constructor
};

class ShieldScan : public RangeScanner { // sizeof=49
public:
    Building &shield;
    ULONG squareShieldRange; // offset=45
//internal:
    //void (**__vfptr)(); // offset=37
public:
    ShieldScan(Building &bldng);
    virtual void PerGrid();
private:
    void BounceThingOffShield(MovingThing *tng1, BBOOL arg2);
//public:
    //ShieldScan(ShieldScan const &rscan1); -- generate default copy constructor
};

class CollectorScan : public WeightedTgtRangeScanner { // sizeof=246
public:
    Creature &c;
    BBOOL lookForPlants; // offset=242
    BBOOL lookForBones; // offset=243
    UBYTE plantBonus; // offset=244
    UBYTE bonesBonus; // offset=245
//internal:
    //void (**__vfptr)(); // offset=37
public:
    CollectorScan(Creature &creatr, BBOOL arg2, BBOOL arg3);
    virtual void PerGrid();
    //CollectorScan(CollectorScan const &rscan1); -- generate default copy constructor
};

class BuilderTreeScan : public RangeScanner { // sizeof=49
public:
    Plant *tgtPlant; // offset=41
    ULONG bestRange; // offset=45
//internal:
    //void (**__vfptr)(); // offset=37
public:
    BuilderTreeScan(Creature &creatr);
    virtual void PerGrid();
    //BuilderTreeScan(BuilderTreeScan const &rscan1); -- generate default copy constructor
};

class ChopperScan : public WeightedTgtRangeScanner { // sizeof=366
public:
    Plant *closestPerSector[16]; // offset=238
    int bestRanges[16]; // offset=302
//internal:
    //void (**__vfptr)(); // offset=37
public:
    ChopperScan(Creature &creatr);
    virtual void PerGrid();
    //ChopperScan(ChopperScan const &rscan1); -- generate default copy constructor
};

class TestSlice : public PolarSliceScan { // sizeof=65
public:
    XY bestPos; // offset=48
    UWORD errors[4]; // offset=52
    UBYTE error_type; // offset=60
    SLONG lowestPoint; // offset=61
//internal:
    //void (**__vfptr)(); // offset=44
public:
    TestSlice(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    virtual void PerGrid();
    //TestSlice(TestSlice const &rscan1); -- generate default copy constructor
};

class TestEverything : public PolarEverythingScan { // sizeof=60
public:
    XY bestPos; // offset=47
    UWORD errors[4]; // offset=51
    UBYTE error_type; // offset=59
//internal:
    //void (**__vfptr)(); // offset=43
public:
    TestEverything(XY cor1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6);
    virtual void PerGrid();
    //TestEverything(TestEverything const &rscan1); -- generate default copy constructor
};

class ChopTreeScan : public RangeScanner { // sizeof=41
//internal:
    //void (**__vfptr)(); // offset=37
public:
    ChopTreeScan(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //ChopTreeScan(ChopTreeScan const &rscan1); -- generate default copy constructor
};

class BestForestScan : public PolarRangeScan { // sizeof=62
public:
    XY bestPos; // offset=51
    UBYTE foundationSize2; // offset=55, parent has first
    UBYTE player; // offset=56
    UBYTE forestType; // offset=57
    SLONG bestValue; // offset=58
//internal:
    //void (**__vfptr)(); // offset=47
public:
    BestForestScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5);
    virtual void PerGrid();
    //BestForestScan(BestForestScan const &rscan1); -- generate default copy constructor
};

class MineralScan : public RangeScanner { // sizeof=45
public:
    ULONG minerals; // offset=41
//internal:
    //void (**__vfptr)(); // offset=37
public:
    MineralScan(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //MineralScan(MineralScan const &rscan1); -- generate default copy constructor
};

class MineScan : public RangeScanner { // sizeof=50
public:
    XY bestPos; // offset=41
    ULONG mostMinerals; // offset=45
    UBYTE mineFoundationSize; // offset=49
//internal:
    //void (**__vfptr)(); // offset=37
public:
    MineScan(XY cor1, ULONG arg2, UBYTE arg3);
    virtual void PerGrid();
    //MineScan(MineScan const &rscan1); -- generate default copy constructor
};

class PowerScan : public PolarRangeScan { // sizeof=59
public:
    XY bestPos; // offset=51
    UBYTE bestType; // offset=55
    UBYTE mostPower; // offset=56
    UBYTE foundationSize2; // offset=57, parent has first
    UBYTE player; // offset=58
//internal:
    //void (**__vfptr)(); // offset=47
public:
    PowerScan(XY cor1, ULONG arg2, UBYTE arg3);
    virtual void PerGrid();
    //PowerScan(PowerScan const &rscan1); -- generate default copy constructor
};

class OldPowerTally : public PolarRangeScan { // sizeof=57
public:
    UBYTE satisfiedBuildings; // offset=51
    ULONG landTiles; // offset=52
    UBYTE player; // offset=56
//internal:
    //void (**__vfptr)(); // offset=47
public:
    virtual void PerGrid();
    OldPowerTally(XY cor1, ULONG arg2, UBYTE arg3);
    //OldPowerTally(OldPowerTally const &rscan1); -- generate default copy constructor
};

class NewPowerTally : public RangeScanner { // sizeof=49
public:
    ULONG landTiles; // offset=41
    ULONG tiles; // offset=45
//internal:
    //void (**__vfptr)(); // offset=37
public:
    virtual void PerGrid();
    NewPowerTally(XY cor1, ULONG arg2);
    //NewPowerTally(NewPowerTally const &rscan1); -- generate default copy constructor
};

class SatisfyBuildings : public PolarRangeScan { // sizeof=64
public:
    XY bestPos; // offset=51
    UBYTE stage; // offset=55
    UBYTE foundationSize2; // offset=56, parent has first
    UBYTE buildingsToSatisfy; // offset=57
    UBYTE buildingsSatisfied; // offset=58
    ULONG maxLandTiles; // offset=59
    UBYTE player; // offset=63
//internal:
    //void (**__vfptr)(); // offset=47
public:
    void Do();
    virtual void PerGrid();
    SatisfyBuildings(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5);
    //SatisfyBuildings(SatisfyBuildings const &rscan1); -- generate default copy constructor
};

class ForestScan : public RangeScanner { // sizeof=109
public:
    SLONG bestValue; // offset=41
    UBYTE bestType; // offset=45
    UBYTE foundationSize; // offset=46
    UBYTE forestType; // offset=47
    UBYTE player; // offset=48
    SLONG forestValue[12]; // offset=49
    SBYTE plantGrowth[12]; // offset=97
//internal:
    //void (**__vfptr)(); // offset=37
public:
    ForestScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    virtual void PerGrid();
    //ForestScan(ForestScan const &rscan1); -- generate default copy constructor
};

class HarvestScan : public PolarRangeScan { // sizeof=58
public:
    XY bestPos; // offset=51
    UBYTE numOfTrees; // offset=55
    SWORD maxHealth; // offset=56
//internal:
    //void (**__vfptr)(); // offset=47
public:
    HarvestScan(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //HarvestScan(HarvestScan const &rscan1); -- generate default copy constructor
};

class NearestLand : public PolarRangeScan { // sizeof=55
public:
    XY bestPos; // offset=51
//internal:
    //void (**__vfptr)(); // offset=47
public:
    NearestLand(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //NearestLand(NearestLand const &rscan1); -- generate default copy constructor
};

class PowerStationScan : public PolarRangeScan { // sizeof=64
public:
    XY bestPos; // offset=51
    ULONG maxLandTiles; // offset=55
    ULONG threshold; // offset=59
    UBYTE idx; // offset=63
//internal:
    //void (**__vfptr)(); // offset=47
public:
    PowerStationScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    virtual void PerGrid();
    //PowerStationScan(PowerStationScan const &rscan1); -- generate default copy constructor
};

class SiteScore : public RangeScanner { // sizeof=45
public:
    ULONG score; // offset=41
//internal:
    //void (**__vfptr)(); // offset=37
public:
    SiteScore(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //SiteScore(SiteScore const &rscan1); -- generate default copy constructor
};

class PlantScan : public RangeScanner { // sizeof=108
public:
    SLONG bestValue; // offset=41
    UBYTE bestType; // offset=45
    UBYTE forestType; // offset=46
    UBYTE player; // offset=47
    SLONG forestValue[12]; // offset=48
    SBYTE plantGrowth[12]; // offset=96
//internal:
    //void (**__vfptr)(); // offset=37
public:
    PlantScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    virtual void PerGrid();
    //PlantScan(PlantScan const &rscan1); -- generate default copy constructor
};

class ClosestTree : public PolarRangeScan { // sizeof=63
public:
    Thing *closestPlant; // offset=51
    ULONG closestDistance; // offset=55
    XY loc; // offset=59
//internal:
    //void (**__vfptr)(); // offset=47
public:
    ClosestTree(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //ClosestTree(ClosestTree const &rscan1); -- generate default copy constructor
};

class ClosestDeadCreature : public PolarRangeScan { // sizeof=63
public:
    Thing *closestDeadCreature; // offset=51
    ULONG closestDistance; // offset=55
    XY loc; // offset=59
//internal:
    //void (**__vfptr)(); // offset=47
public:
    ClosestDeadCreature(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //ClosestDeadCreature(ClosestDeadCreature const &rscan1); -- generate default copy constructor
};

class ClosestEnemy : public PolarRangeScan { // sizeof=64
public:
    Thing *closestEnemy; // offset=51
    ULONG closestDistance; // offset=55
    XY loc; // offset=59
    UBYTE player; // offset=63
//internal:
    //void (**__vfptr)(); // offset=47
public:
    ClosestEnemy(XY cor1, ULONG arg2, UBYTE arg3);
    virtual void PerGrid();
    //ClosestEnemy(ClosestEnemy const &rscan1); -- generate default copy constructor
};

class CountTrees : public RangeScanner { // sizeof=45
public:
    SLONG trees; // offset=41
//internal:
    //void (**__vfptr)(); // offset=37
public:
    CountTrees(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //CountTrees(CountTrees const &rscan1); -- generate default copy constructor
};

class GuardPointImportance : public RangeScanner { // sizeof=43
public:
    SWORD importance; // offset=41
//internal:
    //void (**__vfptr)(); // offset=37
public:
    GuardPointImportance(XY cor1, ULONG arg2);
    virtual void PerGrid();
    //GuardPointImportance(GuardPointImportance const &rscan1); -- generate default copy constructor
};

class CloseTgt { // sizeof=4
public:
    SWORD idx; // offset=0
    SWORD range; // offset=2
public:
    BBOOL Valid();
};

class ClosestTargets : public PolarRangeScan { // sizeof=132
public:
    CloseTgt clTgts[3][6]; // offset=51
    SBYTE currentTgt[3]; // offset=123
    XY loc; // offset=126
    UBYTE player; // offset=130
    BBOOL defend; // offset=131
//internal:
    //void (**__vfptr)(); // offset=47
public:
    ClosestTargets(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    virtual void PerGrid();
    //ClosestTargets(ClosestTargets const &rscan1); -- generate default copy constructor
};

class LumberjackScan : public RangeScanner { // sizeof=57
public:
    Plant *tgtPlant; // offset=41
    PlSpec pls;
    SLONG bestValue; // offset=49
    SLONG dirBonus; // offset=53
//internal:
    //void (**__vfptr)(); // offset=37
public:
    LumberjackScan(PlSpec &arg1);
    virtual void PerGrid();
    //LumberjackScan(LumberjackScan const &rscan1); -- generate default copy constructor
};

class HarvestClearScan : public RangeScanner { // sizeof=55
public:
    ULONG seedsGot; // offset=41
    PlSpec pls;
    ResearchGrid rGrid;
    BBOOL collect; // offset=53
    BBOOL clearFlags; // offset=54
//internal:
    //void (**__vfptr)(); // offset=37
public:
    HarvestClearScan(PlSpec &arg1, BBOOL arg2, BBOOL arg3);
    virtual void PerGrid();
    void Do();
    //HarvestClearScan(HarvestClearScan const &rscan1); -- generate default copy constructor
};

class FarmerPlantingScan : public WeightedRangeScanner { // sizeof=115
public:
    PlSpec pls;
    PSpecies pSpc;
    BBOOL rangeInvert; // offset=114
//internal:
    //void (**__vfptr)(); // offset=37
public:
    FarmerPlantingScan(PlSpec &arg1, BBOOL arg2);
    virtual void PerGrid();
    //FarmerPlantingScan(FarmerPlantingScan const &rscan1); -- generate default copy constructor
};

class SurvivalScan : public RangeScanner { // sizeof=53
public:
    Creature *tgtCreature; // offset=41
    PlSpec pls;
    ULONG bestRange; // offset=49
//internal:
    //void (**__vfptr)(); // offset=37
public:
    SurvivalScan(PlSpec &arg1, ULONG arg2);
    virtual void PerGrid();
    //SurvivalScan(SurvivalScan const &rscan1); -- generate default copy constructor
};

class StudyCreatureScan : public RangeScanner { // sizeof=53
public:
    Creature *tgtCreature; // offset=41
    PlSpec scientist;
    ULONG bestRange; // offset=49
//internal:
    //void (**__vfptr)(); // offset=37
public:
    StudyCreatureScan(PlSpec &arg1);
    virtual void PerGrid();
    //StudyCreatureScan(StudyCreatureScan const &rscan1); -- generate default copy constructor
};

class HealCreatureScan : public RangeScanner { // sizeof=53
public:
    Creature *tgtCreature; // offset=41
    PlSpec scientist;
    ULONG bestRange; // offset=49
//internal:
    //void (**__vfptr)(); // offset=37
public:
    HealCreatureScan(PlSpec &arg1);
    virtual void PerGrid();
    //HealCreatureScan(HealCreatureScan const &rscan1); -- generate default copy constructor
};

#endif // SCANADV_HPP_
/******************************************************************************/
