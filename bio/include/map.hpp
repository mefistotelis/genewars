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

#include "bftypes.h"
#include "pixbuf.h"
#include "xy.hpp"

class GridTile;
class Planet;
class Thing;

enum MapRefreshColumn { // type=int8_t
    RC_NODRAW = 0,
    RC_FLAGS,
    RC_WHOLE,
};

struct posasxy { // sizeof=2
    UBYTE X; // offset=0
    UBYTE Y; // offset=1
};

union MapPosXY { // sizeof=2
    posasxy xy; // offset=0
    UWORD Pos; // offset=1
};

struct MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

class FlatMap { // sizeof=6
    PixBuffer *pixBuffer;
    BBOOL useExplored; // offset=4
    UBYTE mapMode; // offset=5
public:
    PixBuffer * Init(Planet const &planet1, UBYTE arg2, SWORD arg3, SWORD arg4, UBYTE arg5, BBOOL arg6);
    void ReDraw(UBYTE arg1);
    void MakeTopographyMap(UBYTE arg1);
    void MakeLifeformMap(UBYTE arg1);
    void MakeEnergyMap(UBYTE arg1);
    void MakeRadiationMap(UBYTE arg1);
    void UpdateGridTile(GridTile *arg1);
    void FreeMe();
    void Draw(UBYTE arg1);
    void Draw(UBYTE arg1, SWORD arg2, SWORD arg3);
    void CopyRegionFrom(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6);
    BBOOL Valid();
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY &cor3);
    void Update(BBOOL arg1);
    void Map2Screen(XY cor1);
    void DrawOver(SWORD arg1, SWORD arg2, UBYTE arg3);
};

class IsoMapBuffer { // sizeof=12
    SBYTE fadeLevel; // offset=0
    PixBuffer *pixBuffer; // offset=1
    FlatMap *flatMap; // offset=5
    UBYTE topX; // offset=9
    UBYTE topY; // offset=10
    SBYTE fadeDelta; // offset=11
public:
    PixBuffer * Init(FlatMap &arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, SWORD arg5, SWORD arg6);
    void Update();
    void ReDraw();
    void UpdateXY(XY cor1);
    void ProjectPixelOnWScreen(XY cor1, UBYTE arg2);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY &cor3);
    BBOOL GetXYFromMap(XY cor1, XY &cor2);
    BBOOL Valid();
    void FreeMe();
    void Draw(UBYTE arg1);
    void SetNewTop(UBYTE arg1, UBYTE arg2);
    void SetNewXlatedTop(UBYTE arg1, UBYTE arg2);
};

#endif // BIO_MAP_HPP_
/******************************************************************************/
