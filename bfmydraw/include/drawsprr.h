/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file drawsprr.hpp
 *     Header file for drawsprr.cpp.
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
#ifndef BFMYDRAW_DRAWSPRR_HPP_
#define BFMYDRAW_DRAWSPRR_HPP_

#include "bfsprite.h"

#ifdef __cplusplus
extern "C" {
#endif

void DrawMySpriteHR( short, short, TbSprite * );
void DrawMyRemapSpriteHR( short, short, TbSprite *, char unsigned * );
void DrawMyScaleDownSpriteHR( short, short, TbSprite *, long unsigned );
void DrawMyRemapScaleDownSpriteHR( short, short, TbSprite *, long unsigned, char unsigned * );
void DrawMyDitherRemapScaleDownSpriteHR( short, short, TbSprite *, long unsigned, char unsigned *, char unsigned * );
void DrawMyDitherRemapSpriteHR( short, short, TbSprite *, char unsigned *, char unsigned * );
void DrawMyColorSpriteHR( short, short, TbSprite *, long );
void DrawMyClipSpriteHR( short, short, TbSprite *, long, long, TbSprite * );
void DrawMyClipSpriteRemapHR( short, short, TbSprite *, long, long, TbSprite *, char unsigned * );
void DrawMyHeightSpriteHR( short, short, TbSprite *, short unsigned, long unsigned );
void DrawOptimizedGlassSpriteHR( short, short, TbSprite * );
void RefreshFromBScreenHR();

extern char unsigned setRefreshTo;
extern char unsigned reallyDraw;
extern char unsigned refresh_HR[][20];

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_DRAWSPRR_HPP_
/******************************************************************************/
