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
    GridTile & operator =(GridTile const &arg1);
    void InsureNoOverlaps(SLONG arg1);
    void FixErrorsAndShores(XY cor1, XY cor2, BBOOL arg3);
    void UnlockRegion(XY cor1, UBYTE arg2, UBYTE arg3);
    void LockRegion(XY cor1, UBYTE arg2, UBYTE arg3);
    void UpdateArea(XY cor1, XY cor2);
    BBOOL Flatten(XY arg1, SWORD arg2, SWORD arg3);
    SWORD EffectAlt(XY arg1, SWORD arg2);
    XY GetXY();
    BBOOL IsOffMap();
    BBOOL IsCrater();
    void ClearFoundation();
    void SetFoundation();
    BBOOL IsFoundation();
    void FlattenShores(SLONG arg1);
    void MakeAllRock(SLONG arg1);
    void ReshadeNormalThings();
    void NormalizeThingAlts();
    SWORD ComputeTileDelta(SLONG arg1);
    void InsureOrientation(SLONG arg1);
    void ComputeTempDev();
    void GrowTile();
    SWORD AverageTile(SLONG arg1);
    void ComputeMinMax(SWORD &arg1, SWORD &arg2, SLONG arg3);
    SWORD EffectAlt(SWORD arg1, SLONG arg2);
    void LightShade(SLONG arg1);
    ULONG CountAllCreatures();
    ULONG CountAllPlants(BBOOL arg1);
    UBYTE GetTerrain(XY cor1);
    BBOOL IsThingHere(Thing &tng1);
    SLONG ClutterRating(Thing *tng1);
    BBOOL IsFireHere();
    void ClearAtDropOff(BBOOL arg1);
    Building * GetBuilding();
    PlSpec * GetEnemyPlSpec(UBYTE arg1, SBYTE arg2);
    PlSpec * GetPlSpec(UBYTE arg1, PlSpec *spec);
    Plant * GetFallenPlant(BOOL arg1);
    Plant * GetDeadPlant();
    Plant * GetLivePlant(UBYTE arg1);
    Plant * GetAnyPlant(UBYTE arg1);
    Creature * GetFirstCreatureOnTile(ULONG &arg1);
    Creature * GetBestBones();
    Creature * GetMyCreature(UBYTE arg1);
    Creature * GetEnemyCreature(UBYTE arg1);
    Creature * GetMate(Creature *crtr);
    Thing * GetHuntTarget(Creature *crtr);
    void Remove(Thing *tng1);
    void Add(Thing *tng1);
    GridTile * GetRealGrid(SWORD arg1, SWORD arg2);
    GridTile * GetRealGrid(XY cor1);
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
};

#endif // BIO_GRIDTILE_HPP_
/******************************************************************************/
