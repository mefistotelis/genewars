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
#include "paletsel.hpp"
#include "creaturestat.hpp"
#include <ctime>

class PlSpec;
class Building;
class Creature;

class BasicPad : public MainInterfacePad { // sizeof=22
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=4
public:
    BasicPad();
    virtual void Init(Thing *tng1);
    virtual BBOOL Update(SWORD arg1);
    virtual void Draw(SBYTE arg1);
    virtual void MapDraw();
    //BasicPad(BasicPad &arg1); -- generate default copy constructor
};

class BuildingPad : public MainInterfacePad { // sizeof=26
    Building *b; // offset=4
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=8
public:
    BuildingPad();
    virtual void Init(Thing *tng1);
    virtual BBOOL Update(SWORD arg1);
    virtual void MapDraw();
    virtual void Draw(SBYTE arg1);
    void ProjectPowerStationCircles();
    //BuildingPad(BuildingPad &arg1); -- generate default copy constructor
};

class WindowPad : public MainInterfacePad { // sizeof=49
    PlSpec *pls; // offset=4
    XY tgt; // offset=8
    Thing *actionThing; // offset=12
    clock_t actionClock; // offset=16
    PaletteSelector &aPalette;
    MyMinSprite mMs; // offset=24
    SBYTE action; // offset=29
    BBOOL canDoAction; // offset=30
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=31
public:
    WindowPad(PaletteSelector &palsel);
    virtual void Init(Thing *tng1);
    virtual void Close();
    virtual BBOOL Update(SWORD arg1);
    virtual void MapDraw();
    virtual void Draw(SBYTE arg1);
    void StartAction();
    void AbortAction();
    void DrawArchitectFoundation();
    void DrawPolyFoundation(XY arg1, UBYTE arg2, UBYTE arg3);
private:
    void SetActionSelectPointer();
    void SetXActionSelectPointer();
//public:
    //WindowPad(WindowPad &arg1); -- generate default copy constructor
};

class CreaturePad : public MainInterfacePad { // sizeof=44
    Creature *c; // offset=4
    Thing *cuActionThing; // offset=8
    clock_t cuActionClock; // offset=12
    PaletteSelector &aPalette;
    MyMinSprite packMMs; // offset=20
    CreatureUserAction cuAction; // offset=25
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=26
public:
    CreaturePad(PaletteSelector &palsel);
    virtual void Init(Thing *tng1);
    virtual void Close();
    virtual BBOOL Update(SWORD arg1);
    virtual void MapDraw();
    virtual void Draw(SBYTE arg1);
    void DrawAllPackMembers(UBYTE arg1);
    //CreaturePad(CreaturePad &arg1); -- generate default copy constructor
};

#endif // BIO_PADS_HPP_
/******************************************************************************/
