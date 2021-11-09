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

class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;


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


void BoundMmsToMySprite( MyMinSprite &, MySprite & );

#endif // BIO_PADS_HPP_
/******************************************************************************/
