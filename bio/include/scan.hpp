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
    class RangeScan * RangeScan(class RangeScan *arg1);
    void Init(XY *arg1, ULONG arg2, BBOOL arg3);
    class RangeScan * RangeScan(XY *arg1, ULONG arg2, BBOOL arg3);
    XY tgt;
    SWORD yHi;
    SWORD yLo;
    SWORD xHi;
    SWORD xLo;
    XY xy;
    SWORD yD;
    SWORD xD;
};

class PolarRangeScan : RangeScan { // sizeof=51
    class PolarRangeScan * PolarRangeScan(class PolarRangeScan *arg1);
    void displayDebug(XY arg1, ULONG *arg2);
    void PerGrid();
    void Do();
    class PolarRangeScan * PolarRangeScan(XY arg1, ULONG arg2, UBYTE arg3);
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


#endif // SCAN_HPP_
/******************************************************************************/
