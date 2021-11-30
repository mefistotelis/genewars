/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file gridtile.hpp
 *     Header file for gridtile.cpp.
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
#ifndef BIO_GRIDTILE_HPP_
#define BIO_GRIDTILE_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "thingidx.hpp"

class Plant;
class Creature;
class Thing;
class PlSpec;

class GridTile { // sizeof=16
public:
    SWORD Shade; // offset=0
    SWORD Alt; // offset=2
    SWORD Block; // offset=4
    UBYTE Orientation; // offset=6
    ThingIDX things; // offset=7
    SWORD tempDiff; // offset=10
    UBYTE flags; // offset=12
    UBYTE explored; // offset=13
    UBYTE radiation; // offset=14
    UBYTE minerals; // offset=15
public:
    GridTile * GetRealGrid(XY cor1);
    static GridTile * GetRealGrid(SWORD arg1, SWORD arg2);
    void Add(Thing *tng1);
    void Remove(Thing *tng1);
    Thing * GetHuntTarget(Creature *arg1);
    Creature * GetMate(Creature *arg1);
    Creature * GetEnemyCreature(UBYTE arg1);
    Creature * GetMyCreature(UBYTE arg1);
    Creature * GetBestBones();
    Creature * GetFirstCreatureOnTile(ULONG &arg1);
    Plant * GetAnyPlant(UBYTE arg1);
    Plant * GetLivePlant(UBYTE arg1);
    Plant * GetDeadPlant();
    Plant * GetFallenPlant(BOOL arg1);
    PlSpec * GetPlSpec(UBYTE arg1, PlSpec *spec2);
    PlSpec * GetEnemyPlSpec(UBYTE arg1, SBYTE arg2);
    Building * GetBuilding();
    void ClearAtDropOff(BBOOL arg1);
    BBOOL IsFireHere();
    SLONG ClutterRating(Thing *tng1);
    BBOOL IsThingHere(Thing &tng1);
    UBYTE GetTerrain(XY cor1);
    ULONG CountAllPlants(BBOOL arg1);
    ULONG CountAllCreatures();
    void LightShade(SLONG arg1);
    SWORD EffectAlt(SWORD arg1, SLONG arg2);
    void ComputeMinMax(SWORD &arg1, SWORD &arg2, SLONG arg3);
    SWORD AverageTile(SLONG arg1);
    void GrowTile();
    void ComputeTempDev();
    void InsureOrientation(SLONG arg1);
    SWORD ComputeTileDelta(SLONG arg1);
    void NormalizeThingAlts();
    void ReshadeNormalThings();
    void MakeAllRock(SLONG arg1);
    void FlattenShores(SLONG arg1);
    BBOOL IsFoundation();
    void SetFoundation();
    void ClearFoundation();
    BBOOL IsCrater();
    BBOOL IsOffMap();
    XY GetXY();
    SWORD EffectAlt(XY cor1, SWORD arg2);
    static BBOOL Flatten(XY cor1, SWORD arg2, SWORD arg3);
    void UpdateArea(XY cor1, XY cor2);
    static void LockRegion(XY cor1, UBYTE rangeX, UBYTE rangeY);
    static void UnlockRegion(XY cor1, UBYTE rangeX, UBYTE rangeY);
    void FixErrorsAndShores(XY cor1, XY cor2, BBOOL arg3);
private:
    void InsureNoOverlaps(SLONG arg1);
public:
    GridTile & operator =(GridTile const &gtile1);
};

#endif // BIO_GRIDTILE_HPP_
/******************************************************************************/
