/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file building.cpp
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
#include "building.hpp"

@ * Creature::__defarg()
{
// code at 0001:0004082c
}

short Creature::IsStasisForHowLong()
{
// code at 0001:000407ec
}

void Building::SetBusted()
{
// code at 0001:000407c8
}

void Building::ClearBusted()
{
// code at 0001:000407a4
}

void Building::SetDisabled()
{
// code at 0001:00040778
}

void Building::ClearDisabled()
{
// code at 0001:00040754
}

char unsigned Building::IsAGoopStorage()
{
// code at 0001:000406fc
}

long unsigned Building::TurretRange()
{
// code at 0001:000406c8
}

Thing * Event::__defarg()
{
// code at 0001:00040650
}

char unsigned MapDisplay::IsGlassBuildings()
{
// code at 0001:00040614
}

void TheShip::RocketToOrbit()
{
// code at 0001:00049340
}

void TheShip::Update()
{
// code at 0001:000405e4
}

char unsigned ResearchGrid::AddToAGrid( CreatureSpecies, long )
{
// code at 0001:00040564
}

char unsigned IFCPlanetside::IsThingSelectedInPad( Thing * )
{
// code at 0001:0004052c
}

void IFCPlanetside::CloseActivePad()
{
// code at 0001:000404dc
}

void Creature::Free()
{
// code at 0001:00040410
}

near TurretScan::TurretScan( Building & )
{
// code at 0001:00040370
}

void TurretScan::PerGrid()
{
// code at 0001:000402f8
}

near SawmillScan::SawmillScan( Building & )
{
// code at 0001:00040278
}

void SawmillScan::PerGrid()
{
// code at 0001:00040214
}

near FarmScan::FarmScan( Building & )
{
// code at 0001:00040194
}

void FarmScan::PerGrid()
{
// code at 0001:000400dc
}

near ShieldScan::ShieldScan( Building & )
{
// code at 0001:00040064
}

void ShieldScan::BounceThingOffShield( MovingThing *, char unsigned )
{
// code at 0001:0003944c
}

void ShieldScan::PerGrid()
{
// code at 0001:0003959f
}

void Building::Draw( short, short )
{
// code at 0001:0003b134
}

void Building::Init( char unsigned, BuildingType, XY )
{
// code at 0001:0003b5f5
}

void Building::FinishBuilding()
{
// code at 0001:0003b706
}

char unsigned Building::Build( short unsigned, char unsigned )
{
// code at 0001:0003b973
}

void Building::Free()
{
// code at 0001:0003bac0
}

void Building::StopAnyContinuousSound()
{
// code at 0001:0003bc20
}

char unsigned Building::Damage( long, Thing * )
{
// code at 0001:0003bca9
}

void Building::DisableBuilding()
{
// code at 0001:0003c4cc
}

void Building::StartWreck( PlSpec * )
{
// code at 0001:0003c56a
}

void Building::UserUpgrade()
{
// code at 0001:0003c5a4
}

void Building::InitArray()
{
// code at 0001:0003c5d2
}

void Building::Resync()
{
// code at 0001:0003c64f
}

void Building::Read( long & )
{
// code at 0001:0003c687
}

void Building::Write( long & )
{
// code at 0001:0003c6e6
}

long Building::ReadBuffer( Building * *, long, long, BioGame & )
{
// code at 0001:0003c727
}

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

long Building::WriteBuffer( Building * *, long, long, BioGame & )
{
// code at 0001:0003c7a6
}

char unsigned Building::Update()
{
// code at 0001:0003c825
}

void Building::UpdateAll()
{
// code at 0001:0003fa01
}

char unsigned Building::operator ==( Building * )
{
// code at 0001:0003ff6a
}

void (near * const __vftbl[])();


/******************************************************************************/
