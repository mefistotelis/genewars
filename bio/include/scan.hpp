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

class ScanRecord { // sizeof=640
public:
    XY xy[128];
    BBOOL used[128]; // offset=512
public:
    //ScanRecord(); -- generate default no-args constructor
    void Add(XY arg1);
    BBOOL IsRecorded(XY arg1);
private:
    int Hash(XY arg1);
//public:
    //ScanRecord(ScanRecord const &rscan1); -- generate default copy constructor
};

class BaseScan { // sizeof=17
public:
    XY xy; // offset=0
    XY center; // offset=4
    UBYTE tilesPrTurn; // offset=8
    UBYTE baseNo; // offset=9
    ULONG rng; // offset=10
    BBOOL started; // offset=14
    BBOOL middle; // offset=15
    BBOOL finished; // offset=16
public:
    void Reset();
};

class RangeScan { // sizeof=20
protected:
    SWORD xD;
    SWORD yD; // offset=2
    XY xy; // offset=4
    SWORD xLo; // offset=8
    SWORD xHi; // offset=10
    SWORD yLo; // offset=12
    SWORD yHi; // offset=14
    XY tgt; // offset=16
public:
    RangeScan(XY cor1, ULONG arg2, BBOOL arg3);
    void Init(XY cor1, ULONG arg2, BBOOL arg3);
    //RangeScan(RangeScan const &rscan1); -- generate default copy constructor
};

class RangeScanner : public RangeScan { // sizeof=41
    BBOOL foundAThing; // offset=20
protected:
    GridTile *g; // offset=21
    ULONG squareRange; // offset=25
    ULONG squareMaxRange; // offset=29
    ULONG maxRange; // offset=33
//internal:
    //void (**__vfptr)(); // offset=37
public:
    RangeScanner(XY cor1, ULONG arg2);
    void Do();
    virtual void PerGrid() = 0;
    //RangeScanner(RangeScanner const &rscan1); -- generate default copy constructor
};

class PolarRangeScan : public RangeScan { // sizeof=51
    BBOOL foundAThing; // offset=20
protected:
    GridTile *g; // offset=21
    ULONG squareRange; // offset=25
    ULONG squareMaxRange; // offset=29
    ULONG maxRange; // offset=33
    ULONG tileRange; // offset=37
    UBYTE foundationSize; // offset=41
    BBOOL satisfied; // offset=42
    ULONG ringRange; // offset=43
//internal:
    //void (**__vfptr)(); // offset=47
public:
    PolarRangeScan(XY cor1, ULONG arg2, UBYTE arg3);
    void Do();
    virtual void PerGrid() = 0;
protected:
    void displayDebug(XY arg1, ULONG &arg2);
//public:
    //PolarRangeScan(PolarRangeScan const &rscan1); -- generate default copy constructor
};

class WeightedRangeScanner : public RangeScanner { // sizeof=106
    UBYTE bestDir; // offset=41
protected:
    SLONG dirWeights[16]; // offset=42
//internal:
    //void (**__vfptr)(); // offset=37
public:
    WeightedRangeScanner(XY cor1, ULONG arg2);
    WeightedRangeScanner(XY cor1, ULONG arg2, XY *arg3, SLONG arg4);
    void Do();
    //WeightedRangeScanner(WeightedRangeScanner const &rscan1); -- generate default copy constructor
};

class WeightedTgtRangeScanner : public WeightedRangeScanner { // sizeof=238
    Thing *tgtThing; // offset=106
protected:
    int bestPerSector[16]; // offset=110
    Thing *bestThings[16]; // offset=174
//internal:
    //void (**__vfptr)(); // offset=37
public:
    WeightedTgtRangeScanner(XY cor1, ULONG arg2);
    WeightedTgtRangeScanner(XY cor1, ULONG arg2, XY *arg3, SLONG arg4);
    void Do();
    //WeightedTgtRangeScanner(WeightedTgtRangeScanner const &rscan1); -- generate default copy constructor
};

class PolarSliceScan : public RangeScan { // sizeof=48
    BBOOL foundAThing; // offset=20
protected:
    UBYTE slices; // offset=21
    GridTile *g; // offset=22
    ULONG squareRange; // offset=26
    ULONG squareMaxRange; // offset=30
    ULONG maxRange; // offset=34
    ULONG tileRange; // offset=38
    UBYTE foundationSize; // offset=42
    BBOOL satisfied; // offset=43
//internal:
    //void (**__vfptr)(); // offset=44
public:
    PolarSliceScan(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void Do();
    virtual void PerGrid() = 0;
protected:
    void displayDebug(XY arg1, UBYTE arg2, ULONG &arg3);
//public:
    //PolarSliceScan(PolarSliceScan const &rscan1); -- generate default copy constructor
};

class PolarEverythingScan : public RangeScan { // sizeof=47
    BBOOL foundAThing; // offset=20
protected:
    UBYTE slices; // offset=21
    GridTile *g; // offset=22
    ULONG squareRange; // offset=26
    ULONG squareMaxRange; // offset=30
    ULONG maxRange; // offset=34
    UBYTE tileRange; // offset=38
    UBYTE innerTileRange; // offset=39
    UBYTE foundationSize; // offset=40
    BBOOL satisfied; // offset=41
    BBOOL fromCenter; // offset=42
//internal:
    //void (**__vfptr)(); // offset=43
public:
    PolarEverythingScan(XY cor1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6);
    BBOOL Scan(UBYTE arg1);
    void Do();
    virtual void PerGrid() = 0;
protected:
    void displayDebug(XY arg1, UBYTE arg2, ULONG &arg3);
//public:
    //PolarEverythingScan(PolarEverythingScan const &rscan1); -- generate default copy constructor
};

class TimeSliceScan : public RangeScan { // sizeof=47
    BBOOL middle; // offset=20
    UWORD tileNo; // offset=21
public:
    BaseScan bs;
protected:
    GridTile *g; // offset=27
    ULONG squareRange; // offset=31
    ULONG squareMaxRange; // offset=35
    ULONG maxRange; // offset=39
//internal:
    //void (**__vfptr)(); // offset=43
public:
    TimeSliceScan(BaseScan &arg1, XY arg2, ULONG arg3);
    BBOOL Do();
    virtual void PerGrid() = 0;
    //TimeSliceScan(TimeSliceScan const &rscan1); -- generate default copy constructor
};

#endif // SCAN_HPP_
/******************************************************************************/
