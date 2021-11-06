/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file MYSPRR.hpp
 *     Header file for MYSPRR.cpp.
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
#ifndef BFMYDRAW_MYSPRR_HPP_
#define BFMYDRAW_MYSPRR_HPP_

#include "myspr.h"

#ifdef __cplusplus
extern "C" {
#endif

void DrawMyFrameHR( short, short, MyFrame * );
void DrawMySpriteObjHR( long, long, MySpriteObj * );
void DrawMyMinSpriteHR( long, long, MySprite *, MyMinSprite * );
void DrawMyMinSpriteRemapHR( long, long, MySprite *, MyMinSprite *, char unsigned * );
void DrawMyFrameOneColorHR( short, short, MyFrame *, char unsigned );
void DrawMyFrameRemapHR( short, short, MyFrame *, char unsigned * );
void DrawMyFrameDitherRemapHR( short, short, MyFrame *, char unsigned *, char unsigned * );
void DrawMyFrameScaleDownHR( short, short, MyFrame *, long unsigned );
void DrawMyFrameRemapScaleDownHR( long, long, MyFrame *, long unsigned, char unsigned * );
void DrawMyFrameDitherRemapScaleDownHR( short, short, MyFrame *, long unsigned, char unsigned *, char unsigned * );
void DrawMyFrameClipSprHR( short, short, MyFrame *, short, short, TbSprite * );
void DrawMyFrameClipSprRemapHR( short, short, MyFrame *, short, short, TbSprite *, char unsigned * );

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_MYSPRR_HPP_
/******************************************************************************/
