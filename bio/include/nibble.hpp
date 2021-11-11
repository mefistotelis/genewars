/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file nibble.hpp
 *     Header file for nibble.cpp.
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
#ifndef BIO_NIBBLE_HPP_
#define BIO_NIBBLE_HPP_

#include "bftypes.h"
#include "bfsprite.h"
#include "myspr.h"

long unsigned NibbleCompressSpriteData( TbSprite *, long unsigned, char unsigned *, char unsigned *, char unsigned * * );
MyAnimBank * LoadMyNibbleAnimBank( char * );
void DrawMyNibbleSprite( long, long, TbSprite *, char unsigned, char unsigned * );
void DrawMyNibbleThreshold4Sprite( long, long, TbSprite *, char unsigned, char unsigned, char unsigned, char unsigned * );
void DrawMyNibbleDitherRemapSprite( long, long, TbSprite *, char unsigned, char unsigned, char unsigned * );
void DrawMyNibbleDitherThreshold4RemapSprite( long, long, TbSprite *, char unsigned, char unsigned, char unsigned, char unsigned, char unsigned * );
void DrawMyNibbleShadowSprite( long, long, TbSprite *, char unsigned );
void DrawMyShadowSprite( long, long, TbSprite *, char unsigned );
void DrawMyNibbleScaleDownSprite( long, long, TbSprite *, char unsigned, long unsigned, char unsigned * );
void DrawMyNibbleShadowScaleDownSprite( long, long, TbSprite *, char unsigned, long unsigned );
void DrawMyNibbleDitherRemapScaleDownSprite( long, long, TbSprite *, char unsigned, char unsigned, long unsigned, char unsigned * );
void DrawMyNibbleDitherThreshold4RemapScaleDownSprite( long, long, TbSprite *, char unsigned, char unsigned, long unsigned, char unsigned, char unsigned, char unsigned * );
void DrawMyNibbleThreshold4ScaleDownSprite( long, long, TbSprite *, char unsigned, char unsigned, long unsigned, char unsigned, char unsigned * );
void DrawMyNibbleFrame( long, long, MyFrame *, char unsigned, char unsigned * );
void DrawMyNibbleThreshold4Frame( long, long, MyFrame *, char unsigned, char unsigned, char unsigned, char unsigned * );
void DrawMyNibbleDitherRemapFrame( long, long, MyFrame *, char unsigned, char unsigned, char unsigned * );
void DrawMyNibbleDitherThreshold4RemapFrame( long, long, MyFrame *, char unsigned, char unsigned, char unsigned, char unsigned, char unsigned * );
void DrawMyNibbleFrameScaleDown( long, long, MyFrame *, char unsigned, long unsigned, char unsigned * );
void DrawMyNibbleThreshold4FrameScaleDown( long, long, MyFrame *, char unsigned, char unsigned, long unsigned, char unsigned, char unsigned * );
void DrawMyNibbleDitherRemapFrameScaleDown( long, long, MyFrame *, char unsigned, char unsigned, long unsigned, char unsigned * );
void DrawMyNibbleDitherThreshold4RemapFrameScaleDown( long, long, MyFrame *, char unsigned, char unsigned, long unsigned, char unsigned, char unsigned, char unsigned * );
void DrawMyNibbleShadowFrameScaleDown( long, long, MyFrame *, char unsigned, long unsigned );
char unsigned InMyNibbleElementBox( MyElement *, long, long, long );
long InMyNibbleFrameScaleBox( MyFrame *, long, long, long, long, long );
void DrawMyRemapRangeSprite( long, long, TbSprite *, char unsigned );
void DrawMyRemapRangeRemapSprite( long, long, TbSprite *, char unsigned, char unsigned * );
void DrawMyRemapRangeFrame( long, long, MyFrame *, char unsigned );
void DrawMyRemapRangeRemapFrame( long, long, MyFrame *, char unsigned, char unsigned * );
void DrawMyShadowFrame( long, long, MyFrame *, char unsigned, char unsigned );

#endif // BIO_NIBBLE_HPP_
/******************************************************************************/
