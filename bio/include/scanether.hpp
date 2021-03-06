/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanether.hpp
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
#ifndef SCANETHER_HPP_
#define SCANETHER_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "ethereal.hpp"
#include "scan.hpp"

class EtherealTargetScan : public RangeScanner { // sizeof=118
public:
    Thing *tgtThings[9]; // offset=41
    UBYTE numTargets; // offset=77
    Ethereal &saucer;
    ULONG bestRanges[9]; // offset=82
//internal:
    //void (**__vfptr)(); // offset=37
public:
    EtherealTargetScan(Ethereal &arg1, ULONG arg2);
    virtual void PerGrid();
    //EtherealTargetScan(EtherealTargetScan const &rscan1); -- generate default copy constructor
};


#endif // SCANETHER_HPP_
/******************************************************************************/
