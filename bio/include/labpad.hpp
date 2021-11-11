/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file labpad.hpp
 *     Header file for labpad.cpp.
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
#ifndef BIO_LABPAD_HPP_
#define BIO_LABPAD_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "printinfo.hpp"
#include "mainpad.hpp"
#include "creaturestat.hpp"

class LabPad : public MainInterfacePad { // sizeof=124
public:
    //LabPad(LabPad *arg1); -- generate default copy constructor
    BBOOL IsListScrolling();
    void KickOffNewSpeciesStuff();
    void DrawMainWindow();
    void DrawList();
    void DrawListCreature(CreatureSpecies arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void Draw(SBYTE arg1);
    void MapDraw();
    BBOOL Update(SWORD arg1);
    void Close();
    void Init(Thing *tng1);
    //LabPad(); -- generate default no-args constructor
    //void (**__vfptr)();
    //unsigned int *__vbptr;
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

#endif // BIO_LABPAD_HPP_
/******************************************************************************/
