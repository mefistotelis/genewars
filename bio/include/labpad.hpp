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
    Building *lab; // offset=4
    UBYTE makeStatus; // offset=8
    MyAnimBank *anb; // offset=9
    MySprite *mSpr; // offset=13
    TbSprite *spr; // offset=17
    TurnPrintInfo &nameTpi;
    TurnPrintInfo &tpi;
    char mainStr[64]; // offset=29
    MyMinSprite mainMMs; // offset=93
    SBYTE listPosition; // offset=98
    SBYTE scrollDir; // offset=99
    SBYTE scrollPhase; // offset=100
    SLONG sinTheta; // offset=101
    uint8_t leftActive:1; // offset=105 bit=0
    uint8_t rightActive:1; // offset=105 bit=1
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=106
public:
    LabPad();
    virtual void Init(Thing *tng1);
    virtual void Close();
    virtual BBOOL Update(SWORD arg1);
    virtual void MapDraw();
    virtual void Draw(SBYTE arg1);
private:
    void DrawListCreature(CreatureSpecies arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void DrawList();
    void DrawMainWindow();
    void KickOffNewSpeciesStuff();
    BBOOL IsListScrolling();
public:
    //LabPad(LabPad &arg1); -- generate default copy constructor
};

#endif // BIO_LABPAD_HPP_
/******************************************************************************/
