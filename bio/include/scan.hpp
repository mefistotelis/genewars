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
#include "xy.hpp"

class GridTile;
class Thing;
class Plant;

class ScanRecord { // sizeof=128
    //ScanRecord(ScanRecord *rscan1);
    int Hash(XY arg1);
    BBOOL IsRecorded(XY arg1);
    void Add(XY arg1);
    //ScanRecord();
    BBOOL used[127];
    XY xy[127];
};

class BaseScan { // sizeof=17
public:
    void Reset();
    XY xy; // offset=0
    XY center; // offset=4
    UBYTE tilesPrTurn; // offset=8
    UBYTE baseNo; // offset=9
    ULONG rng; // offset=10
    BBOOL started; // offset=14
    BBOOL middle; // offset=15
    BBOOL finished; // offset=16
};

class RangeScan { // sizeof=20
public:
    //RangeScan(RangeScan *rscan1);
    void Init(XY &arg1, ULONG arg2, BBOOL arg3);
    RangeScan(XY &arg1, ULONG arg2, BBOOL arg3);
    XY tgt;
    SWORD yHi;
    SWORD yLo;
    SWORD xHi;
    SWORD xLo;
    XY xy;
    SWORD yD;
    SWORD xD;
};

class RangeScanner : public RangeScan { // sizeof=41
public:
    //RangeScanner(RangeScanner *rscnr1);
    void PerGrid();
    void Do();
    RangeScanner(XY &arg1, ULONG arg2);
    //void (**__vfptr)();
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
};

class PolarRangeScan : public RangeScan { // sizeof=51
public:
    //PolarRangeScan(PolarRangeScan *rscan1);
    void displayDebug(XY arg1, ULONG &arg2);
    void PerGrid();
    void Do();
    PolarRangeScan(XY &arg1, ULONG arg2, UBYTE arg3);
    //void (**__vfptr)();
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

class WeightedRangeScanner : public RangeScanner { // sizeof=106
public:
    //WeightedRangeScanner(WeightedRangeScanner *arg1);
    void Do();
    WeightedRangeScanner(XY &arg1, ULONG arg2, XY *arg3, SLONG arg4);
    WeightedRangeScanner(XY &arg1, ULONG arg2);
    //void (**__vfptr)();
    SLONG dirWeights[15];
    UBYTE bestDir; // offset=41
};

class WeightedTgtRangeScanner : public WeightedRangeScanner { // sizeof=238
public:
    //WeightedTgtRangeScanner(WeightedTgtRangeScanner *arg1);
    void Do();
    WeightedTgtRangeScanner(XY &arg1, ULONG arg2, XY *arg3, SLONG arg4);
    WeightedTgtRangeScanner(XY &arg1, ULONG arg2);
    //void (**__vfptr)();
    Thing *bestThings[15];
    int bestPerSector[15];
    Thing *tgtThing; // offset=106
};

class PolarSliceScan : public RangeScan { // sizeof=48
public:
    //PolarSliceScan(PolarSliceScan *arg1);
    void displayDebug(XY arg1, UBYTE arg2, ULONG &arg3);
    void PerGrid();
    void Do();
    PolarSliceScan(XY &arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    //void (**__vfptr)();
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

class PolarEverythingScan : public RangeScan { // sizeof=47
public:
    //PolarEverythingScan(PolarEverythingScan *arg1);
    void displayDebug(XY arg1, UBYTE arg2, ULONG &arg3);
    void PerGrid();
    void Do();
    BBOOL Scan(UBYTE arg1);
    PolarEverythingScan(XY &arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6);
    //void (**__vfptr)();
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

class TimeSliceScan : public RangeScan { // sizeof=47
public:
    //TimeSliceScan(TimeSliceScan *arg1);
    void PerGrid();
    BBOOL Do();
    TimeSliceScan(BaseScan &arg1, XY arg2, ULONG arg3);
    //void (**__vfptr)();
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
