/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file topo.cpp
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
#include "topo.hpp"

void TopoGrid::Invalidate()
{
// code at 0001:00077df8
}

char unsigned TopoGrid::Valid()
{
// code at 0001:00077dbc
}

void TopoGrid::InterpolateAlts(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONG arg8, SLONG arg9, BBOOL *func10[9], SBYTE arg11)
{
// code at 0001:0008e595
}

void TopoGrid::Fractalize(UBYTE arg1, SLONG arg2)
{
// code at 0001:0008ed2c
}

void TopoGrid::SetTimer()
{
// code at 0001:0008fa30
}

void TopoGrid::Create(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4)
{
// code at 0001:0008fb1a
}

void TopoGrid::Flat(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4)
{
// code at 0001:0008fc45
}

void TopoGrid::Crater(XY arg1, UBYTE arg2)
{
// code at 0001:0008fd64
}

BBOOL TopoGrid::Update()
{
// code at 0001:00090fe9
}

TopoMorpher::TopoMorpher()
{
  // code at 0001:000912b0
  for (int i = 0; i < 25; i++)
    this->topos[i].Invalidate();
  this->numTopos = 0;
}

TopoGrid * TopoMorpher::Create(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4)
{
// code at 0001:00091306
}

TopoGrid * TopoMorpher::Crater(XY arg1, UBYTE arg2)
{
// code at 0001:00091388
}

TopoGrid * TopoMorpher::Flat(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4)
{
// code at 0001:00091400
}

void TopoMorpher::Update()
{
// code at 0001:00091482
}

UBYTE TopoMorpher::TopoGridIDX(TopoGrid *arg1)
{
// code at 0001:00077d8c
}

BBOOL TopoMorpher::IsTopoGridValid(UBYTE arg1)
{
// code at 0001:00077d58
}

void TopoMorpher::AbortTopoGrid(UBYTE arg1)
{
// code at 0001:00077ce8
}



/******************************************************************************/
