/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file flicker.hpp
 *     Header file for effect.cpp.
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
#ifndef BIO_FLICKER_HPP_
#define BIO_FLICKER_HPP_

#include "bftypes.h"

class Point { // sizeof=12
public:
    SLONG X; // offset=0
    SLONG Y; // offset=4
    SLONG Z; // offset=8
public:
    void Set(SLONG nX, SLONG nY, SLONG nZ);
};

class FlickerStuff { // sizeof=449
public:
    Point uppers[16]; // offset=0
    Point lowers[16]; // offset=192
    BBOOL uAbove[16]; // offset=384
    BBOOL lAbove[16]; // offset=400
    SWORD effects[16]; // offset=416
    BBOOL valid; // offset=448
public:
    void Invalidate();
    BBOOL Valid();
};

class FlickerHandler { // sizeof=3592
public:
    FlickerStuff flickers[8]; // offset=0
public:
    SBYTE Create();
    void Free(UBYTE arg1);
};

#endif // BIO_FLICKER_HPP_
/******************************************************************************/
