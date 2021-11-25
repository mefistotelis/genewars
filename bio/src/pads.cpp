/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file pads.cpp
 *     Implementation of related functions.
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
#include "pads.hpp"

BasicPad::BasicPad()
    : MainInterfacePad()
{
  // code at 0001:00025ab4
  this->padBmpType = PADBMP_NORMAL;
  this->panelBmp = &MainInterfacePad::padBmps[0];
  this->normalPad = 1;
  this->flickOffOnly = 1;
}

void BasicPad::Init( Thing *tng1 )
{
// code at 0001:00019a3d
}

BBOOL BasicPad::Update( SWORD arg1 )
{
// code at 0001:00019b00
}

void BasicPad::MapDraw()
{
// code at 0001:00019b43
}

void BasicPad::Draw( SBYTE arg1 )
{
// code at 0001:00019b5d
}

WindowPad::WindowPad(PaletteSelector &palsel) : MainInterfacePad(), aPalette(palsel)
{
  // code at 0001:000259bc, ignored internal flag to skip super ct
  this->padBmpType = PADBMP_NORMAL;
  this->panelBmp = &MainInterfacePad::padBmps[0];
  this->normalPad = 1;
  this->flickOffOnly = 1;
}

void WindowPad::Init( Thing *tng1 )
{
// code at 0001:0001a152
}

void WindowPad::Close()
{
// code at 0001:0001a2fc
}

void WindowPad::MapDraw()
{
// code at 0001:0001a369
}

void WindowPad::DrawPolyFoundation( XY, char unsigned, char unsigned )
{
// code at 0001:0001a6ab
}

void WindowPad::DrawArchitectFoundation()
{
// code at 0001:0001a8a9
}

void WindowPad::Draw( SBYTE arg1 )
{
// code at 0001:0001adbb
}

BBOOL WindowPad::Update( SWORD arg1 )
{
// code at 0001:0001b024
}

void WindowPad::StartAction()
{
// code at 0001:0001bc97
}

void WindowPad::AbortAction()
{
// code at 0001:0001bcd9
}

BuildingPad::BuildingPad()
    : MainInterfacePad()
{
  // code at 0001:000258e4, ignored internal flag to skip super ct
  this->padBmpType = PADBMP_NORMAL;
  this->panelBmp = &MainInterfacePad::padBmps[0];
  this->normalPad = 1;
}

void BuildingPad::Init( Thing *tng1 )
{
// code at 0001:0001bd28
}

BBOOL BuildingPad::Update( SWORD arg1 )
{
// code at 0001:0001beb1
}

void BuildingPad::MapDraw()
{
// code at 0001:0001c0ca
}

void BuildingPad::Draw( SBYTE arg1 )
{
// code at 0001:0001c1b1
}


CreaturePad::CreaturePad(PaletteSelector &palsel) : MainInterfacePad(), aPalette(palsel)
{
  // code at 0001:000257ec, ignored internal flag to skip super ct
  this->padBmpType = PADBMP_NORMAL;
  this->panelBmp = &MainInterfacePad::padBmps[0];
  this->normalPad = 1;
  this->flickOffOnly = 1;
}

void CreaturePad::Init( Thing *tng1 )
{
// code at 0001:0001c1f3
}

void CreaturePad::Close()
{
// code at 0001:0001c351
}

char unsigned CreaturePad::Update( SWORD arg1 )
{
// code at 0001:0001c39b
}

void CreaturePad::MapDraw()
{
// code at 0001:0001c741
}

void CreaturePad::DrawAllPackMembers( UBYTE arg1 )
{
// code at 0001:0001c858
}

void CreaturePad::Draw( SBYTE arg1 )
{
// code at 0001:0001c873
}

/******************************************************************************/
