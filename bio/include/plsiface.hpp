/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file plsiface.hpp
 *     Specialist interface.
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
#ifndef BIO_PLSIFACE_HPP_
#define BIO_PLSIFACE_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "thingidx.hpp"
#include "plantstat.hpp"

class MyAnimBank;

class BuilderIFC { // sizeof=18
    SBYTE go; // offset=0
    SBYTE object; // offset=1
    SWORD freq; // offset=2
    SWORD freqCount; // offset=4
    SWORD phase; // offset=6
    SWORD foundationAlt; // offset=8
    XY saveOriginalTgt; // offset=10
    SLONG wreckSectorAt; // offset=14
};

class FarmerIFC { // sizeof=16
    SBYTE go; // offset=0
    PlantSpecies species; // offset=1
    SWORD freq; // offset=2
    SWORD freqCount; // offset=4
    XY targetXY; // offset=6
    SWORD range; // offset=10
    SLONG zoneRange; // offset=12
};

class ShepherdIFC { // sizeof=10
    SBYTE go; // offset=0
    XY targetXY; // offset=1
    SLONG zoneRange; // offset=5
    HerdMode mode; // offset=9
};

class CowboyIFC { // sizeof=15
    SBYTE go; // offset=0
    UBYTE gunType; // offset=1
    SWORD hits; // offset=2
    SWORD misses; // offset=4
    SWORD shots; // offset=6
    SWORD firingArc; // offset=8
    SLONG gunRange; // offset=10
    CreatureSpecies studySpecies; // offset=14
};

class PLSInterface { // sizeof=22
    //class PLSInterface * operator=(class PLSInterface *arg1);
    SBYTE submode; // offset=0
    ThingIDX thingTgt; // offset=1
    ShepherdIFC shepherd; // offset=4
    FarmerIFC farmer; // offset=5
    CowboyIFC cowboy; // offset=6
    BuilderIFC builder; // offset=7
    SBYTE go; // offset=8
};

class PlSpecLoader { // sizeof=80
    void Free(PlayerRace arg1, SpecialistClass arg2, MyAnimBank *arg3);
    void Free(PlSpec *arg1);
    MyAnimBank * Load(PlayerRace arg1, SpecialistClass arg2);
    BBOOL Load(PlSpec *arg1);
    MyAnimBank *anbs[3][3];
    SBYTE counters[3][3];
};

#endif // BIO_PLSIFACE_HPP_
/******************************************************************************/
