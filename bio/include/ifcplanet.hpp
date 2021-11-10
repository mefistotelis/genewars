/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifcplanet.hpp
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
#ifndef BIO_IFCPLANET_HPP_
#define BIO_IFCPLANET_HPP_

#include "iface.hpp"

#include "bftypes.h"
#include "myspr.h"
#include "xy.hpp"

class MyGadget;
class Thing;

enum TeamCircleMode { // type=int8_t
    TC_OPENING = 0,
    TC_CLOSING,
    TC_NORMAL,
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

class IFCPlanetside : IFCBase { // sizeof=46
    //IFCPlanetside(IFCPlanetside *arg1);
    void DrawTgtFlag();
    void DrawBadBar(UBYTE arg1);
    void BarHelp(MyGadget *arg1);
    void MapHelp(MyGadget *arg1);
    void GeneralGadgetHelp(MyGadget *arg1);
    void CircleHelp(MyGadget *arg1);
    void TgtFlagEffect(XY arg1, Thing *tng2);
    void JumpToNextBuilding();
    void ClearInterfaceReferencesTo(Thing *tng1);
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
    BBOOL IsThingSelectedInPad(Thing *tng1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    IFCPlanetside(MyGadget *arg1);
    //void (**__vfptr)();
    //unsigned int *__vbptr;
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

#endif // BIO_IFCPLANET_HPP_
/******************************************************************************/
