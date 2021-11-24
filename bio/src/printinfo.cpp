/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file printinfo.cpp
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
#include "printinfo.hpp"

static char titleTpiDrawStr[96] = {
    0x1, (char)0x82, 0x2, (char)0x80, 0x0,
};

static char textTpiDrawStr[544] = {
    0x1, (char)0x82, 0x2, (char)0x80, 0x0,
};

static TurnPrintInfo titleTPI = {
    .x = 0, .y = 0, .delay = 0, .step = 1, .str = NULL,
    .hilite = {
        { 0x1, 0xEF, 0x2, 0x83, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0x83, 0x2, 0x81, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0x82, 0x2, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
    },
    .drawStr = titleTpiDrawStr,
    .dfi = {0},
    .drawing = 0, .linesDrawn = 0, .length = 0, .count = 0, .delayCount = 0,
    .current = NULL,
    .drawCurrent = NULL,
};

static TurnPrintInfo textTPI = {
    .x = 0, .y = 12, .delay = 0, .step = 2, .str = NULL,
    .hilite = {
        { 0x1, 0xEF, 0x2, 0x83, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0x83, 0x2, 0x81, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
        { 0x1, 0x82, 0x2, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },
    },
    .drawStr = textTpiDrawStr,
    .dfi = {0},
    .drawing = 0, .linesDrawn = 0, .length = 0, .count = 0, .delayCount = 0,
    .current = NULL,
    .drawCurrent = NULL,
};

BBOOL TurnPrintInfo::Print()
{
// code at 0001:0001e160
}

InfoRequester::InfoRequester()
    : titleTpi(titleTPI), textTpi(textTPI)
{
}

void InfoRequester::DrawPic(SLONG arg1, SLONG arg2)
{
// code at 0001:0002518c
}

void InfoRequester::Create(char *arg1, char *arg2, char *arg3, SLONG arg4, InfoRequesterStyle arg5)
{
// code at 0001:00024a3c
}

BBOOL InfoRequester::Update()
{
// code at 0001:00024c85
}

void InfoRequester::Draw()
{
// code at 0001:00024cf4
}

void InfoRequester::Invalidate()
{
// code at 0001:00025e8c
}

char unsigned InfoRequester::Valid()
{
// code at 0001:00025e54
}

/******************************************************************************/
