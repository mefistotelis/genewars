/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file research.hpp
 *     ResearchGrid class.
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
#ifndef BIO_RESEARCH_HPP_
#define BIO_RESEARCH_HPP_

#include "bftypes.h"
#include "plantstat.hpp"
#include "creaturestat.hpp"

class Creature;

class ResearchGrid { // sizeof=200
    SLONG aGrid[25]; // offset=0
    SLONG pGrid[12]; // offset=100
    CreatureSpecies discovered[25]; // offset=148
    UBYTE monoTouches[25]; // offset=173
    UBYTE creaturesDiscovered; // offset=198
    UBYTE bestGenelabStage; // offset=199
public:
    SLONG ResearchCeiling();
    BBOOL IsAGridStudyAtMax(UBYTE arg1);
    BBOOL AddToAGrid(CreatureSpecies arg1, SLONG arg2);
    void CountAMonolithTouch(Creature *arg1);
    BBOOL CanPlantThisSpecies(PlantSpecies arg1);
    BBOOL IsIndexWithinCreaturesDiscovered(int arg1);
    BBOOL RegisterCreature(CreatureSpecies arg1);
    void CheatGetAllCreatures();
};

#endif // BIO_RESEARCH_HPP_
/******************************************************************************/
