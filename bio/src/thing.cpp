/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file thing.cpp
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
#include "thing.hpp"

long ComponentVector::Length()
{
// code at 0001:00088f68
}

char unsigned SmartMovingThing::IsRescanNeeded()
{
// code at 0001:00088f28
}

char unsigned SmartMovingThing::IsStoppedOn( XY )
{
// code at 0001:00088ed0
}

char unsigned SmartMovingThing::IsMovingToBuilding()
{
// code at 0001:00088ea4
}

char unsigned SmartMovingThing::IsAvoidLooping()
{
// code at 0001:00088e64
}

void SmartMovingThing::SetAvoidLooping()
{
// code at 0001:00088e40
}

char unsigned SmartMovingThing::IsMovingToBuildingInsides()
{
// code at 0001:00088e00
}

near PassableTerrainScan::PassableTerrainScan( SmartMovingThing &, long unsigned )
{
// code at 0001:00088da8
}

near ScanRecord::ScanRecord()
{
// code at 0001:00088d70
}

int ScanRecord::Hash( XY )
{
// code at 0001:00088d34
}

void PassableTerrainScan::PerGrid()
{
// code at 0001:00085790
}

void ScanRecord::Add( XY )
{
// code at 0001:000857e9
}

char unsigned ScanRecord::IsRecorded( XY )
{
// code at 0001:0008584c
}

Thing * ThingIDX::operator &()
{
// code at 0001:000858ce
}

void Thing::Read( long & )
{
// code at 0001:00085a1c
}

void Thing::Write( long & )
{
// code at 0001:00085a65
}

char unsigned Thing::CreateEffectExplosion( EffectType, char unsigned, long, long, char unsigned )
{
// code at 0001:00085a98
}

Vector Thing::PredictTargetShot( Thing *, long, long, long unsigned )
{
// code at 0001:00085e65
}

XY MovingThing::UnwindLastMove( long & )
{
// code at 0001:000860a8
}

XY MovingThing::ProjectNextMove( long & )
{
// code at 0001:00086152
}

void MovingThing::SetSpeedHandler( Normal &, short )
{
// code at 0001:000861fc
}

void MovingThing::VectorAwayFrom( Thing &, long, char unsigned )
{
// code at 0001:000862e9
}

void MovingThing::Physics()
{
// code at 0001:000863f8
}

void MovingThing::TransportIt( XY, char unsigned )
{
// code at 0001:00086c34
}

void MovingThing::BindItWith( MovingThing & )
{
// code at 0001:00086d09
}

char unsigned MovingThing::IsFacingWithinArc( Thing *, short )
{
// code at 0001:00086f64
}

char signed MovingThing::HugTo( XY, char unsigned, char unsigned, char unsigned, Building * )
{
// code at 0001:00086fc9
}

char signed MovingThing::HugToIgnoringBuildings( XY, char unsigned, char unsigned, char unsigned )
{
// code at 0001:00087130
}

char unsigned SmartMovingThing::ScanAroundObstacle( XY, char unsigned, XY &, char unsigned )
{
// code at 0001:00087277
}

char unsigned SmartMovingThing::ScanAroundObstacleIgnoringBuildings( XY, char unsigned, XY &, char unsigned )
{
// code at 0001:000874fc
}

long SmartMovingThing::SquareTrueRangeToWhereGoingTo()
{
// code at 0001:00087710
}

void SmartMovingThing::VectorToWhereGoingTo( Vector & )
{
// code at 0001:000877ea
}

void SmartMovingThing::SetSpeedHandler( Normal &, short )
{
// code at 0001:00087907
}

void SmartMovingThing::TurnToDesiredAngle()
{
// code at 0001:00087a0c
}

void SmartMovingThing::Physics()
{
// code at 0001:00087be9
}

char unsigned SmartMovingThing::SetMoveInDir( short, short, char unsigned )
{
// code at 0001:00088941
}

void SmartMovingThing::PreMoveSituationCheck()
{
// code at 0001:00088b04
}

char unsigned Thing::operator ==( Thing * )
{
// code at 0001:00088b8e
}

void (near * const __vftbl[])();


/******************************************************************************/
