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
#ifndef SCAN_HPP_
#define SCAN_HPP_

#include "bftypes.h"

class RangeScan { // sizeof=20
    RangeScan * RangeScan(RangeScan *arg1);
    void Init(XY *arg1, ULONG arg2, BBOOL arg3);
    RangeScan(XY *arg1, ULONG arg2, BBOOL arg3);
    XY tgt;
    SWORD yHi;
    SWORD yLo;
    SWORD xHi;
    SWORD xLo;
    XY xy;
    SWORD yD;
    SWORD xD;
};

class RangeScanner : RangeScan { // sizeof=41
    class RangeScanner * RangeScanner(class RangeScanner *arg1);
    void PerGrid();
    void Do();
    class RangeScanner * RangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
};

class PolarRangeScan : RangeScan { // sizeof=51
    PolarRangeScan * PolarRangeScan(PolarRangeScan *arg1);
    void displayDebug(XY arg1, ULONG *arg2);
    void PerGrid();
    void Do();
    PolarRangeScan(XY arg1, ULONG arg2, UBYTE arg3);
    void (**__vfptr)();
    ULONG ringRange;
    BBOOL satisfied;
    UBYTE foundationSize;
    ULONG tileRange;
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
};

class PassableTerrainScan : PolarRangeScan { // sizeof=60
    class PassableTerrainScan * PassableTerrainScan(class PassableTerrainScan *arg1);
    void PerGrid();
    class PassableTerrainScan * PassableTerrainScan(SmartMovingThing arg1, ULONG arg2);
    void (**__vfptr)();
    SmartMovingThing thing;
    BBOOL foundAPlace; // offset=51
    XY goToXY; // offset=52
};

class ScanRecord { // sizeof=128
    class ScanRecord * ScanRecord(class ScanRecord *arg1);
    int Hash(XY arg1);
    BBOOL IsRecorded(XY arg1);
    void Add(XY arg1);
    class ScanRecord * ScanRecord();
    BBOOL used[127];
    XY xy[127];
};

class WeightedRangeScanner : RangeScanner { // sizeof=106
    class WeightedRangeScanner * WeightedRangeScanner(class WeightedRangeScanner *arg1);
    void Do();
    class WeightedRangeScanner * WeightedRangeScanner(XY arg1, ULONG arg2, XY *arg3, SLONG arg4);
    class WeightedRangeScanner * WeightedRangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    SLONG dirWeights[15];
    UBYTE bestDir; // offset=41
};

class WeightedTgtRangeScanner : WeightedRangeScanner { // sizeof=238
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(class WeightedTgtRangeScanner *arg1);
    void Do();
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(XY arg1, ULONG arg2, XY *arg3, SLONG arg4);
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    Thing *bestThings[15];
    int bestPerSector[15];
    Thing *tgtThing; // offset=106
};

class ShotHitScan : RangeScanner { // sizeof=62
    class ShotHitScan * ShotHitScan(class ShotHitScan *arg1);
    void PerGrid();
    class ShotHitScan * ShotHitScan(Effect arg1, SLONG arg2);
    void (**__vfptr)();
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
    class MonolithHitScan * MonolithHitScan(class MonolithHitScan *arg1);
    void PerGrid();
    class MonolithHitScan * MonolithHitScan(Effect arg1);
    void (**__vfptr)();
    ULONG bestRange;
    Effect mono;
    Thing *hitThing; // offset=41
};

class StasisBoltScan : RangeScanner { // sizeof=50
    class StasisBoltScan * StasisBoltScan(class StasisBoltScan *arg1);
    void PerGrid();
    class StasisBoltScan * StasisBoltScan(Effect arg1, SLONG arg2);
    void (**__vfptr)();
    ULONG sqShotRadius;
    Effect shot;
    BBOOL hitThing; // offset=41
};

class TurretScan : RangeScanner { // sizeof=53
    class TurretScan * TurretScan(class TurretScan *arg1);
    void PerGrid();
    class TurretScan * TurretScan(Building arg1);
    void (**__vfptr)();
    SLONG closestRange;
    Building turret;
    Thing *tgtThing; // offset=41
};

class SawmillScan : RangeScanner { // sizeof=53
    class SawmillScan * SawmillScan(class SawmillScan *arg1);
    void PerGrid();
    class SawmillScan * SawmillScan(Building arg1);
    void (**__vfptr)();
    SLONG bestValue;
    Building sawmill;
    Plant *tgtPlant; // offset=41
};

class FarmScan : RangeScanner { // sizeof=53
    class FarmScan * FarmScan(class FarmScan *arg1);
    void PerGrid();
    class FarmScan * FarmScan(Building arg1);
    void (**__vfptr)();
    SLONG bestValue;
    Building farm;
    Thing *tgt; // offset=41
};

class ShieldScan : RangeScanner { // sizeof=49
    class ShieldScan * ShieldScan(class ShieldScan *arg1);
    void BounceThingOffShield(MovingThing *arg1, BBOOL arg2);
    void PerGrid();
    class ShieldScan * ShieldScan(Building arg1);
    void (**__vfptr)();
    ULONG squareShieldRange;
    Building shield;
};

class AwarenessScan : RangeScanner { // sizeof=228
    class AwarenessScan * AwarenessScan(class AwarenessScan *arg1);
    void Do();
    void PerGrid();
    class AwarenessScan * AwarenessScan(Creature arg1);
    void (**__vfptr)();
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

class ChopperScan : WeightedTgtRangeScanner { // sizeof=110
    class ChopperScan * ChopperScan(class ChopperScan *arg1);
    void PerGrid();
    class ChopperScan * ChopperScan(Creature arg1);
    void (**__vfptr)();
    int bestRanges[15];
    Plant *closestPerSector[15];
};

class CollectorScan : WeightedTgtRangeScanner { // sizeof=246
    class CollectorScan * CollectorScan(class CollectorScan *arg1);
    void PerGrid();
    class CollectorScan * CollectorScan(Creature arg1, BBOOL arg2, BBOOL arg3);
    void (**__vfptr)();
    UBYTE bonesBonus;
    UBYTE plantBonus;
    BBOOL lookForBones;
    BBOOL lookForPlants;
    Creature c;
};

class BuilderTreeScan : RangeScanner { // sizeof=49
    class BuilderTreeScan * BuilderTreeScan(class BuilderTreeScan *arg1);
    void PerGrid();
    class BuilderTreeScan * BuilderTreeScan(Creature arg1);
    void (**__vfptr)();
    ULONG bestRange;
    Plant *tgtPlant; // offset=41
};

class PolarSliceScan : RangeScan { // sizeof=48
    class PolarSliceScan * PolarSliceScan(class PolarSliceScan *arg1);
    void displayDebug(XY arg1, UBYTE arg2, ULONG *arg3);
    void PerGrid();
    void Do();
    class PolarSliceScan * PolarSliceScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    BBOOL satisfied;
    UBYTE foundationSize;
    ULONG tileRange;
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    UBYTE slices;
    BBOOL foundAThing; // offset=20
};

class PolarEverythingScan : RangeScan { // sizeof=47
    class PolarEverythingScan * PolarEverythingScan(class PolarEverythingScan *arg1);
    void displayDebug(XY arg1, UBYTE arg2, ULONG *arg3);
    void PerGrid();
    void Do();
    BBOOL Scan(UBYTE arg1);
    class PolarEverythingScan * PolarEverythingScan(XY arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6);
    void (**__vfptr)();
    BBOOL fromCenter;
    BBOOL satisfied;
    UBYTE foundationSize;
    UBYTE innerTileRange;
    UBYTE tileRange;
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    UBYTE slices;
    BBOOL foundAThing; // offset=20
};

class TimeSliceScan : RangeScan { // sizeof=47
    class TimeSliceScan * TimeSliceScan(class TimeSliceScan *arg1);
    void PerGrid();
    BBOOL Do();
    class TimeSliceScan * TimeSliceScan(BaseScan arg1, XY arg2, ULONG arg3);
    void (**__vfptr)();
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BaseScan bs;
    BBOOL middle; // offset=20
    UWORD tileNo; // offset=21
};

#endif // SCAN_HPP_
/******************************************************************************/
