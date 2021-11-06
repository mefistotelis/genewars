/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file drawsprr.cpp
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
#include "drawsprr.h"

void DrawMySpriteHR( short, short, TbSprite * )
{
// code at 0001:00099220
}

void DrawMyRemapSpriteHR( short, short, TbSprite *, char unsigned * )
{
// code at 0001:00099c90
}

void DrawMyScaleDownSpriteHR( short, short, TbSprite *, long unsigned )
{
// code at 0001:0009a800
}

void DrawMyRemapScaleDownSpriteHR( short, short, TbSprite *, long unsigned, char unsigned * )
{
// code at 0001:0009b040
}

void DrawMyDitherRemapScaleDownSpriteHR( short, short, TbSprite *, long unsigned, char unsigned *, char unsigned * )
{
// code at 0001:0009b830
}

void DrawMyDitherRemapSpriteHR( short, short, TbSprite *, char unsigned *, char unsigned * )
{
// code at 0001:0009c1b0
}

void DrawMyColorSpriteHR( short, short, TbSprite *, long )
{
// code at 0001:0009cfd0
}

void DrawMyClipSpriteHR( short, short, TbSprite *, long, long, TbSprite * )
{
// code at 0001:0009d8b0
}

void DrawMyClipSpriteRemapHR( short, short, TbSprite *, long, long, TbSprite *, char unsigned * )
{
// code at 0001:0009ea70
}

void DrawMyHeightSpriteHR( short, short, TbSprite *, short unsigned, long unsigned )
{
// code at 0001:0009fce0
}

void DrawOptimizedGlassSpriteHR( short, short, TbSprite * )
{
// code at 0001:000a0770
}

void RefreshFromBScreenHR()
{
// code at 0001:000a0990
}

char unsigned setRefreshTo;

char unsigned reallyDraw;

char unsigned refresh_HR[2][20]; // First size uncertain


/******************************************************************************/
