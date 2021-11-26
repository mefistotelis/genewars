/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bioeng.hpp
 *     Header file for bioeng.cpp.
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
#ifndef BIO_BIOENG_HPP_
#define BIO_BIOENG_HPP_

#include "bftypes.h"
#include "event.hpp"
#include "eventstat.hpp"
#include "player.hpp"
#include "plspec.hpp"
#include "plant.hpp"
#include "drone.hpp"
#include "topo.hpp"
#include "ethereal.hpp"
#include "planet.hpp"
#include "effect.hpp"
#include "etherzone.hpp"
#include "building.hpp"
#include "creature.hpp"
#include "gridtile.hpp"
#include "mapdisp.hpp"

struct Reorient { // sizeof=8
    SLONG X; // offset=0
    SLONG Y; // offset=4
};

class BioGame { // sizeof=380790
public:
    ULONG checksum; // offset=0
    char saveName[16]; // offset=4
    Player players[4]; // offset=20
    Planet planet; // offset=7096
    TopoMorpher topoMorpher; // offset=7735
    EtherealZoneHandler ezHandler; // offset=12136
    EventHelp evHelp; // offset=13354
    SWORD numCreatures; // offset=13504
    SWORD numPlants; // offset=13506
    SWORD numEffects; // offset=13508
    SWORD numEvents; // offset=13510
    UBYTE numDrones; // offset=13512
    UBYTE numEthereals; // offset=13513
    SWORD plantToUpdate; // offset=13514
    UWORD etherealVisit; // offset=13516
    GridTile grid[128][128]; // offset=13518
    Creature creatures[300]; // offset=275662
    Plant plants[512]; // offset=312862
    PlSpec team[4][5]; // offset=337950
    Building buildings[4][64]; // offset=341950
    Effect effects[200]; // offset=359102
    Event events[32]; // offset=375302
    Drone drones[32]; // offset=376870
    Ethereal ethereals[8]; // offset=379974
public:
    BioGame();
    BBOOL Write(char *arg1, UBYTE arg2);
    BBOOL Read(char *arg1, UBYTE arg2, SBYTE arg3, Player *arg4);
    void ResetGameAndControl();
    void FreeAllAllocs();
    void RemoveTargetReferencesTo(Thing *tng1);
    void RegisterMapChangeWithThings();
    void ClearExplorationMapAndReshadeThings();
    void CompareAllGames();
    void Compare(BioGame &game1);
    void CheckForVictory();
    BBOOL ReadName(char *arg1, char *arg2);
    //BioGame(BioGame &game1); -- generate default copy constructor
    BioGame & operator =(BioGame &game1);
};

void check_point_triangle( short *, short *, long, long, long, long, long, long, long, long );
void mapxy_to_screenxy( long *, long *, short, short );
void base_mapxy_to_screenxy( long *, long *, short, short );
void find_mapxy( short *, short *, long, long );

#endif // BIO_BIOENG_HPP_
/******************************************************************************/
