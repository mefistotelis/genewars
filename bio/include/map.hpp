/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file map.hpp
 *     Header file for map.cpp.
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
#ifndef BIO_MAP_HPP_
#define BIO_MAP_HPP_

enum MapRefreshColumn { // type=int8_t
    RC_NODRAW = 0,
    RC_FLAGS,
    RC_WHOLE,
};

typedef enum MapRefreshColumn MapRefreshColumn;

typedef class XY XY;

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
    void draw_delta_column(SLONG arg1, SLONG arg2, SLONG arg3, SLONG *arg4, SLONG *arg5);
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

struct posasxy { // sizeof=2
    UBYTE X; // offset=0
    UBYTE Y; // offset=1
};

typedef struct posasxy posasxy;

union MapPosXY { // sizeof=2
    posasxy xy; // offset=0
    UWORD Pos; // offset=1
};

typedef union MapPosXY MapPosXY;

char unsigned FlatMap::Valid();
void IsoMapBuffer::FreeMe();
char unsigned MapDisplay::CanSelectThing();
void MapDisplay::SetModified();
void MapDisplay::ClearModified();
void MapDisplay::SetRefreshColumn( char unsigned, MapRefreshColumn );
void MapDisplay::Init();
void MapDisplay::Free();
void MapDisplay::SetFullScreen();
void MapDisplay::ClearFullScreen();
void MapDisplay::SetPanelRefreshZones();
void MapDisplay::CenterOn( XY );
XY MapDisplay::GetDisplayCenter();
void MapDisplay::SelectAmbientSound();
MapBucketThing * MapDisplay::PutThingInBucket( Thing * );
void MapDisplay::StaticSetZones();
void MapDisplay::DrawMapSprites();
void MapDisplay::RefreshRadar();
void MapDisplay::DrawTopRow( short );
void MapDisplay::DrawBottomRow( short );
void MapDisplay::DrawLeftColumn( char unsigned );
void MapDisplay::DrawRightColumn( char unsigned );
void MapDisplay::ForceRedraw();
char unsigned MapDisplay::ScrollHandler();
char unsigned MapDisplay::RegisterPoint( XY, char signed );
void MapDisplay::RegisterTopoPointChange( XY );
void MapDisplay::RegisterPointChange( XY );
void MapDisplay::RegisterBlockChange( XY );
void MapDisplay::RegisterFoundationGrid( XY, char unsigned );
void MapDisplay::RefreshFoundationGrids();
void MapDisplay::DrawGlassTile( XY, char unsigned, char unsigned );
void MapDisplay::ProjectLine( XY, XY, long unsigned, MySprite *, MyMinSprite * );
void MapDisplay::ProjectCircle( XY, long unsigned, char unsigned, MySprite *, char unsigned, MyMinSprite * );
void MapDisplay::DrawSingleColumn( char unsigned, MapRefreshColumn );
void MapDisplay::DrawRefreshColumns();
void MapDisplay::Draw();
void MapDisplay::ResetForPullOut();
PixBuffer * FlatMap::Init( Planet const &, char unsigned, short, short, char unsigned, char unsigned );
void FlatMap::ReDraw( char unsigned );
void FlatMap::MakeTopographyMap( char unsigned );
void FlatMap::UpdateGridTile( GridTile * );
GridTile * FlatMap::XYOn( short, short, XY & );
void FlatMap::CopyRegionFrom( long, long, long, long, long, long );
PixBuffer * IsoMapBuffer::Init( FlatMap &, char unsigned, char unsigned, char unsigned, short, short );
void IsoMapBuffer::ReDraw();
void IsoMapBuffer::UpdateXY( XY );
void IsoMapBuffer::ProjectPixelOnWScreen( XY, char unsigned );
char unsigned IsoMapBuffer::GetXYFromMap( XY, XY & );
GridTile * IsoMapBuffer::XYOn( short, short, XY & );
void IsoMapBuffer::Update();

#endif // BIO_MAP_HPP_
/******************************************************************************/
