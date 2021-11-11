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

enum TextEntryStatus { // type=int8_t
    TXT_NOT_ACTIVE = 0,
    TXT_ENTERING,
    TXT_RETURN,
    TXT_ESCAPE,
};

class TextEntry { // sizeof=73
    //TextEntry(TextEntry *arg1);
    BBOOL ValidChar(UBYTE arg1);
    //TextEntry();
    BBOOL PressedEscape();
    BBOOL PressedReturn();
    BBOOL IsEnteringText();
    BBOOL IsActive();
    UBYTE EnterText();
    void SetupText(CBYTE *arg1, UBYTE arg2, UBYTE arg3);
    CBYTE oldText[64];
    BBOOL alNum;
    TextEntryStatus status;
    UBYTE maxlen;
    UBYTE ucase;
    CBYTE *text;
};


void draw_game();

#endif // BIO_DRAW_HPP_
/******************************************************************************/
