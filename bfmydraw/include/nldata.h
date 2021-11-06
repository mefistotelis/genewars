/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file nldata.hpp
 *     Header file for nldata.cpp.
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
#ifndef BFMYDRAW_NLDATA_HPP_
#define BFMYDRAW_NLDATA_HPP_

#include "bfsprite.h"
#include "mygad.h"

#ifdef __cplusplus
extern "C" {
#endif

extern char unsigned * WScreenHold;
extern MyGadget * MyGadgets;
extern MyGadget * DropGadget;
extern MyGadget * OverGadget;
extern long unsigned MyGActivate;
extern short MyGDrop;
extern short MyGX;
extern short MyGY;
extern char const lKey2char[];
extern char const uKey2char[];
extern char unsigned MyGDelay;
extern long MyGHelpDelay;
extern char unsigned MyGHelpOn;
extern short MyGDropX;
extern short MyGDropY;
extern char * * MyGHelpText;
extern void (*MyGadgetHelpDraw)( MyGadget *, char * );
extern MyGadget * activeG;

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_NLDATA_HPP_
/******************************************************************************/
