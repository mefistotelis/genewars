/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file nldata.cpp
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
#include "nldata.h"

char unsigned * WScreenHold;

MyGadget * MyGadgets;

MyGadget * DropGadget;

MyGadget * OverGadget;

long unsigned MyGActivate;

short MyGDrop;

short MyGX;

short MyGY;

char const lKey2char[] = { 0 }; // To be filled

char const uKey2char[] = { 0 }; // To be filled

char unsigned MyGDelay;

long MyGHelpDelay;

char unsigned MyGHelpOn;

short MyGDropX;

short MyGDropY;

char * * MyGHelpText;

void (*MyGadgetHelpDraw)( MyGadget *, char * );

MyGadget * activeG;


/******************************************************************************/
