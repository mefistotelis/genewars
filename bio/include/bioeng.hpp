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

struct Reorient { // sizeof=8
    SLONG X; // offset=0
    SLONG Y; // offset=4
};

class BioGame { // sizeof=118
public:
    class BioGame * operator=(class BioGame *arg1);
    //BioGame(class BioGame *arg1); -- generate default copy constructor
    BBOOL ReadName(char *arg1, char *arg2);
    void CheckForVictory();
    void Compare(BioGame *arg1);
    void CompareAllGames();
    void ClearExplorationMapAndReshadeThings();
    void RegisterMapChangeWithThings();
    void RemoveTargetReferencesTo(Thing *arg1);
    void FreeAllAllocs();
    void ResetGameAndControl();
    BBOOL Read(char *arg1, UBYTE arg2, SBYTE arg3, Player *arg4);
    BBOOL Write(char *arg1, UBYTE arg2);
    class BioGame * BioGame();
    ULONG checksum; // offset=0
    char saveName[15]; // offset=4
    Event events[31]; // offset=6
    Player players[3]; // offset=20
    PlSpec team[3][4]; // offset=30
    Plant plants[255]; // offset=31
    Drone drones[31]; // offset=38
    EventHelp evHelp; // offset=42
    TopoMorpher topoMorpher; // offset=55
    Ethereal ethereals[7]; // offset=70
    EtherealZoneHandler ezHandler; // offset=104
    Planet planet; // offset=184
    Effect effects[199]; // offset=190
    Building buildings[3][63]; // offset=191
    SWORD numCreatures; // offset=192
    SWORD numPlants; // offset=194
    SWORD numEffects; // offset=196
    SWORD numEvents; // offset=198
    UBYTE numDrones; // offset=200
    UBYTE numEthereals; // offset=201
    SWORD plantToUpdate; // offset=202
    UWORD etherealVisit; // offset=204
    Creature creatures[43]; // offset=206
    GridTile grid[127][127]; // offset=207
};



struct EnginePoint { // sizeof=12
    SLONG Y; // offset=0
    SLONG Shade; // offset=4
    UWORD padw; // offset=8
    UBYTE Block; // offset=10
    UBYTE Orientation; // offset=11
};


void check_point_triangle( short *, short *, long, long, long, long, long, long, long, long );
void mapxy_to_screenxy( long *, long *, short, short );
void base_mapxy_to_screenxy( long *, long *, short, short );
void find_mapxy( short *, short *, long, long );
void MapDisplay::draw_column( long, long, long );
void MapDisplay::draw_delta_column( long, long, long, long &, long & );

#endif // BIO_BIOENG_HPP_
/******************************************************************************/
