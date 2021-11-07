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

near Vector::Vector( short, short, short )
{
// code at 0001:00040b04
}

ComponentVector ComponentVector::operator +=( ComponentVector )
{
// code at 0001:00040ab0
}

near ComponentVector::ComponentVector()
{
// code at 0001:00040a68
}

short ComponentVector::ComputeVector( Vector & ) const
{
// code at 0001:000409a0
}

long GridTile::__defarg()
{
// code at 0001:0004097c
}

char unsigned Thing::IsNew()
{
// code at 0001:00040944
}

long unsigned Thing::SquareTrueRangeTo( Thing * )
{
// code at 0001:000408ec
}

short Thing::DirTo( Thing * )
{
// code at 0001:000408b8
}

char unsigned Thing::IsSamePlayer( Thing * )
{
// code at 0001:0004087c
}

char unsigned Thing::BaseColor()
{
// code at 0001:00040850
}

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

char unsigned TheBase::AddGoop( long unsigned )
{
// code at 0001:00040674
}

Thing * Event::__defarg()
{
// code at 0001:00040650
}

char unsigned MapDisplay::IsGlassBuildings()
{
// code at 0001:00040614
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

void TheBase::UseGoop( long )
{
// code at 0001:00040448
}

void Creature::Free()
{
// code at 0001:00040410
}

void Plant::Free()
{
// code at 0001:000403d8
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

char unsigned PowerGraph::PowerToColor( short )
{
// code at 0001:00040010
}

void ShieldScan::BounceThingOffShield( MovingThing *, char unsigned )
{
// code at 0001:0003944c
}

void ShieldScan::PerGrid()
{
// code at 0001:0003959f
}

void PowerGraph::Update( short, short, short )
{
// code at 0001:00039aa7
}

void PowerGraph::Draw( long, long )
{
// code at 0001:00039b3c
}

near TheBase::TheBase()
{
// code at 0001:00039cfb
}

void TheBase::Reset()
{
// code at 0001:00039d1e
}

char unsigned TheBase::IsAnyBuildingNeedingWork( char unsigned )
{
// code at 0001:00039d64
}

void TheBase::StartFoundation( BuilderIFC &, XY )
{
// code at 0001:00039dfc
}

Building * TheBase::AddNewBuilding( BuildingType, XY )
{
// code at 0001:0003a4ba
}

void TheBase::RemoveBuilding( char unsigned )
{
// code at 0001:0003a664
}

Building * TheBase::JumpToNextPowerStation( Building * )
{
// code at 0001:0003a75c
}

Building * TheBase::NearestBuilding( XY, long unsigned, short unsigned )
{
// code at 0001:0003a7f3
}

char unsigned TheBase::InPowerStationRange( XY )
{
// code at 0001:0003a92b
}

Building * TheBase::NearestAnyBuilding( XY, long unsigned, short unsigned, char signed )
{
// code at 0001:0003a9de
}

Building * TheBase::NearestBuildingNeedingWork( XY, char unsigned )
{
// code at 0001:0003aaf9
}

void TheBase::ComputeCenter()
{
// code at 0001:0003abc1
}

void TheBase::ComputeGoopCapacity()
{
// code at 0001:0003aca9
}

void TheBase::StoreGoopInBuildings()
{
// code at 0001:0003adfc
}

char unsigned TheBase::IsBuildable( BuildingType )
{
// code at 0001:0003afe8
}

char unsigned TheBase::IsUpgradable( BuildingType, char unsigned )
{
// code at 0001:0003b097
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

near ComponentVector::ComponentVector( ComponentVector const & )
{
// code at 0001:0003ffc4
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
