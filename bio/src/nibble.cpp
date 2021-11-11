/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file nibble.cpp
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
#include "nibble.hpp"

union __14uhrtLFX { // sizeof=4
    UWORD f; // offset=0
    ULONG l; // offset=1
    UWORD i; // offset=2
};

typedef union __14uhrtLFX LFX;

struct SprData { // sizeof=26
    UBYTE * ComputeScaleClipping(SLONG arg1, SLONG arg2, TbSprite *arg3, ULONG arg4);
    UBYTE * ComputeClipping(SLONG arg1, SLONG arg2, TbSprite *arg3);
    UBYTE top; // offset=0
    UBYTE btm; // offset=1
    UBYTE left; // offset=2
    UBYTE right; // offset=3
    UBYTE sprWd; // offset=4
    UBYTE sprHt; // offset=5
    SLONG nextRowDelta; // offset=6
    LFX scaleX; // offset=10
    LFX scaleY; // offset=14
    ULONG scaleWd; // offset=18
    ULONG scaleHt; // offset=22
};


UBYTE * SprData::ComputeClipping(SLONG arg1, SLONG arg2, TbSprite *arg3)
{
// code at 0001:00065941
}

UBYTE * SprData::ComputeScaleClipping(SLONG arg1, SLONG arg2, TbSprite *arg3, ULONG arg4)
{
// code at 0001:00065d28
}

long unsigned NibbleCompressSpriteData( TbSprite *, long unsigned, char unsigned *, char unsigned *, char unsigned * * )
{
// code at 0001:0006f2e8
}

MyAnimBank * LoadMyNibbleAnimBank( char * )
{
// code at 0001:00065700
}

void DrawMyNibbleSprite( long, long, TbSprite *, char unsigned, char unsigned * )
{
// code at 0001:000661aa
}

void DrawMyNibbleThreshold4Sprite( long, long, TbSprite *, char unsigned, char unsigned, char unsigned, char unsigned * )
{
// code at 0001:00066cf0
}

void DrawMyNibbleDitherRemapSprite( long, long, TbSprite *, char unsigned, char unsigned, char unsigned * )
{
// code at 0001:00067f7d
}

void DrawMyNibbleDitherThreshold4RemapSprite( long, long, TbSprite *, char unsigned, char unsigned, char unsigned, char unsigned, char unsigned * )
{
// code at 0001:00068ae1
}

void DrawMyNibbleShadowSprite( long, long, TbSprite *, char unsigned )
{
// code at 0001:000698aa
}

void DrawMyShadowSprite( long, long, TbSprite *, char unsigned )
{
// code at 0001:0006a25d
}

void DrawMyNibbleScaleDownSprite( long, long, TbSprite *, char unsigned, long unsigned, char unsigned * )
{
// code at 0001:0006a944
}

void DrawMyNibbleShadowScaleDownSprite( long, long, TbSprite *, char unsigned, long unsigned )
{
// code at 0001:0006adb1
}

void DrawMyNibbleDitherRemapScaleDownSprite( long, long, TbSprite *, char unsigned, char unsigned, long unsigned, char unsigned * )
{
// code at 0001:0006b1e5
}

void DrawMyNibbleDitherThreshold4RemapScaleDownSprite( long, long, TbSprite *, char unsigned, char unsigned, long unsigned, char unsigned, char unsigned, char unsigned * )
{
// code at 0001:0006b684
}

void DrawMyNibbleThreshold4ScaleDownSprite( long, long, TbSprite *, char unsigned, char unsigned, long unsigned, char unsigned, char unsigned * )
{
// code at 0001:0006bb80
}

void DrawMyNibbleFrame( long, long, MyFrame *, char unsigned, char unsigned * )
{
// code at 0001:0006c048
}

void DrawMyNibbleThreshold4Frame( long, long, MyFrame *, char unsigned, char unsigned, char unsigned, char unsigned * )
{
// code at 0001:0006c1cc
}

void DrawMyNibbleDitherRemapFrame( long, long, MyFrame *, char unsigned, char unsigned, char unsigned * )
{
// code at 0001:0006c368
}

void DrawMyNibbleDitherThreshold4RemapFrame( long, long, MyFrame *, char unsigned, char unsigned, char unsigned, char unsigned, char unsigned * )
{
// code at 0001:0006c4f8
}

void DrawMyNibbleFrameScaleDown( long, long, MyFrame *, char unsigned, long unsigned, char unsigned * )
{
// code at 0001:0006c6a3
}

void DrawMyNibbleThreshold4FrameScaleDown( long, long, MyFrame *, char unsigned, char unsigned, long unsigned, char unsigned, char unsigned * )
{
// code at 0001:0006c88a
}

void DrawMyNibbleDitherRemapFrameScaleDown( long, long, MyFrame *, char unsigned, char unsigned, long unsigned, char unsigned * )
{
// code at 0001:0006ca89
}

void DrawMyNibbleDitherThreshold4RemapFrameScaleDown( long, long, MyFrame *, char unsigned, char unsigned, long unsigned, char unsigned, char unsigned, char unsigned * )
{
// code at 0001:0006cc7c
}

void DrawMyNibbleShadowFrameScaleDown( long, long, MyFrame *, char unsigned, long unsigned )
{
// code at 0001:0006ce87
}

char unsigned InMyNibbleElementBox( MyElement *, long, long, long )
{
// code at 0001:0006d063
}

long InMyNibbleFrameScaleBox( MyFrame *, long, long, long, long, long )
{
// code at 0001:0006d11d
}

void DrawMyRemapRangeSprite( long, long, TbSprite *, char unsigned )
{
// code at 0001:0006d1d6
}

void DrawMyRemapRangeRemapSprite( long, long, TbSprite *, char unsigned, char unsigned * )
{
// code at 0001:0006dfa0
}

void DrawMyRemapRangeFrame( long, long, MyFrame *, char unsigned )
{
// code at 0001:0006edbc
}

void DrawMyRemapRangeRemapFrame( long, long, MyFrame *, char unsigned, char unsigned * )
{
// code at 0001:0006ef36
}

void DrawMyShadowFrame( long, long, MyFrame *, char unsigned, char unsigned )
{
// code at 0001:0006f0ba
}


/******************************************************************************/
