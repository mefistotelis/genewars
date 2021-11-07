/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file font.hpp
 *     Header file for font.cpp.
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
#ifndef BIO_FONT_HPP_
#define BIO_FONT_HPP_

struct TextWindowInfo { // sizeof=24
    SLONG Left; // offset=0
    SLONG Right; // offset=4
    SLONG Top; // offset=8
    SLONG Bottom; // offset=12
    SLONG Width; // offset=16
    SLONG Height; // offset=20
};

typedef struct TextWindowInfo TextWindowInfo;

struct DrawJustifyData { // sizeof=20
    SLONG MaxWidth; // offset=0
    SLONG NumberOfWords; // offset=4
    SLONG SpaceWidth; // offset=8
    SLONG PixelsRemaining; // offset=12
    BOOL Overflow; // offset=16
};

typedef struct DrawJustifyData DrawJustifyData;

typedef class ThingIDX ThingIDX;

typedef class XY XY;


typedef class Player Player;

struct TbSprite { // sizeof=6
    SBYTE *Data; // offset=0
    UBYTE SWidth; // offset=4
    UBYTE SHeight; // offset=5
};

typedef struct TbSprite TbSprite;


struct FontKernData { // sizeof=225
    UBYTE KernedCount; // offset=0
    UBYTE CharactersKerned[223]; // offset=1
    SBYTE Kern[255]; // offset=225
};

typedef struct FontKernData FontKernData;

struct Colour { // sizeof=3
    UBYTE Red; // offset=0
    UBYTE Green; // offset=1
    UBYTE Blue; // offset=2
};

typedef struct Colour Colour;

struct FontInfo { // sizeof=28
    TbSprite *SpaceSprite; // offset=0
    FontKernData *TextKerningData; // offset=4
    Colour *Palette; // offset=8
    UBYTE *FFCTable; // offset=12
    ULONG ControlFlags; // offset=16
    ULONG PenColour; // offset=20
    ULONG OutlineColour; // offset=24
};

typedef struct FontInfo FontInfo;

struct TbSpriteData { // sizeof=12
    TbSprite *Start; // offset=0
    TbSprite *End; // offset=4
    SBYTE *Data; // offset=8
};

typedef struct TbSpriteData TbSpriteData;

void SetTxtWindow( long, long, long, long );
void SetGraphicsWindowToTextWindow();
void GetTextWindow( TextWindowInfo * );
void SaveTextWindow();
void RestoreTextWindow();
void FontInitialize( FontInfo *, TbSpriteData *, Colour *, FontKernData * );
long FontStringWidth( FontInfo *, char * );
long FontWordWidth( FontInfo *, char * );
long DrawFontCentered( FontInfo *, long const, long const, char * );
long DrawFont( FontInfo *, long const, long const, char * );
void JustifyParseString( FontInfo *, char *, char * );

#endif // BIO_FONT_HPP_
/******************************************************************************/
