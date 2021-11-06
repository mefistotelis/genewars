/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file MYSPR.hpp
 *     Header file for MYSPR.cpp.
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
#ifndef BFMYDRAW_MYSPR_HPP_
#define BFMYDRAW_MYSPR_HPP_

#include "bfsprite.h"

#ifdef __cplusplus
extern "C" {
#endif

struct MyMinSprite { // sizeof=5
    MyMinSprite(const struct MyMinSprite &spr1);
    UBYTE frameDelay; // offset=0
    UBYTE current; // offset=1
    SBYTE delta; // offset=2
    SBYTE fullDelay; // offset=3
    SBYTE fullDelayCount; // offset=4
};

typedef struct MyMinSprite MyMinSprite;

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

struct MySprite { // sizeof=10
    MyFrame *first; // offset=0
    MyFrame *last; // offset=4
    UBYTE numFrames; // offset=8
    UBYTE flags; // offset=9
};

typedef struct MySprite MySprite;

struct MySpriteObj { // sizeof=unknown
    int a1;
};

typedef struct MySpriteObj MySpriteObj;

struct MyAnimBank { // sizeof=18
    UWORD numMSprites; // offset=0
    TbSprite *sprites; // offset=2
    MyElement *myElements; // offset=6
    MyFrame *myFrames; // offset=10
    MySprite *mySprites; // offset=14
};

typedef struct MyAnimBank MyAnimBank;

void DrawMyFrame( short, short, MyFrame * );
void DrawMySpriteObj( long, long, MySpriteObj * );
MyFrame * UpdateMyMinSprite( MySprite *, MyMinSprite * );
void DrawMyMinSprite( long, long, MySprite *, MyMinSprite * );
void DrawMyFrameClipSpr( short, short, MyFrame *, short, short, TbSprite * );
void DrawMyMinSpriteClipSpr( short, short, MySprite *, MyMinSprite *, long, long, TbSprite * );
long MMSNumFrames( MySprite *, MyMinSprite * );
void DrawMyFrameOptimizedGlass( short, short, MyFrame * );
void InitMyElements( MyElement *, MyElement *, long );
void InitMyFrames( MyFrame *, MyFrame *, long );
void InitMySprites( MySprite *, MySprite *, long );
MySprite * InitMyAnimBank( MyAnimBank * );
long unsigned InSprite( TbSprite *, short, short );
char unsigned InMyElement( MyElement *, long, long );
long InMyFrame( MyFrame *, short, short, short, short );
long InMyFrameBox( MyFrame *, short, short, short, short );

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_MYSPR_HPP_
/******************************************************************************/
