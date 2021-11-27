/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file effect.cpp
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
#include "effect.hpp"

MyMinSprite Effect::ezStarMMs;

Effect::Effect()
    : MovingThing()
{
  // code at 0001:000614bc
  // done
}

char unsigned Effect::IsPackSpecValid()
{
// code at 0001:000493cc
}

void Effect::UnpackSpec(Specialist &spec)
{
// code at 0001:00049374
}

Effect * Effect::Create(EffectType arg1, XY cor2, SLONG arg3, Vector const &vec4, UWORD arg5, UBYTE arg6, SBYTE arg7, ::Thing *tng8)
{
// code at 0001:00040c1c
}

void Effect::Free()
{
// code at 0001:0004247e
}

void Effect::InitArray()
{
// code at 0001:00042560
}

void Effect::Resync()
{
// code at 0001:000425bd
}

void Effect::Read(SLONG &arg1)
{
// code at 0001:000426ba
}

void Effect::Write(SLONG &arg1)
{
// code at 0001:00042719
}

void Effect::DrawOnMap(SWORD arg1, SWORD arg2)
{
// code at 0001:0004275a
}

UBYTE Effect::MakeFire(GridTile *arg1, SLONG arg2)
{
// code at 0001:0004393a
}

BBOOL Effect::IsChunkyDeath()
{
// code at 0001:000439e4
}

BBOOL Effect::IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4)
{
// code at 0001:00043a2e
}

SLONG Effect::ReadBuffer(Effect **eff1, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:00043adb
}

SLONG Effect::WriteBuffer(Effect **eff1, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:00043b5a
}

void Effect::DrawZoneMarker(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4)
{
// code at 0001:00043bd9
}

Plant * Effect::StripDragTree( GridTile * )
{
// code at 0001:00044158
}

void Effect::KillSoundOffTag(XY cor1, SampleID arg2, BBOOL arg3)
{
// code at 0001:00044292
}

UBYTE Effect::CreateNewEffectFromOld(EffectStats const &effsta)
{
// code at 0001:00044343
}

UBYTE Effect::Update()
{
// code at 0001:0004443b
}

void Effect::UpdateAll()
{
// code at 0001:00047866
}

BBOOL Effect::operator ==(Effect *eff1)
{
// code at 0001:000487d4
}

EtherealZone & Effect::GetEZone()
{
// code at 0001:000254b0
}

BBOOL Effect::IsDead()
{
// code at 0001:0006180c
}

BBOOL Effect::IsMovable()
{
// code at 0001:000615d0
}

BBOOL Effect::IsASplasher()
{
// code at 0001:0006159c
}

void Effect::PackSpec(Specialist &spec)
{
// code at 0001:00077e1c
}

/*GridTile * Effect::__defarg()
{
// code at 0001:00084180
}*/

/*short unsigned Effect::__defarg()
{
// code at 0001:000044c0
}*/

/*char unsigned Effect::__defarg()
{
// code at 0001:000044a0
}*/

/*char signed Effect::__defarg()
{
// code at 0001:00004480
}*/

/*Thing * Effect::__defarg()
{
// code at 0001:0000445c
}*/


/******************************************************************************/
