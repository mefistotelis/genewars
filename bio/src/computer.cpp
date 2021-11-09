/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file computer.cpp
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
#include "computer.hpp"

near CompDebug::CompDebug()
{
// code at 0001:000374ac
}

near BuildPriority::BuildPriority()
{
// code at 0001:00037480
}

void CreatureInfo::Invalidate()
{
// code at 0001:00037458
}

near CompTarget::CompTarget()
{
// code at 0001:0003742c
}

char unsigned CloseTgt::Valid()
{
// code at 0001:000373f4
}

char signed GuardPoint::__defarg()
{
// code at 0001:000373d4
}

char signed GuardPoint::__defarg()
{
// code at 0001:000373b4
}

GPointFlags * GuardPoint::__defarg()
{
// code at 0001:00037390
}

char unsigned Computer::__defarg()
{
// code at 0001:00037370
}

char unsigned Computer::__defarg()
{
// code at 0001:00037350
}

char unsigned Computer::__defarg()
{
// code at 0001:00037330
}

char unsigned Computer::__defarg()
{
// code at 0001:00037310
}

char unsigned Computer::__defarg()
{
// code at 0001:000372f0
}

char unsigned Computer::__defarg()
{
// code at 0001:000372d0
}

char signed Computer::__defarg()
{
// code at 0001:000372b0
}

char unsigned Computer::__defarg()
{
// code at 0001:00037290
}

char unsigned Computer::IsEnemy( Thing * )
{
// code at 0001:00037254
}

char unsigned Computer::CurrentBase()
{
// code at 0001:00037228
}

near PolarRangeScan::PolarRangeScan( XY &, long unsigned, char unsigned )
{
// code at 0001:000371ac
}

near PolarSliceScan::PolarSliceScan( XY &, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00037124
}

near PolarEverythingScan::PolarEverythingScan( XY &, long unsigned, long unsigned, char unsigned, char unsigned, char unsigned )
{
// code at 0001:00037088
}

near TimeSliceScan::TimeSliceScan( BaseScan &, XY, long unsigned )
{
// code at 0001:00036fec
}

near FindHighestBuildingSite::FindHighestBuildingSite( XY, long unsigned, char unsigned )
{
// code at 0001:00036f98
}

near TestSlice::TestSlice( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00036f40
}

void TestSlice::PerGrid()
{
// code at 0001:00036f24
}

near TestEverything::TestEverything( XY, long unsigned, long unsigned, char unsigned, char unsigned, char unsigned )
{
// code at 0001:00036ecc
}

void TestEverything::PerGrid()
{
// code at 0001:00036eb0
}

near ChopTreeScan::ChopTreeScan( XY, long unsigned )
{
// code at 0001:00036e70
}

near BestForestScan::BestForestScan( XY, long unsigned, char unsigned, char unsigned, char unsigned )
{
// code at 0001:00036e00
}

near MineralScan::MineralScan( XY, long unsigned )
{
// code at 0001:00036db4
}

near MineScan::MineScan( XY, long unsigned, char unsigned )
{
// code at 0001:00036d60
}

near PowerScan::PowerScan( XY, long unsigned, char unsigned )
{
// code at 0001:00036d08
}

char unsigned NearestBuildingSite::__defarg()
{
// code at 0001:00036ce8
}

near NearestBuildingSite::NearestBuildingSite( XY, long unsigned, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00036c7c
}

near OldPowerTally::OldPowerTally( XY, long unsigned, char unsigned )
{
// code at 0001:00036c1c
}

near NewPowerTally::NewPowerTally( XY, long unsigned )
{
// code at 0001:00036bc8
}

near SatisfyBuildings::SatisfyBuildings( XY, long unsigned, char unsigned, char unsigned, char unsigned )
{
// code at 0001:00036b4c
}

near PointSample::PointSample( XY, long unsigned, long unsigned )
{
// code at 0001:00036ab4
}

near PointSample::PointSample( XY, long unsigned, char unsigned )
{
// code at 0001:000369fc
}

near BestForestSample::BestForestSample( XY, long unsigned, char unsigned, char unsigned, long unsigned )
{
// code at 0001:00036998
}

EtherealZone * GuardPoint::EZone()
{
// code at 0001:000366ec
}

Computer * GuardPoint::Comp()
{
// code at 0001:000366b8
}

void PolarRangeScan::Do()
{
// code at 0001:00026334
}

void PolarRangeScan::displayDebug( XY, long unsigned & )
{
// code at 0001:0002678c
}

void PolarSliceScan::displayDebug( XY, char unsigned, long unsigned & )
{
// code at 0001:000267ef
}

void PolarEverythingScan::displayDebug( XY, char unsigned, long unsigned & )
{
// code at 0001:00026889
}

char unsigned PolarEverythingScan::Scan( char unsigned )
{
// code at 0001:00036664
}

near BaseAwarenessScan::BaseAwarenessScan( BaseScan &, XY, long unsigned, char unsigned )
{
// code at 0001:000365b4
}

char unsigned BaseAwarenessScan::PointInSector( XY, XY )
{
// code at 0001:00036574
}

void PolarSliceScan::Do()
{
// code at 0001:00026923
}

void PolarEverythingScan::Do()
{
// code at 0001:00026dc0
}

char unsigned TimeSliceScan::Do()
{
// code at 0001:0002729e
}

void FindHighestBuildingSite::PerGrid()
{
// code at 0001:000273ff
}

void FindLowestBuildingSite::PerGrid()
{
// code at 0001:000274aa
}

void ChopTreeScan::PerGrid()
{
// code at 0001:00027570
}

void BaseAwarenessScan::PerGrid()
{
// code at 0001:000275a8
}

void BaseAwareness::Reset()
{
// code at 0001:00027995
}

void BaseScan::Reset()
{
// code at 0001:00027a86
}

void ForestScan::PerGrid()
{
// code at 0001:00027ab5
}

near ForestScan::ForestScan( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00027b98
}

void BestForestScan::PerGrid()
{
// code at 0001:00027c5f
}

near NearestPoweredBuildingSite::NearestPoweredBuildingSite( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00036504
}

near NearestLand::NearestLand( XY, long unsigned )
{
// code at 0001:000364c0
}

void HarvestScan::PerGrid()
{
// code at 0001:00027d1c
}

void MineralScan::PerGrid()
{
// code at 0001:00027dae
}

void MineScan::PerGrid()
{
// code at 0001:00027dd9
}

void PowerScan::PerGrid()
{
// code at 0001:00027e58
}

void NearestBuildingSite::PerGrid()
{
// code at 0001:00027fa8
}

void NearestPoweredBuildingSite::PerGrid()
{
// code at 0001:0002804d
}

void NearestLand::PerGrid()
{
// code at 0001:00028107
}

void OldPowerTally::PerGrid()
{
// code at 0001:0002814d
}

void NewPowerTally::PerGrid()
{
// code at 0001:000281cc
}

near PowerStationScan::PowerStationScan( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00028204
}

void PowerStationScan::PerGrid()
{
// code at 0001:0002827e
}

void SatisfyBuildings::Do()
{
// code at 0001:0002835e
}

near SiteScore::SiteScore( XY, long unsigned )
{
// code at 0001:00036474
}

near NewBaseScan::NewBaseScan( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00036410
}

void SatisfyBuildings::PerGrid()
{
// code at 0001:000283d1
}

void PointSample::Do()
{
// code at 0001:00028485
}

void SiteScore::PerGrid()
{
// code at 0001:000285b4
}

void NewBaseScan::PerGrid()
{
// code at 0001:00028625
}

void PlantScan::PerGrid()
{
// code at 0001:00028892
}

near PlantScan::PlantScan( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:000289b3
}

near ClosestTree::ClosestTree( XY &, long unsigned )
{
// code at 0001:000363b8
}

near ClosestDeadCreature::ClosestDeadCreature( XY, long unsigned )
{
// code at 0001:00036360
}

near CountTrees::CountTrees( XY, long unsigned )
{
// code at 0001:00036314
}

near GuardPointImportance::GuardPointImportance( XY, long unsigned )
{
// code at 0001:000362c8
}

near ClosestTargets::ClosestTargets( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:000361dc
}

void BestForestSample::PerGrid()
{
// code at 0001:00028a6c
}

void ClosestTree::PerGrid()
{
// code at 0001:00028af0
}

void ClosestDeadCreature::PerGrid()
{
// code at 0001:00028b8c
}

void ClosestEnemy::PerGrid()
{
// code at 0001:00028c90
}

void CountTrees::PerGrid()
{
// code at 0001:00028e7a
}

void GuardPointImportance::PerGrid()
{
// code at 0001:00028f01
}

void Computer::PA_BuilderBuild( PlSpec *, XY, char unsigned, char unsigned, char unsigned )
{
// code at 0001:0003610c
}

void Computer::PA_FarmerPlant( PlSpec *, XY, char unsigned, char unsigned )
{
// code at 0001:0003608c
}

void Computer::PA_FarmerCollect( PlSpec *, XY, char unsigned )
{
// code at 0001:00036014
}

void Computer::PA_CowboyKill( PlSpec *, MovingThing *, char unsigned )
{
// code at 0001:00035f98
}

void Computer::PA_ShepherdDoStuff( PlSpec *, XY, HerdMode, char unsigned )
{
// code at 0001:00035f18
}

void Computer::PA_ScientistStudy( PlSpec *, Thing *, char unsigned )
{
// code at 0001:00035e9c
}

void Computer::PA_Cheat( char unsigned )
{
// code at 0001:00035e4c
}

char unsigned Computer::PA_UpgradeBuilding( Building *, PlSpec * )
{
// code at 0001:00035dd0
}

char unsigned Computer::PA_FixBuilding( Building *, PlSpec * )
{
// code at 0001:00035d24
}

void Computer::PA_WreckBuilding( Building *, PlSpec * )
{
// code at 0001:00035cc0
}

void Computer::PA_AddTeamMember( short )
{
// code at 0001:00035c74
}

void Computer::PA_AbortAction( PlSpec *, char unsigned )
{
// code at 0001:00035c10
}

void Computer::PA_Landing( long )
{
// code at 0001:00035b90
}

void Computer::PA_LaunchSpecialist( PlSpec *, Building * )
{
// code at 0001:00035b14
}

void Computer::PA_MoveTo( XY *, PlSpec *, char unsigned )
{
// code at 0001:00035aa0
}

void Computer::PA_MoveCreatureTo( XY *, short unsigned )
{
// code at 0001:00035a40
}

void Computer::PA_AbortAll( PlSpec * )
{
// code at 0001:000359f0
}

void Computer::PA_ActivateBuilding( Building * )
{
// code at 0001:00035994
}

void Computer::PA_DisactivateBuilding( Building * )
{
// code at 0001:00035938
}

void Computer::PA_CreateACreature( char unsigned, short, char unsigned )
{
// code at 0001:000358b4
}

void Computer::StorePacket( PlSpec *, Packet * )
{
// code at 0001:0003581c
}

void Computer::DoStoredPacket( PlSpec * )
{
// code at 0001:00035520
}

short unsigned Computer::PowerOutput( char unsigned )
{
// code at 0001:000353b4
}

short unsigned Computer::PowerNeeded( char unsigned )
{
// code at 0001:00035310
}

char unsigned Computer::NumOfBuildings( char unsigned, char unsigned )
{
// code at 0001:00035258
}

long unsigned Computer::WorkNeeded( char unsigned )
{
// code at 0001:000350c4
}

XY Computer::CenterOfBase( char unsigned, char unsigned )
{
// code at 0001:00034f6c
}

Building * Computer::GetBuilding( char unsigned, char unsigned )
{
// code at 0001:00034ec8
}

void Computer::CheckBuildings()
{
// code at 0001:00034ddc
}

void Computer::NewCurrentBase( char unsigned )
{
// code at 0001:00034d50
}

void Computer::ConsiderBaseChange()
{
// code at 0001:00034ca4
}

char signed Computer::ClosestBase( XY )
{
// code at 0001:00034c28
}

XY Computer::PointOnLine( XY, XY, short unsigned )
{
// code at 0001:00034b60
}

long unsigned Computer::BaseScore( char unsigned )
{
// code at 0001:00034aa8
}

char unsigned Computer::NextBase( char unsigned )
{
// code at 0001:00034a68
}

void ClosestTargets::PerGrid()
{
// code at 0001:00028fd9
}

char unsigned Probe::Update()
{
// code at 0001:000292d3
}

void Computer::SlapDownBuilding( Building * )
{
// code at 0001:00029592
}

void Computer::EtherealsArriving()
{
// code at 0001:0002965a
}

void Computer::EtherealsGone()
{
// code at 0001:000296eb
}

void Computer::MakeTeam( long )
{
// code at 0001:0002977c
}

char unsigned Computer::AddBestSpec( char unsigned )
{
// code at 0001:0002993d
}

void Computer::MoveToNextWaypoint( PlSpec * )
{
// code at 0001:00029a74
}

void Computer::RunAway( PlSpec *, Thing * )
{
// code at 0001:00029b9f
}

void Computer::GoAroundShield( PlSpec *, XY, Building * )
{
// code at 0001:00029f81
}

Thing * Computer::CreatureToStudy()
{
// code at 0001:000348cc
}

char unsigned Computer::CreatureWork( Creature *, XY )
{
// code at 0001:00034744
}

void Computer::UpdateSpecTypes()
{
// code at 0001:0002a36c
}

void Computer::UpdateSpecialists()
{
// code at 0001:0002a411
}

char unsigned Computer::BestPlaceToHarvest( PlSpec *, XY & )
{
// code at 0001:0002afd6
}

void Computer::UpdateCreatures()
{
// code at 0001:0002b107
}

void Computer::ShuffleCreatures()
{
// code at 0001:0002b22b
}

void Computer::RegisterFreeCreature( Creature &, Building & )
{
// code at 0001:0002b2a6
}

void Computer::RegisterFreeCreature( Creature & )
{
// code at 0001:0002b307
}

void Computer::RegisterBirth( Creature *, Creature *, Creature * )
{
// code at 0001:0002b350
}

void Computer::RegisterDeath( Creature & )
{
// code at 0001:0002b609
}

void Computer::RegisterMonolith( Effect & )
{
// code at 0001:0002b6a0
}

void Computer::NewMonolith( Effect & )
{
// code at 0001:0002b71b
}

void Computer::CreateCreatures()
{
// code at 0001:0002b7e9
}

char unsigned Computer::CreateBestCreature( char unsigned, Building * )
{
// code at 0001:0002bf09
}

long Computer::TimeUntilAttack()
{
// code at 0001:000346d8
}

char unsigned Computer::ConsiderAttackConquest()
{
// code at 0001:0002c115
}

void Computer::AttackHumanPlayer()
{
// code at 0001:0002c136
}

void Computer::PlaceAttackPoint( char unsigned )
{
// code at 0001:0002c164
}

void Computer::PlaceWorkPoint()
{
// code at 0001:0002c493
}

void Computer::UpdateAttackPointLocations()
{
// code at 0001:0002caf9
}

void Computer::SetAtWarWith( char unsigned )
{
// code at 0001:0002cb8d
}

char unsigned Computer::IsAtWarWith( char unsigned, char unsigned )
{
// code at 0001:0002cbc3
}

void Computer::ClearAtWarWith( char unsigned )
{
// code at 0001:0002cc31
}

near Computer::Computer()
{
// code at 0001:0002cc6b
}

near Personality::Personality()
{
// code at 0001:0002cdd4
}

near GuardPoint::GuardPoint()
{
// code at 0001:0002ce3b
}

near Trigger::Trigger()
{
// code at 0001:0002cea1
}

void Computer::DoSetupComputerPlayer()
{
// code at 0001:0002ced1
}

void Computer::DoInitialActions()
{
// code at 0001:0002d0d9
}

void Computer::DoInitialCreatureActions()
{
// code at 0001:0002d20b
}

short Computer::NumOfCreatures( char unsigned, char unsigned )
{
// code at 0001:0002d307
}

char unsigned IFCComputer::BuildingAllowed( char unsigned, char unsigned )
{
// code at 0001:00034678
}

void Computer::Update()
{
// code at 0001:0002d3af
}

void IFCComputer::PlugIn()
{
// code at 0001:0002d54a
}

void IFCComputer::PullOut()
{
// code at 0001:0002d613
}

void IFCComputer::Update()
{
// code at 0001:0002d687
}

void IFCComputer::Draw()
{
// code at 0001:0002e65f
}

char signed IFCComputer::FirstFreeGuardPoint( char unsigned )
{
// code at 0001:000303de
}

char unsigned BuildPriority::Build( PlSpec *, char unsigned, char unsigned )
{
// code at 0001:000343f8
}

char unsigned BuildPriority::BuildHighestPri( PlSpec * )
{
// code at 0001:00030496
}

char unsigned BuildPriority::Emergency( PlSpec * )
{
// code at 0001:0003057a
}

char unsigned BuildPriority::Basic( PlSpec * )
{
// code at 0001:000307fc
}

char unsigned BuildPriority::BuildingPersonality( PlSpec *, char signed )
{
// code at 0001:00030df6
}

BestBuilding BuildPriority::FindBestLoc( char unsigned, char unsigned )
{
// code at 0001:00030e23
}

char signed Computer::AssignGuardPointToBase( char unsigned, XY &, char unsigned, char signed )
{
// code at 0001:00031b58
}

void Computer::UpdateAllGuardPoints()
{
// code at 0001:00031bea
}

void Computer::LaunchWave( char unsigned )
{
// code at 0001:00031c49
}

char unsigned Computer::AssignCreatureToGuardPoint( short, char signed )
{
// code at 0001:00031dc1
}

void Computer::CheckEZones()
{
// code at 0001:00031fb2
}

char unsigned GuardPoint::Valid()
{
// code at 0001:000321f9
}

void GuardPoint::Invalidate()
{
// code at 0001:00032231
}

void GuardPoint::Update()
{
// code at 0001:00032262
}

char unsigned GuardPoint::ScanForTargets( char signed )
{
// code at 0001:00032d01
}

char unsigned GuardPoint::TargetsHere()
{
// code at 0001:000343a0
}

char unsigned GuardPoint::BestTargetType( char unsigned, char signed )
{
// code at 0001:00032fa6
}

char unsigned GuardPoint::IsCreatureRightType( Creature & )
{
// code at 0001:00033226
}

void GuardPoint::DropDeadTargets()
{
// code at 0001:00033440
}

void GuardPoint::DropTargetsOutsideRange()
{
// code at 0001:000334c9
}

void GuardPoint::DropCloakedTargets()
{
// code at 0001:0003354d
}

char unsigned GuardPoint::IsTarget( short, TgtType )
{
// code at 0001:00034334
}

char unsigned GuardPoint::IsHere( short )
{
// code at 0001:000342d4
}

long GuardPoint::ChooseTarget( TgtType * )
{
// code at 0001:00033616
}

char unsigned GuardPoint::HungryCreaturesHere( char unsigned )
{
// code at 0001:000336bf
}

long GuardPoint::TreesHere()
{
// code at 0001:00033766
}

void GuardPoint::SetupPoint( XY &, char unsigned, char unsigned, char signed, GPointFlags * )
{
// code at 0001:000337a3
}

char unsigned CompTarget::Valid()
{
// code at 0001:0003429c
}

void CompTarget::Invalidate()
{
// code at 0001:00034270
}

void GuardPoint::ShutDownPoint()
{
// code at 0001:0003391f
}

void GuardPoint::AddCreature( short )
{
// code at 0001:00033977
}

void GuardPoint::RemoveCreature( short )
{
// code at 0001:00033a4c
}

void GuardPoint::MovePoint( XY )
{
// code at 0001:00033aa4
}

short GuardPoint::FindImportance()
{
// code at 0001:00033b76
}

char unsigned Trigger::Valid()
{
// code at 0001:00034234
}

void CompTarget::NewTarget( short, TgtType )
{
// code at 0001:00033bb3
}

void CompTarget::AssignCreatureToThis( short )
{
// code at 0001:00033be8
}

void Computer::UpdateAllTriggers()
{
// code at 0001:00033cfb
}

char unsigned Trigger::Update( char unsigned )
{
// code at 0001:00033d80
}

near GPointFlags::GPointFlags()
{
// code at 0001:00033fd8
}

char unsigned Computer::ReadyToMakeNewCreature()
{
// code at 0001:000341d4
}

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

char * stuffCreatures[];

char * stuffBuildings[];

char * gPTypes[];

void (near * const __vftbl[])();

char unsigned const __typesig[];

char unsigned const __typesig[];

char unsigned Computer::ReadyToBuildNewBuilding()
{
// code at 0001:00034174
}

void GPointFlags::operator =( GPointFlags * )
{
// code at 0001:0003401f
}

long Computer::CreaturesDoingJob( char unsigned, char unsigned, char unsigned )
{
// code at 0001:000340ac
}

char unsigned const __typesig[];


/******************************************************************************/
