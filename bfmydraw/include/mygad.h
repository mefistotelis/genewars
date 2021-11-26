/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file MYGAD.hpp
 *     Header file for MYGAD.cpp.
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
#ifndef BFMYDRAW_MYGAD_HPP_
#define BFMYDRAW_MYGAD_HPP_

#include "bfsprite.h"
#include "myspr.h"

#ifdef __cplusplus
extern "C" {
#endif

struct __3l95t9offset { // sizeof=8
    SLONG off; // offset=0
    SLONG on; // offset=4
};

struct __f67gospr { // sizeof=8
    TbSprite *off; // offset=0
    TbSprite *on; // offset=4
};

struct __1td29bmSpr { // sizeof=12
    MySprite *off; // offset=0
    MySprite *on; // offset=4
    MyMinSprite *mMs; // offset=8
};

struct MyGadget { // sizeof=40
    ULONG flags; // offset=0
    SWORD x; // offset=4
    SWORD y; // offset=6
    SWORD w; // offset=8
    SWORD h; // offset=10
    SWORD id; // offset=12
    void (*function)(MyGadget *arg1); // offset=14
  union {
    struct __3l95t9offset offset; // offset=18
    struct __f67gospr spr; // offset=18
    struct __1td29bmSpr mSpr; // offset=18
  };
    void *userData; // offset=30
  union {
    ULONG helpIndex; // offset=34
    char *helpText; // offset=34
    void (*helpFn)(MyGadget *arg1); // offset=34
  };
    UBYTE pressed; // offset=38
    UBYTE drawFlags; // offset=39
};

typedef struct MyGadget MyGadget;

void ResetGadgetHelpTimer();
long unsigned PrepMyGadgets( MyGadget *, TbSprite *, MySprite * );
void FreeMyGadgets( MyGadget * );
void DrawMyGadget( MyGadget *, long unsigned );
void DrawAllMyGadgets();
short CheckMyGadgetsOnly();
short CheckMyGadgets();

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_MYGAD_HPP_
/******************************************************************************/
