/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifclevel.cpp
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
#include "ifclevel.hpp"

static char nameTpiDrawStr[400] = {
    0x1, (char)0xE5, 0x2, (char)0xF0, 0x0,
};

static char briefTpiDrawStr[400] = {
    0x1, (char)0xE4, 0x2, (char)0xEF, 0x0,
};

static TurnPrintInfo nameTPI_lv = {
    .x = 0, .y = 6, .delay = 0, .step = 2, .str = NULL,
    .hilite = {
        { 0x1, 0xEB, 0x2, 0xED, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0xE9, 0x2, 0xEE, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0xE7, 0x2, 0xEF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
    },
    .drawStr = nameTpiDrawStr,
    .dfi = {0},
    .drawing = 0, .linesDrawn = 0, .length = 0, .count = 0, .delayCount = 0,
    .current = NULL,
    .drawCurrent = NULL,
};

static TurnPrintInfo briefTPI = {
    .x = 32, .y = 23, .delay = 0, .step = 2, .str = NULL,
    .hilite = {
        { 0x1, 0xEA, 0x2, 0xEC, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0xE8, 0x2, 0xED, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0xE6, 0x2, 0xEE, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
    },
    .drawStr = briefTpiDrawStr,
    .dfi = {0},
    .drawing = 0, .linesDrawn = 0, .length = 0, .count = 0, .delayCount = 0,
    .current = NULL,
    .drawCurrent = NULL,
};

IFCLevel::IFCLevel()
    : IFCBase(), tpi(briefTPI), nameTpi(nameTPI_lv)
{
  // code at 0001:0000f70a
  // done
}

void IFCLevel::DrawRefreshedBox(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, UBYTE arg5)
{
// code at 0001:000156dc
}

void IFCLevel::PlugIn()
{
// code at 0001:0000f7b9
}

void IFCLevel::PullOut()
{
// code at 0001:0000fe63
}

void IFCLevel::DrawHLine(SLONG arg1, SLONG arg2, SLONG arg3, UBYTE arg4)
{
// code at 0001:0000ff27
}

void IFCLevel::DrawVLine(SLONG arg1, SLONG arg2, SLONG arg3, UBYTE arg4)
{
// code at 0001:0000ff85
}

void IFCLevel::DrawCornerCircles()
{
// code at 0001:0000ffeb
}

void IFCLevel::DrawLines()
{
// code at 0001:0001018e
}

void IFCLevel::DrawSystem()
{
// code at 0001:00010463
}

void IFCLevel::DrawGizmoBox()
{
// code at 0001:0001065c
}

void IFCLevel::DrawLockOn()
{
// code at 0001:00010b5e
}

void IFCLevel::DrawPlanet()
{
// code at 0001:00010e5e
}

void IFCLevel::DrawBriefing()
{
// code at 0001:0001114c
}

void IFCLevel::Draw()
{
// code at 0001:0001131d
}

void IFCLevel::Update()
{
// code at 0001:0001140c
}

void IFCLevel::UpdateSystem()
{
// code at 0001:000118f1
}

void IFCLevel::MoveViewer()
{
// code at 0001:00011bb7
}

void IFCLevel::DrawGalaxy()
{
// code at 0001:00011cdf
}

char unsigned IFCLevel::IsAtSystemView()
{
// code at 0001:000122cc
}

void IFCLevel::SortStars()
{
// code at 0001:00012324
}

int IFCLevel::SortCheck(void const *arg1, void const *arg2)
{
// code at 0001:000123ba
}

void IFCLevel::MakeOrbitTrack(UWORD arg1)
{
// code at 0001:00012439
}

UBYTE IFCLevel::FindPlanet(UWORD arg1, UWORD arg2)
{
// code at 0001:00012643
}

void IFCLevel::DrawCrossHair()
{
// code at 0001:000126ff
}

void IFCLevel::init_start_points()
{
// code at 0001:000128e4
}

void IFCLevel::rotate_universe_around_viewpos( cPoint *, cPoint * )
{
// code at 0001:00012d59
}

void IFCLevel::calulate_2d_x_and_y_of_points(ULONG arg1, cPoint *arg2, ScreenPoint *arg3)
{
// code at 0001:00012f47
}

void IFCLevel::draw_points(ULONG arg1, ScreenPoint *arg2)
{
// code at 0001:000130df
}

void IFCLevel::calculate_clipping_window(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4)
{
// code at 0001:0001384a
}

void IFCLevel::keys()
{
// code at 0001:00013a2d
}

void IFCLevel::damping()
{
// code at 0001:00013e24
}

void IFCLevel::speed_up(SLONG *arg1)
{
// code at 0001:00013f60
}

void IFCLevel::slow_down(SLONG *arg1)
{
// code at 0001:00013f8e
}

void IFCLevel::move_view_position(cPoint *arg1, cPoint *arg2, cPoint *arg3, SLONG *arg4)
{
// code at 0001:00013fbc
}

void IFCLevel::local_rotate_on_axis(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, UBYTE arg5)
{
// code at 0001:00014049
}

void IFCLevel::global_x_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5)
{
// code at 0001:00014235
}

void IFCLevel::global_y_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5)
{
// code at 0001:000142db
}

void IFCLevel::global_z_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5)
{
// code at 0001:00014380
}

void IFCLevel::normalise_axes(cPoint *arg1, cPoint *arg2)
{
// code at 0001:00014425
}

void IFCLevel::init_view_axes()
{
// code at 0001:00014660
}

void IFCLevel::calculate_view_to_target_vector_deviation(cPoint *arg1, SLONG arg2, SLONG arg3, SLONG arg4)
{
// code at 0001:000146ef
}

void IFCLevel::local_rotate_on_arbitrary_axis(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, SLONG arg7)
{
// code at 0001:00014d5a
}

UBYTE IFCLevel::auto_pilot_MK2()
{
// code at 0001:00014ed6
}

SLONG IFCLevel::align_vertical(ULONG arg1)
{
// code at 0001:000154e5
}

/******************************************************************************/
