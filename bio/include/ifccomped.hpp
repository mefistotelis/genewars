/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifccomped.hpp
 *     Header file for ifccomped.cpp.
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
#ifndef BIO_IFCCOMPED_HPP_
#define BIO_IFCCOMPED_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "iface.hpp"

class IFCCompEditor : public IFCBase { // sizeof=193
public:
    //IFCCompEditor(IFCCompEditor *arg1);
    void PrintCompPlayersToFile();
    void UpdateColumnGadget(SWORD arg1, UBYTE *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, SBYTE *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, UWORD *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, SWORD *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, ULONG *arg2, ULONG arg3, ULONG arg4);
    void UpdateColumnGadget(SWORD arg1, SLONG *arg2, SLONG arg3, SLONG arg4);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, UBYTE arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SBYTE arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, UWORD arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SWORD arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void UpdateCreatureBar();
    void UpdateCreatureValues();
    void DrawCreatureBar();
    BBOOL Write();
    BBOOL Read();
    void Update();
    UBYTE WantedSpecialists();
    void Draw();
    void PullOut();
    void PlugIn();
    IFCCompEditor(MyGadget *arg1);
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    IFCBase *saveIFC; // offset=4
    MyGadget *gad; // offset=8
    MyAnimBank *anb; // offset=12
    MySprite *spr; // offset=16
    TbSprite *sprites; // offset=20
    UBYTE playerNumber; // offset=24
    Personality cPersonality; // offset=25
    UWORD leftNotch; // offset=167
    UWORD rightNotch; // offset=169
    UWORD testing; // offset=171
    UBYTE triggerNo; // offset=173
};

#endif // BIO_IFCCOMPED_HPP_
/******************************************************************************/
