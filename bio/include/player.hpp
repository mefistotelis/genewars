/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file player.hpp
 *     Header file for player.cpp.
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
#ifndef BIO_PLAYER_HPP_
#define BIO_PLAYER_HPP_

enum PlayerRace { // type=int8_t
    RACE_HUMAN = 0,
    RACE_SAURIAN,
    RACE_BOHEMIAN,
    RACE_SCHNOZZOID,
    MAX_PLAYER_RACE,
};

typedef enum PlayerRace PlayerRace;

enum SpecialistClass { // type=int8_t
    CLASS_ARCHITECT = 0,
    CLASS_FARMER,
    CLASS_SCIENTIST,
    CLASS_SHEPHERD,
    MAX_SPEC_CLASS,
};

typedef enum SpecialistClass SpecialistClass;

class Specialist { // sizeof=36
public:
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

typedef class Specialist Specialist;

typedef class Player Player;

class Player { // sizeof=233
    class Player * operator=(class Player *arg1);
    class Player * Player(class Player *arg1);
    void pPA_WIN_LEVEL(Packet *arg1);
    void pPA_LEAVE_STAT_SCREEN(Packet *arg1);
    void pPA_JOINSESSION(Packet *arg1);
    void pPA_SETUPSTUFF(Packet *arg1);
    void pPA_SESSIONINFOREQUEST(Packet *arg1);
    void pPA_CREATURE_ACTION(Packet *arg1);
    void pPA_SET_SHIELD_MODE(Packet *arg1);
    void pPA_SET_SHEPHERD_THING(Packet *arg1);
    void pPA_IFC_ABORT_SPECIAL(Packet *arg1);
    void pPA_ACTIVATE_BUILDING(Packet *arg1);
    void pPA_UPGRADE_BUILDING(Packet *arg1);
    void pPA_GROUP(Packet *arg1);
    void pPA_SET_SENTINEL_ZONE(Packet *arg1);
    void pPA_IFC_MOVE_GO(Packet *arg1);
    void pPA_CHEAT(Packet *arg1);
    void pPA_RANDOM_SEED(Packet *arg1);
    void pPA_ADD_PLANT(Packet *arg1);
    void pPA_NEWSPECIES(Packet *arg1);
    void pPA_SET_DROP_ZONE(Packet *arg1);
    void pPA_CREATE_A_CREATURE(Packet *arg1);
    void pPA_CREATE_CREATURE(Packet *arg1);
    void pPA_LANDING(Packet *arg1);
    void pPA_REMOVE_TEAM_MEMBER(Packet *arg1);
    void pPA_ADD_TEAM_MEMBER(Packet *arg1);
    void pPA_IFC_GO(Packet *arg1);
    void pPA_ABORT_MOVE(Packet *arg1);
    void pPA_MOVE_TO(Packet *arg1);
    UBYTE BaseColor();
    BBOOL IsSamePlayer(Thing *arg1);
    BBOOL IsEnemy(Thing *arg1);
    void OverlayInto(Player *arg1);
    BBOOL DataRequestFromHost(void *arg1, SLONG arg2, char arg3);
    void SetTargetPointer();
    void SetPlayerPointer();
    SBYTE next_tool(SBYTE arg1, Specialist *arg2);
    void DisplayEtherealPoints();
    void EtherealPoints();
    void PaletteFromTerraform();
    void UpdateBase(UBYTE arg1);
    void UpdateTeam();
    SBYTE GetNum(PlSpec *arg1);
    PlSpec * GetTeam(UBYTE arg1);
    void ResetTeamLandings();
    void LandTeamNotOnPlanet();
    void ClearTeamNotOnPlanet();
    BBOOL PrepTeamForPlanetside(SLONG arg1);
    void YankWholeTeamOffPlanet();
    void YankTeamMemberOffPlanet(UBYTE arg1);
    void RemoveTeamMember(SWORD arg1, BBOOL arg2);
    BBOOL AddTeamMember(SWORD arg1);
    void DefaultTeam();
    void AddGood(SLONG arg1, Thing *arg2);
    void AddBad(SLONG arg1, Thing *arg2);
    void AddBad(SLONG arg1, XY arg2);
    void FreeAllAllocs();
    void Reset();
    BBOOL Resync();
    void Invalidate();
    void MakeValid();
    BBOOL Valid();
    void Init();
    class Player * Player(UBYTE arg1);
    UBYTE ControlType; // offset=0
    UBYTE idx; // offset=1
    BBOOL computer; // offset=2
    SBYTE teamNum; // offset=3
    SBYTE teamIDX[4]; // offset=4
    XY dropSite; // offset=9
    SLONG ePoints; // offset=13
    SLONG ePointsGoodBad; // offset=17
    TheShip theShip; // offset=21
    ResearchGrid grid; // offset=26
    TheBase theBase; // offset=161
    PlayerRace race; // offset=226
    UBYTE dead; // offset=227
    UBYTE pad[2]; // offset=228
    SBYTE techLevel; // offset=231
    UBYTE solarSystem; // offset=232
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

void Creature::SetPlayerActive( CreatureUserAction );
char unsigned Plant::IsDead();
void Specialist::Invalidate();
void Specialist::SetOnTeam();
void Specialist::ClearOnTeam();
void Specialist::SetPlanetside();
void Specialist::ClearPlanetside();
void PlSpec::InterruptMove();
void PlSpec::SetupMoveToTgt( XY );
void Player::DefaultTeam();
void Player::ResetTeamLandings();
char unsigned Player::AddTeamMember( short );
void Player::RemoveTeamMember( short, char unsigned );
near Player::Player( char unsigned );
void Player::Init();
void Player::OverlayInto( Player * );
void Player::AddBad( long, XY );
void Player::AddBad( long, Thing * );
void Player::AddGood( long, Thing * );
char unsigned Player::Resync();
void Player::FreeAllAllocs();
void Player::PaletteFromTerraform();
void Player::EtherealPoints();
void Player::DisplayEtherealPoints();
char unsigned Player::PrepTeamForPlanetside( long );
void Player::ClearTeamNotOnPlanet();
void Player::LandTeamNotOnPlanet();
void Player::YankTeamMemberOffPlanet( char unsigned );
void Player::YankWholeTeamOffPlanet();
void Player::Reset();
char signed Player::next_tool( char signed, Specialist & );
char unsigned Player::DataRequestFromHost( void *, long );
void Player::pPA_MOVE_TO( Packet * );
void Player::pPA_IFC_GO( Packet * );
void Player::pPA_IFC_ABORT_SPECIAL( Packet * );
void Player::pPA_IFC_MOVE_GO( Packet * );
void Player::pPA_ADD_TEAM_MEMBER( Packet * );
void Player::pPA_REMOVE_TEAM_MEMBER( Packet * );
void Player::pPA_SET_DROP_ZONE( Packet * );
void Player::pPA_LANDING( Packet * );
void Player::pPA_ABORT_MOVE( Packet * );
void Player::pPA_RANDOM_SEED( Packet * );
void Player::pPA_CREATE_A_CREATURE( Packet * );
void Player::pPA_CHEAT( Packet * );
void Player::pPA_GROUP( Packet * );
void Player::pPA_SET_SENTINEL_ZONE( Packet * );
void Player::pPA_SET_SHEPHERD_THING( Packet * );
void Player::pPA_UPGRADE_BUILDING( Packet * );
void Player::pPA_ACTIVATE_BUILDING( Packet * );
void Player::pPA_SET_SHIELD_MODE( Packet * );
void Player::pPA_CREATURE_ACTION( Packet * );
void Player::pPA_SESSIONINFOREQUEST( Packet * );
void Player::pPA_SETUPSTUFF( Packet * );
void Player::pPA_JOINSESSION( Packet * );
near Plant::Plant();
extern void (near * const __vftbl[])();
void Player::pPA_LEAVE_STAT_SCREEN( Packet * );
void Player::pPA_WIN_LEVEL( Packet * );

char unsigned Player::Valid();
PlSpec * Player::GetTeam( char unsigned );
Thing * Player::__defarg();
Thing * Player::__defarg();
char unsigned Player::IsEnemy( Thing * );
char unsigned Player::BaseColor();
char signed Player::GetNum( PlSpec * );
void Player::SetPlayerPointer();
void Player::Invalidate();
char unsigned Player::IsSamePlayer( Thing * );
char unsigned Player::__defarg();
Player & Player::.tdctor();
long Player::__defarg();
void Player::MakeValid();
Player & Player::operator =( Player const & );

#endif // BIO_PLAYER_HPP_
/******************************************************************************/
