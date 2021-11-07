/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file thing.hpp
 *     Header file for thing.cpp.
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
#ifndef BIO_THING_HPP_
#define BIO_THING_HPP_

struct Normal { // sizeof=12
    struct Normal * Normal(struct Normal *arg1);
    SLONG NX; // offset=0
    SLONG NY; // offset=4
    SLONG NZ; // offset=8
};

typedef struct Normal Normal;

class Thing { // sizeof=39
    class Thing * operator=(class Thing *arg1);
    class Thing * Thing(class Thing *arg1);
    class Thing * Thing();
    Vector PredictTargetShot(Thing *arg1, SLONG arg2, SLONG arg3, ULONG arg4);
    UBYTE CreateEffectExplosion(EffectType arg1, UBYTE arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    BBOOL operator==(Thing *arg1);
    BBOOL IsStaticallyDrawn();
    BBOOL IsDead();
    UBYTE Update();
    void Resync();
    BBOOL IsIgnoreClutter();
    BBOOL IsStasis();
    BBOOL IsSoundPlaying(SampleID arg1);
    void FadeOutSound(SampleID arg1, UBYTE arg2);
    void FadeSound(SampleID arg1, SWORD arg2, UBYTE arg3);
    void StopSound(SampleID arg1);
    void Sound(SampleID arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, ULONG arg5);
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void StartFightWith(Thing *arg1);
    BBOOL Damage(SLONG arg1, Thing *arg2);
    void Undiscover();
    void Discover();
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4);
    void DrawOnMap(SWORD arg1, SWORD arg2);
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    MyFrame * GetFrame();
    void Draw(SWORD arg1, SWORD arg2);
    void Draw(XY arg1);
    BBOOL IsFlying();
    BBOOL IsMovingThing();
    BBOOL IsMovable();
    SLONG AltAboveGround();
    SLONG Altitude();
    BBOOL IsDitheredColor();
    UBYTE BaseColor();
    BBOOL IsEnemy(Thing *arg1);
    BBOOL IsSamePlayer(Thing *arg1);
    BBOOL IsIndy();
    SWORD DirTo(Thing *arg1);
    ULONG RangeTo(Thing *arg1);
    ULONG SquareRangeTo(Thing *arg1);
    ULONG TrueRangeTo(Thing *arg1);
    ULONG SquareTrueRangeTo(Thing *arg1);
    BBOOL TToggle4();
    BBOOL TToggle();
    TheBase * Base();
    Player * Player();
    BBOOL IsNew();
    void Invalidate();
    BBOOL Valid();
    void (**__vfptr)();
    ThingIDX prev; // offset=0
    ThingIDX next; // offset=3
    ThingType ttype; // offset=6
    XY loc; // offset=7
    SLONG tgtAlt; // offset=11
    XY tgt; // offset=12
    SWORD idx; // offset=15
    SLONG baseAlt; // offset=17
    UWORD tflags; // offset=21
    UBYTE shade; // offset=23
    UBYTE player; // offset=24
    UBYTE sprIndex; // offset=25
    MyMinSprite mMs; // offset=26
    MySprite *spr; // offset=31
};


class SmartMovingThing : MovingThing { // sizeof=85
    class SmartMovingThing * operator=(class SmartMovingThing *arg1);
    class SmartMovingThing * SmartMovingThing(class SmartMovingThing *arg1);
    class SmartMovingThing * SmartMovingThing();
    BBOOL IsMovingToBuildingInsides();
    UBYTE ScanAroundObstacleIgnoringBuildings(XY arg1, BBOOL arg2, XY *arg3, UBYTE arg4);
    UBYTE ScanAroundObstacle(XY arg1, BBOOL arg2, XY *arg3, UBYTE arg4);
    void VectorToWhereGoingTo(Vector *arg1);
    SLONG SquareTrueRangeToWhereGoingTo();
    void TurnToDesiredAngle();
    void SetSpeedHandler(Normal *arg1, SWORD arg2);
    BBOOL SetMoveInDir(SWORD arg1, SWORD arg2, BBOOL arg3);
    void ClearMoveToTgt();
    void SetIgnoreClutter();
    void SetMoveToAlt(SLONG arg1);
    void SetMoveToInsideBuilding(Building *arg1, XY arg2);
    void SetMoveToBuilding(Building *arg1);
    void SetMoveToThing(Thing *arg1);
    void SetMoveToTgtWithDir(XY arg1);
    BBOOL SetMoveToTgtTest(XY arg1);
    void SetMoveToTgt(XY arg1);
    void SetAvoidLooping();
    void SetRescanPath();
    void SetIsFlying();
    void ClearAvoidLooping();
    void ClearIgnoreClutter();
    void ClearIsFlying();
    void ClearRescanPath();
    void ClearAvoidActive();
    void ClearWasDoneMoving();
    void ClearWasStuck();
    BBOOL IsAvoidLooping();
    BBOOL WasDoneMoving();
    BBOOL WasStuck();
    BBOOL IsMovingToAlt();
    BBOOL IsIgnoreClutter();
    BBOOL IsMovingToBuilding();
    BBOOL IsStoppedOn(XY arg1);
    BBOOL IsMovingToTgt();
    BBOOL IsRescanNeeded();
    BBOOL IsAvoidWaiting();
    BBOOL IsAvoidActive();
    void PreMoveSituationCheck();
    BBOOL IsFlying();
    BBOOL IsStuck();
    BBOOL IsDoneMovingToTgt();
    void StopMoving();
    void Physics();
    void StartAMove(XY arg1);
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector *arg6);
    void (**__vfptr)();
    SLONG desiredAngleZ; // offset=69
    XY avoid; // offset=70
    UWORD mflags; // offset=73
    SWORD desiredAngle; // offset=75
    ThingIDX tgtBuilding; // offset=77
    ThingIDX moveTgt; // offset=80
    UBYTE impassableBits; // offset=83
    UBYTE routeTries; // offset=84
};

class MovingThing : Thing { // sizeof=69
    class MovingThing * operator=(class MovingThing *arg1);
    class MovingThing * MovingThing(class MovingThing *arg1);
    class MovingThing * MovingThing();
    void SetSpeedHandler(Normal *arg1, SWORD arg2);
    void BindItWith(MovingThing *arg1);
    void TransportIt(XY arg1, BBOOL arg2);
    void Physics();
    void VectorAwayFrom(Thing *arg1, SLONG arg2, BBOOL arg3);
    SBYTE HugToIgnoringBuildings(XY arg1, UBYTE arg2, UBYTE arg3, BBOOL arg4);
    SBYTE HugTo(XY arg1, UBYTE arg2, UBYTE arg3, BBOOL arg4, Building *arg5);
    BBOOL IsFacingWithinArc(Thing *arg1, SWORD arg2);
    XY ProjectNextMove(SLONG *arg1);
    XY UnwindLastMove(SLONG *arg1);
    BBOOL IsMoving(SWORD arg1);
    BBOOL IsMoving();
    void ChangeMove(SWORD arg1);
    void ChangeMove(ComponentVector *arg1);
    void ChangeMove(Vector *arg1);
    BBOOL IsASplasher();
    BBOOL NeedToAvoid(GridTile *arg1);
    void NewGridUpdate(GridTile *arg1);
    void StopMoving();
    SWORD MaxMoveSpeed();
    UBYTE ShapeFacing();
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector *arg6);
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    UBYTE Update();
    void DrawOnMap(SWORD arg1, SWORD arg2);
    BBOOL IsVectorable();
    BBOOL IsMovingThing();
    BBOOL IsStaticallyDrawn();
    BBOOL IsMovable();
    SLONG AltAboveGround();
    SLONG Altitude();
    void (**__vfptr)();
    UBYTE fracY;
    UBYTE fracX;
    SLONG altitude; // offset=39
    UWORD mass; // offset=43
    ComponentVector vel; // offset=45
    ComponentVector acc; // offset=51
    Vector vec; // offset=57
    SWORD setSpeed; // offset=63
    SWORD momentumSpeed; // offset=65
};

typedef class MovingThing MovingThing;




class StaticThing : Thing { // sizeof=43
    class StaticThing * operator=(class StaticThing *arg1);
    class StaticThing * StaticThing(class StaticThing *arg1);
    class StaticThing * StaticThing();
    BBOOL IsStaticallyDrawn();
    void DrawNoDraw(SWORD arg1, SWORD arg2);
    void Resync();
    void DrawOnMap(SWORD arg1, SWORD arg2);
    void (**__vfptr)();
    MyFrame *oldFrame;
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



class PolarRangeScan : RangeScan { // sizeof=51
    class PolarRangeScan * PolarRangeScan(class PolarRangeScan *arg1);
    void displayDebug(XY arg1, ULONG *arg2);
    void PerGrid();
    void Do();
    class PolarRangeScan * PolarRangeScan(XY arg1, ULONG arg2, UBYTE arg3);
    void (**__vfptr)();
    ULONG ringRange;
    BBOOL satisfied;
    UBYTE foundationSize;
    ULONG tileRange;
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
};

typedef class SmartMovingThing SmartMovingThing;

class PassableTerrainScan : PolarRangeScan { // sizeof=60
    class PassableTerrainScan * PassableTerrainScan(class PassableTerrainScan *arg1);
    void PerGrid();
    class PassableTerrainScan * PassableTerrainScan(SmartMovingThing arg1, ULONG arg2);
    void (**__vfptr)();
    SmartMovingThing thing;
    BBOOL foundAPlace; // offset=51
    XY goToXY; // offset=52
};

class ScanRecord { // sizeof=128
    class ScanRecord * ScanRecord(class ScanRecord *arg1);
    int Hash(XY arg1);
    BBOOL IsRecorded(XY arg1);
    void Add(XY arg1);
    class ScanRecord * ScanRecord();
    BBOOL used[127];
    XY xy[127];
};

typedef class ScanRecord ScanRecord;

typedef class PassableTerrainScan PassableTerrainScan;

char unsigned SmartMovingThing::IsRescanNeeded();
char unsigned SmartMovingThing::IsStoppedOn( XY );
char unsigned SmartMovingThing::IsMovingToBuilding();
char unsigned SmartMovingThing::IsAvoidLooping();
void SmartMovingThing::SetAvoidLooping();
char unsigned SmartMovingThing::IsMovingToBuildingInsides();
near PassableTerrainScan::PassableTerrainScan( SmartMovingThing &, long unsigned );
near ScanRecord::ScanRecord();
int ScanRecord::Hash( XY );
void PassableTerrainScan::PerGrid();
void ScanRecord::Add( XY );
char unsigned ScanRecord::IsRecorded( XY );
void Thing::Read( long & );
void Thing::Write( long & );
char unsigned Thing::CreateEffectExplosion( EffectType, char unsigned, long, long, char unsigned );
Vector Thing::PredictTargetShot( Thing *, long, long, long unsigned );
XY MovingThing::UnwindLastMove( long & );
XY MovingThing::ProjectNextMove( long & );
void MovingThing::SetSpeedHandler( Normal &, short );
void MovingThing::VectorAwayFrom( Thing &, long, char unsigned );
void MovingThing::Physics();
void MovingThing::TransportIt( XY, char unsigned );
void MovingThing::BindItWith( MovingThing & );
char unsigned MovingThing::IsFacingWithinArc( Thing *, short );
char signed MovingThing::HugTo( XY, char unsigned, char unsigned, char unsigned, Building * );
char signed MovingThing::HugToIgnoringBuildings( XY, char unsigned, char unsigned, char unsigned );
char unsigned SmartMovingThing::ScanAroundObstacle( XY, char unsigned, XY &, char unsigned );
char unsigned SmartMovingThing::ScanAroundObstacleIgnoringBuildings( XY, char unsigned, XY &, char unsigned );
long SmartMovingThing::SquareTrueRangeToWhereGoingTo();
void SmartMovingThing::VectorToWhereGoingTo( Vector & );
void SmartMovingThing::SetSpeedHandler( Normal &, short );
void SmartMovingThing::TurnToDesiredAngle();
void SmartMovingThing::Physics();
char unsigned SmartMovingThing::SetMoveInDir( short, short, char unsigned );
void SmartMovingThing::PreMoveSituationCheck();
char unsigned Thing::operator ==( Thing * );
extern void (near * const __vftbl[])();

#endif // BIO_THING_HPP_
/******************************************************************************/
