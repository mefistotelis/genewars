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
    XY bestPos; // offset=41
    UWORD errors[4]; // offset=45
    UBYTE error_type; // offset=53
    SLONG highestPoint; // offset=54
    UBYTE foundationSize; // offset=58
//internal:
    //void (**__vfptr)(); // offset=37
public:
    FindHighestBuildingSite(XY cor1, ULONG arg2, UBYTE arg3);
    void PerGrid();
    BBOOL FoundASite();
    //FindHighestBuildingSite(FindHighestBuildingSite const &rscan1); -- generate default copy constructor
};

class NearestBuildingSite : public PolarEverythingScan { // sizeof=53
public:
    XY bestPos; // offset=47
    UBYTE type; // offset=51
    UBYTE foundationSize; // offset=52
//internal:
    //void (**__vfptr)(); // offset=43
public:
    NearestBuildingSite(XY cor1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5);
    void PerGrid();
    //NearestBuildingSite(NearestBuildingSite const &rscan1); -- generate default copy constructor
};

class FindLowestBuildingSite : public PolarEverythingScan { // sizeof=64
public:
    XY bestPos; // offset=47
    UWORD errors[4]; // offset=51
    UBYTE error_type; // offset=59
    SLONG lowestPoint; // offset=60
//internal:
    //void (**__vfptr)(); // offset=43
public:
    FindLowestBuildingSite(XY cor1, ULONG arg2, UBYTE arg3);
    void PerGrid();
    //FindLowestBuildingSite(FindLowestBuildingSite const &rscan1); -- generate default copy constructor
};

class NearestPoweredBuildingSite : public PolarRangeScan { // sizeof=60
public:
    XY bestPos; // offset=51
    TheBase *b; // offset=55
    UBYTE foundationSize; // offset=59
//internal:
    //void (**__vfptr)(); // offset=47
public:
    NearestPoweredBuildingSite(XY cor1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void PerGrid();
    //NearestPoweredBuildingSite(NearestPoweredBuildingSite const &rscan1); -- generate default copy constructor
};


#endif // SCANBLDSITE_HPP_
/******************************************************************************/
