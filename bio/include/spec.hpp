/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file spec.hpp
 *     Header file for spec.cpp.
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
#ifndef BIO_SPEC_HPP_
#define BIO_SPEC_HPP_

enum { // type=int8_t
    SCIE_SPR_STUDY = 13,
    SCIE_SPR_HEAL,
    SCIE_SPR_SHOOT, // 15
};

enum { // type=int8_t
    SHEP_SPR_HERD = 13,
    SHEP_SPR_SHOOT,
    SHEP_SPR_SHOOTSTASIS = 22,
};

enum { // type=int8_t
    FARM_SPR_HARVEST = 13,
    FARM_SPR_PLANT,
    FARM_SPR_CHOP, // 15
};

enum { // type=int8_t
    ARCH_SPR_FOUNDATION = 13,
    ARCH_SPR_PELLET,
    ARCH_SPR_BUILD, // 15
    ARCH_SPR_DRONE,
    ARCH_SPR_BOOM,
};

enum { // type=int8_t
    FNDERR_TOOCLOSE = 1,
    FNDERR_WATER,
    FNDERR_TREES,
    FNDERR_TIRED,
};


enum { // type=int8_t
    CL_BLACK = 0,
    CL_WHITE,
    CL_RED,
    CL_GREEN,
    CL_BLUE,
    CL_YELLOW, // 5
    CL_CYAN,
    CL_MAGENTA,
};

typedef void *CALLBACK;

typedef uint32_t clock_t;

typedef void (*onexit_t)();

typedef unsigned int ino_t;

typedef unsigned int size_t;

typedef uint32_t time_t;

typedef uint16_t wchar_t;

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



struct BuildingStage { // sizeof=1
    uint8_t player; // offset=0
    uint8_t stage; // offset=1
};

typedef struct BuildingStage BuildingStage;

class EventHelp { // sizeof=150
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

typedef class EventHelp EventHelp;

class GunSpec { // sizeof=7
    SWORD shotSpeed; // offset=0
    SWORD shotLifeInTurns; // offset=2
    SWORD reloadTime; // offset=4
    UBYTE shotEffect; // offset=6
};

typedef class GunSpec GunSpec;

class PlSpec : SmartMovingThing { // sizeof=200
    class PlSpec * operator=(class PlSpec *arg1);
    class PlSpec * PlSpec(class PlSpec *arg1);
    class PlSpec * PlSpec();
    void SetAltSpecialFlipToThing(Thing *arg1);
    void SetWaiting();
    void BuilderSetDemoCharges(SBYTE arg1);
    void StartLumberjackChopping(Plant *arg1);
    GunSpec * GetGunSpec(UBYTE arg1);
    void SetupMoveToInsideBuilding(Building *arg1, XY arg2);
    void SetupMoveAwayFromThing(Thing *arg1);
    void SetupMoveToThing(Thing *arg1);
    void SetupMoveToSpecialTgt(XY arg1);
    void InitiateMove();
    void RemoveRefsFromCreatures();
    void DoActionActiveDuringNewMove();
    void DoAnySpecialWhileMoving();
    void ShootAtMovingThing(MovingThing *arg1, ULONG arg2, UBYTE arg3);
    void CowboyRanging(MovingThing *arg1, ULONG arg2);
    void ReleaseShepherdedCreatures();
    Creature * CowboyCreatureScan();
    PlSpec * CowboyPlsScan();
    UBYTE AssessAlternateDir(UBYTE arg1);
    UWORD SpecialMove(SBYTE arg1);
    void AssignMove(UBYTE arg1);
    SBYTE SpecialToolTest(UBYTE arg1, SBYTE arg2, SBYTE arg3);
    BBOOL IsFoundationSiteOK(BuilderIFC *arg1, UBYTE *arg2);
    BBOOL operator==(PlSpec *arg1);
    SLONG WriteBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void UpdateAll();
    void InitArray();
    SLONG ArchitectBuildCost(BuildingType arg1);
    SLONG ArchitectPelletCost();
    SLONG ScientistHealRange();
    SLONG ScientistStudyRange();
    UBYTE GetGun(BBOOL arg1);
    SLONG FarmerPackCapacity();
    SLONG LumberjackFellRange();
    SLONG FarmerHarvestRange();
    SLONG FarmerPlantingRange();
    SLONG CowboyPatrolRange();
    SLONG ShepherdThrowRange();
    SLONG ShepherdCatchRange();
    BBOOL IsFullyCloaked();
    BBOOL CanGetOrder();
    BBOOL IsActionAbortable();
    BBOOL IsDoingSpecial();
    void InterruptMove();
    void SetupMoveToTgt(XY arg1);
    void RemoveFromGame();
    void Speech(ULONG arg1, BufferSubmitMode arg2);
    SBYTE ActionOn(Thing *arg1, BBOOL arg2, BBOOL arg3, BBOOL arg4);
    XY GetXYToChopTreeDown(Plant *arg1);
    BBOOL CanDoSpecialWithMove();
    BBOOL CanAbortSpecialWithMove();
    void GetAbducted(Ethereal *arg1);
    void SetCowboyTarget(Creature *arg1);
    void StartAction(UBYTE arg1, ULONG arg2, ULONG arg3);
    void SetTarget(UBYTE arg1);
    void DoAbduct();
    void DoLiftoff();
    void DoNewShepherd();
    void DoNewFarmer();
    void DoScientist();
    void DoShepherd();
    void DoLumberjack();
    void DoGeologist();
    void DoFarmer();
    void DoCowboy();
    void DoBuilder();
    void DoWaiting();
    BBOOL DoMove(BBOOL arg1);
    void BeginSpecial();
    BBOOL OKToSwitchToSpecial();
    void AbortSpecial(BBOOL arg1);
    void BeginMove(SBYTE arg1);
    SWORD PassableHex(XY arg1, BOOL arg2);
    BOOL PassableDir(UBYTE arg1);
    void FromCenter(GridTile *arg1, XY *arg2);
    void SetDrawFlags();
    void Resync(UBYTE arg1);
    BBOOL Dead();
    void Init(UBYTE arg1, UBYTE arg2);
    BBOOL IsMovable();
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    BBOOL IsBusyDoingSomething();
    BBOOL IsDead();
    void StartAMove(XY arg1);
    void DrawOnMap(SWORD arg1, SWORD arg2);
    SWORD MaxMoveSpeed();
    void Discover();
    BBOOL Damage(SLONG arg1, Thing *arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void (**__vfptr)();
    SBYTE mode; // offset=85
    SBYTE saveMode; // offset=86
    SBYTE newMode; // offset=87
    SBYTE ifcGo; // offset=88
    SBYTE specialShp; // offset=89
    SBYTE moveMode; // offset=90
    SBYTE playerNewMoveMode; // offset=91
    XY playerTgt; // offset=92
    XY sp; // offset=96
    SLONG reload; // offset=100
    SLONG pixCount; // offset=104
    SLONG savePixCount; // offset=108
    UWORD flags; // offset=112
    UBYTE seeds; // offset=114
    UBYTE cloaked; // offset=115
    SBYTE crewIDX; // offset=116
    MyMinSprite auxMMs; // offset=117
    PlsError error; // offset=122
    ThingIDX damagedBy; // offset=123
    PLSInterface ifc; // offset=126
    TbLoadFiles loadFile; // offset=148
    Specialist *spec; // offset=192
    MyAnimBank *anb; // offset=196
};








class SoundTag { // sizeof=6
    void SetNewSample();
    BBOOL IsNewSample();
    ULONG id; // offset=0
    SampleID sampleNum; // offset=4
};

typedef class SoundTag SoundTag;

class SpeechFileStatus { // sizeof=8
    BBOOL Valid();
    void Invalidate();
    TbFileHandle handle; // offset=0
    SLONG numSamples; // offset=4
};

typedef class SpeechFileStatus SpeechFileStatus;

class SoundConfig { // sizeof=10
    void Set();
    void Write(char *arg1);
    void Read(char *arg1);
    SLONG sfxVolume; // offset=0
    SLONG musicVolume; // offset=4
    BBOOL sfxOn; // offset=8
    BBOOL musicOn; // offset=9
};


class TurnPrintInfo { // sizeof=110
    BBOOL Print();
    char *drawCurrent;
    char *current;
    SLONG delayCount;
    SLONG count;
    SLONG length;
    SLONG x; // offset=0
    SLONG y; // offset=4
    SLONG delay; // offset=8
    SLONG step; // offset=12
    char *str; // offset=16
    char hilite[2][9]; // offset=20
    char *drawStr; // offset=50
    FontInfo dfi; // offset=54
    ULONG drawing; // offset=82
    SLONG linesDrawn; // offset=86
};

typedef class TurnPrintInfo TurnPrintInfo;

class LumberjackScan : RangeScanner { // sizeof=57
    class LumberjackScan * LumberjackScan(class LumberjackScan *arg1);
    void PerGrid();
    class LumberjackScan * LumberjackScan(PlSpec arg1);
    //void (**__vfptr)();
    SLONG dirBonus;
    SLONG bestValue;
    PlSpec pls;
    Plant *tgtPlant; // offset=41
};

class HarvestClearScan : RangeScanner { // sizeof=55
    class HarvestClearScan * HarvestClearScan(class HarvestClearScan *arg1);
    void Do();
    void PerGrid();
    class HarvestClearScan * HarvestClearScan(PlSpec arg1, BBOOL arg2, BBOOL arg3);
    //void (**__vfptr)();
    BBOOL clearFlags;
    BBOOL collect;
    ResearchGrid rGrid;
    PlSpec pls;
    ULONG seedsGot; // offset=41
};

class FarmerPlantingScan : WeightedRangeScanner { // sizeof=115
    class FarmerPlantingScan * FarmerPlantingScan(class FarmerPlantingScan *arg1);
    void PerGrid();
    class FarmerPlantingScan * FarmerPlantingScan(PlSpec arg1, BBOOL arg2);
    //void (**__vfptr)();
    BBOOL rangeInvert;
    PSpecies pSpc;
    PlSpec pls;
};

class SurvivalScan : RangeScanner { // sizeof=53
    class SurvivalScan * SurvivalScan(class SurvivalScan *arg1);
    void PerGrid();
    class SurvivalScan * SurvivalScan(PlSpec arg1, ULONG arg2);
    //void (**__vfptr)();
    ULONG bestRange;
    PlSpec pls;
    Creature *tgtCreature; // offset=41
};

class StudyCreatureScan : RangeScanner { // sizeof=53
    class StudyCreatureScan * StudyCreatureScan(class StudyCreatureScan *arg1);
    void PerGrid();
    class StudyCreatureScan * StudyCreatureScan(PlSpec arg1);
    //void (**__vfptr)();
    ULONG bestRange;
    PlSpec scientist;
    Creature *tgtCreature; // offset=41
};

class HealCreatureScan : RangeScanner { // sizeof=53
    class HealCreatureScan * HealCreatureScan(class HealCreatureScan *arg1);
    void PerGrid();
    class HealCreatureScan * HealCreatureScan(PlSpec arg1);
    //void (**__vfptr)();
    ULONG bestRange;
    PlSpec scientist;
    Creature *tgtCreature; // offset=41
};

class PlSpecLoader { // sizeof=80
    void Free(PlayerRace arg1, SpecialistClass arg2, MyAnimBank *arg3);
    void Free(PlSpec *arg1);
    MyAnimBank * Load(PlayerRace arg1, SpecialistClass arg2);
    BBOOL Load(PlSpec *arg1);
    MyAnimBank *anbs[3][3];
    SBYTE counters[3][3];
};


short WeightedAngle( char unsigned );

#endif // BIO_SPEC_HPP_
/******************************************************************************/
