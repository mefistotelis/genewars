/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file topo.hpp
 *     TopoGrid and TopoMorpher classes.
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
#ifndef BIO_TOPO_HPP_
#define BIO_TOPO_HPP_

#include "bftypes.h"
#include "xy.hpp"

class TopoGrid { // sizeof=176
public:
    XY topLeft; // offset=0
    XY bottomRight; // offset=4
    UBYTE width; // offset=8
    UBYTE height; // offset=9
    SWORD deviation; // offset=10
    SWORD timer; // offset=12
    SWORD alts[9][9]; // offset=14
public:
    void Invalidate();
    BBOOL Valid();
    void Create(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4);
    void Crater(XY arg1, UBYTE arg2);
    void Flat(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4);
    BBOOL Update();
    BBOOL EffectChanges();
    void Fractalize(UBYTE arg1, SLONG arg2);
    void SetTimer();
    void InterpolateAlts(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONG arg8, SLONG arg9, BBOOL *func10[9], SBYTE arg11);
};

class TopoMorpher { // sizeof=4401
    TopoGrid topos[25]; // offset=0
    UBYTE numTopos; // offset=4400
public:
    TopoMorpher();
    TopoGrid * Create(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4);
    TopoGrid * Crater(XY arg1, UBYTE arg2);
    TopoGrid * Flat(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4);
    void Update();
    UBYTE TopoGridIDX(TopoGrid *arg1);
    BBOOL IsTopoGridValid(UBYTE arg1);
    void AbortTopoGrid(UBYTE arg1);
    //TopoMorpher(TopoMorpher const &tmorph1); -- generate default copy constructor
};

#endif // BIO_TOPO_HPP_
/******************************************************************************/
