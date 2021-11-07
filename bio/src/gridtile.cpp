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

long GridTile::__defarg()
{
// code at 0001:0005dd30
}

long GridTile::__defarg()
{
// code at 0001:0005dd0c
}

long GridTile::__defarg()
{
// code at 0001:0005dce8
}

char unsigned Creature::IsBones()
{
// code at 0001:0005dcb0
}

GridTile * GridTile::GetRealGrid( XY )
{
// code at 0001:0005dc60
}

GridTile * GridTile::GetRealGrid( short, short )
{
// code at 0001:0005dc10
}

void GridTile::Add( Thing * )
{
// code at 0001:00059b5f
}

void GridTile::Remove( Thing * )
{
// code at 0001:00059c49
}

Thing * GridTile::GetHuntTarget( Creature * )
{
// code at 0001:00059f20
}

Creature * GridTile::GetMate( Creature * )
{
// code at 0001:0005a16c
}

Creature * GridTile::GetEnemyCreature( char unsigned )
{
// code at 0001:0005a1ed
}

Creature * GridTile::GetMyCreature( char unsigned )
{
// code at 0001:0005a270
}

Creature * GridTile::GetBestBones()
{
// code at 0001:0005a2d5
}

long GridTile::ClutterRating( Thing * )
{
// code at 0001:0005a36c
}

void GridTile::ClearAtDropOff( char unsigned )
{
// code at 0001:0005a4ea
}

Plant * GridTile::GetAnyPlant( char unsigned )
{
// code at 0001:0005a5a9
}

Plant * GridTile::GetLivePlant( char unsigned )
{
// code at 0001:0005a61a
}

Plant * GridTile::GetDeadPlant()
{
// code at 0001:0005a6a3
}

Plant * GridTile::GetFallenPlant( long unsigned )
{
// code at 0001:0005a723
}

Building * GridTile::GetBuilding()
{
// code at 0001:0005a7cf
}

PlSpec * GridTile::GetPlSpec( char unsigned, PlSpec * )
{
// code at 0001:0005a828
}

PlSpec * GridTile::GetEnemyPlSpec( char unsigned, char signed )
{
// code at 0001:0005a89e
}

char unsigned GridTile::IsThingHere( Thing & )
{
// code at 0001:0005a917
}

char unsigned GridTile::GetTerrain( XY )
{
// code at 0001:0005a96b
}

long unsigned GridTile::CountAllPlants( char unsigned )
{
// code at 0001:0005ab0c
}

long unsigned GridTile::CountAllCreatures()
{
// code at 0001:0005ab99
}

Creature * GridTile::GetFirstCreatureOnTile( long unsigned & )
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

void GridTile::InsureOrientation( long )
{
// code at 0001:0005ae48
}

void GridTile::InsureNoOverlaps( long )
{
// code at 0001:0005b74b
}

void GridTile::GrowTile()
{
// code at 0001:0005ba7a
}

void GridTile::LightShade( long )
{
// code at 0001:0005bb97
}

short GridTile::EffectAlt( XY, short )
{
// code at 0001:0005be82
}

short GridTile::EffectAlt( short, long )
{
// code at 0001:0005c00d
}

char unsigned GridTile::Flatten( XY, short, short )
{
// code at 0001:0005c18e
}

short GridTile::AverageTile( long )
{
// code at 0001:0005c477
}

void GridTile::ComputeMinMax( short &, short &, long )
{
// code at 0001:0005c5b8
}

short GridTile::ComputeTileDelta( long )
{
// code at 0001:0005c690
}

void GridTile::ComputeTempDev()
{
// code at 0001:0005c8ef
}

void GridTile::MakeAllRock( long )
{
// code at 0001:0005c9b9
}

void GridTile::FlattenShores( long )
{
// code at 0001:0005cc30
}

void GridTile::UpdateArea( XY, XY )
{
// code at 0001:0005d070
}

void GridTile::LockRegion( XY, char unsigned, char unsigned )
{
// code at 0001:0005d4f0
}

void GridTile::UnlockRegion( XY, char unsigned, char unsigned )
{
// code at 0001:0005d571
}

void GridTile::FixErrorsAndShores( XY, XY, char unsigned )
{
// code at 0001:0005d5f2
}

void RangeScan::Init( XY &, long unsigned, char unsigned )
{
// code at 0001:0005d721
}

void RangeScanner::Do()
{
// code at 0001:0005d926
}

void WeightedRangeScanner::Do()
{
// code at 0001:0005d9f1
}

void WeightedTgtRangeScanner::Do()
{
// code at 0001:0005dbb7
}


/******************************************************************************/
