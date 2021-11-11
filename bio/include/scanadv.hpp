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

class PassableTerrainScan : PolarRangeScan { // sizeof=60
    //PassableTerrainScan(PassableTerrainScan *rscan1);
    void PerGrid();
    PassableTerrainScan(SmartMovingThing arg1, ULONG arg2);
    //void (**__vfptr)();
    SmartMovingThing thing;
    BBOOL foundAPlace; // offset=51
    XY goToXY; // offset=52
};

class ShotHitScan : RangeScanner { // sizeof=62
    //ShotHitScan(ShotHitScan *arg1);
    void PerGrid();
    ShotHitScan(Effect arg1, SLONG arg2);
    //void (**__vfptr)();
    ULONG bestRange;
    ULONG sqShotRadius;
    Thing *creator;
    Effect shot;
    Thing *hitThing; // offset=41
    BBOOL ricochet; // offset=45
};

class FireScan : RangeScanner { // sizeof=45
    class FireScan * FireScan(class FireScan *arg1);
    void PerGrid();
    class FireScan * FireScan(Effect arg1);
    void (**__vfptr)();
    Effect fire;
};

class MonolithHitScan : RangeScanner { // sizeof=53
    //MonolithHitScan(MonolithHitScan *arg1);
    void PerGrid();
    class MonolithHitScan * MonolithHitScan(Effect arg1);
    //void (**__vfptr)();
    ULONG bestRange;
    Effect mono;
    Thing *hitThing; // offset=41
};

class StasisBoltScan : RangeScanner { // sizeof=50
    //StasisBoltScan(class StasisBoltScan *arg1);
    void PerGrid();
    StasisBoltScan(Effect arg1, SLONG arg2);
    //void (**__vfptr)();
    ULONG sqShotRadius;
    Effect shot;
    BBOOL hitThing; // offset=41
};

class TurretScan : RangeScanner { // sizeof=53
    class TurretScan * TurretScan(class TurretScan *arg1);
    void PerGrid();
    class TurretScan * TurretScan(Building arg1);
    //void (**__vfptr)();
    SLONG closestRange;
    Building turret;
    Thing *tgtThing; // offset=41
};

class SawmillScan : RangeScanner { // sizeof=53
    //SawmillScan(SawmillScan *arg1);
    void PerGrid();
    SawmillScan(Building arg1);
    //void (**__vfptr)();
    SLONG bestValue;
    Building sawmill;
    Plant *tgtPlant; // offset=41
};

class FarmScan : RangeScanner { // sizeof=53
    //FarmScan(FarmScan *arg1);
    void PerGrid();
    FarmScan(Building arg1);
    //void (**__vfptr)();
    SLONG bestValue;
    Building farm;
    Thing *tgt; // offset=41
};

class ShieldScan : RangeScanner { // sizeof=49
    //ShieldScan(class ShieldScan *arg1);
    void BounceThingOffShield(MovingThing *arg1, BBOOL arg2);
    void PerGrid();
    ShieldScan(Building arg1);
    //void (**__vfptr)();
    ULONG squareShieldRange;
    Building shield;
};

class AwarenessScan : RangeScanner { // sizeof=228
    //AwarenessScan(AwarenessScan *arg1);
    void Do();
    void PerGrid();
    AwarenessScan(Creature arg1);
    //void (**__vfptr)();
    ASpecies speci;
    Creature c;
    int mates[15]; // offset=45
    int threats[15]; // offset=46
    int terrain[15]; // offset=109
    int enemies[15]; // offset=110
    SWORD foundEnemies; // offset=173
    int friends[15]; // offset=174
    SWORD foundThreats; // offset=175
    SWORD foundFriends; // offset=177
    SWORD foundFood; // offset=179
    SWORD foundMates; // offset=181
    UBYTE bestEnemies; // offset=183
    UBYTE bestFriends; // offset=184
    UBYTE bestFood; // offset=185
    UBYTE bestMates; // offset=186
    UBYTE bestTerrain; // offset=187
    UBYTE bestThreats; // offset=188
    UBYTE foodRankings[2]; // offset=189
    Thing *bestThing; // offset=192
    Creature *bestMate; // offset=196
    Thing *bestEnemy; // offset=200
    Thing *bestThreat; // offset=204
    SLONG bestRanking; // offset=208
    SLONG bestMateRanking; // offset=212
    SLONG bestEnemyRanking; // offset=216
    SLONG bestThreatRanking; // offset=220
    int food[15]; // offset=237
};

class CollectorScan : WeightedTgtRangeScanner { // sizeof=246
    //CollectorScan(CollectorScan *arg1);
    void PerGrid();
    CollectorScan(Creature arg1, BBOOL arg2, BBOOL arg3);
    //void (**__vfptr)();
    UBYTE bonesBonus;
    UBYTE plantBonus;
    BBOOL lookForBones;
    BBOOL lookForPlants;
    Creature c;
};

class BuilderTreeScan : RangeScanner { // sizeof=49
    //BuilderTreeScan(BuilderTreeScan *arg1);
    void PerGrid();
    BuilderTreeScan(Creature arg1);
    //void (**__vfptr)();
    ULONG bestRange;
    Plant *tgtPlant; // offset=41
};

class ChopperScan : WeightedTgtRangeScanner { // sizeof=110
    //ChopperScan(ChopperScan *arg1);
    void PerGrid();
    ChopperScan(Creature arg1);
    //void (**__vfptr)();
    int bestRanges[15];
    Plant *closestPerSector[15];
};

class ScanRecord { // sizeof=128
    //ScanRecord(ScanRecord *rscan1);
    int Hash(XY arg1);
    BBOOL IsRecorded(XY arg1);
    void Add(XY arg1);
    //ScanRecord();
    BBOOL used[127];
    XY xy[127];
};


#endif // SCANADV_HPP_
/******************************************************************************/
