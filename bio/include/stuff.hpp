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
    uint8_t player; // offset=0
    uint8_t stage; // offset=1
};

struct CreatureSpeciesForHerd { // sizeof=1
    uint8_t player; // offset=0
    uint8_t species; // offset=1
};

struct Stuff { // sizeof=8
    BBOOL IsEZone();
    XY loc; // offset=0
    UBYTE type; // offset=4
    SBYTE gpNumber; // offset=5
    BuildingStage building; // offset=6
    UBYTE buildingPoints; // offset=7
    UBYTE numTrees; // offset=8
    UBYTE numCreatures; // offset=9
    UBYTE ezSize; // offset=10
    UBYTE crStudy; // offset=11
    SBYTE ezLinkTo; // offset=12
    UBYTE player; // offset=13
    UBYTE score; // offset=14
    CreatureSpeciesForHerd crSpecies; // offset=15
    UBYTE species; // offset=16
};

#endif // BIO_STUFF_HPP_
/******************************************************************************/
