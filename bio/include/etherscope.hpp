/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file etherscope.hpp
 *     Header file for etherscope.cpp.
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
#ifndef BIO_ETHERSCOPE_HPP_
#define BIO_ETHERSCOPE_HPP_

#include "bftypes.h"
#include "myspr.h"

class EtherealScope { // sizeof=11
    MyMinSprite etherealMms;
    SLONG blipRange; // offset=5
    UBYTE saucerFade; // offset=9
    BBOOL blipHitSaucer; // offset=10
public:
    //EtherealScope(); -- generate default no-args constructor
    void Init();
    void Draw();
    //EtherealScope(EtherealScope &arg1); -- generate default copy constructor
};

#endif // BIO_ETHERSCOPE_HPP_
/******************************************************************************/
