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

void Point::Set( long, long, long )
{
// code at 0001:00049cac
}

char unsigned SoundManager::__defarg()
{
// code at 0001:00049b24
}

SoundRequest * SoundManager::GetSoundReq( Thing * )
{
// code at 0001:00049ae8
}

char unsigned Creature::CanArmor()
{
// code at 0001:000494e8
}

char unsigned PlSpec::IsDead()
{
// code at 0001:000494a8
}

char unsigned PlSpec::IsScreenPointInside( short, short, short, short )
{
// code at 0001:00049444
}

char unsigned PlSpec::IsMovable()
{
// code at 0001:00049408
}

char unsigned Effect::IsPackSpecValid()
{
// code at 0001:000493cc
}

void Effect::UnpackSpec( Specialist & )
{
// code at 0001:00049374
}

void TheShip::RocketToOrbit()
{
// code at 0001:00049340
}

void ResearchGrid::CountAMonolithTouch( Creature * )
{
// code at 0001:00049314
}

XY GridTile::GetXY()
{
// code at 0001:0004910c
}

void Event::Free()
{
// code at 0001:000490e0
}

near ShotHitScan::ShotHitScan( Effect &, long )
{
// code at 0001:0004902c
}

void ShotHitScan::PerGrid()
{
// code at 0001:00048ee0
}

near FireScan::FireScan( Effect & )
{
// code at 0001:00048e90
}

void FireScan::PerGrid()
{
// code at 0001:00048cf8
}

near MonolithHitScan::MonolithHitScan( Effect & )
{
// code at 0001:00048c94
}

void MonolithHitScan::PerGrid()
{
// code at 0001:00048c08
}

near StasisBoltScan::StasisBoltScan( Effect &, long )
{
// code at 0001:00048b78
}

void StasisBoltScan::PerGrid()
{
// code at 0001:00048a20
}

void FlickerStuff::Invalidate()
{
// code at 0001:000489fc
}

char unsigned FlickerStuff::Valid()
{
// code at 0001:000489d0
}

void FlickerHandler::Free( char unsigned )
{
// code at 0001:000489a0
}

Effect * Effect::Create( EffectType, XY, long, Vector const &, short unsigned, char unsigned, char signed, Thing * )
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

void Effect::Read( long & )
{
// code at 0001:000426ba
}

void Effect::Write( long & )
{
// code at 0001:00042719
}

void Effect::DrawOnMap( short, short )
{
// code at 0001:0004275a
}

char unsigned Effect::MakeFire( GridTile *, long )
{
// code at 0001:0004393a
}

char unsigned Effect::IsChunkyDeath()
{
// code at 0001:000439e4
}

char unsigned Effect::IsScreenPointInside( short, short, short, short )
{
// code at 0001:00043a2e
}

long Effect::ReadBuffer( Effect * *, long, long, BioGame & )
{
// code at 0001:00043adb
}

long Effect::WriteBuffer( Effect * *, long, long, BioGame & )
{
// code at 0001:00043b5a
}

void Effect::DrawZoneMarker( long, long, long, long )
{
// code at 0001:00043bd9
}

Plant * Effect::StripDragTree( GridTile * )
{
// code at 0001:00044158
}

void Effect::KillSoundOffTag( XY, SampleID, char unsigned )
{
// code at 0001:00044292
}

char unsigned Effect::CreateNewEffectFromOld( EffectStats const & )
{
// code at 0001:00044343
}

char unsigned Effect::Update()
{
// code at 0001:0004443b
}

void Effect::UpdateAll()
{
// code at 0001:00047866
}

char signed FlickerHandler::Create()
{
// code at 0001:00047a17
}

char unsigned Event::CreateSphereRing( Point *, char unsigned *, char unsigned )
{
// code at 0001:00047a78
}

Event * Event::Create( char unsigned, XY, char unsigned, Thing * )
{
// code at 0001:00047bce
}

void Event::InitArray()
{
// code at 0001:00047eb6
}

void Event::Resync()
{
// code at 0001:00047f02
}

void Event::Read( long & )
{
// code at 0001:00047f1c
}

void Event::Write( long & )
{
// code at 0001:00047f7b
}

long Event::ReadBuffer( Event * *, long, long, BioGame & )
{
// code at 0001:00047fbc
}

near PlSpec::PlSpec()
{
// code at 0001:00048968
}

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

long Event::WriteBuffer( Event * *, long, long, BioGame & )
{
// code at 0001:0004803b
}

char unsigned Event::Update()
{
// code at 0001:000480ba
}

void Event::UpdateAll()
{
// code at 0001:000486a7
}

char unsigned Effect::operator ==( Effect * )
{
// code at 0001:000487d4
}

char unsigned Event::operator ==( Event * )
{
// code at 0001:0004882d
}


/******************************************************************************/
