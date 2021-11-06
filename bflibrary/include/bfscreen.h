/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bfscreen.h
 *     Header file for gscreen.cpp, sscreen.cpp.
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
#ifndef BFLIBRARY_GSCREEN_H_
#define BFLIBRARY_GSCREEN_H_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

enum TbScreenMode { // type=int8_t
    Lb_SCREEN_MODE_INVALID = 0,
    Lb_SCREEN_MODE_320_200_8,
    Lb_SCREEN_MODE_320_200_16,
    Lb_SCREEN_MODE_320_200_24,
    Lb_SCREEN_MODE_320_240_8,
    Lb_SCREEN_MODE_320_240_16, // 5
    Lb_SCREEN_MODE_320_240_24,
    Lb_SCREEN_MODE_512_384_8,
    Lb_SCREEN_MODE_512_384_16,
    Lb_SCREEN_MODE_512_384_24,
    Lb_SCREEN_MODE_640_400_8, // 10
    Lb_SCREEN_MODE_640_400_16,
    Lb_SCREEN_MODE_640_400_24,
    Lb_SCREEN_MODE_640_480_8,
    Lb_SCREEN_MODE_640_480_16,
    Lb_SCREEN_MODE_640_480_24, // 15
    Lb_SCREEN_MODE_800_600_8,
    Lb_SCREEN_MODE_800_600_16,
    Lb_SCREEN_MODE_800_600_24,
    Lb_SCREEN_MODE_1024_768_8,
    Lb_SCREEN_MODE_1024_768_16, // 20
    Lb_SCREEN_MODE_1024_768_24,
    Lb_SCREEN_MODE_1200_1024_8,
    Lb_SCREEN_MODE_1200_1024_16,
    Lb_SCREEN_MODE_1200_1024_24,
    Lb_SCREEN_MODE_1600_1200_8, // 25
    Lb_SCREEN_MODE_1600_1200_16,
    Lb_SCREEN_MODE_1600_1200_24,
};

typedef enum TbScreenMode TbScreenMode;

typedef struct TbSprite TbSprite;

struct TbDisplayStruct { // sizeof=118
    UBYTE *PhysicalScreen; // offset=0
    UBYTE *WScreen; // offset=4
    UBYTE *GlassMap; // offset=8
    UBYTE *FadeTable; // offset=12
    UBYTE *GraphicsWindowPtr; // offset=16
    TbSprite *MouseSprite; // offset=20
    SLONG PhysicalScreenWidth; // offset=24
    SLONG PhysicalScreenHeight; // offset=28
    SLONG GraphicsScreenWidth; // offset=32
    SLONG GraphicsScreenHeight; // offset=36
    SLONG GraphicsWindowX; // offset=40
    SLONG GraphicsWindowY; // offset=44
    SLONG GraphicsWindowWidth; // offset=48
    SLONG GraphicsWindowHeight; // offset=52
    SLONG MouseWindowX; // offset=56
    SLONG MouseWindowY; // offset=60
    SLONG MouseWindowWidth; // offset=64
    SLONG MouseWindowHeight; // offset=68
    SLONG MouseX; // offset=72
    SLONG MouseY; // offset=76
    SLONG MMouseX; // offset=80
    SLONG MMouseY; // offset=84
    SLONG RMouseX; // offset=88
    SLONG RMouseY; // offset=92
    UWORD DrawFlags; // offset=96
    UWORD OldVideoMode; // offset=98
    UWORD ScreenMode; // offset=100
    UBYTE VesaIsSetUp; // offset=102
    UBYTE LeftButton; // offset=103
    UBYTE RightButton; // offset=104
    UBYTE MiddleButton; // offset=105
    UBYTE MLeftButton; // offset=106
    UBYTE MRightButton; // offset=107
    UBYTE MMiddleButton; // offset=108
    UBYTE RLeftButton; // offset=109
    UBYTE RMiddleButton; // offset=110
    UBYTE RRightButton; // offset=111
    UBYTE FadeStep; // offset=112
    UBYTE DrawColour; // offset=113
    UBYTE *Palette; // offset=114
};

typedef struct TbDisplayStruct TbDisplayStruct;

struct TbScreenModeInfo { // sizeof=38
    UWORD Width; // offset=0
    UWORD Height; // offset=2
    UWORD BitsPerPixel; // offset=4
    BOOL Available; // offset=6
    SLONG VideoMode; // offset=10
    CBYTE Desc[23]; // offset=14
};

typedef struct TbScreenModeInfo TbScreenModeInfo;

int LbScreenSetup();
int LbScreenIsModeAvailable();
int LbScreenSetGraphicsWindow();
extern int lbScreenModeInfo;
extern int lbDisplay;

int LbScreenSetupAnyMode();
int LbScreenClearGraphicsWindow();
int LbScreenClear();
int LbScreenReset();
int LbScreenLock();
int LbScreenUnlock();
int LbScreenSetDoubleBuffering();
int LbScreenSetWScreenInVideo();
extern int lbScreenDirectAccessActive;
int LbScreenFindVideoModes();
int LbScreenSwap();
int LbScreenSwapBoxClear();
int LbScreenSwapClear();
int LbScreenSwapBox();
int LbScreenDrawHVLineDirect();
int LbScreenWaitVbi();

#ifdef __cplusplus
};
#endif

#endif // BFLIBRARY_GSCREEN_H_
/******************************************************************************/
