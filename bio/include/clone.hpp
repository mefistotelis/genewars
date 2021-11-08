/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file clone.hpp
 *     Header file for clone.cpp.
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
#ifndef BIO_CLONE_HPP_
#define BIO_CLONE_HPP_

class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;


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


char unsigned Building::IsFunctional();
char unsigned Specialist::Valid();
char unsigned Specialist::IsOnTeam();
char unsigned Specialist::IsPlanetside();
char unsigned EventHelp::__defarg();
void IsoMapBuffer::SetNewXlatedTop( char unsigned, char unsigned );
char unsigned MapDisplay::IsFullScreen();
void MapDisplay::SetScrolled();
void IFCBase::SetPacket( char unsigned, short );
void IFCBase::SetPacket( char unsigned, short, short );
char unsigned IFCBase::PacketAction();
void IFCPlanetside::SetOnOffSwitch( char unsigned );
void ClonePad::Init( Thing * );
void ClonePad::Close();
char unsigned ClonePad::Update( short );
void ClonePad::Draw( char signed );
char signed ClonePad::FindCrewType( char signed & );
char signed ClonePad::FindTeamNum();
void ClonePad::CrewHelp( MyGadget * );
void ClonePad::TeamHelp( MyGadget * );
void ClonePad::DrawMainPanelEdge();
void ClonePad::DrawCrew();
void ClonePad::DrawTeam();
char signed ClonePad::FindBestSpecialist( char unsigned, char unsigned );
void ClonePad::AddSpecialist( char unsigned, char unsigned );
void ClonePad::RemoveSpecialist( char unsigned );

#endif // BIO_CLONE_HPP_
/******************************************************************************/
