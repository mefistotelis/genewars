/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bfmouse.h
 *     Header file for smouse.cpp.
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
#ifndef BFLIBRARY_SMOUSE_H_
#define BFLIBRARY_SMOUSE_H_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

struct mouse_buffer { // sizeof=32
    BOOL Valid; // offset=0
    SLONG Width; // offset=4
    SLONG Height; // offset=8
    ULONG Offset; // offset=12
    SLONG X; // offset=16
    UBYTE Buffer[255]; // offset=17
    SLONG Y; // offset=20
    SLONG XOffset; // offset=24
    SLONG YOffset; // offset=28
};

typedef struct mouse_buffer mouse_buffer;

struct mouse_info { // sizeof=16
    SLONG XMoveRatio; // offset=0
    SLONG YMoveRatio; // offset=4
    SLONG XSpriteOffset; // offset=8
    SLONG YSpriteOffset; // offset=12
    UBYTE Sprite[255]; // offset=16
};

typedef struct mouse_info mouse_info;

struct SREGS { // sizeof=12
    uint16_t es; // offset=0
    uint16_t cs; // offset=2
    uint16_t ss; // offset=4
    uint16_t ds; // offset=6
    uint16_t fs; // offset=8
    uint16_t gs; // offset=10
};

typedef struct SREGS SREGS;

int LbMousePlace();
int LbMouseRemove();
int LbMouseChangeSpriteOffset();
int LbMouseChangeSprite();
int LbMouseChangeMoveRatio();
int LbMouseSetup();
int LbMouseReset();
int LbMouseSuspend();
int LbMouseSetWindow();
int LbMouseSetPosition();
int LbMouseUpdatePosition();
extern int lbMouseInstalled;

#ifdef __cplusplus
};
#endif

#endif // BFLIBRARY_SMOUSE_H_
/******************************************************************************/
