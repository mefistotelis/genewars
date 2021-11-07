/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file pads.hpp
 *     Header file for pads.cpp.
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
#ifndef BIO_PADS_HPP_
#define BIO_PADS_HPP_

enum PadBmp { // type=int8_t
    PADBMP_NORMAL = 0,
    PADBMP_GENELAB,
    PADBMP_CLONE,
    MAX_PADBMP,
};

typedef enum PadBmp PadBmp;

class SoundRequest { // sizeof=23
    BBOOL Valid();
    void Invalidate();
    SampleInfo *sampleInfo; // offset=0
    Thing *thing; // offset=4
    ULONG id; // offset=8
    ULONG pitch; // offset=12
    SampleID sampleNum; // offset=16
    UBYTE volume; // offset=18
    SBYTE loop; // offset=19
    UBYTE type; // offset=20
    UBYTE pan; // offset=21
    BBOOL makeSoft; // offset=22
};

typedef class SoundRequest SoundRequest;

class SampleBufferQueue { // sizeof=94
    void Reset();
    char * GetNext(SoundRequest *arg1);
    BBOOL Add(char *arg1, SoundRequest *arg2);
    UBYTE size;
    UBYTE first;
    char names[3][63];
    SoundRequest req[3];
};

typedef class SampleBufferQueue SampleBufferQueue;


class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;


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

class MainInterfacePad { // sizeof=10
    class MainInterfacePad * MainInterfacePad(class MainInterfacePad *arg1);
    void StopStaticNoise();
    void StartStaticNoise();
    void DrawStatic(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    void FinishViewerClip();
    void SetViewerClip();
    void SetPointerToFrame();
    void NullUserPointer();
    void ClearUserPointer();
    void SetUserPointer(SBYTE arg1);
    void SetNormalPad();
    void DrawBottomPanelText(char *arg1);
    void DrawMainPanelBmp(ULONG *arg1);
    void DrawBuildingStats(Building *arg1);
    void LoadBitmap(PadBmp arg1);
    void DrawPointerOverThing();
    void Close();
    void MapDraw();
    void DrawMainPanelEdge();
    void Draw(SBYTE arg1);
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    class MainInterfacePad * MainInterfacePad();
    void (**__vfptr)();
    ULONG *padBmps[2];
    MySprite *userPointer;
    MyMinSprite userPointerMMs;
    SWORD pointerDisplacement;
    MyMinSprite pointerMMs;
    BBOOL go;
    MainInterfacePad *previousPad;
    Thing *activeThing;
    ULONG **panelBmp; // offset=0
    PadBmp padBmpType; // offset=4
    uint8_t onOffLocked; // offset=5
    uint8_t flickOffOnly; // offset=6
    uint8_t normalPad; // offset=7
};

typedef class MainInterfacePad MainInterfacePad;

typedef struct MyGadget MyGadget;

class TeamCircles { // sizeof=63
    void StopStatic(UBYTE arg1);
    void StartStatic(UBYTE arg1, BBOOL arg2);
    void SelectCircle(UBYTE arg1);
    void DrawTeamCircle(UBYTE arg1);
    void Reset();
    void Draw();
    void Update();
    void Init();
    BBOOL red[4];
    SBYTE circleFadeDelta;
    TeamCircleMode modes[4]; // offset=0
    SBYTE circleActive; // offset=5
    SBYTE circleFadeLevel; // offset=6
    MyMinSprite mMs[4]; // offset=7
    MyMinSprite staticMms[4]; // offset=32
};

typedef class TeamCircles TeamCircles;

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

class BasicPad : MainInterfacePad { // sizeof=22
    class BasicPad * BasicPad(class BasicPad *arg1);
    void MapDraw();
    void Draw(SBYTE arg1);
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    class BasicPad * BasicPad();
    void (**__vfptr)();
    unsigned int *__vbptr;
};

typedef class BasicPad BasicPad;

class LabPad : MainInterfacePad { // sizeof=124
    class LabPad * LabPad(class LabPad *arg1);
    BBOOL IsListScrolling();
    void KickOffNewSpeciesStuff();
    void DrawMainWindow();
    void DrawList();
    void DrawListCreature(CreatureSpecies arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void Draw(SBYTE arg1);
    void MapDraw();
    BBOOL Update(SWORD arg1);
    void Close();
    void Init(Thing *arg1);
    class LabPad * LabPad();
    void (**__vfptr)();
    unsigned int *__vbptr;
    uint8_t rightActive;
    uint8_t leftActive;
    SLONG sinTheta;
    SBYTE scrollPhase;
    SBYTE scrollDir;
    SBYTE listPosition;
    MyMinSprite mainMMs;
    char mainStr[63];
    TurnPrintInfo tpi;
    TurnPrintInfo nameTpi;
    Building *lab; // offset=4
    UBYTE makeStatus; // offset=8
    MyAnimBank *anb; // offset=9
    MySprite *mSpr; // offset=13
    TbSprite *spr; // offset=17
};

typedef class LabPad LabPad;

class BuildingPad : MainInterfacePad { // sizeof=26
    class BuildingPad * BuildingPad(class BuildingPad *arg1);
    void ProjectPowerStationCircles();
    void Draw(SBYTE arg1);
    void MapDraw();
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    class BuildingPad * BuildingPad();
    void (**__vfptr)();
    unsigned int *__vbptr;
    Building *b; // offset=4
};

typedef class BuildingPad BuildingPad;

class WindowPad : MainInterfacePad { // sizeof=49
    class WindowPad * WindowPad(class WindowPad *arg1);
    void SetXActionSelectPointer();
    void SetActionSelectPointer();
    void DrawPolyFoundation(XY arg1, UBYTE arg2, UBYTE arg3);
    void DrawArchitectFoundation();
    void AbortAction();
    void StartAction();
    void Draw(SBYTE arg1);
    void MapDraw();
    BBOOL Update(SWORD arg1);
    void Close();
    void Init(Thing *arg1);
    class WindowPad * WindowPad(PaletteSelector arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    BBOOL canDoAction;
    SBYTE action;
    MyMinSprite mMs;
    PaletteSelector aPalette;
    PlSpec *pls; // offset=4
    XY tgt; // offset=8
    Thing *actionThing; // offset=12
    clock_t actionClock; // offset=16
};

typedef class WindowPad WindowPad;

class CreaturePad : MainInterfacePad { // sizeof=44
    class CreaturePad * CreaturePad(class CreaturePad *arg1);
    void DrawAllPackMembers(UBYTE arg1);
    void Draw(SBYTE arg1);
    void MapDraw();
    BBOOL Update(SWORD arg1);
    void Close();
    void Init(Thing *arg1);
    class CreaturePad * CreaturePad(PaletteSelector arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    CreatureUserAction cuAction;
    MyMinSprite packMMs;
    PaletteSelector aPalette;
    Creature *c; // offset=4
    Thing *cuActionThing; // offset=8
    clock_t cuActionClock; // offset=12
};

typedef class CreaturePad CreaturePad;

class ClonePad : MainInterfacePad { // sizeof=175
    class ClonePad * ClonePad(class ClonePad *arg1);
    void RemoveSpecialist(UBYTE arg1);
    void AddSpecialist(UBYTE arg1, UBYTE arg2);
    SBYTE FindBestSpecialist(UBYTE arg1, UBYTE arg2);
    void TeamHelp(MyGadget *arg1);
    void CrewHelp(MyGadget *arg1);
    SBYTE FindTeamNum();
    SBYTE FindCrewType(SBYTE *arg1);
    void DrawAnim();
    void DrawCrew();
    void DrawTeam();
    void Close();
    void Draw(SBYTE arg1);
    void DrawMainPanelEdge();
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    class ClonePad * ClonePad();
    void (**__vfptr)();
    unsigned int *__vbptr;
    BBOOL launchButtonActive;
    BBOOL closeButtonActive;
    MyMinSprite mMs;
    Building *clone; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *mSpr; // offset=12
    TbSprite *spr; // offset=16
    SBYTE pointerOverSpec; // offset=20
    SBYTE specType; // offset=21
    MyAnimBank *specAnb[3][3]; // offset=22
    MySprite *specSpr[3][3]; // offset=86
};

typedef class ClonePad ClonePad;

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

char unsigned Thing::IsIndy();
long Thing::Altitude();
long Thing::AltAboveGround();
char unsigned Thing::IsMovable();
char unsigned Thing::IsMovingThing();
char unsigned Thing::IsFlying();
void Thing::Draw( XY );
char unsigned Thing::IsScreenPointInside( short, short, short, short );
void Thing::DrawOnMap( short, short );
void Thing::Init( ThingType, XY, char unsigned, short );
void Thing::Discover();
void Thing::Undiscover();
char unsigned Thing::Damage( long, Thing * );
void Thing::StartFightWith( Thing * );
char unsigned Thing::IsStasis();
char unsigned Thing::IsIgnoreClutter();
void StaticThing::DrawOnMap( short, short );
void StaticThing::Resync();
char unsigned StaticThing::IsStaticallyDrawn();
long Creature::Lifespan();
char unsigned Creature::IsPlayerActive();
char unsigned Creature::IsTurfSet();
short unsigned Creature::TurfRange();
char unsigned Creature::GetYesPitch();
char unsigned Building::IsDead();
char unsigned Building::IsWrecking();
char unsigned Building::IsAPowerGenerator();
long unsigned Building::MaxGoopStorage();
long unsigned Building::MaxSawmillWood();
long unsigned Building::PowerStationRange();
long unsigned Building::ShieldRange();
char unsigned PlSpec::IsActionAbortable();
char unsigned PlSpec::CanGetOrder();
long PlSpec::ShepherdCatchRange();
long PlSpec::FarmerPlantingRange();
long PlSpec::FarmerHarvestRange();
long PlSpec::LumberjackFellRange();
long PlSpec::FarmerPackCapacity();
char unsigned PlSpec::GetGun( char unsigned );
char unsigned MapDisplay::__defarg();
MyMinSprite * MapDisplay::__defarg();
MyMinSprite * MapDisplay::__defarg();
char unsigned MapDisplay::IsOnScreen( short, short );
char unsigned MapDisplay::IsScrolling();
void MapDisplay::SetDrawFoundations();
void MapDisplay::ClearDrawFoundations();
char unsigned MapDisplay::IsDrawFoundations();
void IFCBase::SetPacket( char unsigned, short, short, short );
void IFCBase::SetPacket( char unsigned, short, short, short, short );
void IFCBase::SetPacket( char unsigned, short, short, short, short, short );
void IFCBase::SetPacketDataBlast( void * );
char unsigned PaletteSelector::IsSelectActive();
void PaletteSelector::ClearSelect();
void GroupSelect::ResetGroup();
void MainInterfacePad::ClearUserPointer();
void MainInterfacePad::NullUserPointer();
void MainInterfacePad::SetViewerClip();
void BoundMmsToMySprite( MyMinSprite &, MySprite & );
void Thing::Draw( short, short );
MyFrame * Thing::GetFrame();
void Thing::Sound( SampleID, char unsigned, char unsigned, char unsigned, long unsigned );
void Thing::StopSound( SampleID );
void Thing::FadeSound( SampleID, short, char unsigned );
void Thing::FadeOutSound( SampleID, char unsigned );
char unsigned Thing::IsSoundPlaying( SampleID );
void StaticThing::DrawNoDraw( short, short );
char * Building::GetName();
void TeamCircles::Reset();
long Creature::QualityXlate( char signed, long );
ASpecies & Creature::Species();
Gene & Creature::Gene();
char * Creature::GetName();
SampleID Creature::GetYesSample();
void Creature::SoundYesSample();
void IFCPlanetside::SetBarsRefresh( char unsigned );
void MainInterfacePad::Init( Thing * );
void MainInterfacePad::Close();
char unsigned MainInterfacePad::Update( short );
void MainInterfacePad::SetPointerToFrame();
void MainInterfacePad::SetUserPointer( char signed );
void MainInterfacePad::SetNormalPad();
void MainInterfacePad::LoadBitmap( PadBmp );
void MainInterfacePad::DrawMainPanelBmp( long unsigned * );
void MainInterfacePad::DrawMainPanelEdge();
void MainInterfacePad::DrawStatic( long, long, long, long );
void MainInterfacePad::DrawBuildingStats( Building * );
void MainInterfacePad::DrawBottomPanelText( char * );
void MainInterfacePad::DrawPointerOverThing();
void MainInterfacePad::FinishViewerClip();
void MainInterfacePad::__vfthunk( Thing * );
char unsigned MainInterfacePad::__vfthunk( short );
void MainInterfacePad::__vfthunk( char signed );
void MainInterfacePad::__vfthunk();
void MainInterfacePad::MapDraw();
void BasicPad::Init( Thing * );
char unsigned BasicPad::Update( short );
void BasicPad::MapDraw();
void BasicPad::Draw( char signed );
near GroupPad::GroupPad();
void GroupPad::Init( Thing * );
char unsigned GroupPad::Update( short );
void GroupPad::MapDraw();
void GroupPad::Draw( char signed );
void WindowPad::Init( Thing * );
void WindowPad::Close();
void WindowPad::MapDraw();
void WindowPad::DrawPolyFoundation( XY, char unsigned, char unsigned );
void WindowPad::DrawArchitectFoundation();
void WindowPad::Draw( char signed );
char unsigned WindowPad::Update( short );
void WindowPad::StartAction();
void WindowPad::AbortAction();
void BuildingPad::Init( Thing * );
char unsigned BuildingPad::Update( short );
void BuildingPad::MapDraw();
void BuildingPad::Draw( char signed );
void CreaturePad::Init( Thing * );
void CreaturePad::Close();
char unsigned CreaturePad::Update( short );
near Building::Building();
near StaticThing::StaticThing();
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
near Thing::Thing();
void CreaturePad::MapDraw();
void CreaturePad::DrawAllPackMembers( char unsigned );
void CreaturePad::Draw( char signed );
extern void (near * const __vftbl[])();

#endif // BIO_PADS_HPP_
/******************************************************************************/
