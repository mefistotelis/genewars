/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file drone.cpp
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
#include "drone.hpp"

char unsigned XY::operator !=( XY ) const
{
// code at 0001:00005bc0
}

XY XY::operator +( XY ) const
{
// code at 0001:00005b80
}

XY XY::Set( short, short )
{
// code at 0001:00005b44
}

char unsigned MovingThing::Update()
{
// code at 0001:00005b0c
}

char unsigned SmartMovingThing::IsMovingToTgt()
{
// code at 0001:00005acc
}

char unsigned Plant::IsFallen()
{
// code at 0001:00005a90
}

char unsigned Building::IsPowered()
{
// code at 0001:00005a50
}

char unsigned Building::IsBusted()
{
// code at 0001:00005a10
}

char unsigned AtMmsEnd( MyMinSprite &, MySprite & )
{
// code at 0001:000059b4
}

Creature * ThingIDX::IsCreature()
{
// code at 0001:00005970
}

Plant * ThingIDX::IsPlant()
{
// code at 0001:0000592c
}

void SmartMovingThing::SetMoveToInsideBuilding( Building *, XY )
{
// code at 0001:000058dc
}

void Drone::InitArray()
{
// code at 0001:00004c50
}

void Drone::Resync()
{
// code at 0001:00004c99
}

void Drone::Read( long & )
{
// code at 0001:00004cbf
}

void Drone::Write( long & )
{
// code at 0001:00004d1e
}

long Drone::ReadBuffer( Drone * *, long, long, BioGame & )
{
// code at 0001:00004d5f
}

long Drone::WriteBuffer( Drone * *, long, long, BioGame & )
{
// code at 0001:00004dde
}

Drone * Drone::Create( Building *, Thing *, DroneType )
{
// code at 0001:00004e5d
}

void Drone::Free()
{
// code at 0001:00005038
}

void Drone::UntagTarget()
{
// code at 0001:00005080
}

void Drone::GoBoom()
{
// code at 0001:000050f1
}

char unsigned Drone::Damage( long, Thing * )
{
// code at 0001:00005150
}

void Drone::SetDraggingTarget()
{
// code at 0001:00005184
}

void Drone::DropWhateverYouWereDragging()
{
// code at 0001:0000533e
}

char unsigned Drone::Update()
{
// code at 0001:00005421
}

void Drone::UpdateAll()
{
// code at 0001:0000588d
}


/******************************************************************************/
