/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file computer.hpp
 *     Header file for computer.cpp.
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
#ifndef BIO_COMPUTER_HPP_
#define BIO_COMPUTER_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "packets.hpp"
#include "creaturestat.hpp"
#include "comppersonal.hpp"
#include "scanaware.hpp"
#include "scan.hpp"
#include "gupoint.hpp"

class PlSpec;
class Effect;
class Creature;
class Thing;

class CompDebug { // sizeof=5
    //CompDebug(CompDebug *arg1);
    //CompDebug();
    ULONG scanRange; // offset=0
    UBYTE location; // offset=4
};

class Computer { // sizeof=190
    //~Computer();
    Computer * operator =(Computer *arg1);
    //Computer(Computer *arg1); -- generate default copy constructor
    void ClearAtWarWith(UBYTE arg1);
    BBOOL IsAtWarWith(UBYTE arg1, UBYTE arg2);
    void SetAtWarWith(UBYTE arg1);
    void UpdateAllTriggers();
    SWORD NumOfCreatures(UBYTE arg1, UBYTE arg2);
    void LaunchWave(UBYTE arg1);
    SLONG TimeUntilAttack();
    void UpdateAttackPointLocations();
    void PlaceWorkPoint();
    void PlaceAttackPoint(UBYTE arg1);
    void AttackHumanPlayer();
    void CheckEZones();
    BBOOL AssignCreatureToGuardPoint(SWORD arg1, SBYTE arg2);
    void UpdateAllGuardPoints();
    SBYTE AssignGuardPointToBase(UBYTE arg1, XY &arg2, UBYTE arg3, SBYTE arg4);
    BBOOL ReadyToBuildNewBuilding();
    BBOOL ReadyToMakeNewCreature();
    SLONG CreaturesDoingJob(UBYTE arg1, UBYTE arg2, BBOOL arg3);
    BBOOL ConsiderAttackConquest();
    ULONG CreatureScore(UBYTE arg1, UBYTE arg2);
    BBOOL CreateBestCreature(UBYTE arg1, Building *arg2);
    void CreateCreatures();
    void NewMonolith(Effect &arg1);
    void RegisterMonolith(Effect &arg1);
    void RegisterDeath(Creature &arg1);
    void RegisterBirth(Creature *crtr1, Creature *crtr2, Creature *crtr3);
    void RegisterFreeCreature(Creature &arg1);
    void RegisterFreeCreature(Creature &crtr1, Building &arg2);
    void ShuffleCreatures();
    BBOOL CreatureWork(Creature *crtr1, XY arg2);
    void UpdateCreatures();
    PlSpec * BestShootingTarget(XY *arg1, ULONG arg2);
    PlSpec * SpecNeedingHealing();
    Thing * CreatureToStudy();
    BBOOL BestPlaceToHarvest(PlSpec *arg1, XY &arg2);
    void UpdateSpecialists();
    void UpdateSpecTypes();
    void GoAroundShield(PlSpec *arg1, XY arg2, Building *arg3);
    void RunAway(PlSpec *arg1, Thing *tng2);
    void MoveToNextWaypoint(PlSpec *arg1);
    BBOOL AddBestSpec(UBYTE arg1);
    void MakeTeam(SLONG arg1);
    UBYTE NextBase(UBYTE arg1);
    ULONG BaseScore(UBYTE arg1);
    XY PointOnLine(XY arg1, XY arg2, UWORD arg3);
    XY PointBetween(XY arg1, XY arg2, ULONG arg3);
    ULONG WalkingDistance(XY arg1, XY arg2);
    void ConsiderBaseChange();
    void NewCurrentBase(UBYTE arg1);
    UBYTE CurrentBase();
    void EtherealsGone();
    void EtherealsArriving();
    SBYTE ClosestBase(XY arg1);
    BBOOL TooCloseToOtherBases(XY arg1);
    void CheckBuildings();
    Building * GetBuilding(UBYTE arg1, UBYTE arg2);
    XY CenterOfBase(UBYTE arg1, UBYTE arg2);
    ULONG WorkNeeded(UBYTE arg1);
    UBYTE NumOfBuildings(UBYTE arg1, UBYTE arg2);
    UWORD PowerNeeded(UBYTE arg1);
    UWORD PowerOutput(UBYTE arg1);
    void SlapDownBuilding(Building *arg1);
    BBOOL IsEnemy(Thing *tng1);
    void DoStoredPacket(PlSpec *arg1);
    void StorePacket(PlSpec *arg1, Packet *pkt2);
    void PA_CreateACreature(UBYTE arg1, SWORD arg2, UBYTE arg3);
    void PA_DisactivateBuilding(Building *arg1);
    void PA_ActivateBuilding(Building *arg1);
    void PA_Null(PlSpec *arg1, BBOOL arg2);
    void PA_AbortAll(PlSpec *arg1);
    void PA_MoveCreatureTo(XY *arg1, UWORD arg2);
    void PA_MoveTo(XY *arg1, PlSpec *arg2, BBOOL arg3);
    void PA_LaunchSpecialist(PlSpec *arg1, Building *arg2);
    void PA_Landing(SLONG arg1);
    void PA_AbortAction(PlSpec *arg1, BBOOL arg2);
    void PA_RemoveTeamMember(SWORD arg1);
    void PA_AddTeamMember(SWORD arg1);
    void PA_WreckBuilding(Building *arg1, PlSpec *arg2);
    BBOOL PA_FixBuilding(Building *arg1, PlSpec *arg2);
    BBOOL PA_UpgradeBuilding(Building *arg1, PlSpec *arg2);
    void PA_Cheat(UBYTE arg1);
    void PA_ScientistStudy(PlSpec *arg1, Thing *tng2, BBOOL arg3);
    void PA_ShepherdDoStuff(PlSpec *arg1, XY arg2, HerdMode arg3, BBOOL arg4);
    void PA_CowboyKill(PlSpec *arg1, MovingThing *tng2, BBOOL arg3);
    void PA_FarmerCollect(PlSpec *arg1, XY arg2, BBOOL arg3);
    void PA_FarmerPlant(PlSpec *arg1, XY arg2, UBYTE arg3, BBOOL arg4);
    void PA_BuilderBuild(PlSpec *arg1, XY arg2, UBYTE arg3, UBYTE arg4, BBOOL arg5);
    void DoInitialCreatureActions();
    void DoInitialActions();
    void DoSetupComputerPlayer();
    //Computer(); -- generate default no-ops constructor
    void Update();
    SLONG checksum; // offset=0
    UBYTE idx; // offset=4
    UBYTE testing; // offset=5
    ULONG computerTurn; // offset=6
    UBYTE playersNumBuildings[3]; // offset=7
    ULONG lastCheated; // offset=10
    CompDebug compDebug; // offset=11
    SLONG doNotUpgrade[13]; // offset=14
    Personality personality; // offset=16
    UBYTE buildingBeingUpgraded; // offset=70
    UBYTE buildingInProgress[13]; // offset=71
    UBYTE buildingInBase[63]; // offset=85
    UBYTE specNumOfWaypoints[4]; // offset=115
    SBYTE specHealth[4]; // offset=120
    UBYTE specFleeing; // offset=125
    BBOOL etherealsOnPlanet; // offset=126
    UWORD startOnTurn; // offset=127
    UWORD waitBeforeAttacking; // offset=129
    UBYTE currentCreatureBase; // offset=131
    BaseScan bScan; // offset=132
    GuardPoint gPoints[15]; // offset=135
    BaseAwareness baseAwareness[5]; // offset=149
    UBYTE mainBase; // offset=150
    ULONG lastBaseChange; // offset=151
    UBYTE numberOfBases; // offset=152
    UBYTE enemies; // offset=155
    PacketData specPackets[4]; // offset=156
    UBYTE specTypesInTeam[3]; // offset=158
    ULONG lastBuildingBuilt; // offset=162
    ULONG lastCreatureMade; // offset=166
    XY newBaseLocation; // offset=170
    uint8_t haveDoneInitialCreatureActions; // offset=174
    UBYTE atWarWith; // offset=175
    SBYTE eZonesDone; // offset=176
    UBYTE wantedNoSpecs; // offset=177
    SBYTE workPointNo; // offset=178
    ULONG lastAttackLaunched; // offset=179
    uint8_t haveDoneInitialActions; // offset=180
    uint8_t haveSetupComputerPlayer; // offset=181
    ULONG extraSpace; // offset=183
    UBYTE extraSpaceII[1]; // offset=187
    UBYTE currentBase; // offset=189
    XY specWaypoints[4][7]; // offset=211
    UBYTE mainPowerstation[5]; // offset=231
    UBYTE backupPowerstation[5]; // offset=237
    UBYTE builderInBase[19]; // offset=243
};

#endif // BIO_COMPUTER_HPP_
/******************************************************************************/
