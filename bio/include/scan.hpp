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

#endif // SCAN_HPP_
/******************************************************************************/
