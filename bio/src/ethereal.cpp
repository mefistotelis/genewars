/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ethereal.cpp
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
#include "ethereal.hpp"

/*Ethereal::Ethereal()
{
// code at 0001:00061564
}*/

char unsigned Ethereal::IsDead()
{
// code at 0001:000616e0
}

char unsigned Ethereal::IsFlying()
{
// code at 0001:000616bc
}

char unsigned Ethereal::IsVectorable()
{
// code at 0001:00061698
}

short Ethereal::MaxMoveSpeed()
{
// code at 0001:0006165c
}

void Ethereal::StartAMove( XY )
{
// code at 0001:00061640
}

void Ethereal::Discover()
{
// code at 0001:00061624
}

void Ethereal::SetMoveToTgtWithAlt( XY, long )
{
// code at 0001:00004424
}

void Ethereal::SetMoveToThingWithAlt( Thing *, long )
{
// code at 0001:000043ec
}

void Ethereal::InitArray()
{
// code at 0001:00000010
}

void Ethereal::Resync()
{
// code at 0001:00000059
}

void Ethereal::Read( long & )
{
// code at 0001:000000b5
}

void Ethereal::Write( long & )
{
// code at 0001:00000114
}

long Ethereal::ReadBuffer( Ethereal * *, long, long, BioGame & )
{
// code at 0001:00000155
}

long Ethereal::WriteBuffer( Ethereal * *, long, long, BioGame & )
{
// code at 0001:000001d4
}

void Ethereal::DrawBeam( long, long, long )
{
// code at 0001:000031b0
}

Ethereal * Ethereal::Create( EtherealType, XY, long, char unsigned )
{
// code at 0001:00000253
}

void Ethereal::Free()
{
// code at 0001:00000463
}

void Ethereal::DrawDeathRay( DeathRayType, long, long, long, long, long, long, long )
{
// code at 0001:00000515
}

void Ethereal::DrawOnMap( short, short )
{
// code at 0001:0000099b
}

char unsigned Ethereal::Damage( long, Thing * )
{
// code at 0001:00000b09
}

void Ethereal::AbsolveBad()
{
// code at 0001:0000314c
}

EtherealPunishment Ethereal::SelectPunishment()
{
// code at 0001:00003044
}

void Ethereal::PunishPotshots()
{
// code at 0001:00002a60
}

void Ethereal::PunishBuildings()
{
// code at 0001:000026a4
}

void Ethereal::PunishAbduct()
{
// code at 0001:000023bc
}

void Ethereal::UpdateSaucer()
{
// code at 0001:00001ba8
}

void Ethereal::UpdatePutt()
{
// code at 0001:00001434
}

void Ethereal::TurnToDesiredAngle()
{
// code at 0001:00000b2c
}

long Ethereal::SquareTrueRangeToWhereGoingTo()
{
// code at 0001:00000bc6
}

void Ethereal::VectorToWhereGoingTo( Vector & )
{
// code at 0001:00000c7e
}

char unsigned Ethereal::GetNextPuttTarget()
{
// code at 0001:00000d2d
}

void Ethereal::PuttAroundPoint( XY, long )
{
// code at 0001:00000f89
}

char unsigned Ethereal::Update()
{
// code at 0001:00001061
}

void Ethereal::UpdateAll()
{
// code at 0001:00001126
}

/******************************************************************************/
