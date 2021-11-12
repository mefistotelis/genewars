/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanbldsite.hpp
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
#ifndef SCANBLDSITE_HPP_
#define SCANBLDSITE_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "smvthing.hpp"
#include "scan.hpp"

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

class FindLowestBuildingSite : public PolarEverythingScan { // sizeof=64
public:
    //FindLowestBuildingSite(FindLowestBuildingSite *arg1);
    void PerGrid();
    FindLowestBuildingSite(XY arg1, ULONG arg2, UBYTE arg3);
    //void (**__vfptr)();
    SLONG lowestPoint;
    XY bestPos; // offset=47
    UWORD errors[3]; // offset=51
    UBYTE error_type; // offset=59
};

class NearestPoweredBuildingSite : public PolarRangeScan { // sizeof=60
public:
    //NearestPoweredBuildingSite(NearestPoweredBuildingSite *arg1);
    void PerGrid();
    NearestPoweredBuildingSite(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    //void (**__vfptr)();
    UBYTE foundationSize;
    XY bestPos; // offset=51
    TheBase *b; // offset=55
};


#endif // SCANBLDSITE_HPP_
/******************************************************************************/
