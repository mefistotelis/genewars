/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file smvthing.cpp
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
#include "smvthing.hpp"

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

char unsigned SmartMovingThing::IsAvoidActive()
{
// code at 0001:00037858
}

char unsigned SmartMovingThing::IsAvoidWaiting()
{
// code at 0001:00084618
}

void SmartMovingThing::ClearIsFlying()
{
// code at 0001:000845f0
}

void SmartMovingThing::SetIsFlying()
{
// code at 0001:000845bc
}

void SmartMovingThing::SetMoveToTgtWithDir( XY )
{
// code at 0001:0008457c
}

void SmartMovingThing::SetMoveToBuilding( Building * )
{
// code at 0001:00084100
}

char unsigned SmartMovingThing::SetMoveToTgtTest( XY )
{
// code at 0001:00084078
}

char unsigned SmartMovingThing::IsMovingToTgt()
{
// code at 0001:00005acc
}

void SmartMovingThing::SetMoveToInsideBuilding( Building *, XY )
{
// code at 0001:000058dc
}

void SmartMovingThing::Init( ThingType, XY, char unsigned, short, long, Vector const & )
{
// code at 0001:000496d8
}

void SmartMovingThing::StartAMove( XY )
{
// code at 0001:000496bc
}

void SmartMovingThing::StopMoving()
{
// code at 0001:00049680
}

char unsigned SmartMovingThing::IsDoneMovingToTgt()
{
// code at 0001:00049640
}

char unsigned SmartMovingThing::IsStuck()
{
// code at 0001:00049600
}

char unsigned SmartMovingThing::IsFlying()
{
// code at 0001:000495c0
}

char unsigned SmartMovingThing::IsIgnoreClutter()
{
// code at 0001:00049580
}

void SmartMovingThing::ClearRescanPath()
{
// code at 0001:0004955c
}

void SmartMovingThing::ClearMoveToTgt()
{
// code at 0001:0004952c
}

near SmartMovingThing::SmartMovingThing()
{
// code at 0001:00048930
}

char unsigned SmartMovingThing::IsMovingToAlt()
{
// code at 0001:00004744
}

void SmartMovingThing::ClearAvoidActive()
{
// code at 0001:00004718
}

void SmartMovingThing::ClearAvoidLooping()
{
// code at 0001:000046f4
}

void SmartMovingThing::SetRescanPath()
{
// code at 0001:000046d0
}

void SmartMovingThing::SetMoveToTgt( XY )
{
// code at 0001:00004670
}

void SmartMovingThing::SetMoveToThing( Thing * )
{
// code at 0001:00004614
}

void SmartMovingThing::SetMoveToAlt( long )
{
// code at 0001:000045cc
}

void SmartMovingThing::ClearIgnoreClutter()
{
// code at 0001:00078020
}

void SmartMovingThing::SetIgnoreClutter()
{
// code at 0001:00077ffc
}


/******************************************************************************/
