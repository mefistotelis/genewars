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

/******************************************************************************/
