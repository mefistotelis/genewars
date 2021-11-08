/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file iface.hpp
 *     Header file for iface.cpp.
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
#ifndef BIO_IFACE_HPP_
#define BIO_IFACE_HPP_

enum TeamCircleMode { // type=int8_t
    TC_OPENING = 0,
    TC_CLOSING,
    TC_NORMAL,
};

typedef enum TeamCircleMode TeamCircleMode;

enum PaletteSelectorMode { // type=int8_t
    PSM_BUILDINGS = 0,
    PSM_PLANTS,
    PSM_SHEPHERD,
    MAX_PSM,
};

typedef enum PaletteSelectorMode PaletteSelectorMode;

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

struct Normal { // sizeof=12
    struct Normal * Normal(struct Normal *arg1);
    SLONG NX; // offset=0
    SLONG NY; // offset=4
    SLONG NZ; // offset=8
};

typedef struct Normal Normal;

typedef class ThingIDX ThingIDX;

typedef class Player Player;

class BuilderIFC { // sizeof=18
    SBYTE go; // offset=0
    SBYTE object; // offset=1
    SWORD freq; // offset=2
    SWORD freqCount; // offset=4
    SWORD phase; // offset=6
    SWORD foundationAlt; // offset=8
    XY saveOriginalTgt; // offset=10
    SLONG wreckSectorAt; // offset=14
};

typedef class BuilderIFC BuilderIFC;

typedef class TheBase TheBase;

class FarmerIFC { // sizeof=16
    SBYTE go; // offset=0
    PlantSpecies species; // offset=1
    SWORD freq; // offset=2
    SWORD freqCount; // offset=4
    XY targetXY; // offset=6
    SWORD range; // offset=10
    SLONG zoneRange; // offset=12
};

typedef class FarmerIFC FarmerIFC;

class ShepherdIFC { // sizeof=10
    SBYTE go; // offset=0
    XY targetXY; // offset=1
    SLONG zoneRange; // offset=5
    HerdMode mode; // offset=9
};

typedef class ShepherdIFC ShepherdIFC;

class PLSInterface { // sizeof=22
    class PLSInterface * operator=(class PLSInterface *arg1);
    SBYTE submode; // offset=0
    ThingIDX thingTgt; // offset=1
    ShepherdIFC shepherd; // offset=4
    FarmerIFC farmer; // offset=5
    CowboyIFC cowboy; // offset=6
    BuilderIFC builder; // offset=7
    SBYTE go; // offset=8
};

typedef class PLSInterface PLSInterface;



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


class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;


class IFCBase { // sizeof=11
    class IFCBase * IFCBase(class IFCBase *arg1);
    class IFCBase * IFCBase();
    void ClearMousePointer();
    void SetupColorLookups();
    BBOOL IsCurrent();
    void NewInterface(IFCBase *arg1);
    void SetupPacket(Packet *arg1);
    Packet * GetPacket();
    UBYTE PacketAction();
    void SetPacketDataBlast(void *arg1);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4, SWORD arg5, SWORD arg6);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4, SWORD arg5);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3);
    void SetPacket(UBYTE arg1, SWORD arg2);
    void SetPacket(UBYTE arg1);
    void Draw();
    void Update();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    Packet *packet;
    SWORD gadID;
    BBOOL fullCopyToVRAM;
    IFCBase *pullOut;
    IFCBase *plugIn;
    IFCPaletteSetMode paletteSetMode; // offset=0
    BBOOL paletteSet; // offset=1
    UBYTE *palette; // offset=2
    uint8_t canPause; // offset=6
};

typedef class IFCBase IFCBase;

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

typedef class EtherealScope EtherealScope;

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

void Packet::SetPacket( char unsigned, short, short, short );
char unsigned Thing::__defarg();
char unsigned Thing::__defarg();
char unsigned Creature::IsFrozen();
char unsigned Creature::CanGetOrders();
void Creature::ClearPlayerActive();
long Creature::ViewScale8();
char unsigned PlSpec::IsFullyCloaked();
char unsigned IsoMapBuffer::__defarg();
void IsoMapBuffer::Draw( char unsigned );
void MapDisplay::SetCanSelectThing();
void MapDisplay::ClearCanSelectThing();
char unsigned MapDisplay::IsRegisteredRightClick();
void MapDisplay::SetRegisteredRightClick();
void MapDisplay::ClearRegisteredRightClick();
char unsigned MapDisplay::IsModified();
void MapDisplay::ToggleGlassBuildings();
void IFCBase::SetPacket( char unsigned );
void InfoRequester::Invalidate();
char unsigned InfoRequester::Valid();
near PaletteSelector::PaletteSelector();
void GroupSelect::Init();
void GroupSelect::Close();
char unsigned GroupSelect::IsAGroupCurrentlySelected();
char unsigned GroupSelect::IsGroupSelecting();
void GroupSelect::AddIdxToGroup( short );
char unsigned GroupSelect::IsAnchorGroupSelecting();
void GroupSelect::SetGroupSelecting();
void GroupSelect::ClearGroupSelecting();
void GroupSelect::SetAnchorGroupSelecting( short, short );
void GroupSelect::ClearAnchorGroupSelecting();
void GroupSelect::SetTarget( XY );
near BasicPad::BasicPad();
near WindowPad::WindowPad( PaletteSelector & );
near BuildingPad::BuildingPad();
near CreaturePad::CreaturePad( PaletteSelector & );
near ClonePad::ClonePad();
near EtherealScope::EtherealScope();
void EtherealScope::Init();
TheBase & Thing::Base();
char unsigned Building::IsDamaged();
EtherealZone & Effect::GetEZone();
long PlSpec::ArchitectBuildCost( BuildingType );
char unsigned TurnPrintInfo::Print();
char signed GroupSelect::ActionOn( Thing *, char unsigned );
char unsigned GroupSelect::Update( short & );
void GroupSelect::Draw();
void GroupSelect::RemoveIdxFromGroup( short );
char unsigned GroupSelect::GroupSelectThings();
char unsigned GroupSelect::SetGroupSwitchTo();
void GroupSelect::DrawGroupSelected();
void GroupSelect::AssignXYToTeam( XY, char unsigned, char unsigned );
void GroupSelect::AssignXYToGroup( XY, short *, short, char unsigned, char unsigned );
void GroupSelect::AssignTargetToGroup( Thing *, short *, short, char unsigned, char unsigned, char unsigned );
void GroupSelect::SwitchOffGroup( short *, short, char unsigned, char unsigned );
void EtherealScope::Draw();
void TeamCircles::Init();
void TeamCircles::Update();
void PaletteSelector::SetSelectFilter( char unsigned );
void PaletteSelector::RestoreSelectFilter();
void TeamCircles::Draw();
void TeamCircles::StartStatic( char unsigned, char unsigned );
void TeamCircles::StopStatic( char unsigned );
void TeamCircles::DrawTeamCircle( char unsigned );
void TeamCircles::SelectCircle( char unsigned );
void PaletteSelector::SlideOpen();
void PaletteSelector::SlideClose();
void PaletteSelector::Init();
void PaletteSelector::Create( Thing * );
void PaletteSelector::Close();
void PaletteSelector::LockPalette();
void PaletteSelector::UnlockPalette();
char signed PaletteSelector::GetSelected();
void PaletteSelector::CreateBuildingMenu();
void PaletteSelector::CreatePlantMenu();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void PaletteSelector::CreateShepherdMenu();
char unsigned PaletteSelector::Update( short );
void PaletteSelector::Draw();
near IFCPlanetside::IFCPlanetside( MyGadget * );
void IFCPlanetside::CyanFlicker( char unsigned );
void IFCPlanetside::TgtFlagEffect( XY, Thing * );
void IFCPlanetside::DisableAllCircles();
void IFCPlanetside::EnableAllCircles();
void IFCPlanetside::PlugIn();
void IFCPlanetside::PullOut();
void IFCPlanetside::ClearInterfaceReferencesTo( Thing * );
void IFCPlanetside::JumpToNextBuilding();
void IFCPlanetside::Update();
void IFCPlanetside::DrawTgtFlag();
void IFCPlanetside::Draw();
void IFCPlanetside::DrawBadBar( char unsigned );
void IFCPlanetside::DrawGameMap();
void IFCPlanetside::DrawBadOMeter();
void IFCPlanetside::DrawGoopMeter();
void IFCPlanetside::DrawAllBottomControls();
void IFCPlanetside::ResetForNewGame();
void IFCPlanetside::CircleHelp( MyGadget * );
void IFCPlanetside::GeneralGadgetHelp( MyGadget * );
void IFCPlanetside::BarHelp( MyGadget * );
void IFCPlanetside::MapHelp( MyGadget * );
void InfoRequester::DrawPic( long, long );
near InfoRequester::InfoRequester();
void InfoRequester::Create( char *, char *, char *, long, InfoRequesterStyle );
char unsigned InfoRequester::Update();
void InfoRequester::Draw();
void DrawRangeVSprite( short, short, short, short, long, long, TbSprite *, TbSprite * );
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
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
void DrawRangeHSprite( short, short, short, short, long, long, TbSprite *, TbSprite * );
void DrawRangeVBar( short, short, short, short, long, long, char unsigned, char unsigned );
void DrawRangeHBar( short, short, short, short, long, long, char unsigned );
void DrawRangeHBarDrawFlags( short, short, short, short, long, long, char unsigned, short unsigned );

#endif // BIO_IFACE_HPP_
/******************************************************************************/
