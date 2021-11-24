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

#include "bftypes.h"
#include "myspr.h"
#include "xy.hpp"
#include "paletsel.hpp"
#include "pads.hpp"
#include "grouppad.hpp"
#include "clonepad.hpp"
#include "labpad.hpp"
#include "etherscope.hpp"
#include "iface.hpp"

class MyGadget;
class Thing;

enum TeamCircleMode { // type=int8_t
    TC_OPENING = 0,
    TC_CLOSING,
    TC_NORMAL,
};

class TeamCircles { // sizeof=63
    TeamCircleMode modes[5]; // offset=0
    SBYTE circleActive; // offset=5
    SBYTE circleFadeLevel; // offset=6
    MyMinSprite mMs[5]; // offset=7
    MyMinSprite staticMms[5]; // offset=32
    SBYTE circleFadeDelta; // offset=57
    BBOOL red[5]; // offset=58
public:
    void Init();
    void Update();
    void Draw();
    void Reset();
    void DrawTeamCircle(UBYTE arg1);
    void SelectCircle(UBYTE arg1);
    void StartStatic(UBYTE arg1, BBOOL arg2);
    void StopStatic(UBYTE arg1);
};

class IFCPlanetside : public IFCBase { // sizeof=1326
public:
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *mSpr; // offset=12
    TbSprite *spr; // offset=16
    MyAnimBank *pIconsAnb; // offset=20
    MySprite *pIconsMSpr; // offset=24
    TbSprite *pIconsSpr; // offset=28
    TeamCircles circles; // offset=32
    PaletteSelector actionPalette; // offset=95
    EtherealScope eScope; // offset=176
    uint8_t noSwitch:1; // offset=187 bit=0
    uint8_t onOffSwitchState:1; // offset=187 bit=1
    uint8_t helpState:1; // offset=187 bit=2
    MainInterfacePad *mainPad; // offset=188
    BasicPad basicPad; // offset=192
    LabPad labPad; // offset=214
    BuildingPad buildingPad; // offset=338
    WindowPad winPad; // offset=364
    CreaturePad creaturePad; // offset=413
    ClonePad clonePad; // offset=457
    GroupPad groupPad; // offset=632
    GroupSelect group; // offset=667
    Building *jumpBuilding; // offset=1289
    XY mapMouseScroll; // offset=1293
    MyMinSprite tgtFlagMMs; // offset=1297
    XY tgtFlagXY; // offset=1302
    UBYTE masterSoundVolume; // offset=1306
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=1307
public:
    IFCPlanetside(MyGadget *arg1);
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    BBOOL IsThingSelectedInPad(Thing *tng1);
    void CloseActivePad();
    void SetBarsRefresh(UBYTE arg1);
    void SetOnOffSwitch(BBOOL arg1);
    BBOOL IsOnOffSwitchOn();
    void ResetForNewGame();
    void DrawBadOMeter();
    void DrawGoopMeter();
    void DrawGameMap();
    void DrawAllBottomControls();
    void DisableAllCircles();
    void EnableAllCircles();
    void CyanFlicker(UBYTE arg1);
    void ClearInterfaceReferencesTo(Thing *tng1);
    void JumpToNextBuilding();
    void TgtFlagEffect(XY arg1, Thing *tng2);
    void CircleHelp(MyGadget *arg1);
    void GeneralGadgetHelp(MyGadget *arg1);
    void MapHelp(MyGadget *arg1);
    void BarHelp(MyGadget *arg1);
private:
    void DrawBadBar(UBYTE arg1);
    void DrawTgtFlag();
//public:
    //IFCPlanetside(IFCPlanetside &arg1); -- generate default copy constructor
};

#endif // BIO_IFCPLANET_HPP_
/******************************************************************************/
