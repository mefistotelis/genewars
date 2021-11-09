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

enum PaletteSelectorMode { // type=int8_t
    PSM_BUILDINGS = 0,
    PSM_PLANTS,
    PSM_SHEPHERD,
    MAX_PSM,
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

void DrawRangeVSprite( short, short, short, short, long, long, TbSprite *, TbSprite * );
void DrawRangeHSprite( short, short, short, short, long, long, TbSprite *, TbSprite * );
void DrawRangeVBar( short, short, short, short, long, long, char unsigned, char unsigned );
void DrawRangeHBar( short, short, short, short, long, long, char unsigned );
void DrawRangeHBarDrawFlags( short, short, short, short, long, long, char unsigned, short unsigned );

#endif // BIO_IFACE_HPP_
/******************************************************************************/
