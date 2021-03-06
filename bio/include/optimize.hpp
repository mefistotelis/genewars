/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file optimize.hpp
 *     Header file for optimize.cpp.
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
#ifndef BIO_OPTIMIZE_HPP_
#define BIO_OPTIMIZE_HPP_

#include "bftypes.h"
#include "xy.hpp"

void BlastScreens();
void ZeroVRAM();
void FragCopyBScreenToWScreen( XY, XY );
void FragCopyWScreenToVRAM( XY, XY );
void CopyRegion( short, short, short, short, short, short );
void RefreshFromBScreenNormal();
void RefreshToVRAM();
void copy_svga_box( short unsigned, short unsigned, short unsigned, short unsigned );
void SwapScreensBio();

#endif // BIO_OPTIMIZE_HPP_
/******************************************************************************/
