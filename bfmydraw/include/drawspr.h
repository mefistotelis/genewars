/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file DRAWSPR.hpp
 *     Header file for DRAWSPR.cpp.
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
#ifndef BFMYDRAW_DRAWSPR_HPP_
#define BFMYDRAW_DRAWSPR_HPP_

#include "bfsprite.h"

#ifdef __cplusplus
extern "C" {
#endif

void DrawMySprite( short, short, TbSprite * );
void DrawMyRemapSprite( short, short, TbSprite *, char unsigned * );
void DrawMyDitherRemapSprite( short, short, TbSprite *, char unsigned *, char unsigned * );
void DrawMyColorSprite( short, short, TbSprite *, long );
void DrawMyScaleDownSprite( short, short, TbSprite *, long unsigned );
void DrawMyRemapScaleDownSprite( short, short, TbSprite *, long unsigned, char unsigned * );
void DrawMyDitherRemapScaleDownSprite( short, short, TbSprite *, long unsigned, char unsigned *, char unsigned * );
void DrawMyClipSprite( short, short, TbSprite *, long, long, TbSprite * );
void DrawMyClipSpriteRemap( short, short, TbSprite *, long, long, TbSprite *, char unsigned * );
void DrawMyHeightSprite( short, short, TbSprite *, short unsigned, long unsigned );
void DrawOptimizedGlassSprite( short, short, TbSprite * );

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_DRAWSPR_HPP_
/******************************************************************************/
