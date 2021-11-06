/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file PIXBUF.hpp
 *     Header file for PIXBUF.cpp.
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
#ifndef BFMYDRAW_PIXBUF_HPP_
#define BFMYDRAW_PIXBUF_HPP_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

struct PixBuffer { // sizeof=44
    SWORD x; // offset=0
    SWORD y; // offset=2
    SWORD w; // offset=4
    SWORD h; // offset=6
    SLONG bufSize; // offset=8
    SLONG scrnWd; // offset=12
    SLONG scrnHt; // offset=16
    UBYTE *wScrn; // offset=20
    ULONG gwLeft; // offset=24
    ULONG gwTop; // offset=28
    ULONG gwWd; // offset=32
    ULONG gwHt; // offset=36
    UBYTE *pBuf; // offset=40
};

typedef struct PixBuffer PixBuffer;

PixBuffer * InitPixBuffer( short, short, short, short, char unsigned );
void FreePixBuffer( PixBuffer * );
void DrawIntoPixBuffer( PixBuffer * );
void RestoreFromPixBuffer( PixBuffer * );
void DrawPixBuffer( PixBuffer *, char unsigned );
void DrawPixBufferWindow( PixBuffer *, char unsigned, long, long, long, long );

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_PIXBUF_HPP_
/******************************************************************************/
