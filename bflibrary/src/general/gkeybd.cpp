/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file gkeybd.cpp
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
#include "bfkeybd.h"

char lbInkeyToAscii[] = {0}; // to be filled

char lbInkeyToAsciiShift[] = {0}; // to be filled

unsigned char lbExtendedKeyPress;

unsigned char lbKeyOn[256];

unsigned char lbInkey;

unsigned char lbInkeyFlags;

unsigned char lbIInkey;

unsigned char lbIInkeyFlags;

unsigned char lbShift;


/******************************************************************************/
