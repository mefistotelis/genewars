/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file grouppad.cpp
 *     Implementation of related functions.
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
#include "grouppad.hpp"

void GroupSelect::ResetGroup()
{
// code at 0001:0001d2f0
}

void GroupSelect::Init()
{
// code at 0001:00025df8
}

void GroupSelect::Close()
{
// code at 0001:00025dd4
}

char unsigned GroupSelect::IsAGroupCurrentlySelected()
{
// code at 0001:00025d80
}

char unsigned GroupSelect::IsGroupSelecting()
{
// code at 0001:00025d44
}

void GroupSelect::AddIdxToGroup( short )
{
// code at 0001:00025cc8
}

char unsigned GroupSelect::IsAnchorGroupSelecting()
{
// code at 0001:00025c8c
}

void GroupSelect::SetGroupSelecting()
{
// code at 0001:00025c68
}

void GroupSelect::ClearGroupSelecting()
{
// code at 0001:00025c44
}

void GroupSelect::SetAnchorGroupSelecting( short, short )
{
// code at 0001:00025bf4
}

void GroupSelect::ClearAnchorGroupSelecting()
{
// code at 0001:00025bd0
}

void GroupSelect::SetTarget( XY )
{
// code at 0001:00025ba0
}

SBYTE GroupSelect::ActionOn(Thing *tng1, BBOOL arg2)
{
// code at 0001:0001e39a
}

BBOOL GroupSelect::Update(SWORD &arg1)
{
// code at 0001:0001e556
}

void GroupSelect::Draw()
{
// code at 0001:0001e6e5
}

void GroupSelect::RemoveIdxFromGroup(SWORD arg1)
{
// code at 0001:0001e891
}

BBOOL GroupSelect::GroupSelectThings()
{
// code at 0001:0001e931
}

BBOOL GroupSelect::SetGroupSwitchTo()
{
// code at 0001:0001ed6b
}

void GroupSelect::DrawGroupSelected()
{
// code at 0001:0001edd9
}

void GroupSelect::AssignXYToTeam(XY arg1, UBYTE arg2, UBYTE arg3)
{
// code at 0001:0001efbc
}

void GroupSelect::AssignXYToGroup(XY arg1, SWORD *arg2, SWORD arg3, UBYTE arg4, UBYTE arg5)
{
// code at 0001:0001f05b
}

void GroupSelect::AssignTargetToGroup(Thing *tng1, SWORD *arg2, SWORD arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6)
{
// code at 0001:0001f0d3
}

void GroupSelect::SwitchOffGroup(SWORD *arg1, SWORD arg2, UBYTE arg3, UBYTE arg4)
{
// code at 0001:0001f1f4
}

/*GroupPad::GroupPad()
{
// code at 0001:00019b78
}*/

void GroupPad::Init(Thing *tng1)
{
// code at 0001:00019c6e
}

BBOOL GroupPad::Update(SWORD arg1)
{
// code at 0001:00019d26
}

void GroupPad::MapDraw()
{
// code at 0001:0001a0c6
}

void GroupPad::Draw(SBYTE arg1)
{
// code at 0001:0001a0e0
}


/******************************************************************************/
