/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file pointscan.hpp
 *     Header file for pointscan.cpp.
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
#ifndef BIO_POINTSCAN_HPP_
#define BIO_POINTSCAN_HPP_

#include "bftypes.h"
#include "xy.hpp"

class GridTile;

class PointSample { // sizeof=27
public:
    //PointSample(PointSample *arg1);
    void PerGrid();
    PointSample(XY arg1, ULONG arg2, UBYTE arg3);
    PointSample(XY arg1, ULONG arg2, UWORD arg3);
    PointSample(XY arg1, ULONG arg2, ULONG arg3);
    void Do();
    //void (**__vfptr)();
    GridTile *g;
    ULONG squareRange;
    ULONG range;
    XY tgt;
    XY center;
    UWORD sectorSize;
    BBOOL foundAThing; // offset=0
};

class NewBaseScan : public PointSample { // sizeof=40
public:
    //NewBaseScan(class NewBaseScan *arg1);
    void PerGrid();
    NewBaseScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    //void (**__vfptr)();
    UBYTE player;
    XY origin;
    ULONG bestScore; // offset=27
    XY bestLoc; // offset=31
};

class BestForestSample : public PointSample { // sizeof=38
public:
    //BestForestSample(BestForestSample *arg1);
    void PerGrid();
    BestForestSample(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4, ULONG arg5);
    //void (**__vfptr)();
    SLONG bestValue;
    UBYTE forestType;
    UBYTE player;
    XY bestPos; // offset=27
    UBYTE bestPlant; // offset=31
};

#endif // BIO_POINTSCAN_HPP_
/******************************************************************************/
