/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file grouppad.hpp
 *     Header file for grouppad.cpp.
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
#ifndef BIO_GROUPPAD_HPP_
#define BIO_GROUPPAD_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "xy.hpp"
#include "mainpad.hpp"
#include <ctime>

class Thing;

class GroupSelect { // sizeof=622
    XY target; // offset=0
    SWORD groupSelectedThings[300]; // offset=4
    XY corner1; // offset=604
    XY corner2; // offset=608
    UWORD numGroupSelected; // offset=612
    UBYTE numPls; // offset=614
    UBYTE flags; // offset=615
    MyMinSprite mMs; // offset=616
    UBYTE plsMask; // offset=621
public:
    void Init();
    void Close();
    BBOOL Update(SWORD &arg1);
    void Draw();
    void ResetGroup();
    BBOOL IsAGroupCurrentlySelected();
    BBOOL IsGroupSelecting();
    BBOOL IsTargetSet();
    void AddIdxToGroup(SWORD arg1);
    void RemoveIdxFromGroup(SWORD arg1);
    BBOOL SetGroupSwitchTo();
    void AssignXYToTeam(XY arg1, UBYTE arg2, UBYTE arg3);
    void AssignXYToGroup(XY arg1, SWORD *arg2, SWORD arg3, UBYTE arg4, UBYTE arg5);
    void AssignTargetToGroup(Thing *tng1, SWORD *arg2, SWORD arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6);
    void SwitchOffGroup(SWORD *arg1, SWORD arg2, UBYTE arg3, UBYTE arg4);
private:
    BBOOL IsAnchorGroupSelecting();
    void SetGroupSelecting();
    void ClearGroupSelecting();
    void SetAnchorGroupSelecting(SWORD arg1, SWORD arg2);
    void ClearAnchorGroupSelecting();
    void SetTarget(XY arg1);
    BBOOL GroupSelectThings();
    void DrawGroupSelected();
    SBYTE ActionOn(Thing *tng1, BBOOL arg2);
};

class GroupPad : public MainInterfacePad { // sizeof=35
    Thing *actionThing; // offset=4
    clock_t actionClock; // offset=8
    GroupSelect &group;
    SBYTE action; // offset=16
//internal:
    //unsigned int *__vbptr; // offset=0
    //void (**__vfptr)(); // offset=17
public:
    GroupPad();
    virtual void Init(Thing *tng1);
    virtual BBOOL Update(SWORD arg1);
    virtual void Draw(SBYTE arg1);
    virtual void MapDraw();
    //GroupPad(GroupPad &arg1); -- generate default copy constructor
};

#endif // BIO_GROUPPAD_HPP_
/******************************************************************************/
