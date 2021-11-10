/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file printinfo.hpp
 *     Header file for printinfo.cpp.
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
#ifndef BIO_PRINTINFO_HPP_
#define BIO_PRINTINFO_HPP_

#include "bftypes.h"

enum InfoRequesterStyle { // type=int8_t
    IFRQ_NORMAL = 0,
    IFRQ_BRIEFING,
};

class TurnPrintInfo { // sizeof=110
    BBOOL Print();
    char *drawCurrent;
    char *current;
    SLONG delayCount;
    SLONG count;
    SLONG length;
    SLONG x; // offset=0
    SLONG y; // offset=4
    SLONG delay; // offset=8
    SLONG step; // offset=12
    char *str; // offset=16
    char hilite[2][9]; // offset=20
    char *drawStr; // offset=50
    FontInfo dfi; // offset=54
    ULONG drawing; // offset=82
    SLONG linesDrawn; // offset=86
};

class InfoRequester { // sizeof=142
    //InfoRequester(InfoRequester *arg1);
    void DrawPic(SLONG arg1, SLONG arg2);
    BBOOL Valid();
    void Invalidate();
    void Draw();
    BBOOL Update();
    void Create(char *arg1, char *arg2, char *arg3, SLONG arg4);
    //InfoRequester();
    uint8_t picActive;
    UBYTE picReveal;
    UBYTE picBuffer[63];
    SLONG textWidth;
    char text[255];
    char title[63];
    TurnPrintInfo textTpi;
    TurnPrintInfo titleTpi;
};


#endif // BIO_PRINTINFO_HPP_
/******************************************************************************/
