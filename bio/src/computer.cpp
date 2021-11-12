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

/*CompDebug::CompDebug()
{
// code at 0001:000374ac
}*/

/*Computer::Computer()
{
// code at 0001:0002cc6b
}*/

/*Computer::~Computer()
{
// code at 0001:0005e598
}*/

BBOOL Computer::IsEnemy(Thing *tng1)
{
// code at 0001:00037254
}

UBYTE Computer::CurrentBase()
{
// code at 0001:00037228
}

void Computer::PA_BuilderBuild(PlSpec *arg1, XY arg2, UBYTE arg3, UBYTE arg4, BBOOL arg5)
{
// code at 0001:0003610c
}

void Computer::PA_FarmerPlant(PlSpec *arg1, XY arg2, UBYTE arg3, BBOOL arg4)
{
// code at 0001:0003608c
}

void Computer::PA_FarmerCollect(PlSpec *arg1, XY arg2, BBOOL arg3)
{
// code at 0001:00036014
}

void Computer::PA_CowboyKill(PlSpec *arg1, MovingThing *tng2, BBOOL arg3)
{
// code at 0001:00035f98
}

void Computer::PA_ShepherdDoStuff(PlSpec *arg1, XY arg2, HerdMode arg3, BBOOL arg4)
{
// code at 0001:00035f18
}

void Computer::PA_ScientistStudy(PlSpec *arg1, Thing *tng2, BBOOL arg3)
{
// code at 0001:00035e9c
}

void Computer::PA_Cheat(UBYTE arg1)
{
// code at 0001:00035e4c
}

BBOOL Computer::PA_UpgradeBuilding(Building *arg1, PlSpec *arg2)
{
// code at 0001:00035dd0
}

BBOOL Computer::PA_FixBuilding(Building *arg1, PlSpec *arg2)
{
// code at 0001:00035d24
}

void Computer::PA_WreckBuilding(Building *arg1, PlSpec *arg2)
{
// code at 0001:00035cc0
}

void Computer::PA_AddTeamMember(SWORD arg1)
{
// code at 0001:00035c74
}

void Computer::PA_AbortAction(PlSpec *arg1, BBOOL arg2)
{
// code at 0001:00035c10
}

void Computer::PA_Landing(SLONG arg1)
{
// code at 0001:00035b90
}

void Computer::PA_LaunchSpecialist(PlSpec *arg1, Building *arg2)
{
// code at 0001:00035b14
}

void Computer::PA_MoveTo(XY *arg1, PlSpec *arg2, BBOOL arg3)
{
// code at 0001:00035aa0
}

void Computer::PA_MoveCreatureTo(XY *arg1, UWORD arg2)
{
// code at 0001:00035a40
}

void Computer::PA_AbortAll(PlSpec *arg1)
{
// code at 0001:000359f0
}

void Computer::PA_ActivateBuilding(Building *arg1)
{
// code at 0001:00035994
}

void Computer::PA_DisactivateBuilding(Building *arg1)
{
// code at 0001:00035938
}

void Computer::PA_CreateACreature(UBYTE arg1, SWORD arg2, UBYTE arg3)
{
// code at 0001:000358b4
}

void Computer::StorePacket(PlSpec *arg1, Packet *pkt2)
{
// code at 0001:0003581c
}

void Computer::DoStoredPacket(PlSpec *arg1)
{
// code at 0001:00035520
}

UWORD Computer::PowerOutput(UBYTE arg1)
{
// code at 0001:000353b4
}

UWORD Computer::PowerNeeded(UBYTE arg1)
{
// code at 0001:00035310
}

UBYTE Computer::NumOfBuildings(UBYTE arg1, UBYTE arg2)
{
// code at 0001:00035258
}

ULONG Computer::WorkNeeded(UBYTE arg1)
{
// code at 0001:000350c4
}

XY Computer::CenterOfBase(UBYTE arg1, UBYTE arg2)
{
// code at 0001:00034f6c
}

Building * Computer::GetBuilding(UBYTE arg1, UBYTE arg2)
{
// code at 0001:00034ec8
}

void Computer::CheckBuildings()
{
// code at 0001:00034ddc
}

void Computer::NewCurrentBase(UBYTE arg1)
{
// code at 0001:00034d50
}

void Computer::ConsiderBaseChange()
{
// code at 0001:00034ca4
}

SBYTE Computer::ClosestBase(XY arg1)
{
// code at 0001:00034c28
}

XY Computer::PointOnLine(XY arg1, XY arg2, UWORD arg3)
{
// code at 0001:00034b60
}

ULONG Computer::BaseScore(UBYTE arg1)
{
// code at 0001:00034aa8
}

UBYTE Computer::NextBase(UBYTE arg1)
{
// code at 0001:00034a68
}

void Computer::SlapDownBuilding(Building *arg1)
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

void Computer::MakeTeam(SLONG arg1)
{
// code at 0001:0002977c
}

BBOOL Computer::AddBestSpec(UBYTE arg1)
{
// code at 0001:0002993d
}

void Computer::MoveToNextWaypoint(PlSpec *arg1)
{
// code at 0001:00029a74
}

void Computer::RunAway(PlSpec *arg1, Thing *tng2)
{
// code at 0001:00029b9f
}

void Computer::GoAroundShield(PlSpec *arg1, XY arg2, Building *arg3)
{
// code at 0001:00029f81
}

Thing * Computer::CreatureToStudy()
{
// code at 0001:000348cc
}

BBOOL Computer::CreatureWork(Creature *crtr1, XY arg2)
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

BBOOL Computer::BestPlaceToHarvest(PlSpec *arg1, XY &arg2)
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

void Computer::RegisterFreeCreature(Creature &crtr1, Building &arg2)
{
// code at 0001:0002b2a6
}

void Computer::RegisterFreeCreature(Creature &arg1)
{
// code at 0001:0002b307
}

void Computer::RegisterBirth(Creature *arg1, Creature *arg2, Creature *arg3)
{
// code at 0001:0002b350
}

void Computer::RegisterDeath(Creature &arg1)
{
// code at 0001:0002b609
}

void Computer::RegisterMonolith(Effect &arg1)
{
// code at 0001:0002b6a0
}

void Computer::NewMonolith(Effect &arg1)
{
// code at 0001:0002b71b
}

void Computer::CreateCreatures()
{
// code at 0001:0002b7e9
}

BBOOL Computer::CreateBestCreature(UBYTE arg1, Building *arg2)
{
// code at 0001:0002bf09
}

SLONG Computer::TimeUntilAttack()
{
// code at 0001:000346d8
}

BBOOL Computer::ConsiderAttackConquest()
{
// code at 0001:0002c115
}

void Computer::AttackHumanPlayer()
{
// code at 0001:0002c136
}

void Computer::PlaceAttackPoint(UBYTE arg1)
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

void Computer::SetAtWarWith(UBYTE arg1)
{
// code at 0001:0002cb8d
}

BBOOL Computer::IsAtWarWith(UBYTE arg1, UBYTE arg2)
{
// code at 0001:0002cbc3
}

void Computer::ClearAtWarWith(UBYTE arg1)
{
// code at 0001:0002cc31
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

SWORD Computer::NumOfCreatures(UBYTE arg1, UBYTE arg2)
{
// code at 0001:0002d307
}

void Computer::Update()
{
// code at 0001:0002d3af
}

BBOOL Computer::ReadyToMakeNewCreature()
{
// code at 0001:000341d4
}

BBOOL Computer::ReadyToBuildNewBuilding()
{
// code at 0001:00034174
}

SLONG Computer::CreaturesDoingJob(UBYTE arg1, UBYTE arg2, BBOOL arg3)
{
// code at 0001:000340ac
}

SBYTE Computer::AssignGuardPointToBase(UBYTE arg1, XY &arg2, UBYTE arg3, SBYTE arg4)
{
// code at 0001:00031b58
}

void Computer::UpdateAllGuardPoints()
{
// code at 0001:00031bea
}

void Computer::LaunchWave(UBYTE arg1)
{
// code at 0001:00031c49
}

BBOOL Computer::AssignCreatureToGuardPoint(SWORD arg1, SBYTE arg2)
{
// code at 0001:00031dc1
}

void Computer::CheckEZones()
{
// code at 0001:00031fb2
}

void Computer::UpdateAllTriggers()
{
// code at 0001:00033cfb
}

/*char unsigned Computer::__defarg()
{
// code at 0001:00037370
}*/

/*char unsigned Computer::__defarg()
{
// code at 0001:00037350
}*/

/*char unsigned Computer::__defarg()
{
// code at 0001:00037330
}*/

/*char unsigned Computer::__defarg()
{
// code at 0001:00037310
}*/

/*char unsigned Computer::__defarg()
{
// code at 0001:000372f0
}*/

/*char unsigned Computer::__defarg()
{
// code at 0001:000372d0
}*/

/*char signed Computer::__defarg()
{
// code at 0001:000372b0
}*/

/*char unsigned Computer::__defarg()
{
// code at 0001:00037290
}*/


/******************************************************************************/
