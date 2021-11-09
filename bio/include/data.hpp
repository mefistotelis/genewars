/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file data.hpp
 *     Header file for data.cpp.
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
#ifndef BIO_DATA_HPP_
#define BIO_DATA_HPP_

enum LevelDrawPhase { // type=int8_t
    LDP_FADEUP = 0,
    LDP_LINES,
    LDP_SYSTEM,
    LDP_EXPANDBOX,
    LDP_EXPANDBOXLINES,
    LDP_TARGETACQUIRE, // 5
    LDP_TARGETLOCK,
    LDP_EXPANDPLANET,
    LDP_ZOOMIN,
    LDP_ORBIT,
};

typedef enum LevelDrawPhase LevelDrawPhase;

enum InfoRequesterStyle { // type=int8_t
    IFRQ_NORMAL = 0,
    IFRQ_BRIEFING,
};

typedef enum InfoRequesterStyle InfoRequesterStyle;

class TextEntry { // sizeof=73
    class TextEntry * TextEntry(class TextEntry *arg1);
    BBOOL ValidChar(UBYTE arg1);
    class TextEntry * TextEntry();
    BBOOL PressedEscape();
    BBOOL PressedReturn();
    BBOOL IsEnteringText();
    BBOOL IsActive();
    UBYTE EnterText();
    void SetupText(CBYTE *arg1, UBYTE arg2, UBYTE arg3);
    CBYTE oldText[64];
    BBOOL alNum;
    TextEntryStatus status;
    UBYTE maxlen;
    UBYTE ucase;
    CBYTE *text;
};

typedef class TextEntry TextEntry;

class CreatureInfo { // sizeof=2
    void * ~CreatureInfo();
    class CreatureInfo * CreatureInfo(class CreatureInfo *arg1);
    void Invalidate();
    class CreatureInfo * CreatureInfo();
    uint8_t baseNo; // offset=0
    SBYTE guardPoint; // offset=1
    uint8_t space; // offset=2
    uint8_t movingToPoint; // offset=3
    uint8_t job; // offset=4
};

typedef class CreatureInfo CreatureInfo;

typedef class XY XY;

typedef class ThingIDX ThingIDX;

typedef class Player Player;






class GameFlags { // sizeof=1
    uint8_t LostLevel; // offset=0
    uint8_t WonLevel; // offset=1
    uint8_t Conquest; // offset=2
    uint8_t MusicOn; // offset=3
    uint8_t SoundOn; // offset=4
    uint8_t GameStart; // offset=5
    uint8_t WorldGenerated; // offset=6
    uint8_t QuitGame; // offset=7
};

typedef class GameFlags GameFlags;

class ControllerInfo { // sizeof=13
    SWORD PointerX; // offset=0
    SWORD PointerY; // offset=2
    SWORD PointerXClicked; // offset=4
    SWORD PointerYClicked; // offset=6
    uint8_t RightReleased; // offset=8
    uint8_t ButtonTwoPressed; // offset=9
    uint8_t ButtonFourHeld; // offset=10
    uint8_t ButtonUpReleased; // offset=11
    uint8_t ButtonDownHeld; // offset=12
    uint8_t ButtonDownReleased; // offset=13
    uint8_t ButtonDownPressed; // offset=14
    uint8_t ButtonUpHeld; // offset=15
    uint8_t ButtonUpPressed; // offset=16
    uint8_t ButtonRightHeld; // offset=17
    uint8_t ButtonRightReleased; // offset=18
    uint8_t ButtonRightPressed; // offset=19
    uint8_t ButtonLeftHeld; // offset=20
    uint8_t ButtonLeftReleased; // offset=21
    uint8_t ButtonLeftPressed; // offset=22
    uint8_t ButtonFourReleased; // offset=23
    uint8_t ButtonFourPressed; // offset=24
    uint8_t ButtonThreeHeld; // offset=25
    uint8_t ButtonThreeReleased; // offset=26
    uint8_t ButtonThreePressed; // offset=27
    uint8_t ButtonTwoHeld; // offset=28
    uint8_t ButtonTwoReleased; // offset=29
    uint8_t ButtonOneHeld; // offset=30
    uint8_t ButtonOneReleased; // offset=31
    uint8_t ButtonOnePressed; // offset=32
    uint8_t RightClicked; // offset=33
    uint8_t MiddleClicked; // offset=34
    uint8_t LeftClicked; // offset=35
    uint8_t RightHeld; // offset=36
    uint8_t RightPressed; // offset=37
    uint8_t MiddleHeld; // offset=38
    uint8_t MiddleReleased; // offset=39
    uint8_t MiddlePressed; // offset=40
    uint8_t LeftHeld; // offset=41
    uint8_t LeftReleased; // offset=42
    uint8_t LeftPressed; // offset=43
};

typedef class ControllerInfo ControllerInfo;

class GameControl { // sizeof=52
    GameFlags Flags; // offset=0
    ControllerInfo Controller; // offset=1
    ULONG Turn; // offset=14
    ULONG RndCount; // offset=18
    ULONG Checksum; // offset=22
    UWORD Seed; // offset=26
    UBYTE NoPlayers; // offset=28
    UBYTE PlayerNo; // offset=29
    UBYTE PlayersReady; // offset=30
    UBYTE pad; // offset=31
    char SessionName[19]; // offset=32
};

typedef class GameControl GameControl;

typedef class Config Config;

class RunTimeGameFlags { // sizeof=2
    uint8_t DebugKeyboard; // offset=0
    uint8_t GameScreenOpen; // offset=1
    uint8_t ScreenShots; // offset=2
    uint8_t NewVersion; // offset=3
    uint8_t HiSoundsActive; // offset=4
    uint8_t TesterAutosave; // offset=5
    uint8_t RecorderActive; // offset=6
    uint8_t AlreadyOutOfSync; // offset=7
    uint8_t OutOfSync; // offset=8
    uint8_t Debug; // offset=9
    uint8_t Tester; // offset=10
    uint8_t Paused; // offset=11
    uint8_t Network; // offset=12
};

typedef class RunTimeGameFlags RunTimeGameFlags;

typedef class ScreenLockHandler ScreenLockHandler;

struct tm { // sizeof=36
    int tm_sec; // offset=0
    int tm_min; // offset=4
    int tm_hour; // offset=8
    int tm_mday; // offset=12
    int tm_mon; // offset=16
    int tm_year; // offset=20
    int tm_wday; // offset=24
    int tm_yday; // offset=28
    int tm_isdst; // offset=32
};

typedef struct tm tm;


class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;


class PlSpecLoader { // sizeof=80
    void Free(PlayerRace arg1, SpecialistClass arg2, MyAnimBank *arg3);
    void Free(PlSpec *arg1);
    MyAnimBank * Load(PlayerRace arg1, SpecialistClass arg2);
    BBOOL Load(PlSpec *arg1);
    MyAnimBank *anbs[3][3];
    SBYTE counters[3][3];
};

typedef class PlSpecLoader PlSpecLoader;

class HelpDraw { // sizeof=26
    void GenericHelpDraw(MyGadget *arg1, char *arg2);
    void Draw(MyGadget *arg1, char *arg2);
    void SetColors(UBYTE arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4);
    void DislodgeAndReset();
    void Dislodge();
    SWORD hx; // offset=0
    SWORD hy; // offset=2
    SWORD hWidth; // offset=4
    SLONG turn; // offset=6
    SLONG length; // offset=10
    ULONG id; // offset=14
    UBYTE pen; // offset=18
    UBYTE outline; // offset=19
    UBYTE fill; // offset=20
    UBYTE boxOutline; // offset=21
    MyGadget *gad; // offset=22
};

typedef class HelpDraw HelpDraw;

class Recording { // sizeof=6
    void Decode();
    void Encode();
    XY mouse; // offset=0
    uint8_t keyDown; // offset=4
    UBYTE key; // offset=5
    uint8_t alt; // offset=6
    uint8_t ctrl; // offset=7
    uint8_t shift; // offset=8
    uint8_t mRight; // offset=9
    uint8_t mLeft; // offset=10
};

typedef class Recording Recording;

typedef class Recorder Recorder;

class InfoRequester { // sizeof=142
    class InfoRequester * InfoRequester(class InfoRequester *arg1);
    void DrawPic(SLONG arg1, SLONG arg2);
    BBOOL Valid();
    void Invalidate();
    void Draw();
    BBOOL Update();
    void Create(char *arg1, char *arg2, char *arg3, SLONG arg4);
    class InfoRequester * InfoRequester();
    uint8_t picActive;
    UBYTE picReveal;
    UBYTE picBuffer[63];
    SLONG textWidth;
    char text[255];
    char title[63];
    TurnPrintInfo textTpi;
    TurnPrintInfo titleTpi;
};

typedef class InfoRequester InfoRequester;

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

class CompDebug { // sizeof=5
    class CompDebug * CompDebug(class CompDebug *arg1);
    class CompDebug * CompDebug();
    ULONG scanRange; // offset=0
    UBYTE location; // offset=4
};

typedef class CompDebug CompDebug;

class Trigger { // sizeof=7
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
    void * ~Computer();
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

struct GEngine { // sizeof=20
    struct GEngine * GEngine(struct GEngine *arg1);
    struct GEngine * GEngine();
    SLONG XStep; // offset=0
    SLONG YStep; // offset=4
    SLONG BaseX; // offset=8
    SLONG BaseY; // offset=12
    SLONG AltScaler; // offset=16
};

typedef struct GEngine GEngine;

struct LanderStuff { // sizeof=5
    XY loc; // offset=0
    UBYTE type; // offset=4
};

typedef struct LanderStuff LanderStuff;

struct RocketShip { // sizeof=187
    XY loc; // offset=0
    XY vel; // offset=4
    SWORD angle; // offset=8
    SWORD angleVel; // offset=10
    SWORD fuel; // offset=12
    SWORD thrust; // offset=14
    UBYTE state; // offset=16
    UBYTE level; // offset=17
    ULONG score; // offset=18
    XY padLoc; // offset=22
    UBYTE padLength; // offset=26
    LanderStuff stuff[31]; // offset=27
};

typedef struct RocketShip RocketShip;

class IFCTitle : IFCBase { // sizeof=232
    class IFCTitle * IFCTitle(class IFCTitle *arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCTitle * IFCTitle(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    SWORD creditPos; // offset=20
    UBYTE *rocketData; // offset=22
    RocketShip rocketShip; // offset=26
};

typedef class IFCTitle IFCTitle;

class LevelHeader { // sizeof=187
    void TranslatePlanet();
    BBOOL LoadHeader(UBYTE arg1, UBYTE arg2);
    BBOOL SaveHeader(UBYTE arg1, UBYTE arg2);
    UBYTE compPlayers[2]; // offset=0
    UBYTE valid; // offset=3
    UBYTE date[11]; // offset=4
    UBYTE time[11]; // offset=16
    ULONG version; // offset=28
    Planet planet; // offset=32
    ULONG roomForMoreStuff[6]; // offset=159
};

typedef class LevelHeader LevelHeader;

class IFCCustom : IFCBase { // sizeof=192
    class IFCCustom * IFCCustom(class IFCCustom *arg1);
    void ScrollChatString(UBYTE arg1);
    void DrawChatStrings();
    void DrawAvailableSessions(SessionInfo *arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCCustom * IFCCustom(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    MyGadget *gad; // offset=4
    TbNetworkSessionList session_list; // offset=7
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    UBYTE level; // offset=20
    UBYTE victory; // offset=21
    UBYTE race; // offset=22
    UBYTE etherealStrictness; // offset=23
    UBYTE networkActive; // offset=24
    UBYTE networkSlot; // offset=25
    LevelHeader currentLevel; // offset=26
    UBYTE session_index; // offset=171
    BBOOL canEnterGame; // offset=172
    TbNetworkService service; // offset=213
    char chatString[3][63]; // offset=214
    TbNetworkSession session; // offset=223
    SessionInfo t_session[9]; // offset=225
};

typedef class IFCCustom IFCCustom;

class PaletteSelector { // sizeof=81
    class PaletteSelector * PaletteSelector(class PaletteSelector *arg1);
    void RestoreSelectFilter();
    void SetSelectFilter(UBYTE arg1);
    void ClearSelect();
    BBOOL IsSelectActive();
    void SlideClose();
    void SlideOpen();
    SBYTE GetSelected();
    void UnlockPalette();
    void LockPalette();
    void Draw();
    BBOOL Update(SWORD arg1);
    void CreateShepherdMenu();
    void CreatePlantMenu();
    void CreateBuildingMenu();
    void Close();
    void Create(Thing *arg1);
    void Init();
    class PaletteSelector * PaletteSelector();
    uint8_t open;
    uint8_t closed;
    uint8_t selectFilterStored;
    SBYTE slideDelta;
    SBYTE x;
    UBYTE saveSelectFilter;
    UBYTE listSize;
    UBYTE error[31];
    UBYTE mapTo[31];
    SBYTE select[2];
    UBYTE top[2];
    BBOOL active;
    PaletteSelectorMode mode;
    Thing *activeThing;
};

typedef class PaletteSelector PaletteSelector;

class IFCStartNetwork : IFCBase { // sizeof=19
    class IFCStartNetwork * IFCStartNetwork(class IFCStartNetwork *arg1);
    class IFCStartNetwork * IFCStartNetwork();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    unsigned int *__vbptr;
};

typedef class IFCStartNetwork IFCStartNetwork;

class IFCGeneratePlanet : IFCBase { // sizeof=19
    class IFCGeneratePlanet * IFCGeneratePlanet(class IFCGeneratePlanet *arg1);
    class IFCGeneratePlanet * IFCGeneratePlanet();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    unsigned int *__vbptr;
};

typedef class IFCGeneratePlanet IFCGeneratePlanet;

class IFCJoiningPlayer : IFCBase { // sizeof=27
    class IFCJoiningPlayer * IFCJoiningPlayer(class IFCJoiningPlayer *arg1);
    class IFCJoiningPlayer * IFCJoiningPlayer();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    unsigned int *__vbptr;
    IFCBase *previousIFC;
    ULONG joiningPlayers; // offset=4
};

typedef class IFCJoiningPlayer IFCJoiningPlayer;

class IFCWinLevel : IFCBase { // sizeof=19
    class IFCWinLevel * IFCWinLevel(class IFCWinLevel *arg1);
    class IFCWinLevel * IFCWinLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    unsigned int *__vbptr;
};

typedef class IFCWinLevel IFCWinLevel;

class IFCLoseLevel : IFCBase { // sizeof=19
    class IFCLoseLevel * IFCLoseLevel(class IFCLoseLevel *arg1);
    class IFCLoseLevel * IFCLoseLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    unsigned int *__vbptr;
};

typedef class IFCLoseLevel IFCLoseLevel;

class IFCStatScreen : IFCBase { // sizeof=19
    class IFCStatScreen * IFCStatScreen(class IFCStatScreen *arg1);
    class IFCStatScreen * IFCStatScreen();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    unsigned int *__vbptr;
};

typedef class IFCStatScreen IFCStatScreen;

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

typedef class IFCComputer IFCComputer;

class IFCOptions : IFCBase { // sizeof=59
    class IFCOptions * IFCOptions(class IFCOptions *arg1);
    void FindWhichSlotsAreUsed();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCOptions * IFCOptions(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    BBOOL savePausedState;
    SBYTE saveTextEntrySlot;
    MyMinSprite mMs;
    char slotNames[7][31];
    BBOOL slotUsed[7];
    TbSprite *sprites;
    MySprite *spr;
    MyGadget *gad;
    SBYTE selectedSlot; // offset=4
    MyAnimBank *anb; // offset=5
    IFCBase *previousIFC; // offset=9
};

typedef class IFCOptions IFCOptions;

struct Info { // sizeof=56
    SLONG WindowX1; // offset=0
    SLONG WindowY1; // offset=4
    SLONG WindowX2; // offset=8
    SLONG WindowY2; // offset=12
    SLONG ClipX1; // offset=16
    SLONG ClipY1; // offset=20
    SLONG ClipX2; // offset=24
    SLONG ClipY2; // offset=28
    SLONG ScreenClipX1; // offset=32
    SLONG ScreenClipY1; // offset=36
    SLONG ScreenClipX2; // offset=40
    SLONG ScreenClipY2; // offset=44
    SLONG WindowCentreX; // offset=48
    SLONG WindowCentreY; // offset=52
};

typedef struct Info Info;

class IFCLevel : IFCBase { // sizeof=203
    class IFCLevel * IFCLevel(class IFCLevel *arg1);
    void DrawBriefing();
    void DrawPlanet();
    void DrawLockOn();
    void DrawGizmoBox();
    void DrawSystem();
    void DrawLines();
    void DrawCornerCircles();
    void DrawVLine(SLONG arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void DrawHLine(SLONG arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void DrawRefreshedBox(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    void calculate_view_to_target_vector_deviation(cPoint *arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    void local_rotate_on_arbitrary_axis(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, SLONG arg7);
    UBYTE auto_pilot_MK2();
    void UpdateSystem();
    SLONG align_vertical(ULONG arg1);
    void init_view_axes();
    void normalise_axes(cPoint *arg1, cPoint *arg2);
    void global_z_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void global_y_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void global_x_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void local_rotate_on_axis(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    void move_view_position(cPoint *arg1, cPoint *arg2, cPoint *arg3, SLONG *arg4);
    void slow_down(SLONG *arg1);
    void speed_up(SLONG *arg1);
    void damping();
    void keys();
    void draw_points(ULONG arg1, ScreenPoint *arg2);
    void calculate_clipping_window(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    void calulate_2d_x_and_y_of_points(ULONG arg1, cPoint *arg2, ScreenPoint *arg3);
    void rotate_universe_around_viewpos(cPoint *arg1, cPoint *arg2);
    void init_start_points();
    void DrawCrossHair();
    UBYTE FindPlanet(UWORD arg1, UWORD arg2);
    void MakeOrbitTrack(UWORD arg1);
    int SortCheck(void *arg1, void *arg2);
    void SortStars();
    UBYTE IsAtSystemView();
    void DrawGalaxy();
    void MoveViewer();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCLevel * IFCLevel();
    void (**__vfptr)();
    unsigned int *__vbptr;
    BBOOL startLevel;
    SLONG planetNameTraverse;
    UBYTE systemGizmoFrames[5];
    UBYTE numBoxGizmosOn;
    UBYTE numSystemGizmosOn;
    UBYTE autopilotStatus;
    LevelDrawPhase phase;
    TurnPrintInfo nameTpi;
    TurnPrintInfo tpi;
    MyAnimBank *anb; // offset=4
    MyGadget *gad; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    IFCBase *previousIFC; // offset=20
    UBYTE *planetBlocks; // offset=24
    cPoint target; // offset=28
    char *briefingBuffer; // offset=29
    Info info; // offset=32
    SpaceBody *spaceBodies; // offset=33
    UWORD *drawOrder; // offset=36
    cPoint targetpos; // offset=40
    UWORD currentPlanet; // offset=41
    UWORD pointsThisTurn; // offset=42
    UWORD galaxyAngle; // offset=44
    UBYTE viewerMode; // offset=46
    XY crossHair; // offset=47
    UBYTE cMode; // offset=51
    cPoint targetvelocity; // offset=52
    MyMinSprite bogusMMs[8]; // offset=53
    cPoint *startpoints; // offset=64
    cPoint *workingpoints; // offset=68
    ScreenPoint *outputpoints; // offset=72
    Viewer viewer[7]; // offset=76
    AutoPilot autopilot; // offset=88
    LevelHeader currentLevel; // offset=97
    ULONG qstars; // offset=121
    SLONG mag; // offset=125
    SLONG scaledmag; // offset=129
    SLONG xyaspectratio; // offset=133
    SLONG vrx; // offset=137
    SLONG vry; // offset=141
    SLONG vrz; // offset=145
    cPoint orbitOffset; // offset=149
    Axes workingaxes[0]; // offset=180
    Axes referenceaxes; // offset=216
    Axes universeaxes; // offset=252
};

typedef class IFCLevel IFCLevel;

class IFCEditor : IFCBase { // sizeof=18
    class IFCEditor * IFCEditor(class IFCEditor *arg1);
    void GoPlanet();
    BBOOL IsCircular(UBYTE arg1);
    BBOOL IsMouseOnMap();
    void TranslateAllHeaders();
    void UpdateAllLevels();
    void PrintHeadersToFile();
    void UpdateLevel(LevelHeader *arg1);
    void UpdateHeader(LevelHeader *arg1);
    BBOOL LoadMap();
    BBOOL SaveMap();
    void LoadLevel();
    void SaveLevel();
    void SpecialistFuncHelp(MyGadget *arg1);
    void SpecialistTypeHelp(MyGadget *arg1);
    void VictoryHelp(MyGadget *arg1);
    int FindSpecFunctionNumber(BBOOL *arg1);
    SpecialistClass FindSpecialistClass(BBOOL *arg1);
    VictoryCondition FindVictoryCondition(BBOOL *arg1);
    int TotalNumberOfSpecs();
    void FindClosestStuff();
    void RemoveStuff();
    void ReadCompPlayer(UBYTE arg1, UBYTE arg2);
    void DrawKeyboardHelp();
    void DrawLimits();
    void DrawBuilding(XY arg1, UBYTE arg2, UBYTE arg3);
    void DrawStuff();
    void DrawDropSites();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCEditor * IFCEditor(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    char levelName[15]; // offset=20
    UBYTE levelNumber; // offset=36
    UBYTE closestStuff; // offset=37
    UBYTE mapType; // offset=38
    UBYTE compPlayers[2]; // offset=39
    UBYTE compValid; // offset=42
    FlatMap map; // offset=43
    CreatureSpecies currentSpecies; // offset=49
    UBYTE generated; // offset=50
    UBYTE currentlyDragging; // offset=51
    BBOOL draggedLastTurn; // offset=52
    BBOOL drawZoneInfo; // offset=53
    UBYTE editStuffMode; // offset=54
    BBOOL circularWarning; // offset=55
    SBYTE stuffBeingEdited; // offset=56
    UBYTE ePlayer; // offset=57
    UBYTE gPointType; // offset=58
    LevelHeader header; // offset=59
    Stuff newStuff; // offset=246
    UBYTE enteringName; // offset=254
};

typedef class IFCEditor IFCEditor;

class IFCCompEditor : IFCBase { // sizeof=193
    class IFCCompEditor * IFCCompEditor(class IFCCompEditor *arg1);
    void PrintCompPlayersToFile();
    void UpdateColumnGadget(SWORD arg1, UBYTE *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, SBYTE *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, UWORD *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, SWORD *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, ULONG *arg2, ULONG arg3, ULONG arg4);
    void UpdateColumnGadget(SWORD arg1, SLONG *arg2, SLONG arg3, SLONG arg4);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, UBYTE arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SBYTE arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, UWORD arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SWORD arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void UpdateCreatureBar();
    void UpdateCreatureValues();
    void DrawCreatureBar();
    BBOOL Write();
    BBOOL Read();
    void Update();
    UBYTE WantedSpecialists();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCCompEditor * IFCCompEditor(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    IFCBase *saveIFC; // offset=4
    MyGadget *gad; // offset=8
    MyAnimBank *anb; // offset=12
    MySprite *spr; // offset=16
    TbSprite *sprites; // offset=20
    UBYTE playerNumber; // offset=24
    Personality cPersonality; // offset=25
    UWORD leftNotch; // offset=167
    UWORD rightNotch; // offset=169
    UWORD testing; // offset=171
    UBYTE triggerNo; // offset=173
};

typedef class IFCCompEditor IFCCompEditor;

near GEngine::GEngine();
near IFCEditor::IFCEditor( MyGadget * );
near IFCTitle::IFCTitle( MyGadget * );
near IFCCustom::IFCCustom( MyGadget * );
near CreatureInfo::CreatureInfo();
near IFCComputer::IFCComputer( MyGadget * );
near IFCCompEditor::IFCCompEditor( MyGadget * );
near IFCOptions::IFCOptions( MyGadget * );
near Computer::~Computer();
near CreatureInfo::~CreatureInfo();
near IFCStatScreen::IFCStatScreen();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
near IFCLoseLevel::IFCLoseLevel();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
near IFCWinLevel::IFCWinLevel();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
near IFCJoiningPlayer::IFCJoiningPlayer();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
near IFCGeneratePlanet::IFCGeneratePlanet();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
near IFCStartNetwork::IFCStartNetwork();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
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
extern char unsigned * block_ptrs[];
extern char unsigned * block_mem;
extern char unsigned * aBlockMem;
extern TbSprite * pointers_sprites;
extern TbSprite * end_pointers_sprites;
extern Player * end_players;
extern char unsigned * palette;
extern char unsigned * shipPalette;
extern char unsigned * b_screen;
extern char * game_text;
extern char unsigned * scratch;
extern char * strings[];
extern FontInfo * menu_font;
extern TbSprite * gad_spr;
extern MyAnimBank * bones_anb;
extern MySprite * bones_spr;
extern MyAnimBank * plgbl_anb;
extern MySprite * plgbl_spr;
extern TbSprite * plSpr;
extern MyAnimBank * ifcLab_anb;
extern MySprite * ifcLab_spr;
extern TbSprite * ifcLabSpr;
extern MyAnimBank * iface_anb;
extern MySprite * iface_spr;
extern TbSprite * ifcSpr;
extern MyAnimBank * effect_anb;
extern MySprite * effect_spr;
extern MyAnimBank * ethereal_anb;
extern MySprite * ethereal_spr;
extern MyAnimBank * building_anb[];
extern MySprite * building_spr[];
extern MyAnimBank * ani_anb[];
extern MySprite * ani_spr[];
extern MyAnimBank * plant_anb[];
extern MySprite * plant_spr[];
extern IFCBase * currentIFC;
extern IFCBase * IFCBase::plugIn;
extern IFCBase * IFCBase::pullOut;
extern Packet * IFCBase::packet;
extern char unsigned IFCBase::fullCopyToVRAM;
extern void * Packet::dataBlast;
extern long unsigned pointers_data;
extern long unsigned planets_data;
extern long unsigned sparkle_data;
extern long unsigned tubemask_data;
extern long unsigned ifclvs_data;
extern long unsigned globalOptions;
extern long unsigned playerVictory[];
extern short unsigned localRndSeed;
extern short IFCBase::gadID;
extern short boundMinX;
extern short boundMinY;
extern short boundMaxX;
extern short boundMaxY;
extern short realX;
extern short realY;
extern int mouseDebug;
extern char unsigned cyanTables[][256];
extern char unsigned redTables[][256];
extern char unsigned iceTables[][256];
extern char unsigned globalDebug;
extern char unsigned thingProcessing;
extern char * debugFile[];
extern long unsigned debugLine[];
extern long unsigned debugTurn[];
extern char unsigned debugIndex;
extern long unsigned pktTotalTime;
extern long unsigned gameStartTime;
extern long unsigned gameEndTime;
extern char unsigned replace_display;
extern char unsigned runSimulation;
extern char signed centerCtr;
extern char signed visX;
extern char signed visY;
extern char signed ptrX;
extern char signed ptrY;
extern char signed playerProcessed;
extern char unsigned localPlayer;
extern Thing * MainInterfacePad::activeThing;
extern MainInterfacePad * MainInterfacePad::previousPad;
extern char unsigned MainInterfacePad::go;
extern MyMinSprite MainInterfacePad::pointerMMs;
extern short MainInterfacePad::pointerDisplacement;
extern MyMinSprite MainInterfacePad::userPointerMMs;
extern MySprite * MainInterfacePad::userPointer;
extern long unsigned * MainInterfacePad::padBmps[];
extern char unsigned equipmentStore[][52];
extern char unsigned editorMode;
extern char unsigned mapGrid;
extern char unsigned dropSiteTaken;
extern char unsigned localRace;
extern char unsigned localVictory;
extern char unsigned localEtherealStrictness;
extern GameControl control;
extern Config config;
extern RunTimeGameFlags runFlags;
extern XY oldMouseXY;
extern ControllerInfo * controller;
extern Colour savePalette[];
extern TbSpriteData font_sprites[];
extern Packet packets[];
extern BioGame bio;
extern GridTile defaultGridTile;
extern ScreenLockHandler screenLock;
extern tm mainMapTime;
extern MapDisplay mapDisplay;
extern SoundManager snd;
extern PlSpecLoader plsLoader;
extern HelpDraw helper;
extern Recorder recorder;
extern InfoRequester request;
extern Computer computers[];
extern MyMinSprite Creature::woodDiskMMs;
extern MyMinSprite Creature::heartMMs;
extern MyMinSprite Creature::shepherdedMMs;
extern MyMinSprite Creature::packLeadersMMs;
extern MyMinSprite Creature::packMMs;
extern MyMinSprite Creature::hungryMMs;
extern long unsigned buildingsAllowed;
extern char unsigned shadeMethod;
extern Planet planet;
extern MyGadget ifcPls_gads[];
extern MyGadget ifcPanel_gads[];
extern MyGadget ifcPalette_gads[];
extern MyGadget ifcLab_gads[];
extern MyMinSprite Creature::tiredMMs;
extern MyMinSprite Creature::scaredMMs;
extern MyMinSprite Creature::huntingMMs;
extern MyMinSprite Effect::ezStarMMs;
extern MyAnimBank * tubespec_anb;
extern MyGadget ifcOptions_gads[];
extern MyGadget ifcLvS_gads[];
extern MyGadget ifcTitle_gads[];
extern MyGadget ifcCustom_gads[];
extern MyGadget ifcEditor_gads[];
extern MyGadget ifcComp_gads[];
extern char const * triggerType[];
extern char const * stuffTypes[];
extern char * ceditor_help[];
extern MyGadget ifcCompEditor_gads[];
extern MyGadget ifcClone_gads[];
extern short const buildScores[][3];
extern short const buildThreatScores[][3];
extern MySprite * tubespec_spr;
extern TbSprite * tubespec_sprites;
extern MyAnimBank * sequip_anb;
extern MySprite * sequip_spr;
extern TbSprite * sequip_sprites;
extern TextEntry textEntry;
extern CreatureInfo creatureInfo[];
extern GEngine Engine;
extern IFCTitle ifcTitle;
extern IFCCustom ifcCustom;
extern IFCPlanetside ifcPls;
extern IFCStartNetwork ifcStartNetwork;
extern IFCGeneratePlanet ifcGeneratePlanet;
extern IFCJoiningPlayer ifcJoiningPlayer;
extern IFCWinLevel ifcWinLevel;
extern IFCLoseLevel ifcLoseLevel;
extern IFCStatScreen ifcStatScreen;
extern IFCComputer ifcComputer;
extern IFCOptions ifcOptions;
extern IFCLevel ifcLevel;
extern IFCEditor ifcEditor;
extern IFCCompEditor ifcCompEditor;
extern char unsigned colour_lookup[];
extern void (near * const __vftbl[])();
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
extern char unsigned const upgradeScores[][3];
extern char unsigned const specTgtScores[];
extern char unsigned const specThreatScores[];
extern char unsigned const creatureThreatScores[];
extern char unsigned const cInfo[][5];
extern char signed const sectorDirs[][2];
extern FontInfo font_info[];

#endif // BIO_DATA_HPP_
/******************************************************************************/
