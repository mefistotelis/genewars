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

class TextEntry { // sizeof=73
    class TextEntry * TextEntry(class TextEntry *arg1);
    BBOOL ValidChar(UBYTE arg1);
    class TextEntry * TextEntry();
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

typedef struct mem_arena mem_arena;

struct mem_arena { // sizeof=18
    UBYTE *Pointer; // offset=0
    ULONG Size; // offset=4
    mem_arena *Child; // offset=8
    mem_arena *Parent; // offset=12
    UBYTE Used; // offset=16
    UBYTE Section; // offset=17
};

char unsigned SoundManager::NumRequests();
void draw_game();

#endif // BIO_DRAW_HPP_
/******************************************************************************/
