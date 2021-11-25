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
    ULONG scanRange; // offset=0
    UBYTE location; // offset=4
//public:
    //CompDebug(); -- generate default no-args constructor
    //CompDebug(CompDebug &arg1); -- generate default copy constructor
};

class Computer { // sizeof=1726
public:
    SLONG checksum; // offset=0
    UBYTE idx; // offset=4
    UBYTE testing; // offset=5
    ULONG computerTurn; // offset=6
    ULONG lastCheated; // offset=10
    SLONG doNotUpgrade[14]; // offset=14
    UBYTE buildingBeingUpgraded; // offset=70
    UBYTE buildingInProgress[14]; // offset=71
    UBYTE buildingInBase[64]; // offset=85
    UBYTE numberOfBases; // offset=149
    UBYTE mainBase; // offset=150
    ULONG lastBaseChange; // offset=151
    UBYTE enemies; // offset=155
    PacketData specPackets[5]; // offset=156
    XY specWaypoints[5][8]; // offset=211
    UBYTE specNumOfWaypoints[5]; // offset=371
    SBYTE specHealth[5]; // offset=376
    UBYTE specFleeing; // offset=381
    BBOOL etherealsOnPlanet; // offset=382
    UWORD startOnTurn; // offset=383
    UWORD waitBeforeAttacking; // offset=385
    UBYTE currentCreatureBase; // offset=387
    BaseScan bScan; // offset=388
    BaseAwareness baseAwareness[6]; // offset=405
    GuardPoint gPoints[16]; // offset=903
    UBYTE mainPowerstation[6]; // offset=1511
    UBYTE backupPowerstation[6]; // offset=1517
    UBYTE builderInBase[20]; // offset=1523
    UBYTE playersNumBuildings[4]; // offset=1543
    CompDebug compDebug; // offset=1547
    Personality personality; // offset=1552
    UBYTE specTypesInTeam[4]; // offset=1694
    ULONG lastBuildingBuilt; // offset=1698
    ULONG lastCreatureMade; // offset=1702
    XY newBaseLocation; // offset=1706
    uint8_t haveSetupComputerPlayer:1; // offset=1710 bit=0
    uint8_t haveDoneInitialActions:1; // offset=1710 bit=1
    uint8_t haveDoneInitialCreatureActions:1; // offset=1710 bit=2
    UBYTE atWarWith; // offset=1711
    SBYTE eZonesDone; // offset=1712
    UBYTE wantedNoSpecs; // offset=1713
    SBYTE workPointNo; // offset=1714
    ULONG lastAttackLaunched; // offset=1715
    ULONG extraSpace; // offset=1719
    UBYTE extraSpaceII[2]; // offset=1723
    UBYTE currentBase; // offset=1725
public:
    void Update();
    Computer();
    void DoSetupComputerPlayer();
    void DoInitialActions();
    void DoInitialCreatureActions();
    void PA_BuilderBuild(PlSpec *arg1, XY arg2, UBYTE arg3, UBYTE arg4, BBOOL arg5);
    void PA_FarmerPlant(PlSpec *arg1, XY arg2, UBYTE arg3, BBOOL arg4);
    void PA_FarmerCollect(PlSpec *arg1, XY arg2, BBOOL arg3);
    void PA_CowboyKill(PlSpec *arg1, MovingThing *tng2, BBOOL arg3);
    void PA_ShepherdDoStuff(PlSpec *arg1, XY arg2, HerdMode arg3, BBOOL arg4);
    void PA_ScientistStudy(PlSpec *arg1, Thing *tng2, BBOOL arg3);
    void PA_Cheat(UBYTE arg1);
    BBOOL PA_UpgradeBuilding(Building *arg1, PlSpec *arg2);
    BBOOL PA_FixBuilding(Building *arg1, PlSpec *arg2);
    void PA_WreckBuilding(Building *arg1, PlSpec *arg2);
    void PA_AddTeamMember(SWORD arg1);
    void PA_RemoveTeamMember(SWORD arg1);
    void PA_AbortAction(PlSpec *arg1, BBOOL arg2);
    void PA_Landing(SLONG arg1);
    void PA_LaunchSpecialist(PlSpec *arg1, Building *arg2);
    void PA_MoveTo(XY *arg1, PlSpec *arg2, BBOOL arg3);
    void PA_MoveCreatureTo(XY *arg1, UWORD arg2);
    void PA_AbortAll(PlSpec *arg1);
    void PA_Null(PlSpec *arg1, BBOOL arg2);
    void PA_ActivateBuilding(Building *arg1);
    void PA_DisactivateBuilding(Building *arg1);
    void PA_CreateACreature(UBYTE arg1, SWORD arg2, UBYTE arg3);
    void StorePacket(PlSpec *arg1, Packet *arg2);
    void DoStoredPacket(PlSpec *arg1);
    BBOOL IsEnemy(Thing *tng1);
    void SlapDownBuilding(Building *arg1);
    UWORD PowerOutput(UBYTE arg1);
    UWORD PowerNeeded(UBYTE arg1);
    UBYTE NumOfBuildings(UBYTE arg1, UBYTE arg2);
    ULONG WorkNeeded(UBYTE arg1);
    XY CenterOfBase(UBYTE arg1, UBYTE arg2);
    Building * GetBuilding(UBYTE arg1, UBYTE arg2);
    void CheckBuildings();
    BBOOL TooCloseToOtherBases(XY arg1);
    SBYTE ClosestBase(XY arg1);
    void EtherealsArriving();
    void EtherealsGone();
    UBYTE CurrentBase();
    void NewCurrentBase(UBYTE arg1);
    void ConsiderBaseChange();
    ULONG WalkingDistance(XY arg1, XY arg2);
    XY PointBetween(XY arg1, XY arg2, ULONG arg3);
    XY PointOnLine(XY arg1, XY arg2, UWORD arg3);
    ULONG BaseScore(UBYTE arg1);
    UBYTE NextBase(UBYTE arg1);
    void MakeTeam(SLONG arg1);
    BBOOL AddBestSpec(UBYTE arg1);
    void MoveToNextWaypoint(PlSpec *arg1);
    void RunAway(PlSpec *arg1, Thing *tng2);
    void GoAroundShield(PlSpec *arg1, XY arg2, Building *arg3);
    void UpdateSpecTypes();
    void UpdateSpecialists();
    BBOOL BestPlaceToHarvest(PlSpec *arg1, XY &arg2);
    Thing * CreatureToStudy();
    PlSpec * SpecNeedingHealing();
    PlSpec * BestShootingTarget(XY *arg1, ULONG arg2);
    void UpdateCreatures();
    BBOOL CreatureWork(Creature *arg1, XY arg2);
    void ShuffleCreatures();
    void RegisterFreeCreature(Creature &arg1, Building &arg2);
    void RegisterFreeCreature(Creature &arg1);
    void RegisterBirth(Creature *arg1, Creature *arg2, Creature *arg3);
    void RegisterDeath(Creature &arg1);
    void RegisterMonolith(Effect &arg1);
    void NewMonolith(Effect &arg1);
    void CreateCreatures();
    BBOOL CreateBestCreature(UBYTE arg1, Building *arg2);
    ULONG CreatureScore(UBYTE arg1, UBYTE arg2);
    BBOOL ConsiderAttackConquest();
    SLONG CreaturesDoingJob(UBYTE arg1, UBYTE arg2, BBOOL arg3);
    BBOOL ReadyToMakeNewCreature();
    BBOOL ReadyToBuildNewBuilding();
    SBYTE AssignGuardPointToBase(UBYTE arg1, XY &arg2, UBYTE arg3, SBYTE arg4);
    void UpdateAllGuardPoints();
    BBOOL AssignCreatureToGuardPoint(SWORD arg1, SBYTE arg2);
    void CheckEZones();
    void AttackHumanPlayer();
    void PlaceAttackPoint(UBYTE arg1);
    void PlaceWorkPoint();
    void UpdateAttackPointLocations();
    SLONG TimeUntilAttack();
    void LaunchWave(UBYTE arg1);
    SWORD NumOfCreatures(UBYTE arg1, UBYTE arg2);
    void UpdateAllTriggers();
    void SetAtWarWith(UBYTE arg1);
    BBOOL IsAtWarWith(UBYTE arg1, UBYTE arg2);
    void ClearAtWarWith(UBYTE arg1);
    //Computer(Computer &comp1); -- generate default copy constructor
    Computer & operator =(Computer &comp1);
};

#endif // BIO_COMPUTER_HPP_
/******************************************************************************/
