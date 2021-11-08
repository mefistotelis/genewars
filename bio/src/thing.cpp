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

class Player;

/*Thing::Thing()
{
// code at 0001:0001cb28
}*/

void Thing::Read(SLONG &arg1)
{
// code at 0001:00085a1c
}

void Thing::Write(SLONG &arg1)
{
// code at 0001:00085a65
}

UBYTE Thing::CreateEffectExplosion(EffectType arg1, UBYTE arg2, SLONG arg3, SLONG arg4, UBYTE arg5)
{
// code at 0001:00085a98
}

Vector Thing::PredictTargetShot(Thing *arg1, SLONG arg2, SLONG arg3, ULONG arg4)
{
// code at 0001:00085e65
}

BBOOL Thing::operator ==(Thing *tng1)
{
// code at 0001:00088b8e
}

BBOOL Thing::IsNew()
{
// code at 0001:00040944
}

ULONG Thing::SquareTrueRangeTo(Thing *tng1)
{
// code at 0001:000408ec
}

SWORD Thing::DirTo(Thing *tng1)
{
// code at 0001:000408b8
}

BBOOL Thing::IsSamePlayer(Thing *arg1)
{
// code at 0001:0004087c
}

char unsigned Thing::BaseColor()
{
// code at 0001:00040850
}

BBOOL Thing::IsDitheredColor()
{
// code at 0001:00084658
}

BBOOL Thing::IsEnemy(Thing *tng1)
{
// code at 0001:00049a68
}

char unsigned Thing::TToggle4()
{
// code at 0001:000492d0
}

char unsigned Thing::Valid()
{
// code at 0001:00004870
}

void Thing::Invalidate()
{
// code at 0001:0000484c
}

ULONG Thing::TrueRangeTo(Thing *tng1)
{
// code at 0001:000047f4
}

ULONG Thing::SquareRangeTo(Thing *tng1)
{
// code at 0001:000047c0
}

char unsigned Thing::TToggle()
{
// code at 0001:00003760
}

Player & Thing::Player()
{
// code at 0001:000036f4
}

TheBase & Thing::Base()
{
// code at 0001:00025598
}

char unsigned Thing::IsIndy()
{
// code at 0001:0001e0cc
}

SLONG Thing::Altitude()
{
// code at 0001:0001e0a4
}

SLONG Thing::AltAboveGround()
{
// code at 0001:0001e080
}

BBOOL Thing::IsMovable()
{
// code at 0001:0001e05c
}

BBOOL Thing::IsMovingThing()
{
// code at 0001:0001e038
}

BBOOL Thing::IsFlying()
{
// code at 0001:0001e014
}

void Thing::Draw(XY arg1)
{
// code at 0001:0001dfdc
}

BBOOL Thing::IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4)
{
// code at 0001:0001df78
}

void Thing::DrawOnMap(SWORD arg1, SWORD arg2)
{
// code at 0001:0001df40
}

void Thing::Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4)
{
// code at 0001:0001de8c
}

void Thing::Discover()
{
// code at 0001:0001de60
}

void Thing::Undiscover()
{
// code at 0001:0001de34
}

BBOOL Thing::Damage(SLONG arg1, Thing *arg2)
{
// code at 0001:0001ddfc
}

void Thing::StartFightWith(Thing *tng1)
{
// code at 0001:0001dde0
}

char unsigned Thing::IsStasis()
{
// code at 0001:0001ddbc
}

char unsigned Thing::IsIgnoreClutter()
{
// code at 0001:0001dd98
}

void Thing::Draw(SWORD arg1, SWORD arg2)
{
// code at 0001:0001d0d4
}

MyFrame * Thing::GetFrame()
{
// code at 0001:0001d068
}

void Thing::Sound(SampleID arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, ULONG arg5)
{
// code at 0001:0001d020
}

void Thing::StopSound(SampleID arg1)
{
// code at 0001:0001cff8
}

void Thing::FadeSound(SampleID arg1, SWORD arg2, UBYTE arg3)
{
// code at 0001:0001cfc0
}

void Thing::FadeOutSound(SampleID arg1, UBYTE arg2)
{
// code at 0001:0001cf88
}

BBOOL Thing::IsSoundPlaying(SampleID arg1)
{
// code at 0001:0001cf44
}

/*char unsigned Thing::__defarg()
{
// code at 0001:0002622c
}*/

/*char unsigned Thing::__defarg()
{
// code at 0001:0002620c
}*/

/*short Thing::__defarg()
{
// code at 0001:00049ac4
}*/

/*char unsigned Thing::__defarg()
{
// code at 0001:00049aa4
}*/

/*char unsigned Thing::__defarg()
{
// code at 0001:000048ec
}*/

/*long unsigned Thing::__defarg()
{
// code at 0001:000048c8
}*/

/*char unsigned Thing::__defarg()
{
// code at 0001:000048a8
}*/

/******************************************************************************/
