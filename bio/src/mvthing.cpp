/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file mvthing.cpp
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
#include "mvthing.hpp"

MovingThing::MovingThing()
{
// code at 0001:000488c4
}

XY MovingThing::UnwindLastMove(SLONG &arg1)
{
// code at 0001:000860a8
}

XY MovingThing::ProjectNextMove(SLONG &arg1)
{
// code at 0001:00086152
}

void MovingThing::SetSpeedHandler(Normal &arg1, SWORD arg2)
{
// code at 0001:000861fc
}

void MovingThing::VectorAwayFrom(Thing &arg1, SLONG arg2, BBOOL arg3)
{
// code at 0001:000862e9
}

void MovingThing::Physics()
{
// code at 0001:000863f8
}

void MovingThing::TransportIt(XY arg1, BBOOL arg2)
{
// code at 0001:00086c34
}

void MovingThing::BindItWith(MovingThing &arg1)
{
// code at 0001:00086d09
}

BBOOL MovingThing::IsFacingWithinArc(Thing *arg1, SWORD arg2)
{
// code at 0001:00086f64
}

SBYTE MovingThing::HugTo(XY arg1, UBYTE arg2, UBYTE arg3, BBOOL arg4, Building *arg5)
{
// code at 0001:00086fc9
}

SBYTE MovingThing::HugToIgnoringBuildings(XY arg1, UBYTE arg2, UBYTE arg3, BBOOL arg4)
{
// code at 0001:00087130
}

UBYTE MovingThing::Update()
{
// code at 0001:00005b0c
}

SLONG MovingThing::Altitude()
{
// code at 0001:00049a40
}

SLONG MovingThing::AltAboveGround()
{
// code at 0001:00049a14
}

BBOOL MovingThing::IsMovable()
{
// code at 0001:000499f0
}

BBOOL MovingThing::IsStaticallyDrawn()
{
// code at 0001:000499cc
}

BBOOL MovingThing::IsMovingThing()
{
// code at 0001:000499a8
}

BBOOL MovingThing::IsVectorable()
{
// code at 0001:00049984
}

BBOOL MovingThing::IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4)
{
// code at 0001:00049904
}

void MovingThing::Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector const &arg6)
{
// code at 0001:00049890
}

char unsigned MovingThing::ShapeFacing()
{
// code at 0001:0004985c
}

short MovingThing::MaxMoveSpeed()
{
// code at 0001:00049838
}

void MovingThing::StopMoving()
{
// code at 0001:00049814
}

void MovingThing::NewGridUpdate(GridTile *arg1)
{
// code at 0001:000497f8
}

BBOOL MovingThing::NeedToAvoid(GridTile *arg1)
{
// code at 0001:000497d4
}

BBOOL MovingThing::IsASplasher()
{
// code at 0001:000497b0
}

void MovingThing::ChangeMove(ComponentVector const &arg1)
{
// code at 0001:00049774
}

BBOOL MovingThing::IsMoving(SWORD arg1)
{
// code at 0001:00049728
}

void MovingThing::DrawOnMap(SWORD arg1, SWORD arg2)
{
// code at 0001:0004917c
}

void MovingThing::ChangeMove(Vector const &arg1)
{
// code at 0001:00004784
}

BBOOL MovingThing::IsMoving()
{
// code at 0001:00078044
}

/******************************************************************************/
