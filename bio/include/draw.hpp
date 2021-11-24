/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file draw.hpp
 *     Header file for draw.cpp.
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
#ifndef BIO_DRAW_HPP_
#define BIO_DRAW_HPP_

#include "myspr.h"

class MyGadget;

class HelpDraw { // sizeof=26
    SWORD hx; // offset=0
    SWORD hy; // offset=2
    SWORD hWidth; // offset=4
    SLONG turn; // offset=6
    SLONG length; // offset=10
    ULONG id; // offset=14
    UBYTE pen; // offset=18
    UBYTE outline; // offset=19
    UBYTE fill; // offset=20
    UBYTE boxOutline; // offset=21
    MyGadget *gad; // offset=22
public:
    void Dislodge();
    void DislodgeAndReset();
    void SetColors(UBYTE arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4);
    void Draw(MyGadget *arg1, char *arg2);
    void GenericHelpDraw(MyGadget *arg1, char *arg2);
};

enum TextEntryStatus { // type=int8_t
    TXT_NOT_ACTIVE = 0,
    TXT_ENTERING,
    TXT_RETURN,
    TXT_ESCAPE,
};

class TextEntry { // sizeof=73
    CBYTE *text;
    UBYTE ucase; // offset=4
    UBYTE maxlen; // offset=5
    TextEntryStatus status; // offset=6
    BBOOL alNum; // offset=7
    CBYTE oldText[65]; // offset=8
public:
    void SetupText(CBYTE *arg1, UBYTE arg2, UBYTE arg3);
    UBYTE EnterText();
    BBOOL IsActive();
    BBOOL IsEnteringText();
    BBOOL PressedReturn();
    BBOOL PressedEscape();
    TextEntry();
private:
    BBOOL ValidChar(UBYTE arg1);
//public:
    //TextEntry(TextEntry &arg1); -- generate default copy constructor
};


void draw_game();

#endif // BIO_DRAW_HPP_
/******************************************************************************/
