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

void Ethereal::StartAMove(XY arg1)
{
// code at 0001:00061640
}

void Ethereal::Discover()
{
// code at 0001:00061624
}

void Ethereal::SetMoveToTgtWithAlt(XY arg1, SLONG arg2)
{
// code at 0001:00004424
}

void Ethereal::SetMoveToThingWithAlt(::Thing *tng1, SLONG arg2)
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

void Ethereal::Read(SLONG &arg1)
{
// code at 0001:000000b5
}

void Ethereal::Write(SLONG &arg1)
{
// code at 0001:00000114
}

SLONG Ethereal::ReadBuffer(Ethereal **arg1, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:00000155
}

SLONG Ethereal::WriteBuffer(Ethereal **arg1, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:000001d4
}

void Ethereal::DrawBeam(SLONG arg1, SLONG arg2, SLONG arg3)
{
// code at 0001:000031b0
}

Ethereal * Ethereal::Create(EtherealType arg1, XY arg2, SLONG arg3, UBYTE arg4)
{
// code at 0001:00000253
}

void Ethereal::Free()
{
// code at 0001:00000463
}

void Ethereal::DrawDeathRay(DeathRayType arg1, SLONG arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, SLONG arg7, SLONG arg8)
{
// code at 0001:00000515
}

void Ethereal::DrawOnMap(SWORD arg1, SWORD arg2)
{
// code at 0001:0000099b
}

BBOOL Ethereal::Damage(SLONG arg1, ::Thing *tng2)
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

SLONG Ethereal::SquareTrueRangeToWhereGoingTo()
{
// code at 0001:00000bc6
}

void Ethereal::VectorToWhereGoingTo(Vector &arg1)
{
// code at 0001:00000c7e
}

BBOOL Ethereal::GetNextPuttTarget()
{
// code at 0001:00000d2d
}

void Ethereal::PuttAroundPoint(XY arg1, SLONG arg2)
{
// code at 0001:00000f89
}

UBYTE Ethereal::Update()
{
// code at 0001:00001061
}

void Ethereal::UpdateAll()
{
// code at 0001:00001126
}

/******************************************************************************/
