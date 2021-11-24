/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file padmain.hpp
 *     Header file for padmain.cpp.
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
#ifndef BIO_MAINPAD_HPP_
#define BIO_MAINPAD_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "xy.hpp"

class Building;
class Thing;

enum PadBmp { // type=int8_t
    PADBMP_NORMAL = 0,
    PADBMP_GENELAB,
    PADBMP_CLONE,
    MAX_PADBMP,
};

class MainInterfacePad { // sizeof=10
public:
    ULONG **panelBmp; // offset=0
    PadBmp padBmpType; // offset=4
    uint8_t normalPad:1; // offset=5 bit=0
    uint8_t flickOffOnly:1; // offset=5 bit=1
    uint8_t onOffLocked:1; // offset=5 bit=2
public:
    static Thing *activeThing;
    static MainInterfacePad *previousPad;
    static BBOOL go;
    static MyMinSprite pointerMMs;
    static SWORD pointerDisplacement;
    static MyMinSprite userPointerMMs;
    static MySprite *userPointer;
    static ULONG *padBmps[3];
//internal:
    //void (**__vfptr)(); // offset=6
public:
    MainInterfacePad();
    virtual void Init(Thing *tng1);
    virtual BBOOL Update(SWORD arg1);
    virtual void Draw(SBYTE arg1) = 0;
    virtual void DrawMainPanelEdge();
    virtual void MapDraw();
    virtual void Close();
    virtual void DrawPointerOverThing();
    void LoadBitmap(PadBmp arg1);
    void DrawBuildingStats(Building *arg1);
    void DrawMainPanelBmp(ULONG *arg1);
    void DrawBottomPanelText(char *arg1);
    void SetNormalPad();
    void SetUserPointer(SBYTE arg1);
    void ClearUserPointer();
    void NullUserPointer();
    void SetPointerToFrame();
    void SetViewerClip();
    void FinishViewerClip();
    void DrawStatic(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    void StartStaticNoise();
    void StopStaticNoise();
    //MainInterfacePad(MainInterfacePad const &arg1); -- generate default copy constructor
};

#endif // BIO_MAINPAD_HPP_
/******************************************************************************/
