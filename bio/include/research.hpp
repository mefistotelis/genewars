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

class ResearchGrid { // sizeof=200
    void CheatGetAllCreatures();
    BBOOL RegisterCreature(CreatureSpecies arg1);
    BBOOL IsIndexWithinCreaturesDiscovered(int arg1);
    BBOOL CanPlantThisSpecies(PlantSpecies arg1);
    void CountAMonolithTouch(Creature *arg1);
    BBOOL AddToAGrid(CreatureSpecies arg1, SLONG arg2);
    BBOOL IsAGridStudyAtMax(UBYTE arg1);
    SLONG ResearchCeiling();
    SLONG aGrid[24]; // offset=0
    SLONG pGrid[11]; // offset=100
    CreatureSpecies discovered[24]; // offset=148
    UBYTE monoTouches[24]; // offset=173
    UBYTE creaturesDiscovered; // offset=198
    UBYTE bestGenelabStage; // offset=199
};

typedef class ResearchGrid ResearchGrid;

char unsigned ResearchGrid::AddToAGrid( CreatureSpecies, long );
void ResearchGrid::CountAMonolithTouch( Creature * );
char unsigned ResearchGrid::CanPlantThisSpecies( PlantSpecies );
char unsigned ResearchGrid::IsIndexWithinCreaturesDiscovered( int );
long ResearchGrid::ResearchCeiling();
char unsigned ResearchGrid::IsAGridStudyAtMax( char unsigned );
char unsigned ResearchGrid::RegisterCreature( CreatureSpecies );
void ResearchGrid::CheatGetAllCreatures();

#endif // BIO_RESEARCH_HPP_
/******************************************************************************/
