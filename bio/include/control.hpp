/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file control.hpp
 *     Header file for control.cpp.
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
#ifndef BIO_CONTROL_HPP_
#define BIO_CONTROL_HPP_

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

struct TbIffPalette { // sizeof=4
    SLONG Loaded; // offset=0
    UBYTE Palette[255]; // offset=4
};

typedef struct TbIffPalette TbIffPalette;

struct TbIff { // sizeof=18
    UWORD Width; // offset=0
    UWORD Height; // offset=2
    ULONG FileSize; // offset=4
    TbIffPalette *Palette; // offset=8
    UWORD XOffset; // offset=12
    UWORD YOffset; // offset=14
    UBYTE XAspect; // offset=16
    UBYTE YAspect; // offset=17
};

typedef struct TbIff TbIff;

struct find_t { // sizeof=30
    char reserved[20]; // offset=0
    char attrib; // offset=21
    uint16_t wr_time; // offset=22
    uint16_t wr_date; // offset=24
    uint32_t size; // offset=26
    char name[255]; // offset=30
};

typedef struct find_t find_t;

void control_game();
void setup_controller();
char * MakeScreenShotName( char * );
void ResetAllInputs();

#endif // BIO_CONTROL_HPP_
/******************************************************************************/
