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

typedef struct Reorient Reorient;

typedef class Player Player;


class BioGame { // sizeof=118
    class BioGame * operator=(class BioGame *arg1);
    class BioGame * BioGame(class BioGame *arg1);
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


class FlatMap { // sizeof=6
    void DrawOver(SWORD arg1, SWORD arg2, UBYTE arg3);
    void Map2Screen(XY *arg1);
    void Update(BBOOL arg1);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY *arg3);
    BBOOL Valid();
    void CopyRegionFrom(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6);
    void Draw(UBYTE arg1, SWORD arg2, SWORD arg3);
    void Draw(UBYTE arg1);
    void FreeMe();
    void UpdateGridTile(GridTile *arg1);
    void MakeRadiationMap(UBYTE arg1);
    void MakeEnergyMap(UBYTE arg1);
    void MakeLifeformMap(UBYTE arg1);
    void MakeTopographyMap(UBYTE arg1);
    void ReDraw(UBYTE arg1);
    PixBuffer * Init(Planet *arg1, UBYTE arg2, SWORD arg3, SWORD arg4, UBYTE arg5, BBOOL arg6);
    UBYTE mapMode;
    BBOOL useExplored;
    PixBuffer *pixBuffer;
};

typedef class FlatMap FlatMap;

class IsoMapBuffer { // sizeof=12
    void SetNewXlatedTop(UBYTE arg1, UBYTE arg2);
    void SetNewTop(UBYTE arg1, UBYTE arg2);
    void Draw(UBYTE arg1);
    void FreeMe();
    BBOOL Valid();
    BBOOL GetXYFromMap(XY arg1, XY *arg2);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY *arg3);
    void ProjectPixelOnWScreen(XY arg1, UBYTE arg2);
    void UpdateXY(XY arg1);
    void ReDraw();
    void Update();
    PixBuffer * Init(FlatMap *arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, SWORD arg5, SWORD arg6);
    SBYTE fadeDelta;
    UBYTE topY;
    UBYTE topX;
    FlatMap *flatMap;
    PixBuffer *pixBuffer;
    SBYTE fadeLevel; // offset=0
};

typedef class IsoMapBuffer IsoMapBuffer;

class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;

class MapDisplay { // sizeof=217
    void RegisterFoundationGrid(XY arg1, UBYTE arg2);
    void SelectAmbientSound();
    void SetRefreshColumn(UBYTE arg1);
    BBOOL RegisterPoint(XY arg1, SBYTE arg2);
    void DrawRefreshColumns();
    void DrawSingleColumn(UBYTE arg1);
    void DrawRightColumn(UBYTE arg1);
    void DrawLeftColumn(UBYTE arg1);
    void DrawBottomRow(SWORD arg1);
    void DrawTopRow(SWORD arg1);
    void DrawMapSprites();
    void FragCopyBScreenToWScreen();
    void draw_delta_column(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, SLONG arg5);
    void draw_column(SLONG arg1, SLONG arg2, SLONG arg3);
    BBOOL IsExploredTerrainInView();
    BBOOL IsGlassBuildings();
    void ToggleGlassBuildings();
    BBOOL IsDrawFoundations();
    void ClearDrawFoundations();
    void SetDrawFoundations();
    void ClearModified();
    BBOOL IsModified();
    void SetModified();
    void ClearRegisteredRightClick();
    void SetRegisteredRightClick();
    BBOOL IsRegisteredRightClick();
    BBOOL HasJustScrolled();
    BBOOL IsScrolling();
    void SetScrolled();
    BBOOL CanSelectThing();
    void ClearCanSelectThing();
    void SetCanSelectThing();
    BBOOL IsFullScreen();
    void ClearFullScreen();
    void SetFullScreen();
    BBOOL IsOnScreen(SWORD arg1, SWORD arg2);
    void DrawGlassTile(XY arg1, UBYTE arg2, BBOOL arg3);
    void RefreshFoundationGrids();
    void SetPanelRefreshZones();
    void RefreshRadar();
    void ProjectLine(XY arg1, XY arg2, ULONG arg3, MySprite *arg4, MyMinSprite *arg5);
    void ProjectCircle(XY arg1, ULONG arg2, UBYTE arg3, MySprite *arg4, BBOOL arg5, MyMinSprite *arg6);
    void StaticSetZones();
    XY GetDisplayCenter();
    void CenterOn(XY arg1);
    void RegisterBlockChange(XY arg1);
    void RegisterPointChange(XY arg1);
    void RegisterTopoPointChange(XY arg1);
    void RefreshFromBScreen();
    BBOOL ScrollHandler();
    void ForceRedraw();
    void ResetForPullOut();
    MapBucketThing * PutThingInBucket(Thing *arg1);
    void Draw();
    void Free();
    void Init();
    BBOOL needToDrawSprites;
    BBOOL exploredTerrainInView;
    SBYTE glassBuildingCounter;
    UBYTE scrollCount;
    XY selectedXY;
    MapRefreshColumn refreshColumns[19];
    SWORD numBucketThings;
    MapBucketThing *buckets[223];
    MapBucketThing bucketThings[255];
    Thing *selectedThing;
    XY other;
    XY win; // offset=0
    XY oldWin; // offset=4
    XY scroll; // offset=8
    XY cursor; // offset=12
    XY center; // offset=16
    GridTile *ptrG; // offset=20
    Thing *thing; // offset=24
    UBYTE flags; // offset=28
    UWORD leftEdge; // offset=29
    UWORD selectFilter; // offset=31
    FlatMap flatMap; // offset=33
    IsoMapBuffer isoMap; // offset=39
};

struct EnginePoint { // sizeof=12
    SLONG Y; // offset=0
    SLONG Shade; // offset=4
    UWORD padw; // offset=8
    UBYTE Block; // offset=10
    UBYTE Orientation; // offset=11
};

typedef struct EnginePoint EnginePoint;

void check_point_triangle( short *, short *, long, long, long, long, long, long, long, long );
void mapxy_to_screenxy( long *, long *, short, short );
void base_mapxy_to_screenxy( long *, long *, short, short );
void find_mapxy( short *, short *, long, long );
void MapDisplay::draw_column( long, long, long );
void MapDisplay::draw_delta_column( long, long, long, long &, long & );

#endif // BIO_BIOENG_HPP_
/******************************************************************************/
