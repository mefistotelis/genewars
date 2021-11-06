/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bfkeybd.h
 *     Header file for gkeybd.cpp, skeybd.cpp.
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
#ifndef BFLIBRARY_GKEYBD_H_
#define BFLIBRARY_GKEYBD_H_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

int LbKeyboardOpen();
int LbKeyboardClose();
int LbKeyboard();
int LbIKeyboardOpen();
int LbIKeyboardClose();
int LbDosKeyboard();

extern int lbInkeyToAscii;
extern int lbInkeyToAsciiShift;
extern int lbExtendedKeyPress;
extern int lbKeyOn;
extern int lbInkey;
extern int lbInkeyFlags;
extern int lbIInkey;
extern int lbIInkeyFlags;
extern int lbShift;

#ifdef __cplusplus
};
#endif

#endif // BFLIBRARY_GKEYBD_H_
/******************************************************************************/
