/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file gridtile.cpp
 *     Implementation of related functions.
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
#include "gridtile.hpp"

GridTile * GridTile::GetRealGrid(XY cor1)
{
// code at 0001:0005dc60
}

GridTile * GridTile::GetRealGrid(SWORD arg1, SWORD arg2)
{
// code at 0001:0005dc10
}

void GridTile::Add(Thing *tng1)
{
// code at 0001:00059b5f
}

void GridTile::Remove(Thing *tng1)
{
// code at 0001:00059c49
}

Thing * GridTile::GetHuntTarget(Creature *crtr)
{
// code at 0001:00059f20
}

Creature * GridTile::GetMate(Creature *crtr)
{
// code at 0001:0005a16c
}

Creature * GridTile::GetEnemyCreature(UBYTE arg1)
{
// code at 0001:0005a1ed
}

Creature * GridTile::GetMyCreature(UBYTE arg1)
{
// code at 0001:0005a270
}

Creature * GridTile::GetBestBones()
{
// code at 0001:0005a2d5
}

SLONG GridTile::ClutterRating(Thing *tng1)
{
// code at 0001:0005a36c
}

void GridTile::ClearAtDropOff(BBOOL arg1)
{
// code at 0001:0005a4ea
}

Plant * GridTile::GetAnyPlant(UBYTE arg1)
{
// code at 0001:0005a5a9
}

Plant * GridTile::GetLivePlant(UBYTE arg1)
{
// code at 0001:0005a61a
}

Plant * GridTile::GetDeadPlant()
{
// code at 0001:0005a6a3
}

Plant * GridTile::GetFallenPlant(BOOL arg1)
{
// code at 0001:0005a723
}

Building * GridTile::GetBuilding()
{
// code at 0001:0005a7cf
}

PlSpec * GridTile::GetPlSpec(UBYTE arg1, PlSpec *spec)
{
// code at 0001:0005a828
}

PlSpec * GridTile::GetEnemyPlSpec(UBYTE arg1, SBYTE arg2)
{
// code at 0001:0005a89e
}

BBOOL GridTile::IsThingHere(Thing &tng1)
{
// code at 0001:0005a917
}

UBYTE GridTile::GetTerrain(XY cor1)
{
// code at 0001:0005a96b
}

ULONG GridTile::CountAllPlants(BBOOL arg1)
{
// code at 0001:0005ab0c
}

ULONG GridTile::CountAllCreatures()
{
// code at 0001:0005ab99
}

Creature * GridTile::GetFirstCreatureOnTile(ULONG &arg1)
{
// code at 0001:0005ac12
}

char unsigned GridTile::IsFireHere()
{
// code at 0001:0005ac9a
}

void GridTile::ReshadeNormalThings()
{
// code at 0001:0005acfd
}

void GridTile::NormalizeThingAlts()
{
// code at 0001:0005ad82
}

void GridTile::InsureOrientation(SLONG arg1)
{
// code at 0001:0005ae48
}

void GridTile::InsureNoOverlaps(SLONG arg1)
{
// code at 0001:0005b74b
}

void GridTile::GrowTile()
{
// code at 0001:0005ba7a
}

void GridTile::LightShade(SLONG arg1)
{
// code at 0001:0005bb97
}

SWORD GridTile::EffectAlt(XY arg1, SWORD arg2)
{
// code at 0001:0005be82
}

SWORD GridTile::EffectAlt(SWORD arg1, SLONG arg2)
{
// code at 0001:0005c00d
}

BBOOL GridTile::Flatten(XY arg1, SWORD arg2, SWORD arg3)
{
// code at 0001:0005c18e
}

SWORD GridTile::AverageTile(SLONG arg1)
{
// code at 0001:0005c477
}

void GridTile::ComputeMinMax(SWORD &arg1, SWORD &arg2, SLONG arg3)
{
// code at 0001:0005c5b8
}

SWORD GridTile::ComputeTileDelta(SLONG arg1)
{
// code at 0001:0005c690
}

void GridTile::ComputeTempDev()
{
// code at 0001:0005c8ef
}

void GridTile::MakeAllRock(SLONG arg1)
{
// code at 0001:0005c9b9
}

void GridTile::FlattenShores(SLONG arg1)
{
// code at 0001:0005cc30
}

void GridTile::UpdateArea(XY cor1, XY cor2)
{
// code at 0001:0005d070
}

void GridTile::LockRegion(XY cor1, UBYTE arg2, UBYTE arg3)
{
// code at 0001:0005d4f0
}

void GridTile::UnlockRegion(XY cor1, UBYTE arg2, UBYTE arg3)
{
// code at 0001:0005d571
}

void GridTile::FixErrorsAndShores(XY cor1, XY cor2, BBOOL arg3)
{
// code at 0001:0005d5f2
}

GridTile & GridTile::operator =(GridTile const &arg1)
{
// code at 0001:00059864
}

char unsigned GridTile::IsOffMap()
{
// code at 0001:00085718
}

XY GridTile::GetXY()
{
// code at 0001:0004910c
}

void GridTile::SetFoundation()
{
// code at 0001:0009388c
}

void GridTile::ClearFoundation()
{
// code at 0001:00093868
}

BBOOL GridTile::IsCrater()
{
// code at 0001:00093820
}

BBOOL GridTile::IsFoundation()
{
// code at 0001:0002624c
}

/*long GridTile::__defarg()
{
// code at 0001:000938c0
}*/

/*long GridTile::__defarg()
{
// code at 0001:00026288
}*/

/*long GridTile::__defarg()
{
// code at 0001:0004097c
}*/

/*long GridTile::__defarg()
{
// code at 0001:00037898
}*/

/*long GridTile::__defarg()
{
// code at 0001:0005dd30
}*/

/*long GridTile::__defarg()
{
// code at 0001:0005dd0c
}*/

/*long GridTile::__defarg()
{
// code at 0001:0005dce8
}*/

/*char unsigned GridTile::__defarg()
{
// code at 0001:000781a8
}*/

/******************************************************************************/
