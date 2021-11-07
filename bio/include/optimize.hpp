/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file optimize.hpp
 *     Header file for optimize.cpp.
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
#ifndef BIO_OPTIMIZE_HPP_
#define BIO_OPTIMIZE_HPP_

typedef class Player Player;



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



void BlastScreens();
void ZeroVRAM();
void FragCopyBScreenToWScreen( XY, XY );
void MapDisplay::FragCopyBScreenToWScreen();
void FragCopyWScreenToVRAM( XY, XY );
void CopyRegion( short, short, short, short, short, short );
void RefreshFromBScreenNormal();
void MapDisplay::RefreshFromBScreen();
void RefreshToVRAM();
void copy_svga_box( short unsigned, short unsigned, short unsigned, short unsigned );
void SwapScreensBio();

#endif // BIO_OPTIMIZE_HPP_
/******************************************************************************/
