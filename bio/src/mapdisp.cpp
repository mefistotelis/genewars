/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file mapdisp.cpp
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
#include "mapdisp.hpp"

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

void MapDisplay::draw_column( long, long, long )
{
// code at 0001:0004ab0b
}

void MapDisplay::draw_delta_column( long, long, long, long &, long & )
{
// code at 0001:0004b3be
}

char unsigned MapDisplay::IsFullScreen()
{
// code at 0001:00016ac0
}

void MapDisplay::SetScrolled()
{
// code at 0001:00016a9c
}

void MapDisplay::SetCanSelectThing()
{
// code at 0001:00026020
}

void MapDisplay::ClearCanSelectThing()
{
// code at 0001:00025ffc
}

char unsigned MapDisplay::IsRegisteredRightClick()
{
// code at 0001:00025fc0
}

void MapDisplay::SetRegisteredRightClick()
{
// code at 0001:00025f9c
}

void MapDisplay::ClearRegisteredRightClick()
{
// code at 0001:00025f78
}

char unsigned MapDisplay::IsModified()
{
// code at 0001:00025f3c
}

void MapDisplay::ToggleGlassBuildings()
{
// code at 0001:00025f18
}

void MapDisplay::FragCopyBScreenToWScreen()
{
// code at 0001:00064137
}

void MapDisplay::RefreshFromBScreen()
{
// code at 0001:00064c2d
}

char unsigned MapDisplay::IsOnScreen( short, short )
{
// code at 0001:0001d634
}

char unsigned MapDisplay::IsScrolling()
{
// code at 0001:0001d5f4
}

void MapDisplay::SetDrawFoundations()
{
// code at 0001:0001d5c8
}

void MapDisplay::ClearDrawFoundations()
{
// code at 0001:0001d59c
}

char unsigned MapDisplay::IsDrawFoundations()
{
// code at 0001:0001d560
}

char unsigned MapDisplay::IsGlassBuildings()
{
// code at 0001:00040614
}

char unsigned MapDisplay::IsExploredTerrainInView()
{
// code at 0001:0003923c
}

/*char unsigned MapDisplay::__defarg()
{
// code at 0001:0001d6ec
}*/

/*MyMinSprite * MapDisplay::__defarg()
{
// code at 0001:0001d6c8
}*/

/*MyMinSprite * MapDisplay::__defarg()
{
// code at 0001:0001d6a4
}*/

/******************************************************************************/
