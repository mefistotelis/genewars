/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file stuff.hpp
 *     Stuff struct.
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
#ifndef BIO_STUFF_HPP_
#define BIO_STUFF_HPP_

#include "bftypes.h"
#include "xy.hpp"

enum { // type=int8_t
    STUFF_LEFT_FAN = 1,
    STUFF_RIGHT_FAN,
    STUFF_UP_FAN,
    STUFF_BONUS_FUEL,
    STUFF_BONUS_POINTS, // 5
    STUFF_ASTEROID,
};

struct BuildingStage { // sizeof=1
    uint8_t stage:4; // offset=0 bit=0
    uint8_t player:4; // offset=0 bit=4
};

struct CreatureSpeciesForHerd { // sizeof=1
    uint8_t species:5; // offset=0 bit=0
    uint8_t player:3; // offset=0 bit=5
};

struct Stuff { // sizeof=8
    XY loc; // offset=0
    UBYTE type; // offset=4
  union {
    UBYTE species; // offset=5
    CreatureSpeciesForHerd crSpecies; // offset=5
    UBYTE score; // offset=5
    SBYTE gpNumber; // offset=5
  };
  union {
    UBYTE player; // offset=6
    SBYTE ezLinkTo; // offset=6
    UBYTE crStudy; // offset=6
    BuildingStage building; // offset=6
  };
  union {
    UBYTE ezSize; // offset=7
    UBYTE numCreatures; // offset=7
    UBYTE numTrees; // offset=7
    UBYTE buildingPoints; // offset=7
  };
    BBOOL IsEZone();
    //Stuff(Stuff const &arg1); -- generate default copy constructor
};

#endif // BIO_STUFF_HPP_
/******************************************************************************/
