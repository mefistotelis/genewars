/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file options.hpp
 *     Header file for options.cpp.
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
#ifndef BIO_OPTIONS_HPP_
#define BIO_OPTIONS_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "iface.hpp"

class MyGadget;

class IFCOptions : public IFCBase { // sizeof=59
public:
    //IFCOptions(IFCOptions *arg1);
    void FindWhichSlotsAreUsed();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    IFCOptions(MyGadget *arg1);
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    BBOOL savePausedState;
    SBYTE saveTextEntrySlot;
    MyMinSprite mMs;
    char slotNames[7][31];
    BBOOL slotUsed[7];
    TbSprite *sprites;
    MySprite *spr;
    MyGadget *gad;
    SBYTE selectedSlot; // offset=4
    MyAnimBank *anb; // offset=5
    IFCBase *previousIFC; // offset=9
};


#endif // BIO_OPTIONS_HPP_
/******************************************************************************/
