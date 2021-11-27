/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file engine.hpp
 *     Header file for engine.cpp.
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
#ifndef BIO_ENGINE_HPP_
#define BIO_ENGINE_HPP_

#include "bftypes.h"

struct GEngine { // sizeof=20
    SLONG XStep; // offset=0
    SLONG YStep; // offset=4
    SLONG BaseX; // offset=8
    SLONG BaseY; // offset=12
    SLONG AltScaler; // offset=16
    GEngine();
    //GEngine(GEngine &engin1); -- generate default copy constructor
};

struct PolyPoint { // sizeof=20
    SLONG X; // offset=0
    SLONG Y; // offset=4
    SLONG U; // offset=8
    SLONG V; // offset=12
    SLONG S; // offset=16
};

struct EnginePoint { // sizeof=12
    SLONG Y; // offset=0
    SLONG Shade; // offset=4
    UWORD padw; // offset=8
    UBYTE Block; // offset=10
    UBYTE Orientation; // offset=11
};


#endif // BIO_ENGINE_HPP_
/******************************************************************************/
