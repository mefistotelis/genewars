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

class TopoGrid { // sizeof=176
    void InterpolateAlts(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONG arg8, SLONG arg9, BBOOL *arg10[8], SBYTE arg11);
    void SetTimer();
    void Fractalize(UBYTE arg1, SLONG arg2);
    BBOOL EffectChanges();
    BBOOL Update();
    void Flat(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4);
    void Crater(XY arg1, UBYTE arg2);
    void Create(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4);
    BBOOL Valid();
    void Invalidate();
    XY topLeft; // offset=0
    XY bottomRight; // offset=4
    UBYTE width; // offset=8
    UBYTE height; // offset=9
    SWORD deviation; // offset=10
    SWORD timer; // offset=12
    SWORD alts[8][8]; // offset=14
};

class TopoMorpher { // sizeof=49
    //TopoMorpher(TopoMorpher *arg1);
    void AbortTopoGrid(UBYTE arg1);
    BBOOL IsTopoGridValid(UBYTE arg1);
    UBYTE TopoGridIDX(TopoGrid *arg1);
    void Update();
    TopoGrid * Flat(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4);
    TopoGrid * Crater(XY arg1, UBYTE arg2);
    TopoGrid * Create(XY arg1, UBYTE arg2, SLONG arg3, SLONG arg4);
    TopoMorpher * TopoMorpher();
    TopoGrid topos[24]; // offset=0
    UBYTE numTopos; // offset=48
};

#endif // BIO_TOPO_HPP_
/******************************************************************************/
