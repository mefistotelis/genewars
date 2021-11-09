/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file drawrng.h
 *     Header file for drawrng.cpp.
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
#ifndef BFMYDRAW_DRAWRNG_HPP_
#define BFMYDRAW_DRAWRNG_HPP_

#include "bfsprite.h"

#ifdef __cplusplus
extern "C" {
#endif

void DrawRangeVSprite(short, short, short, short, long, long, TbSprite *spr1, TbSprite *spr2);
void DrawRangeHSprite(short, short, short, short, long, long, TbSprite *spr1, TbSprite *spr2);
void DrawRangeVBar(short, short, short, short, long, long, char unsigned, char unsigned);
void DrawRangeHBar(short, short, short, short, long, long, char unsigned);
void DrawRangeHBarDrawFlags(short, short, short, short, long, long, char unsigned, short unsigned);

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_DRAWRNG_HPP_
/******************************************************************************/
