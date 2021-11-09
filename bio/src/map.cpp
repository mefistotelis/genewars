/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file map.cpp
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
#include "map.hpp"

#include "pixbuf.h"

void FlatMap::FreeMe()
{
// code at 0001:0000baac
}

void FlatMap::Draw(UBYTE arg1)
{
// code at 0001:0000ba80
}

BBOOL FlatMap::Valid()
{
// code at 0001:00056d40
}

PixBuffer * FlatMap::Init(Planet const &arg1, UBYTE arg2, SWORD arg3, SWORD arg4, UBYTE arg5, BBOOL arg6)
{
// code at 0001:0005620d
}

void FlatMap::ReDraw(UBYTE arg1)
{
// code at 0001:00056299
}

void FlatMap::MakeTopographyMap(UBYTE arg1)
{
// code at 0001:000562e6
}

void FlatMap::UpdateGridTile(GridTile *arg1)
{
// code at 0001:0005639e
}

GridTile * FlatMap::XYOn(SWORD arg1, SWORD arg2, XY &cor3)
{
// code at 0001:00056449
}

void FlatMap::CopyRegionFrom(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6)
{
// code at 0001:00056502
}

/*char unsigned FlatMap::__defarg()
{
// code at 0001:0000bb1c
}*/

/*char unsigned FlatMap::__defarg()
{
// code at 0001:0000bafc
}*/

/*char unsigned FlatMap::__defarg()
{
// code at 0001:0000badc
}*/

void IsoMapBuffer::FreeMe()
{
// code at 0001:00056d10
}

PixBuffer * IsoMapBuffer::Init(FlatMap &flmap, UBYTE arg2, UBYTE arg3, UBYTE arg4, SWORD arg5, SWORD arg6)
{
// code at 0001:0005666a
}

void IsoMapBuffer::ReDraw()
{
// code at 0001:000566f7
}

void IsoMapBuffer::UpdateXY(XY cor1)
{
// code at 0001:00056883
}

void IsoMapBuffer::ProjectPixelOnWScreen( XY, char unsigned )
{
// code at 0001:0005695d
}

BBOOL IsoMapBuffer::GetXYFromMap(XY cor1, XY &cor2)
{
// code at 0001:00056a38
}

GridTile * IsoMapBuffer::XYOn(SWORD arg1, SWORD arg2, XY &cor3)
{
// code at 0001:00056b19
}

void IsoMapBuffer::Update()
{
// code at 0001:00056be3
}

void IsoMapBuffer::SetNewXlatedTop(UBYTE arg1, UBYTE arg2)
{
// code at 0001:00016b00
}

void IsoMapBuffer::Draw(UBYTE arg1)
{
// code at 0001:00026044
}

/*char unsigned IsoMapBuffer::__defarg()
{
// code at 0001:00026070
}*/

/******************************************************************************/
