/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file clonepad.hpp
 *     Header file for clonepad.cpp.
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
#ifndef BIO_CLONEPAD_HPP_
#define BIO_CLONEPAD_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "mainpad.hpp"

class Building;
class MyGadget;

class ClonePad : public MainInterfacePad { // sizeof=175
    Building *clone; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *mSpr; // offset=12
    TbSprite *spr; // offset=16
    SBYTE pointerOverSpec; // offset=20
    SBYTE specType; // offset=21
    MyAnimBank *specAnb[4][4]; // offset=22
    MySprite *specSpr[4][4]; // offset=86
    MyMinSprite mMs; // offset=150
    BBOOL closeButtonActive; // offset=155
    BBOOL launchButtonActive; // offset=156
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=157
public:
    //ClonePad(); -- generate default no-args constructor
    virtual void Init(Thing *tng1);
    virtual BBOOL Update(SWORD arg1);
    void DrawMainPanelEdge();
    virtual void Draw(SBYTE arg1);
    virtual void Close();
    void DrawTeam();
    void DrawCrew();
    void DrawAnim();
    SBYTE FindCrewType(SBYTE &arg1);
    SBYTE FindTeamNum();
    void CrewHelp(MyGadget *arg1);
    void TeamHelp(MyGadget *arg1);
    SBYTE FindBestSpecialist(UBYTE arg1, UBYTE arg2);
    void AddSpecialist(UBYTE arg1, UBYTE arg2);
    void RemoveSpecialist(UBYTE arg1);
    //ClonePad(ClonePad &pad1); -- generate default clone constructor
};

#endif // BIO_CLONEPAD_HPP_
/******************************************************************************/
