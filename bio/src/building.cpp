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

char unsigned Building::IsFunctional()
{
// code at 0001:00016bfc
}

char unsigned Building::IsUpgradeOK()
{
// code at 0001:00037680
}

char unsigned Building::IsBeingUpgraded()
{
// code at 0001:00037644
}

char unsigned Building::IsBeingWrecked()
{
// code at 0001:00037604
}

char unsigned Building::CanMakeSpeciesInGenelab( CreatureSpecies )
{
// code at 0001:000375a8
}

char unsigned Building::IsMineMinedOut()
{
// code at 0001:00037568
}

char unsigned Building::IsUpgradable()
{
// code at 0001:0003689c
}

Creature * Building::GeneLabMadeCreature( char unsigned & )
{
// code at 0001:000367ec
}

char unsigned Building::IsPowered()
{
// code at 0001:00005a50
}

char unsigned Building::IsBusted()
{
// code at 0001:00005a10
}

char unsigned Building::IsBuilt()
{
// code at 0001:0000458c
}

char unsigned Building::IsDisabled()
{
// code at 0001:0000454c
}

char unsigned Building::IsObservable()
{
// code at 0001:000044e4
}

char unsigned Building::IsDamaged()
{
// code at 0001:00025540
}

char unsigned Building::IsGenelabReady()
{
// code at 0001:00018310
}

char unsigned Building::IsGenelabBusy()
{
// code at 0001:000182d8
}

char unsigned Building::IsDead()
{
// code at 0001:0001db74
}

char unsigned Building::IsWrecking()
{
// code at 0001:0001db34
}

char unsigned Building::IsAPowerGenerator()
{
// code at 0001:0001dad4
}

long unsigned Building::MaxGoopStorage()
{
// code at 0001:0001da20
}

long unsigned Building::MaxSawmillWood()
{
// code at 0001:0001d9ec
}

long unsigned Building::PowerStationRange()
{
// code at 0001:0001d9b4
}

long unsigned Building::ShieldRange()
{
// code at 0001:0001d980
}

char * Building::GetName()
{
// code at 0001:0001cec4
}

near Building::Building()
{
// code at 0001:0001cb90
}

void Building::SetUpgradeOK()
{
// code at 0001:00077f6c
}

void Building::ClearUpgradeOK()
{
// code at 0001:00077f48
}

void Building::SetBeingWrecked()
{
// code at 0001:00077f24
}

void Building::ClearBeingWrecked()
{
// code at 0001:00077f00
}

/******************************************************************************/
