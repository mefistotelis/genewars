/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file plant.hpp
 *     Header file for plant.cpp.
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
#ifndef BIO_PLANT_HPP_
#define BIO_PLANT_HPP_

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

typedef enum PlantSpecies PlantSpecies;

class Plant : StaticThing { // sizeof=49
    class Plant * operator=(class Plant *arg1);
    class Plant * Plant(class Plant *arg1);
    class Plant * Plant();
    BBOOL operator==(Plant *arg1);
    SLONG WriteBuffer(Plant **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(Plant **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void UpdateAll();
    Plant * Create(UBYTE arg1, UBYTE arg2, XY arg3);
    void InitArray();
    void Draw(SWORD arg1, SWORD arg2);
    void ChopDown();
    void Die();
    PSpecies * Species();
    void Free();
    void ClearBeingEaten();
    BBOOL IsBeingEaten();
    BBOOL IsFallen();
    BBOOL IsDead();
    void SetBeingEaten();
    UBYTE Update();
    BBOOL Damage(SWORD arg1, Thing *arg2);
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void (**__vfptr)();
    PlantSpecies species; // offset=43
    SWORD health; // offset=44
    UBYTE flags; // offset=46
    UBYTE age; // offset=47
    UBYTE wood; // offset=48
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



char unsigned GridTile::IsOffMap();
void Plant::Draw( short, short );
Plant * Plant::Create( char unsigned, char unsigned, XY );
void Plant::Resync();
void Plant::ChopDown();
void Plant::Die();
char unsigned Plant::Damage( short, Thing * );
void Plant::InitArray();
void Plant::Read( long & );
void Plant::Write( long & );
long Plant::ReadBuffer( Plant * *, long, long, BioGame & );
long Plant::WriteBuffer( Plant * *, long, long, BioGame & );
char unsigned Plant::Update();
void Plant::UpdateAll();
char unsigned Plant::operator ==( Plant * );

#endif // BIO_PLANT_HPP_
/******************************************************************************/
