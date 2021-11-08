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


/******************************************************************************/
