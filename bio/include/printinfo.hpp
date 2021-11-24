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
#include "myfont.h"

enum InfoRequesterStyle { // type=int8_t
    IFRQ_NORMAL = 0,
    IFRQ_BRIEFING,
};

class TurnPrintInfo { // sizeof=110
public:
    SLONG x; // offset=0
    SLONG y; // offset=4
    SLONG delay; // offset=8
    SLONG step; // offset=12
    char *str; // offset=16
    unsigned char hilite[3][10]; // offset=20, not sure if unsigned
    char *drawStr; // offset=50
    FontInfo dfi; // offset=54
    ULONG drawing; // offset=82
    SLONG linesDrawn; // offset=86
    SLONG length; // offset=90
    SLONG count; // offset=94
    SLONG delayCount; // offset=98
    char *current; // offset=102
    char *drawCurrent; // offset=106
public:
    BBOOL Print();
};

class InfoRequester { // sizeof=8334
    TurnPrintInfo &titleTpi;
    TurnPrintInfo &textTpi;
    char title[64]; // offset=8
    char text[512]; // offset=72
    SLONG textWidth; // offset=584
    UBYTE picBuffer[7744]; // offset=588
    UBYTE picReveal; // offset=8332
    uint8_t picActive:1; // offset=8333 bit=0
public:
    InfoRequester();
    void Create(char *arg1, char *arg2, char *arg3, SLONG arg4, InfoRequesterStyle arg5); // last arg uncertain
    BBOOL Update();
    void Draw();
    void Invalidate();
    BBOOL Valid();
private:
    void DrawPic(SLONG arg1, SLONG arg2);
//public:
    //InfoRequester(InfoRequester const &arg1); -- generate default copy constructor
};

#endif // BIO_PRINTINFO_HPP_
/******************************************************************************/
