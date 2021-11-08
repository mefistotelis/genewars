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

enum { // type=int8_t
    COMP_ACTION_BUILD = 0,
    COMP_ACTION_UPGRADE,
    COMP_ACTION_FIX,
    COMP_ACTION_WRECK,
};

enum TgtType { // type=int8_t
    CL_TGT_CR = 0,
    CL_TGT_BLD,
    CL_TGT_PLS,
    CL_TGT_MAX,
};

typedef enum TgtType TgtType;

enum ScoreType { // type=int8_t
    SCORE_ATTACK = 0,
    SCORE_DEFEND,
    SCORE_WORK,
    SCORE_BUILD,
};

typedef enum ScoreType ScoreType;

enum HerdMode { // type=int8_t
    HERD_EAT = 0,
    HERD_FIGHT,
    HERD_BREED,
    MAX_HERDMODES,
};


typedef uint8_t BBOOL;

enum { // type=int8_t
    GLOB_SPECMODE = 0,
    GLOB_LIFEMODE,
};

typedef uint32_t ULONG;

typedef uint16_t UWORD;

typedef uint8_t UBYTE;

class Specialist { // sizeof=36
    void ClearPlanetside();
    void SetPlanetside();
    BBOOL IsPlanetside();
    void ClearOnTeam();
    void SetOnTeam();
    BBOOL IsOnTeam();
    char * Name(char *arg1);
    void Invalidate();
    BBOOL Valid();
    char name[19]; // offset=0
    UBYTE sex; // offset=20
    PlayerRace race; // offset=21
    SpecialistClass specClass; // offset=22
    SBYTE ability; // offset=23
    SBYTE resolve; // offset=24
    SBYTE strength; // offset=25
    SBYTE currentStrength; // offset=26
    SBYTE currentResolve; // offset=27
    ULONG landings; // offset=28
    ULONG flags; // offset=32
};

typedef class Player Player;

class PowerGraph { // sizeof=45
    UBYTE PowerToColor(SWORD arg1);
    void Draw(SLONG arg1, SLONG arg2);
    void Update(SWORD arg1, SWORD arg2, SWORD arg3);
    UBYTE index;
    SWORD lo[49];
    SWORD hi[49];
    SWORD history[49];
};

typedef class PowerGraph PowerGraph;



struct BuildingStage { // sizeof=1
    uint8_t player; // offset=0
    uint8_t stage; // offset=1
};

typedef struct BuildingStage BuildingStage;



class Point { // sizeof=12
    void Set(SLONG arg1, SLONG arg2, SLONG arg3);
    SLONG X; // offset=0
    SLONG Y; // offset=4
    SLONG Z; // offset=8
};

typedef class Point Point;

typedef class ASpecies ASpecies;

class Gene { // sizeof=2
    BBOOL IsBasicInGene(CreatureBaseSpecies arg1);
    CreatureBaseSpecies dominant; // offset=0
    CreatureBaseSpecies recessive; // offset=1
};

typedef class Gene Gene;

typedef void AwarenessScan;



class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;



class CompDebug { // sizeof=5
    class CompDebug * CompDebug(class CompDebug *arg1);
    class CompDebug * CompDebug();
    ULONG scanRange; // offset=0
    UBYTE location; // offset=4
};

class PacketData { // sizeof=11
    SWORD X; // offset=0
    SWORD Y; // offset=2
    SWORD Z; // offset=4
    SWORD A; // offset=6
    SWORD B; // offset=8
    UBYTE Action; // offset=10
};

typedef class PacketData PacketData;

class BaseScan { // sizeof=17
    void Reset();
    XY xy; // offset=0
    XY center; // offset=4
    UBYTE tilesPrTurn; // offset=8
    UBYTE baseNo; // offset=9
    ULONG rng; // offset=10
    BBOOL started; // offset=14
    BBOOL middle; // offset=15
    BBOOL finished; // offset=16
};

typedef class BaseScan BaseScan;

class BaseAwareness { // sizeof=83
    void Reset();
    ULONG finishedTurn; // offset=0
    UBYTE enemySpec; // offset=4
    UWORD enemyBuildings; // offset=5
    UWORD enemyCreatures; // offset=7
    UWORD friendlyCreatures; // offset=9
    ULONG enemyAttack; // offset=11
    ULONG enemyDefence; // offset=15
    ULONG myAttack; // offset=19
    ULONG myDefence; // offset=23
    ULONG myWork; // offset=27
    ULONG myBuild; // offset=31
    ULONG buildingThreat; // offset=35
    UWORD specThreat; // offset=39
    ULONG treesInForest; // offset=41
    UWORD forestDir[7]; // offset=45
    ULONG meat; // offset=61
    ULONG bones; // offset=65
    ULONG vegi; // offset=69
    ULONG foodInBase; // offset=73
    ULONG baseScore; // offset=77
    SWORD danger; // offset=81
};

typedef class BaseAwareness BaseAwareness;

class GPointFlags { // sizeof=1
    class GPointFlags * operator=(class GPointFlags *arg1);
    class GPointFlags * GPointFlags(class GPointFlags *arg1);
    void operator=(GPointFlags *arg1);
    class GPointFlags * GPointFlags();
    uint8_t specOnHisWay; // offset=0
    uint8_t noSuitableCreatures; // offset=1
    uint8_t pointClosed; // offset=2
    uint8_t defendGetsPriority; // offset=3
    uint8_t triggerOnEnemies; // offset=4
    uint8_t canWalkTo; // offset=5
};

typedef class GPointFlags GPointFlags;

class CompTarget { // sizeof=4
    void * ~CompTarget();
    class CompTarget * CompTarget(class CompTarget *arg1);
    void StopHuntingThis();
    void AssignCreatureToThis(SWORD arg1);
    void NewTarget(SWORD arg1);
    void Update();
    void Invalidate();
    BBOOL Valid();
    class CompTarget * CompTarget();
    SWORD crNo; // offset=0
    UBYTE creaturesOnThis; // offset=2
    TgtType targetType; // offset=3
};

typedef class CompTarget CompTarget;

class GuardPoint { // sizeof=38
    void * ~GuardPoint();
    class GuardPoint * operator=(class GuardPoint *arg1);
    class GuardPoint * GuardPoint(class GuardPoint *arg1);
    Computer * Comp();
    EtherealZone * EZone();
    SWORD FindImportance();
    void MovePoint(XY arg1);
    void RemoveCreature(SWORD arg1);
    void AddCreature(SWORD arg1);
    void ShutDownPoint();
    void SetupPoint(XY arg1, UBYTE arg2, UBYTE arg3, SBYTE arg4, GPointFlags *arg5);
    SLONG TreesHere();
    UBYTE HungryCreaturesHere(UBYTE arg1);
    BBOOL IsHere(SWORD arg1);
    BBOOL IsCreatureRightType(Creature *arg1);
    BBOOL IsTarget(SWORD arg1);
    UBYTE BestTargetType(UBYTE arg1, SBYTE arg2);
    SLONG ChooseTarget(TgtType *arg1);
    void DropCloakedTargets();
    void DropDeadTargets();
    void DropTargetsOutsideRange();
    UBYTE ScanForTargets(SBYTE arg1);
    UBYTE TargetsHere();
    void Update();
    void Invalidate();
    BBOOL Valid();
    class GuardPoint * GuardPoint();
    XY loc; // offset=0
    SWORD creaturesHere; // offset=4
    SWORD importance; // offset=6
    SBYTE player; // offset=8
    UBYTE type; // offset=9
    UBYTE base; // offset=10
    UBYTE pointNo; // offset=11
    UBYTE effectNumber; // offset=12
    GPointFlags flags; // offset=13
    CompTarget targets[5]; // offset=14
    SBYTE linkToPoint; // offset=15
    SBYTE zoneNumber; // offset=16
};

typedef class Computer Computer;

typedef class GuardPoint GuardPoint;

typedef class CompDebug CompDebug;

class Trigger { // sizeof=7
    void * ~Trigger();
    class Trigger * Trigger(class Trigger *arg1);
    void Invalidate();
    BBOOL Valid();
    BBOOL Update(UBYTE arg1);
    class Trigger * Trigger();
    UBYTE type; // offset=0
    UBYTE turn; // offset=1
    UBYTE thisPlayer; // offset=2
    UBYTE otherPlayer; // offset=3
    UWORD amount; // offset=4
    UBYTE species; // offset=5
    BBOOL doneThis; // offset=6
};

typedef class Trigger Trigger;

class Personality { // sizeof=142
    class Personality * Personality(class Personality *arg1);
    class Personality * Personality();
    char name[19]; // offset=0
    UBYTE advancedOptions; // offset=20
    UBYTE pwrWanted; // offset=21
    UBYTE idealNoBases; // offset=22
    SBYTE upgrade; // offset=23
    UBYTE aggressive; // offset=24
    UBYTE defensive; // offset=25
    ULONG freeSpace[1]; // offset=26
    UBYTE locationAwareness; // offset=34
    UBYTE distanceFromEnemyBases; // offset=35
    UBYTE distanceBetweenBases; // offset=36
    ULONG timeInBase; // offset=37
    UBYTE changingBase; // offset=41
    UWORD baseChangeThreshold; // offset=42
    UBYTE minResolve; // offset=44
    UBYTE criticalStrength; // offset=45
    UBYTE maxProbeSteps; // offset=46
    UBYTE buildStyle; // offset=47
    UBYTE favBuildingToAttack; // offset=48
    UBYTE favSpecToAttack; // offset=49
    UBYTE delayBetweenAttacks; // offset=50
    UBYTE padding; // offset=51
    UBYTE defence; // offset=52
    UBYTE criticalNumTrees; // offset=53
    SBYTE techLevel; // offset=54
    SBYTE preferredCreatures[4]; // offset=55
    SLONG minGoopForCreatures; // offset=60
    UWORD maxAgeForBaseScan; // offset=64
    SBYTE creaturePercentage; // offset=66
    UBYTE creatureRatios[2]; // offset=67
    UBYTE creaturePerception; // offset=70
    UBYTE newBaseScoreRange; // offset=71
    UBYTE newBaseLookPoints; // offset=72
    UBYTE attackVolume; // offset=73
    UBYTE wantedSpecTypes[3]; // offset=74
    UBYTE attackAfterTurn; // offset=78
    UBYTE creaturesPerGuardPoint; // offset=79
    UWORD delayBetweenCreatures; // offset=80
    UWORD maxCreatures; // offset=82
    SBYTE goForScore; // offset=84
    UBYTE delayBetweenBuildings; // offset=85
    Trigger triggers[7]; // offset=86
};

typedef class Personality Personality;

class Computer { // sizeof=190
    class Computer * operator=(class Computer *arg1);
    class Computer * Computer(class Computer *arg1);
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
    SBYTE AssignGuardPointToBase(UBYTE arg1, XY arg2, UBYTE arg3, SBYTE arg4);
    BBOOL ReadyToBuildNewBuilding();
    BBOOL ReadyToMakeNewCreature();
    SLONG CreaturesDoingJob(UBYTE arg1, UBYTE arg2, BBOOL arg3);
    BBOOL ConsiderAttackConquest();
    ULONG CreatureScore(UBYTE arg1, UBYTE arg2);
    BBOOL CreateBestCreature(UBYTE arg1, Building *arg2);
    void CreateCreatures();
    void NewMonolith(Effect *arg1);
    void RegisterMonolith(Effect *arg1);
    void RegisterDeath(Creature *arg1);
    void RegisterBirth(Creature *arg1, Creature *arg2, Creature *arg3);
    void RegisterFreeCreature(Creature *arg1);
    void RegisterFreeCreature(Creature *arg1, Building *arg2);
    void ShuffleCreatures();
    BBOOL CreatureWork(Creature *arg1, XY arg2);
    void UpdateCreatures();
    PlSpec * BestShootingTarget(XY *arg1, ULONG arg2);
    PlSpec * SpecNeedingHealing();
    Thing * CreatureToStudy();
    BBOOL BestPlaceToHarvest(PlSpec *arg1, XY arg2);
    void UpdateSpecialists();
    void UpdateSpecTypes();
    void GoAroundShield(PlSpec *arg1, XY arg2, Building *arg3);
    void RunAway(PlSpec *arg1, Thing *arg2);
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
    BBOOL IsEnemy(Thing *arg1);
    void DoStoredPacket(PlSpec *arg1);
    void StorePacket(PlSpec *arg1, Packet *arg2);
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
    void PA_ScientistStudy(PlSpec *arg1, Thing *arg2, BBOOL arg3);
    void PA_ShepherdDoStuff(PlSpec *arg1, XY arg2, HerdMode arg3, BBOOL arg4);
    void PA_CowboyKill(PlSpec *arg1, MovingThing *arg2, BBOOL arg3);
    void PA_FarmerCollect(PlSpec *arg1, XY arg2, BBOOL arg3);
    void PA_FarmerPlant(PlSpec *arg1, XY arg2, UBYTE arg3, BBOOL arg4);
    void PA_BuilderBuild(PlSpec *arg1, XY arg2, UBYTE arg3, UBYTE arg4, BBOOL arg5);
    void DoInitialCreatureActions();
    void DoInitialActions();
    void DoSetupComputerPlayer();
    class Computer * Computer();
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

class BuildPriority { // sizeof=9
    class BuildPriority * BuildPriority(class BuildPriority *arg1);
    BestBuilding FindBestLoc(UBYTE arg1, UBYTE arg2);
    UBYTE Build(PlSpec *arg1, UBYTE arg2, UBYTE arg3);
    UBYTE BuildingPersonality(PlSpec *arg1, SBYTE arg2);
    UBYTE Basic(PlSpec *arg1);
    UBYTE Emergency(PlSpec *arg1);
    UBYTE BuildHighestPri(PlSpec *arg1);
    class BuildPriority * BuildPriority();
    Computer *computer; // offset=0
    UBYTE type; // offset=4
    UBYTE idx; // offset=5
    UWORD powerNeeded; // offset=6
    BBOOL newBaseThisTurn; // offset=8
};

class BestBuilding { // sizeof=5
    class BestBuilding * BestBuilding(class BestBuilding *arg1);
    XY loc; // offset=0
    UBYTE type; // offset=4
};

typedef class BestBuilding BestBuilding;

class CreatureInfo { // sizeof=2
    class CreatureInfo * CreatureInfo(class CreatureInfo *arg1);
    void Invalidate();
    class CreatureInfo * CreatureInfo();
    uint8_t baseNo; // offset=0
    SBYTE guardPoint; // offset=1
    uint8_t space; // offset=2
    uint8_t movingToPoint; // offset=3
    uint8_t job; // offset=4
};

class CloseTgt { // sizeof=4
    BBOOL Valid();
    SWORD idx; // offset=0
    SWORD range; // offset=2
};

class PolarRangeScan : RangeScan { // sizeof=51
    class PolarRangeScan * PolarRangeScan(class PolarRangeScan *arg1);
    void displayDebug(XY arg1, ULONG *arg2);
    void PerGrid();
    void Do();
    class PolarRangeScan * PolarRangeScan(XY arg1, ULONG arg2, UBYTE arg3);
    void (**__vfptr)();
    ULONG ringRange;
    BBOOL satisfied;
    UBYTE foundationSize;
    ULONG tileRange;
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
};

class PolarSliceScan : RangeScan { // sizeof=48
    class PolarSliceScan * PolarSliceScan(class PolarSliceScan *arg1);
    void displayDebug(XY arg1, UBYTE arg2, ULONG *arg3);
    void PerGrid();
    void Do();
    class PolarSliceScan * PolarSliceScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    BBOOL satisfied;
    UBYTE foundationSize;
    ULONG tileRange;
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    UBYTE slices;
    BBOOL foundAThing; // offset=20
};

class PolarEverythingScan : RangeScan { // sizeof=47
    class PolarEverythingScan * PolarEverythingScan(class PolarEverythingScan *arg1);
    void displayDebug(XY arg1, UBYTE arg2, ULONG *arg3);
    void PerGrid();
    void Do();
    BBOOL Scan(UBYTE arg1);
    class PolarEverythingScan * PolarEverythingScan(XY arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6);
    void (**__vfptr)();
    BBOOL fromCenter;
    BBOOL satisfied;
    UBYTE foundationSize;
    UBYTE innerTileRange;
    UBYTE tileRange;
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    UBYTE slices;
    BBOOL foundAThing; // offset=20
};

class TimeSliceScan : RangeScan { // sizeof=47
    class TimeSliceScan * TimeSliceScan(class TimeSliceScan *arg1);
    void PerGrid();
    BBOOL Do();
    class TimeSliceScan * TimeSliceScan(BaseScan arg1, XY arg2, ULONG arg3);
    void (**__vfptr)();
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BaseScan bs;
    BBOOL middle; // offset=20
    UWORD tileNo; // offset=21
};

class FindHighestBuildingSite : RangeScanner { // sizeof=59
    class FindHighestBuildingSite * FindHighestBuildingSite(class FindHighestBuildingSite *arg1);
    BBOOL FoundASite();
    void PerGrid();
    class FindHighestBuildingSite * FindHighestBuildingSite(XY arg1, ULONG arg2, UBYTE arg3);
    void (**__vfptr)();
    UBYTE foundationSize;
    SLONG highestPoint;
    XY bestPos; // offset=41
    UWORD errors[3]; // offset=45
    UBYTE error_type; // offset=53
};

class TestSlice : PolarSliceScan { // sizeof=65
    class TestSlice * TestSlice(class TestSlice *arg1);
    void PerGrid();
    class TestSlice * TestSlice(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    SLONG lowestPoint;
    XY bestPos; // offset=48
    UWORD errors[3]; // offset=52
    UBYTE error_type; // offset=60
};

class TestEverything : PolarEverythingScan { // sizeof=60
    class TestEverything * TestEverything(class TestEverything *arg1);
    void PerGrid();
    class TestEverything * TestEverything(XY arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5, BBOOL arg6);
    void (**__vfptr)();
    XY bestPos; // offset=47
    UWORD errors[3]; // offset=51
    UBYTE error_type; // offset=59
};

class ChopTreeScan : RangeScanner { // sizeof=41
    class ChopTreeScan * ChopTreeScan(class ChopTreeScan *arg1);
    void PerGrid();
    class ChopTreeScan * ChopTreeScan(XY arg1, ULONG arg2);
    void (**__vfptr)();
};

class BestForestScan : PolarRangeScan { // sizeof=62
    class BestForestScan * BestForestScan(class BestForestScan *arg1);
    void PerGrid();
    class BestForestScan * BestForestScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5);
    void (**__vfptr)();
    SLONG bestValue;
    UBYTE forestType;
    UBYTE player;
    UBYTE foundationSize;
    XY bestPos; // offset=51
};

class MineralScan : RangeScanner { // sizeof=45
    class MineralScan * MineralScan(class MineralScan *arg1);
    void PerGrid();
    class MineralScan * MineralScan(XY arg1, ULONG arg2);
    void (**__vfptr)();
    ULONG minerals; // offset=41
};

class MineScan : RangeScanner { // sizeof=50
    class MineScan * MineScan(class MineScan *arg1);
    void PerGrid();
    class MineScan * MineScan(XY arg1, ULONG arg2, UBYTE arg3);
    void (**__vfptr)();
    UBYTE mineFoundationSize;
    ULONG mostMinerals;
    XY bestPos; // offset=41
};

class PowerScan : PolarRangeScan { // sizeof=59
    class PowerScan * PowerScan(class PowerScan *arg1);
    void PerGrid();
    class PowerScan * PowerScan(XY arg1, ULONG arg2, UBYTE arg3);
    void (**__vfptr)();
    UBYTE player;
    UBYTE foundationSize;
    UBYTE mostPower;
    XY bestPos; // offset=51
    UBYTE bestType; // offset=55
};

class NearestBuildingSite : PolarEverythingScan { // sizeof=53
    class NearestBuildingSite * NearestBuildingSite(class NearestBuildingSite *arg1);
    void PerGrid();
    class NearestBuildingSite * NearestBuildingSite(XY arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5);
    void (**__vfptr)();
    UBYTE foundationSize;
    XY bestPos; // offset=47
    UBYTE type; // offset=51
};

class OldPowerTally : PolarRangeScan { // sizeof=57
    class OldPowerTally * OldPowerTally(class OldPowerTally *arg1);
    class OldPowerTally * OldPowerTally(XY arg1, ULONG arg2, UBYTE arg3);
    void PerGrid();
    void (**__vfptr)();
    UBYTE player;
    UBYTE satisfiedBuildings; // offset=51
    ULONG landTiles; // offset=52
};

class NewPowerTally : RangeScanner { // sizeof=49
    class NewPowerTally * NewPowerTally(class NewPowerTally *arg1);
    class NewPowerTally * NewPowerTally(XY arg1, ULONG arg2);
    void PerGrid();
    void (**__vfptr)();
    ULONG landTiles; // offset=41
    ULONG tiles; // offset=45
};

class SatisfyBuildings : PolarRangeScan { // sizeof=64
    class SatisfyBuildings * SatisfyBuildings(class SatisfyBuildings *arg1);
    class SatisfyBuildings * SatisfyBuildings(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5);
    void PerGrid();
    void Do();
    void (**__vfptr)();
    UBYTE player;
    ULONG maxLandTiles;
    UBYTE buildingsSatisfied;
    UBYTE buildingsToSatisfy;
    UBYTE foundationSize;
    XY bestPos; // offset=51
    UBYTE stage; // offset=55
};

class PointSample { // sizeof=27
    class PointSample * PointSample(class PointSample *arg1);
    void PerGrid();
    class PointSample * PointSample(XY arg1, ULONG arg2, UBYTE arg3);
    class PointSample * PointSample(XY arg1, ULONG arg2, UWORD arg3);
    class PointSample * PointSample(XY arg1, ULONG arg2, ULONG arg3);
    void Do();
    void (**__vfptr)();
    GridTile *g;
    ULONG squareRange;
    ULONG range;
    XY tgt;
    XY center;
    UWORD sectorSize;
    BBOOL foundAThing; // offset=0
};

class BestForestSample : PointSample { // sizeof=38
    class BestForestSample * BestForestSample(class BestForestSample *arg1);
    void PerGrid();
    class BestForestSample * BestForestSample(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4, ULONG arg5);
    void (**__vfptr)();
    SLONG bestValue;
    UBYTE forestType;
    UBYTE player;
    XY bestPos; // offset=27
    UBYTE bestPlant; // offset=31
};

class SoundConfig { // sizeof=10
    void Set();
    void Write(char *arg1);
    void Read(char *arg1);
    SLONG sfxVolume; // offset=0
    SLONG musicVolume; // offset=4
    BBOOL sfxOn; // offset=8
    BBOOL musicOn; // offset=9
};

typedef class SoundConfig SoundConfig;

class Config { // sizeof=184
    void CDToSegment(ConfigInstall arg1);
    BBOOL IsCurrentDriveInstallDrive();
    BBOOL IsCurrentDriveCDROM();
    void SetToInstallDrive();
    void SetToCDROM();
    char * InstalledFile(char *arg1);
    char * InsertInstallDir(char *arg1);
    BBOOL GetConfigs();
    char cdROMDir[31];
    BBOOL installedSegments[4];
    char installDir[127];
    unsigned int installDriveNum;
    unsigned int cdDriveNum;
    ConfigLanguage language; // offset=0
    SoundConfig sound; // offset=1
};

class FindLowestBuildingSite : PolarEverythingScan { // sizeof=64
    class FindLowestBuildingSite * FindLowestBuildingSite(class FindLowestBuildingSite *arg1);
    void PerGrid();
    class FindLowestBuildingSite * FindLowestBuildingSite(XY arg1, ULONG arg2, UBYTE arg3);
    void (**__vfptr)();
    SLONG lowestPoint;
    XY bestPos; // offset=47
    UWORD errors[3]; // offset=51
    UBYTE error_type; // offset=59
};

class BaseAwarenessScan : TimeSliceScan { // sizeof=64
    class BaseAwarenessScan * BaseAwarenessScan(class BaseAwarenessScan *arg1);
    UBYTE PointInSector(XY arg1, XY arg2);
    void PerGrid();
    class BaseAwarenessScan * BaseAwarenessScan(BaseScan arg1, XY arg2, ULONG arg3, UBYTE arg4);
    void (**__vfptr)();
    UBYTE baseNo; // offset=47
    BaseAwareness *aware; // offset=48
    Player *player; // offset=52
    Computer *comp; // offset=56
    XY center; // offset=60
};

class ForestScan : RangeScanner { // sizeof=109
    class ForestScan * ForestScan(class ForestScan *arg1);
    void PerGrid();
    class ForestScan * ForestScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    SBYTE plantGrowth[11];
    SLONG forestValue[11];
    UBYTE player;
    UBYTE forestType;
    UBYTE foundationSize;
    SLONG bestValue; // offset=41
    UBYTE bestType; // offset=45
};

typedef class ForestScan ForestScan;

class HarvestScan : PolarRangeScan { // sizeof=58
    class HarvestScan * HarvestScan(class HarvestScan *arg1);
    void PerGrid();
    class HarvestScan * HarvestScan(XY arg1, ULONG arg2);
    void (**__vfptr)();
    SWORD maxHealth;
    UBYTE numOfTrees;
    XY bestPos; // offset=51
};

typedef class MineralScan MineralScan;

class NearestPoweredBuildingSite : PolarRangeScan { // sizeof=60
    class NearestPoweredBuildingSite * NearestPoweredBuildingSite(class NearestPoweredBuildingSite *arg1);
    void PerGrid();
    class NearestPoweredBuildingSite * NearestPoweredBuildingSite(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    UBYTE foundationSize;
    XY bestPos; // offset=51
    TheBase *b; // offset=55
};

class NearestLand : PolarRangeScan { // sizeof=55
    class NearestLand * NearestLand(class NearestLand *arg1);
    void PerGrid();
    class NearestLand * NearestLand(XY arg1, ULONG arg2);
    void (**__vfptr)();
    XY bestPos; // offset=51
};

class PowerStationScan : PolarRangeScan { // sizeof=64
    class PowerStationScan * PowerStationScan(class PowerStationScan *arg1);
    void PerGrid();
    class PowerStationScan * PowerStationScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    UBYTE idx;
    ULONG threshold;
    ULONG maxLandTiles;
    XY bestPos; // offset=51
};

typedef class NewPowerTally NewPowerTally;

typedef class OldPowerTally OldPowerTally;

class SiteScore : RangeScanner { // sizeof=45
    class SiteScore * SiteScore(class SiteScore *arg1);
    void PerGrid();
    class SiteScore * SiteScore(XY arg1, ULONG arg2);
    void (**__vfptr)();
    ULONG score; // offset=41
};

class NewBaseScan : PointSample { // sizeof=40
    class NewBaseScan * NewBaseScan(class NewBaseScan *arg1);
    void PerGrid();
    class NewBaseScan * NewBaseScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    UBYTE player;
    XY origin;
    ULONG bestScore; // offset=27
    XY bestLoc; // offset=31
};

typedef class SiteScore SiteScore;

class PlantScan : RangeScanner { // sizeof=108
    class PlantScan * PlantScan(class PlantScan *arg1);
    void PerGrid();
    class PlantScan * PlantScan(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    SBYTE plantGrowth[11];
    SLONG forestValue[11];
    UBYTE player;
    UBYTE forestType;
    SLONG bestValue; // offset=41
    UBYTE bestType; // offset=45
};

typedef class PlantScan PlantScan;

class ClosestTree : PolarRangeScan { // sizeof=63
    class ClosestTree * ClosestTree(class ClosestTree *arg1);
    void PerGrid();
    class ClosestTree * ClosestTree(XY arg1, ULONG arg2);
    void (**__vfptr)();
    Thing *closestPlant; // offset=51
    ULONG closestDistance; // offset=55
    XY loc; // offset=59
};

class ClosestDeadCreature : PolarRangeScan { // sizeof=63
    class ClosestDeadCreature * ClosestDeadCreature(class ClosestDeadCreature *arg1);
    void PerGrid();
    class ClosestDeadCreature * ClosestDeadCreature(XY arg1, ULONG arg2);
    void (**__vfptr)();
    Thing *closestDeadCreature; // offset=51
    ULONG closestDistance; // offset=55
    XY loc; // offset=59
};

class ClosestEnemy : PolarRangeScan { // sizeof=64
    class ClosestEnemy * ClosestEnemy(class ClosestEnemy *arg1);
    void PerGrid();
    class ClosestEnemy * ClosestEnemy(XY arg1, ULONG arg2, UBYTE arg3);
    void (**__vfptr)();
    Thing *closestEnemy; // offset=51
    ULONG closestDistance; // offset=55
    XY loc; // offset=59
    UBYTE player; // offset=63
};

class CountTrees : RangeScanner { // sizeof=45
    class CountTrees * CountTrees(class CountTrees *arg1);
    void PerGrid();
    class CountTrees * CountTrees(XY arg1, ULONG arg2);
    void (**__vfptr)();
    SLONG trees; // offset=41
};

class GuardPointImportance : RangeScanner { // sizeof=43
    class GuardPointImportance * GuardPointImportance(class GuardPointImportance *arg1);
    void PerGrid();
    class GuardPointImportance * GuardPointImportance(XY arg1, ULONG arg2);
    void (**__vfptr)();
    SWORD importance; // offset=41
};

typedef class CloseTgt CloseTgt;

class ClosestTargets : PolarRangeScan { // sizeof=132
    class ClosestTargets * ClosestTargets(class ClosestTargets *arg1);
    void PerGrid();
    class ClosestTargets * ClosestTargets(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4);
    void (**__vfptr)();
    CloseTgt clTgts[2][5]; // offset=51
    SBYTE currentTgt[2]; // offset=123
    XY loc; // offset=126
    UBYTE player; // offset=130
    BBOOL defend; // offset=131
};

class Probe : SmartMovingThing { // sizeof=235
    class Probe * operator=(class Probe *arg1);
    class Probe * Probe(class Probe *arg1);
    UBYTE Update();
    void Resync();
    BBOOL IsDead();
    class Probe * Probe();
    void (**__vfptr)();
    Computer *computer; // offset=85
    UBYTE idx; // offset=89
    UBYTE points; // offset=90
    XY path[99]; // offset=91
};

typedef class NearestBuildingSite NearestBuildingSite;

typedef class BuildPriority BuildPriority;

typedef class CreatureInfo CreatureInfo;

typedef class ClosestDeadCreature ClosestDeadCreature;

typedef class ClosestTree ClosestTree;

typedef class BaseAwarenessScan BaseAwarenessScan;

typedef class NearestLand NearestLand;

typedef class BestForestSample BestForestSample;

typedef struct MyGadget MyGadget;

class IFCComputer : IFCBase { // sizeof=55
    class IFCComputer * IFCComputer(class IFCComputer *arg1);
    class IFCComputer * IFCComputer(MyGadget *arg1);
    BBOOL BuildingAllowed(UBYTE arg1, UBYTE arg2);
    SBYTE FirstFreeGuardPoint(UBYTE arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    IFCBase *saveIFC; // offset=11
    MyGadget *gad; // offset=15
    MyAnimBank *anb; // offset=19
    MySprite *spr; // offset=23
    TbSprite *sprites; // offset=27
    XY mapMouseScroll; // offset=31
    Stuff stuff; // offset=35
    BBOOL drawPowerRange; // offset=43
    BBOOL drawCenters; // offset=44
    BBOOL drawBuildingDebug; // offset=45
    BBOOL drawLocation; // offset=46
    UBYTE slices; // offset=47
    BBOOL draw; // offset=48
    BBOOL fromCenter; // offset=49
    BBOOL drawBuildInfo; // offset=50
    BBOOL pressedKeyLastTurn; // offset=51
    BBOOL creatureDebugStuff; // offset=52
    UBYTE cPlayer; // offset=53
    UBYTE gPointType; // offset=54
};

typedef class ChopTreeScan ChopTreeScan;

typedef class FindHighestBuildingSite FindHighestBuildingSite;

typedef class MineScan MineScan;

typedef class TestSlice TestSlice;

typedef class TestEverything TestEverything;

typedef class NewBaseScan NewBaseScan;

typedef class SatisfyBuildings SatisfyBuildings;

typedef class PowerStationScan PowerStationScan;

typedef class PowerScan PowerScan;

typedef class NearestPoweredBuildingSite NearestPoweredBuildingSite;

typedef class BestForestScan BestForestScan;

typedef class ClosestTargets ClosestTargets;

class BestScore { // sizeof=8
    SLONG score; // offset=0
    SLONG type; // offset=4
};

typedef class BestScore BestScore;

typedef class CountTrees CountTrees;

typedef class GuardPointImportance GuardPointImportance;

void Packet::SetPacket( char unsigned, short );
void Packet::SetPacket( char unsigned, short, short );
void Packet::SetPacket( char unsigned, short, short, short, short );
void Packet::SetPacket( char unsigned, short, short, short, short, short );
char unsigned SmartMovingThing::IsAvoidActive();
char unsigned Gene::IsBasicInGene( CreatureBaseSpecies );
char unsigned Creature::__defarg();
void Creature::SetMemory( XY );
char unsigned Creature::IsHungry();
char unsigned Creature::IsScrapping();
char unsigned Creature::CanChopTrees( Gene & );
void Creature::SetTurf( XY );
char unsigned Building::IsUpgradeOK();
char unsigned Building::IsBeingUpgraded();
char unsigned Building::IsBeingWrecked();
char unsigned Building::CanMakeSpeciesInGenelab( CreatureSpecies );
char unsigned Building::IsMineMinedOut();
char unsigned PlSpec::IsBusyDoingSomething();
near CompDebug::CompDebug();
near BuildPriority::BuildPriority();
void CreatureInfo::Invalidate();
near CompTarget::CompTarget();
char unsigned CloseTgt::Valid();
char signed GuardPoint::__defarg();
char signed GuardPoint::__defarg();
GPointFlags * GuardPoint::__defarg();
char unsigned Computer::__defarg();
char unsigned Computer::__defarg();
char unsigned Computer::__defarg();
char unsigned Computer::__defarg();
char unsigned Computer::__defarg();
char unsigned Computer::__defarg();
char signed Computer::__defarg();
char unsigned Computer::__defarg();
char unsigned Computer::IsEnemy( Thing * );
char unsigned Computer::CurrentBase();
near PolarRangeScan::PolarRangeScan( XY &, long unsigned, char unsigned );
near PolarSliceScan::PolarSliceScan( XY &, long unsigned, char unsigned, char unsigned );
near PolarEverythingScan::PolarEverythingScan( XY &, long unsigned, long unsigned, char unsigned, char unsigned, char unsigned );
near TimeSliceScan::TimeSliceScan( BaseScan &, XY, long unsigned );
near FindHighestBuildingSite::FindHighestBuildingSite( XY, long unsigned, char unsigned );
near TestSlice::TestSlice( XY, long unsigned, char unsigned, char unsigned );
void TestSlice::PerGrid();
near TestEverything::TestEverything( XY, long unsigned, long unsigned, char unsigned, char unsigned, char unsigned );
void TestEverything::PerGrid();
near ChopTreeScan::ChopTreeScan( XY, long unsigned );
near BestForestScan::BestForestScan( XY, long unsigned, char unsigned, char unsigned, char unsigned );
near MineralScan::MineralScan( XY, long unsigned );
near MineScan::MineScan( XY, long unsigned, char unsigned );
near PowerScan::PowerScan( XY, long unsigned, char unsigned );
char unsigned NearestBuildingSite::__defarg();
near NearestBuildingSite::NearestBuildingSite( XY, long unsigned, long unsigned, char unsigned, char unsigned );
near OldPowerTally::OldPowerTally( XY, long unsigned, char unsigned );
near NewPowerTally::NewPowerTally( XY, long unsigned );
near SatisfyBuildings::SatisfyBuildings( XY, long unsigned, char unsigned, char unsigned, char unsigned );
near PointSample::PointSample( XY, long unsigned, long unsigned );
near PointSample::PointSample( XY, long unsigned, char unsigned );
near BestForestSample::BestForestSample( XY, long unsigned, char unsigned, char unsigned, long unsigned );
char unsigned Building::IsUpgradable();
Creature * Building::GeneLabMadeCreature( char unsigned & );
char unsigned Creature::IsSpecial();
PSpecies const & Plant::Species();
EtherealZone * GuardPoint::EZone();
Computer * GuardPoint::Comp();
void PolarRangeScan::Do();
void PolarRangeScan::displayDebug( XY, long unsigned & );
void PolarSliceScan::displayDebug( XY, char unsigned, long unsigned & );
void PolarEverythingScan::displayDebug( XY, char unsigned, long unsigned & );
char unsigned PolarEverythingScan::Scan( char unsigned );
near BaseAwarenessScan::BaseAwarenessScan( BaseScan &, XY, long unsigned, char unsigned );
char unsigned BaseAwarenessScan::PointInSector( XY, XY );
void PolarSliceScan::Do();
void PolarEverythingScan::Do();
char unsigned TimeSliceScan::Do();
void FindHighestBuildingSite::PerGrid();
void FindLowestBuildingSite::PerGrid();
void ChopTreeScan::PerGrid();
void BaseAwarenessScan::PerGrid();
void BaseAwareness::Reset();
void BaseScan::Reset();
void ForestScan::PerGrid();
near ForestScan::ForestScan( XY, long unsigned, char unsigned, char unsigned );
void BestForestScan::PerGrid();
near NearestPoweredBuildingSite::NearestPoweredBuildingSite( XY, long unsigned, char unsigned, char unsigned );
near NearestLand::NearestLand( XY, long unsigned );
void HarvestScan::PerGrid();
void MineralScan::PerGrid();
void MineScan::PerGrid();
void PowerScan::PerGrid();
void NearestBuildingSite::PerGrid();
void NearestPoweredBuildingSite::PerGrid();
void NearestLand::PerGrid();
void OldPowerTally::PerGrid();
void NewPowerTally::PerGrid();
near PowerStationScan::PowerStationScan( XY, long unsigned, char unsigned, char unsigned );
void PowerStationScan::PerGrid();
void SatisfyBuildings::Do();
near SiteScore::SiteScore( XY, long unsigned );
near NewBaseScan::NewBaseScan( XY, long unsigned, char unsigned, char unsigned );
void SatisfyBuildings::PerGrid();
void PointSample::Do();
void SiteScore::PerGrid();
void NewBaseScan::PerGrid();
void PlantScan::PerGrid();
near PlantScan::PlantScan( XY, long unsigned, char unsigned, char unsigned );
near ClosestTree::ClosestTree( XY &, long unsigned );
near ClosestDeadCreature::ClosestDeadCreature( XY, long unsigned );
near CountTrees::CountTrees( XY, long unsigned );
near GuardPointImportance::GuardPointImportance( XY, long unsigned );
near ClosestTargets::ClosestTargets( XY, long unsigned, char unsigned, char unsigned );
void BestForestSample::PerGrid();
void ClosestTree::PerGrid();
void ClosestDeadCreature::PerGrid();
void ClosestEnemy::PerGrid();
void CountTrees::PerGrid();
void GuardPointImportance::PerGrid();
void Computer::PA_BuilderBuild( PlSpec *, XY, char unsigned, char unsigned, char unsigned );
void Computer::PA_FarmerPlant( PlSpec *, XY, char unsigned, char unsigned );
void Computer::PA_FarmerCollect( PlSpec *, XY, char unsigned );
void Computer::PA_CowboyKill( PlSpec *, MovingThing *, char unsigned );
void Computer::PA_ShepherdDoStuff( PlSpec *, XY, HerdMode, char unsigned );
void Computer::PA_ScientistStudy( PlSpec *, Thing *, char unsigned );
void Computer::PA_Cheat( char unsigned );
char unsigned Computer::PA_UpgradeBuilding( Building *, PlSpec * );
char unsigned Computer::PA_FixBuilding( Building *, PlSpec * );
void Computer::PA_WreckBuilding( Building *, PlSpec * );
void Computer::PA_AddTeamMember( short );
void Computer::PA_AbortAction( PlSpec *, char unsigned );
void Computer::PA_Landing( long );
void Computer::PA_LaunchSpecialist( PlSpec *, Building * );
void Computer::PA_MoveTo( XY *, PlSpec *, char unsigned );
void Computer::PA_MoveCreatureTo( XY *, short unsigned );
void Computer::PA_AbortAll( PlSpec * );
void Computer::PA_ActivateBuilding( Building * );
void Computer::PA_DisactivateBuilding( Building * );
void Computer::PA_CreateACreature( char unsigned, short, char unsigned );
void Computer::StorePacket( PlSpec *, Packet * );
void Computer::DoStoredPacket( PlSpec * );
short unsigned Computer::PowerOutput( char unsigned );
short unsigned Computer::PowerNeeded( char unsigned );
char unsigned Computer::NumOfBuildings( char unsigned, char unsigned );
long unsigned Computer::WorkNeeded( char unsigned );
XY Computer::CenterOfBase( char unsigned, char unsigned );
Building * Computer::GetBuilding( char unsigned, char unsigned );
void Computer::CheckBuildings();
void Computer::NewCurrentBase( char unsigned );
void Computer::ConsiderBaseChange();
char signed Computer::ClosestBase( XY );
XY Computer::PointOnLine( XY, XY, short unsigned );
long unsigned Computer::BaseScore( char unsigned );
char unsigned Computer::NextBase( char unsigned );
void ClosestTargets::PerGrid();
char unsigned Probe::Update();
void Computer::SlapDownBuilding( Building * );
void Computer::EtherealsArriving();
void Computer::EtherealsGone();
void Computer::MakeTeam( long );
char unsigned Computer::AddBestSpec( char unsigned );
void Computer::MoveToNextWaypoint( PlSpec * );
void Computer::RunAway( PlSpec *, Thing * );
void Computer::GoAroundShield( PlSpec *, XY, Building * );
Thing * Computer::CreatureToStudy();
char unsigned Computer::CreatureWork( Creature *, XY );
void Computer::UpdateSpecTypes();
void Computer::UpdateSpecialists();
char unsigned Computer::BestPlaceToHarvest( PlSpec *, XY & );
void Computer::UpdateCreatures();
void Computer::ShuffleCreatures();
void Computer::RegisterFreeCreature( Creature &, Building & );
void Computer::RegisterFreeCreature( Creature & );
void Computer::RegisterBirth( Creature *, Creature *, Creature * );
void Computer::RegisterDeath( Creature & );
void Computer::RegisterMonolith( Effect & );
void Computer::NewMonolith( Effect & );
void Computer::CreateCreatures();
char unsigned Computer::CreateBestCreature( char unsigned, Building * );
long Computer::TimeUntilAttack();
char unsigned Computer::ConsiderAttackConquest();
void Computer::AttackHumanPlayer();
void Computer::PlaceAttackPoint( char unsigned );
void Computer::PlaceWorkPoint();
void Computer::UpdateAttackPointLocations();
void Computer::SetAtWarWith( char unsigned );
char unsigned Computer::IsAtWarWith( char unsigned, char unsigned );
void Computer::ClearAtWarWith( char unsigned );
near Computer::Computer();
near Personality::Personality();
near GuardPoint::GuardPoint();
near Trigger::Trigger();
void Computer::DoSetupComputerPlayer();
void Computer::DoInitialActions();
void Computer::DoInitialCreatureActions();
short Computer::NumOfCreatures( char unsigned, char unsigned );
char unsigned IFCComputer::BuildingAllowed( char unsigned, char unsigned );
void Computer::Update();
void IFCComputer::PlugIn();
void IFCComputer::PullOut();
void IFCComputer::Update();
void IFCComputer::Draw();
char signed IFCComputer::FirstFreeGuardPoint( char unsigned );
char unsigned BuildPriority::Build( PlSpec *, char unsigned, char unsigned );
char unsigned BuildPriority::BuildHighestPri( PlSpec * );
char unsigned BuildPriority::Emergency( PlSpec * );
char unsigned BuildPriority::Basic( PlSpec * );
char unsigned BuildPriority::BuildingPersonality( PlSpec *, char signed );
BestBuilding BuildPriority::FindBestLoc( char unsigned, char unsigned );
char signed Computer::AssignGuardPointToBase( char unsigned, XY &, char unsigned, char signed );
void Computer::UpdateAllGuardPoints();
void Computer::LaunchWave( char unsigned );
char unsigned Computer::AssignCreatureToGuardPoint( short, char signed );
void Computer::CheckEZones();
char unsigned GuardPoint::Valid();
void GuardPoint::Invalidate();
void GuardPoint::Update();
char unsigned GuardPoint::ScanForTargets( char signed );
char unsigned GuardPoint::TargetsHere();
char unsigned GuardPoint::BestTargetType( char unsigned, char signed );
char unsigned GuardPoint::IsCreatureRightType( Creature & );
void GuardPoint::DropDeadTargets();
void GuardPoint::DropTargetsOutsideRange();
void GuardPoint::DropCloakedTargets();
char unsigned GuardPoint::IsTarget( short, TgtType );
char unsigned GuardPoint::IsHere( short );
long GuardPoint::ChooseTarget( TgtType * );
char unsigned GuardPoint::HungryCreaturesHere( char unsigned );
long GuardPoint::TreesHere();
void GuardPoint::SetupPoint( XY &, char unsigned, char unsigned, char signed, GPointFlags * );
char unsigned CompTarget::Valid();
void CompTarget::Invalidate();
void GuardPoint::ShutDownPoint();
void GuardPoint::AddCreature( short );
void GuardPoint::RemoveCreature( short );
void GuardPoint::MovePoint( XY );
short GuardPoint::FindImportance();
char unsigned Trigger::Valid();
void CompTarget::NewTarget( short, TgtType );
void CompTarget::AssignCreatureToThis( short );
void Computer::UpdateAllTriggers();
char unsigned Trigger::Update( char unsigned );
near GPointFlags::GPointFlags();
char unsigned Computer::ReadyToMakeNewCreature();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern char * stuffCreatures[];
extern char * stuffBuildings[];
extern char * gPTypes[];
extern void (near * const __vftbl[])();
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
char unsigned Computer::ReadyToBuildNewBuilding();
void GPointFlags::operator =( GPointFlags * );
long Computer::CreaturesDoingJob( char unsigned, char unsigned, char unsigned );
extern char unsigned const __typesig[];

#endif // BIO_COMPUTER_HPP_
/******************************************************************************/
