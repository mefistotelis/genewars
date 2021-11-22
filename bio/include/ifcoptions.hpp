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

class IFCOptions : public IFCBase { // sizeof=315
    SBYTE selectedSlot; // offset=4
    MyAnimBank *anb; // offset=5
    IFCBase *previousIFC; // offset=9
    MyGadget *gad; // offset=13
    MySprite *spr; // offset=17
    TbSprite *sprites; // offset=21
    BBOOL slotUsed[8]; // offset=25
    char slotNames[8][32]; // offset=33
    MyMinSprite mMs; // offset=289
    SBYTE saveTextEntrySlot; // offset=294
    BBOOL savePausedState; // offset=295
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=296
public:
    IFCOptions(MyGadget *arg1);
    void PlugIn();
    void PullOut();
    void Draw();
    void Update();
private:
    void FindWhichSlotsAreUsed();
//public:
    //IFCOptions(IFCOptions &arg1); -- generate default copy constructor
};

#endif // BIO_OPTIONS_HPP_
/******************************************************************************/
