/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file plspec.cpp
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
#include "plspec.hpp"

/*PlSpec::PlSpec()
{
// code at 0001:00048968
}*/

char unsigned PlSpec::IsDead()
{
// code at 0001:000494a8
}

BBOOL PlSpec::IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4)
{
// code at 0001:00049444
}

BBOOL PlSpec::IsMovable()
{
// code at 0001:00049408
}

void PlSpec::InterruptMove()
{
// code at 0001:00052a9c
}

void PlSpec::SetupMoveToTgt(XY arg1)
{
// code at 0001:000529cc
}

BBOOL PlSpec::IsBusyDoingSomething()
{
// code at 0001:0003752c
}

BBOOL PlSpec::IsFullyCloaked()
{
// code at 0001:00026090
}

SLONG PlSpec::ArchitectBuildCost(BuildingType arg1)
{
// code at 0001:00025470
}

BBOOL PlSpec::IsActionAbortable()
{
// code at 0001:0001d948
}

BBOOL PlSpec::CanGetOrder()
{
// code at 0001:0001d8d8
}

SLONG PlSpec::ShepherdCatchRange()
{
// code at 0001:0001d894
}

SLONG PlSpec::FarmerPlantingRange()
{
// code at 0001:0001d850
}

SLONG PlSpec::FarmerHarvestRange()
{
// code at 0001:0001d80c
}

SLONG PlSpec::LumberjackFellRange()
{
// code at 0001:0001d7c8
}

SLONG PlSpec::FarmerPackCapacity()
{
// code at 0001:0001d7a4
}

UBYTE PlSpec::GetGun(BBOOL arg1)
{
// code at 0001:0001d70c
}

SLONG PlSpec::ScientistStudyRange()
{
// code at 0001:00077ec8
}

SLONG PlSpec::ScientistHealRange()
{
// code at 0001:00077e90
}

SLONG PlSpec::ArchitectPelletCost()
{
// code at 0001:00077e5c
}

void PlSpec::SetWaiting()
{
// code at 0001:00077078
}

void PlSpec::SetAltSpecialFlipToThing(::Thing *tng1)
{
// code at 0001:00077024
}

void PlSpec::SetupMoveToSpecialTgt(XY arg1)
{
// code at 0001:00076fd4
}

void PlSpec::SetupMoveToThing(::Thing *tng1)
{
// code at 0001:00076f80
}

void PlSpec::SetupMoveAwayFromThing(::Thing *tng1)
{
// code at 0001:00076f2c
}

void PlSpec::SetupMoveToInsideBuilding(Building *arg1, XY arg2)
{
// code at 0001:00076ed0
}

GunSpec & PlSpec::GetGunSpec(UBYTE arg1)
{
// code at 0001:00076ea0
}

void PlSpec::Speech(ULONG arg1, BufferSubmitMode arg2)
{
// code at 0001:00070395
}

void PlSpec::Init(UBYTE arg1, UBYTE arg2)
{
// code at 0001:00070452
}

BBOOL PlSpec::Damage(SLONG arg1, ::Thing *tng2)
{
// code at 0001:0007050e
}

BBOOL PlSpec::IsFoundationSiteOK(BuilderIFC &arg1, UBYTE &arg2)
{
// code at 0001:000706ac
}

SBYTE PlSpec::ActionOn(::Thing *tng1, BBOOL arg2, BBOOL arg3, BBOOL arg4)
{
// code at 0001:0007073c
}

void PlSpec::BeginSpecial()
{
// code at 0001:00070b0c
}

short PlSpec::MaxMoveSpeed()
{
// code at 0001:00071479
}

void PlSpec::StartAction(UBYTE arg1, ULONG arg2, ULONG arg3)
{
// code at 0001:000714b6
}

void PlSpec::Discover()
{
// code at 0001:00071904
}

void PlSpec::BeginMove(SBYTE arg1)
{
// code at 0001:00071982
}

void PlSpec::GetAbducted(Ethereal *arg1)
{
// code at 0001:00071a25
}

void PlSpec::AbortSpecial(BBOOL arg1)
{
// code at 0001:00071a73
}

void PlSpec::StartAMove(XY arg1)
{
// code at 0001:00071dbc
}

void PlSpec::SetTarget(UBYTE arg1)
{
// code at 0001:00071de9
}

void PlSpec::BuilderSetDemoCharges(SBYTE arg1)
{
// code at 0001:00076e38
}

void PlSpec::InitiateMove()
{
// code at 0001:00071f5f
}

char unsigned PlSpec::DoMove(BBOOL arg1)
{
// code at 0001:00072167
}

void PlSpec::DoWaiting()
{
// code at 0001:00072287
}

void PlSpec::DoAbduct()
{
// code at 0001:0007260a
}

void PlSpec::DoLiftoff()
{
// code at 0001:00072b05
}

void PlSpec::DoBuilder()
{
// code at 0001:00072e90
}

void PlSpec::ShootAtMovingThing(::MovingThing *tng1, ULONG arg2, UBYTE arg3)
{
// code at 0001:00073da5
}

void PlSpec::StartLumberjackChopping(Plant *arg1)
{
// code at 0001:00076cd8
}

void PlSpec::CowboyRanging(::MovingThing *tng1, ULONG arg2)
{
// code at 0001:00073ecc
}

void PlSpec::DoCowboy()
{
// code at 0001:0007418e
}

void PlSpec::DoScientist()
{
// code at 0001:000743be
}

void PlSpec::DoGeologist()
{
// code at 0001:00074fe9
}

XY PlSpec::GetXYToChopTreeDown(Plant *arg1)
{
// code at 0001:00075003
}

void PlSpec::DoNewFarmer()
{
// code at 0001:00075081
}

void PlSpec::DoLumberjack()
{
// code at 0001:000750b9
}

void PlSpec::DoFarmer()
{
// code at 0001:0007532d
}

void PlSpec::ReleaseShepherdedCreatures()
{
// code at 0001:00075795
}

void PlSpec::DoNewShepherd()
{
// code at 0001:000757d0
}

void PlSpec::DoShepherd()
{
// code at 0001:00075807
}

void PlSpec::Resync()
{
// code at 0001:0007583d
}

void PlSpec::InitArray()
{
// code at 0001:000758ba
}

void PlSpec::SetDrawFlags()
{
// code at 0001:0007591b
}

void PlSpec::DrawOnMap(SWORD arg1, SWORD arg2)
{
// code at 0001:00075ac3
}

void PlSpec::Read(SLONG &arg1)
{
// code at 0001:00075ea8
}

void PlSpec::Write(SLONG &arg1)
{
// code at 0001:00075f07
}

SLONG PlSpec::ReadBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:00075f48
}

SLONG PlSpec::WriteBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:00075fcd
}

BBOOL PlSpec::CanAbortSpecialWithMove()
{
// code at 0001:00076052
}

BBOOL PlSpec::CanDoSpecialWithMove()
{
// code at 0001:0007608e
}

void PlSpec::DoAnySpecialWhileMoving()
{
// code at 0001:000760ca
}

void PlSpec::DoActionActiveDuringNewMove()
{
// code at 0001:0007610f
}

void PlSpec::RemoveFromGame()
{
// code at 0001:0007619f
}

void PlSpec::RemoveRefsFromCreatures()
{
// code at 0001:0007625c
}

UBYTE PlSpec::Update()
{
// code at 0001:00076370
}

void PlSpec::UpdateAll()
{
// code at 0001:00076bbb
}

BBOOL PlSpec::operator ==(PlSpec *arg1)
{
// code at 0001:00076c40
}

/******************************************************************************/
