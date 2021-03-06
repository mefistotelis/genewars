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
#include "myspr.h"
#include "xy.hpp"
#include "thingidx.hpp"
#include "plantstat.hpp"
#include "creaturestat.hpp"
#include "spec.hpp"

class BuilderIFC { // sizeof=18
public:
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
public:
    SBYTE go; // offset=0
    PlantSpecies species; // offset=1
    SWORD freq; // offset=2
    SWORD freqCount; // offset=4
    XY targetXY; // offset=6
    SWORD range; // offset=10
    SLONG zoneRange; // offset=12
};

class ShepherdIFC { // sizeof=10
public:
    SBYTE go; // offset=0
    XY targetXY; // offset=1
    SLONG zoneRange; // offset=5
    HerdMode mode; // offset=9
};

class CowboyIFC { // sizeof=15
public:
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
public:
    SBYTE submode; // offset=0
    ThingIDX thingTgt; // offset=1
  union {
    SBYTE go; // offset=4
    BuilderIFC builder; // offset=4
    CowboyIFC cowboy; // offset=4
    FarmerIFC farmer; // offset=4
    ShepherdIFC shepherd; // offset=4
  };
public:
    PLSInterface & operator =(PLSInterface &pls1);
};

class PlSpecLoader { // sizeof=80
public:
    SBYTE counters[4][4];
    MyAnimBank *anbs[4][4]; // offset=16
public:
    BBOOL Load(PlSpec *arg1);
    MyAnimBank * Load(PlayerRace arg1, SpecialistClass arg2);
    void Free(PlSpec *arg1);
    void Free(PlayerRace arg1, SpecialistClass arg2, MyAnimBank *arg3);
};

#endif // BIO_PLSIFACE_HPP_
/******************************************************************************/
