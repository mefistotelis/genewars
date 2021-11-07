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

typedef class GridTile GridTile;

class GridTile { // sizeof=16
    class GridTile * operator=(class GridTile *arg1);
    void InsureNoOverlaps(SLONG arg1);
    void FixErrorsAndShores(XY arg1, XY arg2, BBOOL arg3);
    void UnlockRegion(XY arg1, UBYTE arg2, UBYTE arg3);
    void LockRegion(XY arg1, UBYTE arg2, UBYTE arg3);
    void UpdateArea(XY arg1, XY arg2);
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
    void ComputeMinMax(SWORD *arg1, SWORD *arg2, SLONG arg3);
    SWORD EffectAlt(SWORD arg1, SLONG arg2);
    void LightShade(SLONG arg1);
    ULONG CountAllCreatures();
    ULONG CountAllPlants(BBOOL arg1);
    UBYTE GetTerrain(XY arg1);
    BBOOL IsThingHere(Thing *arg1);
    SLONG ClutterRating(Thing *arg1);
    BBOOL IsFireHere();
    void ClearAtDropOff(BBOOL arg1);
    Building * GetBuilding();
    PlSpec * GetEnemyPlSpec(UBYTE arg1, SBYTE arg2);
    PlSpec * GetPlSpec(UBYTE arg1, PlSpec *arg2);
    Plant * GetFallenPlant(BOOL arg1);
    Plant * GetDeadPlant();
    Plant * GetLivePlant(UBYTE arg1);
    Plant * GetAnyPlant(UBYTE arg1);
    Creature * GetFirstCreatureOnTile(ULONG *arg1);
    Creature * GetBestBones();
    Creature * GetMyCreature(UBYTE arg1);
    Creature * GetEnemyCreature(UBYTE arg1);
    Creature * GetMate(Creature *arg1);
    Thing * GetHuntTarget(Creature *arg1);
    void Remove(Thing *arg1);
    void Add(Thing *arg1);
    GridTile * GetRealGrid(SWORD arg1, SWORD arg2);
    GridTile * GetRealGrid(XY arg1);
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



class RangeScan { // sizeof=20
    class RangeScan * RangeScan(class RangeScan *arg1);
    void Init(XY *arg1, ULONG arg2, BBOOL arg3);
    class RangeScan * RangeScan(XY *arg1, ULONG arg2, BBOOL arg3);
    XY tgt;
    SWORD yHi;
    SWORD yLo;
    SWORD xHi;
    SWORD xLo;
    XY xy;
    SWORD yD;
    SWORD xD;
};

class RangeScanner : RangeScan { // sizeof=41
    class RangeScanner * RangeScanner(class RangeScanner *arg1);
    void PerGrid();
    void Do();
    class RangeScanner * RangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
};

class WeightedRangeScanner : RangeScanner { // sizeof=106
    class WeightedRangeScanner * WeightedRangeScanner(class WeightedRangeScanner *arg1);
    void Do();
    class WeightedRangeScanner * WeightedRangeScanner(XY arg1, ULONG arg2, XY *arg3, SLONG arg4);
    class WeightedRangeScanner * WeightedRangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    SLONG dirWeights[15];
    UBYTE bestDir; // offset=41
};

class WeightedTgtRangeScanner : WeightedRangeScanner { // sizeof=238
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(class WeightedTgtRangeScanner *arg1);
    void Do();
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(XY arg1, ULONG arg2, XY *arg3, SLONG arg4);
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    Thing *bestThings[15];
    int bestPerSector[15];
    Thing *tgtThing; // offset=106
};

long GridTile::__defarg();
long GridTile::__defarg();
long GridTile::__defarg();
char unsigned Creature::IsBones();
GridTile * GridTile::GetRealGrid( XY );
GridTile * GridTile::GetRealGrid( short, short );
void GridTile::Add( Thing * );
void GridTile::Remove( Thing * );
Thing * GridTile::GetHuntTarget( Creature * );
Creature * GridTile::GetMate( Creature * );
Creature * GridTile::GetEnemyCreature( char unsigned );
Creature * GridTile::GetMyCreature( char unsigned );
Creature * GridTile::GetBestBones();
long GridTile::ClutterRating( Thing * );
void GridTile::ClearAtDropOff( char unsigned );
Plant * GridTile::GetAnyPlant( char unsigned );
Plant * GridTile::GetLivePlant( char unsigned );
Plant * GridTile::GetDeadPlant();
Plant * GridTile::GetFallenPlant( long unsigned );
Building * GridTile::GetBuilding();
PlSpec * GridTile::GetPlSpec( char unsigned, PlSpec * );
PlSpec * GridTile::GetEnemyPlSpec( char unsigned, char signed );
char unsigned GridTile::IsThingHere( Thing & );
char unsigned GridTile::GetTerrain( XY );
long unsigned GridTile::CountAllPlants( char unsigned );
long unsigned GridTile::CountAllCreatures();
Creature * GridTile::GetFirstCreatureOnTile( long unsigned & );
char unsigned GridTile::IsFireHere();
void GridTile::ReshadeNormalThings();
void GridTile::NormalizeThingAlts();
void GridTile::InsureOrientation( long );
void GridTile::InsureNoOverlaps( long );
void GridTile::GrowTile();
void GridTile::LightShade( long );
short GridTile::EffectAlt( XY, short );
short GridTile::EffectAlt( short, long );
char unsigned GridTile::Flatten( XY, short, short );
short GridTile::AverageTile( long );
void GridTile::ComputeMinMax( short &, short &, long );
short GridTile::ComputeTileDelta( long );
void GridTile::ComputeTempDev();
void GridTile::MakeAllRock( long );
void GridTile::FlattenShores( long );
void GridTile::UpdateArea( XY, XY );
void GridTile::LockRegion( XY, char unsigned, char unsigned );
void GridTile::UnlockRegion( XY, char unsigned, char unsigned );
void GridTile::FixErrorsAndShores( XY, XY, char unsigned );
void RangeScan::Init( XY &, long unsigned, char unsigned );
void RangeScanner::Do();
void WeightedRangeScanner::Do();
void WeightedTgtRangeScanner::Do();

#endif // BIO_GRIDTILE_HPP_
/******************************************************************************/
