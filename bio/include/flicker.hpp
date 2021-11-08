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


class FlickerStuff { // sizeof=193
    BBOOL Valid();
    void Invalidate();
    Point uppers[15]; // offset=0
    BBOOL uAbove[15]; // offset=128
    BBOOL lAbove[15]; // offset=144
    SWORD effects[15]; // offset=160
    BBOOL valid; // offset=192
    Point lowers[15]; // offset=193
};

class FlickerHandler { // sizeof=8
    void Free(UBYTE arg1);
    SBYTE Create();
    FlickerStuff flickers[7]; // offset=0
};

#endif // BIO_FLICKER_HPP_
/******************************************************************************/
