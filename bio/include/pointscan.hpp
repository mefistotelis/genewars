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
    BBOOL foundAThing; // offset=0
protected:
    UWORD sectorSize; // offset=1
    XY center; // offset=3
    XY tgt; // offset=7
    ULONG range; // offset=11
    ULONG squareRange; // offset=15
    GridTile *g; // offset=19
//internal:
    //void (**__vfptr)(); // offset=23
public:
    void Do();
    PointSample(XY arg1, ULONG arg2, ULONG arg3);
    PointSample(XY arg1, ULONG arg2, UWORD arg3);
    PointSample(XY arg1, ULONG arg2, UBYTE arg3);
    virtual void PerGrid() = 0;
    PointSample(PointSample const &samp1);
};

class NewBaseScan : public PointSample { // sizeof=40
    ULONG bestScore; // offset=27
    XY bestLoc; // offset=31
    XY origin; // offset=35
    UBYTE player; // offset=39
//internal:
    //void (**__vfptr)(); // offset=23
public:
    NewBaseScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    virtual void PerGrid();
    //NewBaseScan(NewBaseScan const &arg1); -- generate default copy constructor
};

class BestForestSample : public PointSample { // sizeof=38
    XY bestPos; // offset=27
    UBYTE bestPlant; // offset=31
    UBYTE player; // offset=32
    UBYTE forestType; // offset=33
    SLONG bestValue; // offset=34
//internal:
    //void (**__vfptr)(); // offset=23
public:
    BestForestSample(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4, ULONG arg5);
    virtual void PerGrid();
    //BestForestSample(BestForestSample const &arg1); -- generate default copy constructor
};

#endif // BIO_POINTSCAN_HPP_
/******************************************************************************/
