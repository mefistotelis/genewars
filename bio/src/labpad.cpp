/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file labpad.cpp
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
#include "labpad.hpp"

static char labTpiDrawStr[64] = {
    0x1, (char)0x82, 0x2, (char)0x80, 0x0,
};

static char nameTpiDrawStr_lb[64] = {
    0x1, (char)0x82, 0x2, (char)0x80, 0x0,
};

static TurnPrintInfo labTPI = {
    .x = 20, .y = 196, .delay = 0, .step = 1, .str = NULL,
    .hilite = {
        { 0x1, 0xEF, 0x2, 0x83, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0x83, 0x2, 0x81, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0x82, 0x2, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
    },
    .drawStr = labTpiDrawStr,
    .dfi = {0},
    .drawing = 0, .linesDrawn = 0, .length = 0, .count = 0, .delayCount = 0,
    .current = NULL,
    .drawCurrent = NULL,
};

static TurnPrintInfo nameTPI_lb = {
    .x = 20, .y = 186, .delay = 0, .step = 1, .str = NULL,
    .hilite = {
        { 0x1, 0xEF, 0x2, 0x83, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0x83, 0x2, 0x81, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0x82, 0x2, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
    },
    .drawStr = nameTpiDrawStr_lb,
    .dfi = {0},
    .drawing = 0, .linesDrawn = 0, .length = 0, .count = 0, .delayCount = 0,
    .current = NULL,
    .drawCurrent = NULL,
};

LabPad::LabPad() : MainInterfacePad(), nameTpi(nameTPI_lb), tpi(labTPI)
{
  // code at 0001:00016c54, ignored internal flag to skip super ct
  this->padBmpType = PADBMP_GENELAB;
  this->panelBmp = &MainInterfacePad::padBmps[1];
  this->normalPad = 0;
}

void LabPad::Init(Thing *tng1)
{
// code at 0001:00016d3d
}

void LabPad::Close()
{
// code at 0001:00016f1f
}

BBOOL LabPad::Update(SWORD arg1)
{
// code at 0001:00016f96
}

void LabPad::MapDraw()
{
// code at 0001:0001752d
}

void LabPad::KickOffNewSpeciesStuff()
{
// code at 0001:0001755f
}

void LabPad::DrawMainWindow()
{
// code at 0001:00017671
}

BBOOL LabPad::IsListScrolling()
{
// code at 0001:000181f4
}

void LabPad::DrawListCreature(CreatureSpecies arg1, SLONG arg2, SLONG arg3, UBYTE arg4)
{
// code at 0001:00017a18
}

void LabPad::DrawList()
{
// code at 0001:00017ab3
}

void LabPad::Draw(SBYTE arg1)
{
// code at 0001:00017f3d
}

/******************************************************************************/
