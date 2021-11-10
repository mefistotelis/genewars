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

#include "mainpad.hpp"

class BasicPad : MainInterfacePad { // sizeof=22
public:
    class BasicPad * BasicPad(class BasicPad *arg1);
    void MapDraw();
    void Draw(SBYTE arg1);
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    class BasicPad * BasicPad();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

class BuildingPad : MainInterfacePad { // sizeof=26
public:
    //BuildingPad(BuildingPad *arg1);
    void ProjectPowerStationCircles();
    void Draw(SBYTE arg1);
    void MapDraw();
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    //BuildingPad();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    Building *b; // offset=4
};

class WindowPad : MainInterfacePad { // sizeof=49
public:
    //WindowPad(WindowPad *arg1);
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
    WindowPad(PaletteSelector arg1);
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    BBOOL canDoAction;
    SBYTE action;
    MyMinSprite mMs;
    PaletteSelector aPalette;
    PlSpec *pls; // offset=4
    XY tgt; // offset=8
    Thing *actionThing; // offset=12
    clock_t actionClock; // offset=16
};

class CreaturePad : MainInterfacePad { // sizeof=44
public:
    //CreaturePad(CreaturePad *arg1);
    void DrawAllPackMembers(UBYTE arg1);
    void Draw(SBYTE arg1);
    void MapDraw();
    BBOOL Update(SWORD arg1);
    void Close();
    void Init(Thing *arg1);
    CreaturePad(PaletteSelector arg1);
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    CreatureUserAction cuAction;
    MyMinSprite packMMs;
    PaletteSelector aPalette;
    Creature *c; // offset=4
    Thing *cuActionThing; // offset=8
    clock_t cuActionClock; // offset=12
};




#endif // BIO_PADS_HPP_
/******************************************************************************/
