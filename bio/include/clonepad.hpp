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

class ClonePad : MainInterfacePad { // sizeof=175
    //ClonePad(ClonePad *arg1);
    void RemoveSpecialist(UBYTE arg1);
    void AddSpecialist(UBYTE arg1, UBYTE arg2);
    SBYTE FindBestSpecialist(UBYTE arg1, UBYTE arg2);
    void TeamHelp(MyGadget *gadg);
    void CrewHelp(MyGadget *gadg);
    SBYTE FindTeamNum();
    SBYTE FindCrewType(SBYTE &arg1);
    void DrawAnim();
    void DrawCrew();
    void DrawTeam();
    void Close();
    void Draw(SBYTE arg1);
    void DrawMainPanelEdge();
    BBOOL Update(SWORD arg1);
    void Init(Thing *tng1);
    //ClonePad();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
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

#endif // BIO_CLONEPAD_HPP_
/******************************************************************************/
