/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file planet.hpp
 *     Header file for planet.cpp.
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
#ifndef BIO_PLANET_HPP_
#define BIO_PLANET_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "stuff.hpp"
#include "thebase.hpp"

enum { // type=int8_t
    PLANET_TYPE_JUNGLE = 0,
    PLANET_TYPE_DESERT,
    PLANET_TYPE_ARTIC,
    PLANET_TYPE_BARREN,
    PLANET_TYPE_WASTELAND,
    PLANET_TYPE_TEMPERATE, // 5
    PLANET_TYPE_SUN,
    PLANET_TYPE_GAS_GIANT,
    PLANET_TYPE_MOON_1,
    PLANET_TYPE_MOON_2,
    PLANET_TYPE_ASTEROID_1, // 10
    PLANET_TYPE_ASTEROID_2,
    PLANET_TYPE_ASTEROID_3,
    PLANET_TYPE_ASTEROID_4,
    PLANET_TYPE_POINT,
};

class Planet { // sizeof=639
public:
    char name[18]; // offset=0
    UBYTE levelNumber; // offset=18
    UBYTE planetClass; // offset=19
    UBYTE orbit; // offset=20
    SWORD gravity; // offset=21
    SWORD solarEnergy; // offset=23
    SWORD meanTemp; // offset=25
    SWORD seaLevel; // offset=27
    UWORD flags; // offset=29
    ULONG payment; // offset=31
    UWORD seed; // offset=35
    SWORD startAlt; // offset=37
    UWORD scaler; // offset=39
    UBYTE nothing; // offset=41
    UWORD biomass; // offset=42
    UWORD initialBad; // offset=44
    UWORD victoryCreatures; // offset=46
    UWORD etherealBadLimit; // offset=48
    UWORD etherealVisit; // offset=50
    UWORD etherealBonusMono; // offset=52
    XY dropSites[8]; // offset=54
    Stuff stuff[64]; // offset=86
    XY boundaries[2]; // offset=598
    UWORD victoryGoop; // offset=606
    UWORD victoryEnemyBuildings; // offset=608
    SLONG victoryEPoints; // offset=610
    UBYTE etherealStrictness; // offset=614
    XY terraformXY; // offset=615
    UWORD computerStartOnTurn[3]; // offset=619
    UBYTE specsWantedInTeam[4]; // offset=625
    UBYTE specialistsAllowed; // offset=629
    UBYTE specActionsAllowed[4]; // offset=630
    ULONG rescuedOnTurn; // offset=634
    UBYTE victoryFlags; // offset=638
public:
    void Generate();
    void ClearStuff();
    void MakeStuff();
    void MakeForest(XY arg1, UBYTE arg2, UBYTE arg3);
    void MakeHerd(Stuff &arg1);
    void MakeBuilding(Stuff &arg1);
    void SlapBuildingDown(XY arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5);
    void ShuffleLZs();
    void PlaceStuff(XY arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5);
    void PlaceStuff(Stuff *arg1);
    BBOOL AllComputersStarted();
    char * GetMissionBriefingString(char *arg1, UBYTE arg2);
};

void GenerateBlockTable();
void shade_map();
void GrowWorld();
void FlattenShores();
void ensure_no_overlaps();

#endif // BIO_PLANET_HPP_
/******************************************************************************/
