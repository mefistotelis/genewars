/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file plantstat.hpp
 *     Plant related defines and statistics.
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
#ifndef BIO_PLANTSTAT_HPP_
#define BIO_PLANTSTAT_HPP_

#include "bftypes.h"

enum PlantSpecies { // type=int8_t
    PSP_BULB = 0,
    PSP_ROOT,
    PSP_WAXLEAF,
    PSP_BLOOM,
    PSP_BRALM,
    PSP_PALM, // 5
    PSP_SNOWDROP,
    PSP_KELPIE,
    PSP_SPIKEY,
    PSP_FUNGUS,
    PSP_SPIRAL, // 10
    PSP_CONE,
    MAX_PSPECIES,
};

struct PSpecies { // sizeof=32
    char name[16]; // offset=0
    SBYTE terrain[8]; // offset=16
    UBYTE seedTime; // offset=24
    UBYTE range; // offset=25
    UBYTE maxNeighbours; // offset=26
    UBYTE lifeSpan; // offset=27
    UBYTE food; // offset=28
    UBYTE wood; // offset=29
    UBYTE seeds; // offset=30
    UBYTE density; // offset=31
};

#endif // BIO_PLANTSTAT_HPP_
/******************************************************************************/
