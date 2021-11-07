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

XY XY::operator >>=( int )
{
// code at 0001:00056db4
}

XY XY::operator <<=( int )
{
// code at 0001:00056d78
}

char unsigned FlatMap::Valid()
{
// code at 0001:00056d40
}

void IsoMapBuffer::FreeMe()
{
// code at 0001:00056d10
}

char unsigned MapDisplay::CanSelectThing()
{
// code at 0001:00056cd4
}

void MapDisplay::SetModified()
{
// code at 0001:00056cb0
}

void MapDisplay::ClearModified()
{
// code at 0001:00056c8c
}

void MapDisplay::SetRefreshColumn( char unsigned, MapRefreshColumn )
{
// code at 0001:00056c30
}

void MapDisplay::Init()
{
// code at 0001:00052c14
}

void MapDisplay::Free()
{
// code at 0001:00052caa
}

void MapDisplay::SetFullScreen()
{
// code at 0001:00052ce9
}

void MapDisplay::ClearFullScreen()
{
// code at 0001:00052d6a
}

void MapDisplay::SetPanelRefreshZones()
{
// code at 0001:00052e4b
}

void MapDisplay::CenterOn( XY )
{
// code at 0001:00052ec8
}

XY MapDisplay::GetDisplayCenter()
{
// code at 0001:00052f87
}

void MapDisplay::SelectAmbientSound()
{
// code at 0001:00052fe5
}

MapBucketThing * MapDisplay::PutThingInBucket( Thing * )
{
// code at 0001:00053135
}

void MapDisplay::StaticSetZones()
{
// code at 0001:00053720
}

void MapDisplay::DrawMapSprites()
{
// code at 0001:000539aa
}

void MapDisplay::RefreshRadar()
{
// code at 0001:00053c45
}

void MapDisplay::DrawTopRow( short )
{
// code at 0001:00053d5a
}

void MapDisplay::DrawBottomRow( short )
{
// code at 0001:00053fbf
}

void MapDisplay::DrawLeftColumn( char unsigned )
{
// code at 0001:00054353
}

void MapDisplay::DrawRightColumn( char unsigned )
{
// code at 0001:0005457c
}

void MapDisplay::ForceRedraw()
{
// code at 0001:00054774
}

char unsigned MapDisplay::ScrollHandler()
{
// code at 0001:00054825
}

char unsigned MapDisplay::RegisterPoint( XY, char signed )
{
// code at 0001:00054c28
}

void MapDisplay::RegisterTopoPointChange( XY )
{
// code at 0001:00054d43
}

void MapDisplay::RegisterPointChange( XY )
{
// code at 0001:00054f04
}

void MapDisplay::RegisterBlockChange( XY )
{
// code at 0001:00055146
}

void MapDisplay::RegisterFoundationGrid( XY, char unsigned )
{
// code at 0001:000551da
}

void MapDisplay::RefreshFoundationGrids()
{
// code at 0001:0005534d
}

void MapDisplay::DrawGlassTile( XY, char unsigned, char unsigned )
{
// code at 0001:00055405
}

void MapDisplay::ProjectLine( XY, XY, long unsigned, MySprite *, MyMinSprite * )
{
// code at 0001:00055552
}

void MapDisplay::ProjectCircle( XY, long unsigned, char unsigned, MySprite *, char unsigned, MyMinSprite * )
{
// code at 0001:00055946
}

void MapDisplay::DrawSingleColumn( char unsigned, MapRefreshColumn )
{
// code at 0001:00055b49
}

void MapDisplay::DrawRefreshColumns()
{
// code at 0001:00055fa1
}

void MapDisplay::Draw()
{
// code at 0001:00056047
}

void MapDisplay::ResetForPullOut()
{
// code at 0001:000561ec
}

PixBuffer * FlatMap::Init( Planet const &, char unsigned, short, short, char unsigned, char unsigned )
{
// code at 0001:0005620d
}

void FlatMap::ReDraw( char unsigned )
{
// code at 0001:00056299
}

void FlatMap::MakeTopographyMap( char unsigned )
{
// code at 0001:000562e6
}

void FlatMap::UpdateGridTile( GridTile * )
{
// code at 0001:0005639e
}

GridTile * FlatMap::XYOn( short, short, XY & )
{
// code at 0001:00056449
}

void FlatMap::CopyRegionFrom( long, long, long, long, long, long )
{
// code at 0001:00056502
}

PixBuffer * IsoMapBuffer::Init( FlatMap &, char unsigned, char unsigned, char unsigned, short, short )
{
// code at 0001:0005666a
}

void IsoMapBuffer::ReDraw()
{
// code at 0001:000566f7
}

void IsoMapBuffer::UpdateXY( XY )
{
// code at 0001:00056883
}

void IsoMapBuffer::ProjectPixelOnWScreen( XY, char unsigned )
{
// code at 0001:0005695d
}

char unsigned IsoMapBuffer::GetXYFromMap( XY, XY & )
{
// code at 0001:00056a38
}

GridTile * IsoMapBuffer::XYOn( short, short, XY & )
{
// code at 0001:00056b19
}

void IsoMapBuffer::Update()
{
// code at 0001:00056be3
}


/******************************************************************************/
