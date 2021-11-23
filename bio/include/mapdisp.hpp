/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file mapdisp.hpp
 *     Header file for mapdisp.cpp.
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
#ifndef BIO_MAPDISP_HPP_
#define BIO_MAPDISP_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "pixbuf.h"
#include "xy.hpp"
#include "map.hpp"

class Thing;
class GridTile;

class MapDisplay { // sizeof=217
public:
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
    XY other; // offset=51
    Thing *selectedThing; // offset=55
    MapBucketThing bucketThings[256]; // offset=59
    MapBucketThing *buckets[480]; // offset=2619
    SWORD numBucketThings; // offset=4539
    MapRefreshColumn refreshColumns[20]; // offset=4541
    XY selectedXY; // offset=4561
    UBYTE scrollCount; // offset=4565
    SBYTE glassBuildingCounter; // offset=4566
    BBOOL exploredTerrainInView; // offset=4567
    BBOOL needToDrawSprites; // offset=4568
public:
    void Init();
    void Free();
    void Draw();
    MapBucketThing * PutThingInBucket(Thing *tng1);
    void ResetForPullOut();
    void ForceRedraw();
    BBOOL ScrollHandler();
    void RefreshFromBScreen();
    void RegisterTopoPointChange(XY cor1);
    void RegisterPointChange(XY cor1);
    void RegisterBlockChange(XY cor1);
    void CenterOn(XY cor1);
    XY GetDisplayCenter();
    void StaticSetZones();
    void ProjectCircle(XY cor1, ULONG arg2, UBYTE arg3, MySprite *arg4, BBOOL arg5, MyMinSprite *arg6);
    void ProjectLine(XY cor1, XY cor2, ULONG arg3, MySprite *arg4, MyMinSprite *arg5);
    void RefreshRadar();
    void SetPanelRefreshZones();
    void RefreshFoundationGrids();
    void DrawGlassTile(XY cor1, UBYTE arg2, BBOOL arg3);
    BBOOL IsOnScreen(SWORD arg1, SWORD arg2);
    void SetFullScreen();
    void ClearFullScreen();
    BBOOL IsFullScreen();
    void SetCanSelectThing();
    void ClearCanSelectThing();
    BBOOL CanSelectThing();
    void SetScrolled();
    BBOOL IsScrolling();
    BBOOL HasJustScrolled();
    BBOOL IsRegisteredRightClick();
    void SetRegisteredRightClick();
    void ClearRegisteredRightClick();
    void SetModified();
    BBOOL IsModified();
    void ClearModified();
    void SetDrawFoundations();
    void ClearDrawFoundations();
    BBOOL IsDrawFoundations();
    void ToggleGlassBuildings();
    BBOOL IsGlassBuildings();
    BBOOL IsExploredTerrainInView();
private:
    void draw_column(SLONG arg1, SLONG arg2, SLONG arg3);
    void draw_delta_column(SLONG arg1, SLONG arg2, SLONG arg3, SLONG &arg4, SLONG &arg5);
    void FragCopyBScreenToWScreen();
    void DrawMapSprites();
    void DrawTopRow(SWORD arg1);
    void DrawBottomRow(SWORD arg1);
    void DrawLeftColumn(UBYTE arg1);
    void DrawRightColumn(UBYTE arg1);
    void DrawSingleColumn(UBYTE arg1, MapRefreshColumn arg2); // last arg uncertain
    void DrawRefreshColumns();
    BBOOL RegisterPoint(XY cor1, SBYTE arg2);
    void SetRefreshColumn(UBYTE arg1, MapRefreshColumn arg2); // last arg uncertain
    void SelectAmbientSound();
    void RegisterFoundationGrid(XY cor1, UBYTE arg2);
};

#endif // BIO_MAPDISP_HPP_
/******************************************************************************/
