/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file spec.cpp
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
#include "spec.hpp"

near WeightedRangeScanner::WeightedRangeScanner( XY &, long unsigned )
{
// code at 0001:00078154
}

char unsigned SoundManager::__defarg()
{
// code at 0001:00078134
}

char unsigned SoundManager::__defarg()
{
// code at 0001:00078114
}

char unsigned SoundManager::__defarg()
{
// code at 0001:000780f4
}

long unsigned SoundManager::__defarg()
{
// code at 0001:000780d0
}

char unsigned SoundManager::IsNarratorSpeaking()
{
// code at 0001:000780a4
}

long PlSpec::ScientistStudyRange()
{
// code at 0001:00077ec8
}

long PlSpec::ScientistHealRange()
{
// code at 0001:00077e90
}

long PlSpec::ArchitectPelletCost()
{
// code at 0001:00077e5c
}

void TopoGrid::Invalidate()
{
// code at 0001:00077df8
}

char unsigned TopoGrid::Valid()
{
// code at 0001:00077dbc
}

char unsigned TopoMorpher::TopoGridIDX( TopoGrid * )
{
// code at 0001:00077d8c
}

char unsigned TopoMorpher::IsTopoGridValid( char unsigned )
{
// code at 0001:00077d58
}

void TopoMorpher::AbortTopoGrid( char unsigned )
{
// code at 0001:00077ce8
}

short WeightedAngle( char unsigned )
{
// code at 0001:00077c3c
}

near LumberjackScan::LumberjackScan( PlSpec & )
{
// code at 0001:00077b34
}

void LumberjackScan::PerGrid()
{
// code at 0001:00077aa8
}

near HarvestClearScan::HarvestClearScan( PlSpec &, char unsigned, char unsigned )
{
// code at 0001:00077a20
}

void HarvestClearScan::PerGrid()
{
// code at 0001:000778a0
}

void HarvestClearScan::Do()
{
// code at 0001:000777f8
}

near FarmerPlantingScan::FarmerPlantingScan( PlSpec &, char unsigned )
{
// code at 0001:00077624
}

void FarmerPlantingScan::PerGrid()
{
// code at 0001:000774e8
}

near SurvivalScan::SurvivalScan( PlSpec &, long unsigned )
{
// code at 0001:00077488
}

void SurvivalScan::PerGrid()
{
// code at 0001:000773cc
}

near StudyCreatureScan::StudyCreatureScan( PlSpec & )
{
// code at 0001:00077358
}

void StudyCreatureScan::PerGrid()
{
// code at 0001:00077298
}

near HealCreatureScan::HealCreatureScan( PlSpec & )
{
// code at 0001:00077224
}

void HealCreatureScan::PerGrid()
{
// code at 0001:00077158
}

MyAnimBank * PlSpecLoader::Load( PlayerRace, SpecialistClass )
{
// code at 0001:0007000c
}

char unsigned PlSpecLoader::Load( PlSpec * )
{
// code at 0001:00070089
}

void PlSpecLoader::Free( PlayerRace, SpecialistClass, MyAnimBank * )
{
// code at 0001:00070289
}

void PlSpec::SetWaiting()
{
// code at 0001:00077078
}

void PlSpec::SetAltSpecialFlipToThing( Thing * )
{
// code at 0001:00077024
}

void PlSpec::SetupMoveToSpecialTgt( XY )
{
// code at 0001:00076fd4
}

void PlSpec::SetupMoveToThing( Thing * )
{
// code at 0001:00076f80
}

void PlSpec::SetupMoveAwayFromThing( Thing * )
{
// code at 0001:00076f2c
}

void PlSpec::SetupMoveToInsideBuilding( Building *, XY )
{
// code at 0001:00076ed0
}

GunSpec & PlSpec::GetGunSpec( char unsigned )
{
// code at 0001:00076ea0
}

void PlSpecLoader::Free( PlSpec * )
{
// code at 0001:00070307
}

char * Specialist::Name( char * )
{
// code at 0001:00070366
}

void PlSpec::Speech( long unsigned, BufferSubmitMode )
{
// code at 0001:00070395
}

void PlSpec::Init( char unsigned, char unsigned )
{
// code at 0001:00070452
}

char unsigned PlSpec::Damage( long, Thing * )
{
// code at 0001:0007050e
}

char unsigned PlSpec::IsFoundationSiteOK( BuilderIFC &, char unsigned & )
{
// code at 0001:000706ac
}

char signed PlSpec::ActionOn( Thing *, char unsigned, char unsigned, char unsigned )
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

void PlSpec::StartAction( char unsigned, long unsigned, long unsigned )
{
// code at 0001:000714b6
}

void PlSpec::Discover()
{
// code at 0001:00071904
}

void PlSpec::BeginMove( char signed )
{
// code at 0001:00071982
}

void PlSpec::GetAbducted( Ethereal * )
{
// code at 0001:00071a25
}

void PlSpec::AbortSpecial( char unsigned )
{
// code at 0001:00071a73
}

void PlSpec::StartAMove( XY )
{
// code at 0001:00071dbc
}

void PlSpec::SetTarget( char unsigned )
{
// code at 0001:00071de9
}

void PlSpec::BuilderSetDemoCharges( char signed )
{
// code at 0001:00076e38
}

void PlSpec::InitiateMove()
{
// code at 0001:00071f5f
}

char unsigned PlSpec::DoMove( char unsigned )
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

void PlSpec::ShootAtMovingThing( MovingThing *, long unsigned, char unsigned )
{
// code at 0001:00073da5
}

void PlSpec::StartLumberjackChopping( Plant * )
{
// code at 0001:00076cd8
}

void PlSpec::CowboyRanging( MovingThing *, long unsigned )
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

XY PlSpec::GetXYToChopTreeDown( Plant * )
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

void PlSpec::DrawOnMap( short, short )
{
// code at 0001:00075ac3
}

void PlSpec::Read( long & )
{
// code at 0001:00075ea8
}

void PlSpec::Write( long & )
{
// code at 0001:00075f07
}

long PlSpec::ReadBuffer( PlSpec * *, long, long, BioGame & )
{
// code at 0001:00075f48
}

long PlSpec::WriteBuffer( PlSpec * *, long, long, BioGame & )
{
// code at 0001:00075fcd
}

char unsigned PlSpec::CanAbortSpecialWithMove()
{
// code at 0001:00076052
}

char unsigned PlSpec::CanDoSpecialWithMove()
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

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void PlSpec::RemoveFromGame()
{
// code at 0001:0007619f
}

void PlSpec::RemoveRefsFromCreatures()
{
// code at 0001:0007625c
}

char unsigned PlSpec::Update()
{
// code at 0001:00076370
}

void PlSpec::UpdateAll()
{
// code at 0001:00076bbb
}

char unsigned PlSpec::operator ==( PlSpec * )
{
// code at 0001:00076c40
}


/******************************************************************************/
