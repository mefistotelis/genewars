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

Building::Building()
    : StaticThing()
{
    // code at 0001:0001cb90
    // done
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

BBOOL Building::IsAGoopStorage()
{
// code at 0001:000406fc
}

ULONG Building::TurretRange()
{
// code at 0001:000406c8
}

void Building::Draw( short, short )
{
// code at 0001:0003b134
}

void Building::Init(UBYTE arg1, BuildingType arg2, XY cor3)
{
// code at 0001:0003b5f5
}

void Building::FinishBuilding()
{
// code at 0001:0003b706
}

BBOOL Building::Build(UWORD arg1, BBOOL arg2)
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

BBOOL Building::Damage(SLONG arg1, ::Thing *tng2)
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

void Building::Read(SLONG &arg1)
{
// code at 0001:0003c687
}

void Building::Write(SLONG &arg1)
{
// code at 0001:0003c6e6
}

SLONG Building::ReadBuffer(Building **bldng, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:0003c727
}

SLONG Building::WriteBuffer(Building **bldng, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:0003c7a6
}

UBYTE Building::Update()
{
// code at 0001:0003c825
}

void Building::UpdateAll()
{
// code at 0001:0003fa01
}

BBOOL Building::operator ==(Building *bldg1)
{
// code at 0001:0003ff6a
}

BBOOL Building::IsFunctional()
{
// code at 0001:00016bfc
}

BBOOL Building::IsUpgradeOK()
{
// code at 0001:00037680
}

BBOOL Building::IsBeingUpgraded()
{
// code at 0001:00037644
}

BBOOL Building::IsBeingWrecked()
{
// code at 0001:00037604
}

BBOOL Building::CanMakeSpeciesInGenelab(CreatureSpecies arg1)
{
// code at 0001:000375a8
}

BBOOL Building::IsMineMinedOut()
{
// code at 0001:00037568
}

BBOOL Building::IsUpgradable()
{
// code at 0001:0003689c
}

Creature * Building::GeneLabMadeCreature(BBOOL &arg1)
{
// code at 0001:000367ec
}

BBOOL Building::IsPowered()
{
// code at 0001:00005a50
}

BBOOL Building::IsBusted()
{
// code at 0001:00005a10
}

BBOOL Building::IsBuilt()
{
// code at 0001:0000458c
}

BBOOL Building::IsDisabled()
{
// code at 0001:0000454c
}

BBOOL Building::IsObservable()
{
// code at 0001:000044e4
}

BBOOL Building::IsDamaged()
{
// code at 0001:00025540
}

BBOOL Building::IsGenelabReady()
{
// code at 0001:00018310
}

BBOOL Building::IsGenelabBusy()
{
// code at 0001:000182d8
}

BBOOL Building::IsDead()
{
// code at 0001:0001db74
}

BBOOL Building::IsWrecking()
{
// code at 0001:0001db34
}

BBOOL Building::IsAPowerGenerator()
{
// code at 0001:0001dad4
}

ULONG Building::MaxGoopStorage()
{
// code at 0001:0001da20
}

ULONG Building::MaxSawmillWood()
{
// code at 0001:0001d9ec
}

ULONG Building::PowerStationRange()
{
// code at 0001:0001d9b4
}

ULONG Building::ShieldRange()
{
// code at 0001:0001d980
}

char * Building::GetName()
{
// code at 0001:0001cec4
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
