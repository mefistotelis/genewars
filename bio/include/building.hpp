/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file building.hpp
 *     Header file for building.cpp.
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
#ifndef BIO_BUILDING_HPP_
#define BIO_BUILDING_HPP_

enum BuildingType { // type=int8_t
    BCID_GENELAB = 0,
    BCID_TURRET,
    BCID_SAWMILL,
    BCID_POWERSTATION,
    BCID_FARM,
    BCID_LAUNCHER, // 5
    BCID_SOLAR,
    BCID_OBSERVATORY,
    BCID_WIND,
    BCID_NUCLEAR,
    BCID_OPERATIONS, // 10
    BCID_MINE,
    BCID_SHIELD,
    BCID_GOOPVAT,
    MAX_BUILDINGTYPES,
};

typedef enum BuildingType BuildingType;

typedef class Building Building;

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

typedef class TheBase TheBase;

struct BuildingStage { // sizeof=1
    uint8_t player; // offset=0
    uint8_t stage; // offset=1
};

typedef struct BuildingStage BuildingStage;

class Building : StaticThing { // sizeof=67
    class Building * operator=(class Building *arg1);
    class Building * Building(class Building *arg1);
    class Building * Building();
    BBOOL operator==(Building *arg1);
    char * GetName();
    Creature * GeneLabMadeCreature(BBOOL *arg1);
    BBOOL IsMineMinedOut();
    BBOOL CanMakeSpeciesInGenelab(CreatureSpecies arg1);
    BBOOL IsGenelabBusy();
    BBOOL IsGenelabReady();
    ULONG TurretRange();
    ULONG ShieldRange();
    ULONG ObservatoryRange();
    ULONG PowerStationRange();
    ULONG MaxMineMinerals();
    ULONG MaxSawmillWood();
    ULONG MaxGoopStorage();
    BBOOL IsAGoopStorage();
    BBOOL IsObservable();
    BBOOL IsAPowerGenerator();
    BBOOL IsUpgradable();
    void UserUpgrade();
    void ClearBeingWrecked();
    void SetBeingWrecked();
    void ClearUpgradeOK();
    void SetUpgradeOK();
    void ClearDisabled();
    void SetDisabled();
    void ClearBusted();
    void SetBusted();
    BBOOL IsBeingWrecked();
    BBOOL IsWrecking();
    BBOOL IsBeingUpgraded();
    BBOOL IsUpgradeOK();
    BBOOL IsFunctional();
    BBOOL IsDisabled();
    BBOOL IsBusted();
    BBOOL IsDamaged();
    BBOOL IsPowered();
    BBOOL IsBuilt();
    BBOOL Build(UWORD arg1, BBOOL arg2);
    void DisableBuilding();
    void StartWreck(PlSpec *arg1);
    void StopAnyContinuousSound();
    void FinishBuilding();
    void Free();
    void Init(UBYTE arg1, BuildingType arg2, XY arg3);
    void Draw(SWORD arg1, SWORD arg2);
    SLONG WriteBuffer(Building **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(Building **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void InitArray();
    void UpdateAll();
    BBOOL IsDead();
    BBOOL Damage(SLONG arg1, Thing *arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void (**__vfptr)();
    SWORD build; // offset=43
    BuildingType type; // offset=45
    UBYTE stage; // offset=46
    UBYTE buildToStage; // offset=47
    UBYTE damageWobble; // offset=48
    UWORD flags; // offset=49
    UBYTE speciMake; // offset=51
    BBOOL padFlashState; // offset=52
    SWORD origGeneComplete; // offset=53
    BBOOL padBurned; // offset=54
    SLONG wreckScale; // offset=55
    SLONG geneComplete; // offset=56
    ULONG wood; // offset=57
    SWORD creatureMade; // offset=58
    XY target; // offset=59
    UBYTE creatureType; // offset=60
    SWORD power; // offset=61
    UBYTE userTypeStorage; // offset=62
    UBYTE addPower; // offset=63
    ThingIDX thingTgt; // offset=64
    UBYTE mode; // offset=65
    SWORD angle; // offset=66
    UBYTE reload; // offset=67
};

class RangeScan { // sizeof=20
    class RangeScan * RangeScan(class RangeScan *arg1);
    void Init(XY *arg1, ULONG arg2, BBOOL arg3);
    class RangeScan * RangeScan(XY *arg1, ULONG arg2, BBOOL arg3);
    XY tgt;
    SWORD yHi;
    SWORD yLo;
    SWORD xHi;
    SWORD xLo;
    XY xy;
    SWORD yD;
    SWORD xD;
};

class RangeScanner : RangeScan { // sizeof=41
    class RangeScanner * RangeScanner(class RangeScanner *arg1);
    void PerGrid();
    void Do();
    class RangeScanner * RangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
};

class SoundManager { // sizeof=159
    class SoundManager * SoundManager(class SoundManager *arg1);
    BBOOL CanSamplePlay(ULONG arg1, SampleID arg2, UBYTE arg3);
    UBYTE ComputePan(XY arg1);
    UBYTE ComputeVolume(XY arg1, UBYTE arg2);
    SoundRequest * GetSoundReq(Thing *arg1, SoundRequest *arg2, BBOOL arg3);
    SampleInfo * GetSampleInfo(ULONG arg1, SampleID arg2);
    void SubmitBufferedSound(char *arg1, SoundRequest *arg2);
    void SubmitSoundRequest(SoundRequest *arg1);
    void FreeRequest(SoundRequest *arg1);
    void StopSpeech();
    void StartSpeech(SoundRequest *arg1);
    void FadeOutAmbient(SoundRequest *arg1);
    void StopOldAndEstablishAmbient();
    void EstablishAmbient();
    UBYTE GetCDTrackPlaying();
    BBOOL IsCDPlaying();
    BBOOL IsNarratorSpeaking();
    UBYTE NumRequests();
    SoundRequest * GetSoundReq(Thing *arg1);
    SoundRequest * GetNextSoundReq(Thing *arg1, SoundRequest *arg2);
    SoundRequest * GetSoundReq(ULONG arg1, SampleID arg2);
    void KillAllSounds();
    void CloseAllSpeech();
    void StopCD();
    void PlayCDTrack(UBYTE arg1);
    void StopSound(UBYTE arg1, SampleID arg2);
    void RegisterFreedThing(Thing *arg1);
    void ProcessSounds();
    void Sound(UBYTE arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7, UBYTE arg8);
    void Sound(Thing *arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7);
    void Sound(UBYTE arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6, UBYTE arg7);
    void Sound(Thing *arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6);
    void ChangeAmbientVolume(UBYTE arg1);
    void SilenceAmbientSample();
    void ChangeAmbientSample(SampleID arg1);
    class SoundManager * SoundManager(XY arg1);
    SpeechFileStatus speech[17];
    UBYTE playingCDTrack;
    BBOOL narratorSpeaking;
    SBYTE samplesPlaying[93];
    SampleBufferQueue bufferQueue;
    char sampleToLoadInBuffer[63];
    UBYTE sampleBuffer[255];
    SoundRequest *bufferReq;
    UBYTE numRequests;
    UBYTE ambientSampleVolume;
    SampleID ambientSampleNum;
    SoundTag bumpTags[8];
    SoundRequest requests[8];
    XY origin;
};

class FlatMap { // sizeof=6
    void DrawOver(SWORD arg1, SWORD arg2, UBYTE arg3);
    void Map2Screen(XY arg1);
    void Update(BBOOL arg1);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY arg3);
    BBOOL Valid();
    void CopyRegionFrom(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6);
    void Draw(UBYTE arg1, SWORD arg2, SWORD arg3);
    void Draw(UBYTE arg1);
    void FreeMe();
    void UpdateGridTile(GridTile *arg1);
    void MakeRadiationMap(UBYTE arg1);
    void MakeEnergyMap(UBYTE arg1);
    void MakeLifeformMap(UBYTE arg1);
    void MakeTopographyMap(UBYTE arg1);
    void ReDraw(UBYTE arg1);
    PixBuffer * Init(Planet *arg1, UBYTE arg2, SWORD arg3, SWORD arg4, UBYTE arg5, BBOOL arg6);
    UBYTE mapMode;
    BBOOL useExplored;
    PixBuffer *pixBuffer;
};

typedef class FlatMap FlatMap;

class IsoMapBuffer { // sizeof=12
    void SetNewXlatedTop(UBYTE arg1, UBYTE arg2);
    void SetNewTop(UBYTE arg1, UBYTE arg2);
    void Draw(UBYTE arg1);
    void FreeMe();
    BBOOL Valid();
    BBOOL GetXYFromMap(XY arg1, XY arg2);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY arg3);
    void ProjectPixelOnWScreen(XY arg1, UBYTE arg2);
    void UpdateXY(XY arg1);
    void ReDraw();
    void Update();
    PixBuffer * Init(FlatMap *arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, SWORD arg5, SWORD arg6);
    SBYTE fadeDelta;
    UBYTE topY;
    UBYTE topX;
    FlatMap *flatMap;
    PixBuffer *pixBuffer;
    SBYTE fadeLevel; // offset=0
};

typedef class IsoMapBuffer IsoMapBuffer;

class MapDisplay { // sizeof=217
    void RegisterFoundationGrid(XY arg1, UBYTE arg2);
    void SelectAmbientSound();
    void SetRefreshColumn(UBYTE arg1);
    BBOOL RegisterPoint(XY arg1, SBYTE arg2);
    void DrawRefreshColumns();
    void DrawSingleColumn(UBYTE arg1);
    void DrawRightColumn(UBYTE arg1);
    void DrawLeftColumn(UBYTE arg1);
    void DrawBottomRow(SWORD arg1);
    void DrawTopRow(SWORD arg1);
    void DrawMapSprites();
    void FragCopyBScreenToWScreen();
    void draw_delta_column(SLONG arg1, SLONG arg2, SLONG arg3, SLONG *arg4, SLONG *arg5);
    void draw_column(SLONG arg1, SLONG arg2, SLONG arg3);
    BBOOL IsExploredTerrainInView();
    BBOOL IsGlassBuildings();
    void ToggleGlassBuildings();
    BBOOL IsDrawFoundations();
    void ClearDrawFoundations();
    void SetDrawFoundations();
    void ClearModified();
    BBOOL IsModified();
    void SetModified();
    void ClearRegisteredRightClick();
    void SetRegisteredRightClick();
    BBOOL IsRegisteredRightClick();
    BBOOL HasJustScrolled();
    BBOOL IsScrolling();
    void SetScrolled();
    BBOOL CanSelectThing();
    void ClearCanSelectThing();
    void SetCanSelectThing();
    BBOOL IsFullScreen();
    void ClearFullScreen();
    void SetFullScreen();
    BBOOL IsOnScreen(SWORD arg1, SWORD arg2);
    void DrawGlassTile(XY arg1, UBYTE arg2, BBOOL arg3);
    void RefreshFoundationGrids();
    void SetPanelRefreshZones();
    void RefreshRadar();
    void ProjectLine(XY arg1, XY arg2, ULONG arg3, MySprite *arg4, MyMinSprite *arg5);
    void ProjectCircle(XY arg1, ULONG arg2, UBYTE arg3, MySprite *arg4, BBOOL arg5, MyMinSprite *arg6);
    void StaticSetZones();
    XY GetDisplayCenter();
    void CenterOn(XY arg1);
    void RegisterBlockChange(XY arg1);
    void RegisterPointChange(XY arg1);
    void RegisterTopoPointChange(XY arg1);
    void RefreshFromBScreen();
    BBOOL ScrollHandler();
    void ForceRedraw();
    void ResetForPullOut();
    MapBucketThing * PutThingInBucket(Thing *arg1);
    void Draw();
    void Free();
    void Init();
    BBOOL needToDrawSprites;
    BBOOL exploredTerrainInView;
    SBYTE glassBuildingCounter;
    UBYTE scrollCount;
    XY selectedXY;
    MapRefreshColumn refreshColumns[19];
    SWORD numBucketThings;
    MapBucketThing *buckets[223];
    MapBucketThing bucketThings[255];
    Thing *selectedThing;
    XY other;
    XY win; // offset=0
    XY oldWin; // offset=4
    XY scroll; // offset=8
    XY cursor; // offset=12
    XY center; // offset=16
    GridTile *ptrG; // offset=20
    Thing *thing; // offset=24
    UBYTE flags; // offset=28
    UWORD leftEdge; // offset=29
    UWORD selectFilter; // offset=31
    FlatMap flatMap; // offset=33
    IsoMapBuffer isoMap; // offset=39
};


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

class EtherealScope { // sizeof=11
    class EtherealScope * EtherealScope(class EtherealScope *arg1);
    void Draw();
    void Init();
    class EtherealScope * EtherealScope();
    BBOOL blipHitSaucer;
    UBYTE saucerFade;
    SLONG blipRange;
    MyMinSprite etherealMms;
};

typedef class EtherealScope EtherealScope;

class GroupSelect { // sizeof=110
    SBYTE ActionOn(Thing *arg1, BBOOL arg2);
    void DrawGroupSelected();
    BBOOL GroupSelectThings();
    void SetTarget(XY arg1);
    void ClearAnchorGroupSelecting();
    void SetAnchorGroupSelecting(SWORD arg1, SWORD arg2);
    void ClearGroupSelecting();
    void SetGroupSelecting();
    BBOOL IsAnchorGroupSelecting();
    void SwitchOffGroup(SWORD *arg1, SWORD arg2, UBYTE arg3, UBYTE arg4);
    void AssignTargetToGroup(Thing *arg1, SWORD *arg2, SWORD arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6);
    void AssignXYToGroup(XY arg1, SWORD *arg2, SWORD arg3, UBYTE arg4, UBYTE arg5);
    void AssignXYToTeam(XY arg1, UBYTE arg2, UBYTE arg3);
    BBOOL SetGroupSwitchTo();
    void RemoveIdxFromGroup(SWORD arg1);
    void AddIdxToGroup(SWORD arg1);
    BBOOL IsTargetSet();
    BBOOL IsGroupSelecting();
    BBOOL IsAGroupCurrentlySelected();
    void ResetGroup();
    void Draw();
    BBOOL Update(SWORD *arg1);
    void Close();
    void Init();
    UBYTE plsMask;
    MyMinSprite mMs;
    UBYTE flags;
    UBYTE numPls;
    UWORD numGroupSelected;
    XY corner2;
    XY corner1;
    SWORD groupSelectedThings[43];
    XY target; // offset=0
};

typedef class GroupSelect GroupSelect;

class GroupPad : MainInterfacePad { // sizeof=35
    class GroupPad * GroupPad(class GroupPad *arg1);
    void MapDraw();
    void Draw(SBYTE arg1);
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    class GroupPad * GroupPad();
    void (**__vfptr)();
    unsigned int *__vbptr;
    SBYTE action;
    GroupSelect group;
    Thing *actionThing; // offset=4
    clock_t actionClock; // offset=8
};

typedef class GroupPad GroupPad;

class IFCPlanetside : IFCBase { // sizeof=46
    class IFCPlanetside * IFCPlanetside(class IFCPlanetside *arg1);
    void DrawTgtFlag();
    void DrawBadBar(UBYTE arg1);
    void BarHelp(MyGadget *arg1);
    void MapHelp(MyGadget *arg1);
    void GeneralGadgetHelp(MyGadget *arg1);
    void CircleHelp(MyGadget *arg1);
    void TgtFlagEffect(XY arg1, Thing *arg2);
    void JumpToNextBuilding();
    void ClearInterfaceReferencesTo(Thing *arg1);
    void CyanFlicker(UBYTE arg1);
    void EnableAllCircles();
    void DisableAllCircles();
    void DrawAllBottomControls();
    void DrawGameMap();
    void DrawGoopMeter();
    void DrawBadOMeter();
    void ResetForNewGame();
    BBOOL IsOnOffSwitchOn();
    void SetOnOffSwitch(BBOOL arg1);
    void SetBarsRefresh(UBYTE arg1);
    void CloseActivePad();
    BBOOL IsThingSelectedInPad(Thing *arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCPlanetside * IFCPlanetside(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    uint8_t helpState;
    uint8_t onOffSwitchState;
    UBYTE masterSoundVolume;
    XY tgtFlagXY;
    MyMinSprite tgtFlagMMs;
    XY mapMouseScroll;
    Building *jumpBuilding;
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *mSpr; // offset=12
    TbSprite *spr; // offset=16
    MyAnimBank *pIconsAnb; // offset=20
    MySprite *pIconsMSpr; // offset=24
    TbSprite *pIconsSpr; // offset=28
    TeamCircles circles; // offset=32
    BuildingPad buildingPad; // offset=82
    PaletteSelector actionPalette; // offset=95
    WindowPad winPad; // offset=108
    GroupPad groupPad; // offset=120
    GroupSelect group; // offset=155
    CreaturePad creaturePad; // offset=157
    EtherealScope eScope; // offset=176
    uint8_t noSwitch; // offset=187
    MainInterfacePad *mainPad; // offset=188
    BasicPad basicPad; // offset=192
    ClonePad clonePad; // offset=201
    LabPad labPad; // offset=214
};


class TurretScan : RangeScanner { // sizeof=53
    class TurretScan * TurretScan(class TurretScan *arg1);
    void PerGrid();
    class TurretScan * TurretScan(Building arg1);
    void (**__vfptr)();
    SLONG closestRange;
    Building turret;
    Thing *tgtThing; // offset=41
};

class SawmillScan : RangeScanner { // sizeof=53
    class SawmillScan * SawmillScan(class SawmillScan *arg1);
    void PerGrid();
    class SawmillScan * SawmillScan(Building arg1);
    void (**__vfptr)();
    SLONG bestValue;
    Building sawmill;
    Plant *tgtPlant; // offset=41
};

class FarmScan : RangeScanner { // sizeof=53
    class FarmScan * FarmScan(class FarmScan *arg1);
    void PerGrid();
    class FarmScan * FarmScan(Building arg1);
    void (**__vfptr)();
    SLONG bestValue;
    Building farm;
    Thing *tgt; // offset=41
};

class ShieldScan : RangeScanner { // sizeof=49
    class ShieldScan * ShieldScan(class ShieldScan *arg1);
    void BounceThingOffShield(MovingThing *arg1, BBOOL arg2);
    void PerGrid();
    class ShieldScan * ShieldScan(Building arg1);
    void (**__vfptr)();
    ULONG squareShieldRange;
    Building shield;
};

typedef class FarmScan FarmScan;

typedef class SawmillScan SawmillScan;

typedef class TurretScan TurretScan;

typedef class ShieldScan ShieldScan;

long GridTile::__defarg();
char unsigned Thing::IsNew();
long unsigned Thing::SquareTrueRangeTo( Thing * );
short Thing::DirTo( Thing * );
char unsigned Thing::IsSamePlayer( Thing * );
char unsigned Thing::BaseColor();
@ * Creature::__defarg();
short Creature::IsStasisForHowLong();
void Building::SetBusted();
void Building::ClearBusted();
void Building::SetDisabled();
void Building::ClearDisabled();
char unsigned Building::IsAGoopStorage();
long unsigned Building::TurretRange();
Thing * Event::__defarg();
char unsigned MapDisplay::IsGlassBuildings();
char unsigned IFCPlanetside::IsThingSelectedInPad( Thing * );
void IFCPlanetside::CloseActivePad();
void Creature::Free();
void Plant::Free();
near TurretScan::TurretScan( Building & );
void TurretScan::PerGrid();
near SawmillScan::SawmillScan( Building & );
void SawmillScan::PerGrid();
near FarmScan::FarmScan( Building & );
void FarmScan::PerGrid();
near ShieldScan::ShieldScan( Building & );
char unsigned PowerGraph::PowerToColor( short );
void ShieldScan::BounceThingOffShield( MovingThing *, char unsigned );
void ShieldScan::PerGrid();
void PowerGraph::Update( short, short, short );
void PowerGraph::Draw( long, long );
void Building::Draw( short, short );
void Building::Init( char unsigned, BuildingType, XY );
void Building::FinishBuilding();
char unsigned Building::Build( short unsigned, char unsigned );
void Building::Free();
void Building::StopAnyContinuousSound();
char unsigned Building::Damage( long, Thing * );
void Building::DisableBuilding();
void Building::StartWreck( PlSpec * );
void Building::UserUpgrade();
void Building::InitArray();
void Building::Resync();
void Building::Read( long & );
void Building::Write( long & );
long Building::ReadBuffer( Building * *, long, long, BioGame & );
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
long Building::WriteBuffer( Building * *, long, long, BioGame & );
char unsigned Building::Update();
void Building::UpdateAll();
char unsigned Building::operator ==( Building * );
extern void (near * const __vftbl[])();

#endif // BIO_BUILDING_HPP_
/******************************************************************************/
