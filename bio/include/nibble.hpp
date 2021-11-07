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


typedef class Player Player;



struct TbSprite { // sizeof=6
    struct TbSprite * TbSprite(struct TbSprite *arg1);
    SBYTE *Data; // offset=0
    UBYTE SWidth; // offset=4
    UBYTE SHeight; // offset=5
};

typedef struct TbSprite TbSprite;

struct MyElement { // sizeof=10
    TbSprite *toSprite; // offset=0
    SWORD x; // offset=4
    SWORD y; // offset=6
    UBYTE flags; // offset=8
    UBYTE color; // offset=9
};

typedef struct MyElement MyElement;

struct MyFrame { // sizeof=14
    MyElement *firstElement; // offset=0
    SWORD sWidth; // offset=4
    SWORD sHeight; // offset=6
    UWORD fx; // offset=8
    UBYTE delay; // offset=10
    UBYTE numElements; // offset=11
    UWORD flags; // offset=12
};

typedef struct MyFrame MyFrame;


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

typedef struct SprData SprData;

long unsigned NibbleCompressSpriteData( TbSprite *, long unsigned, char unsigned *, char unsigned *, char unsigned * * );
MyAnimBank * LoadMyNibbleAnimBank( char * );
char unsigned * SprData::ComputeClipping( long, long, TbSprite * );
char unsigned * SprData::ComputeScaleClipping( long, long, TbSprite *, long unsigned );
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
