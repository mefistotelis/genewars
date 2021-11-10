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
    //MainInterfacePad(MainInterfacePad *arg1); -- generate default copy constructor
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
    void Init(Thing *tng1);
    //MainInterfacePad(); -- generate default no-args constructor
    //void (**__vfptr)();
    static ULONG *padBmps[2];
    static MySprite *userPointer;
    static MyMinSprite userPointerMMs;
    static SWORD pointerDisplacement;
    static MyMinSprite pointerMMs;
    static BBOOL go;
    static MainInterfacePad *previousPad;
    static Thing *activeThing;
    ULONG **panelBmp; // offset=0
    PadBmp padBmpType; // offset=4
    uint8_t onOffLocked; // offset=5
    uint8_t flickOffOnly; // offset=6
    uint8_t normalPad; // offset=7
};

#endif // BIO_MAINPAD_HPP_
/******************************************************************************/
