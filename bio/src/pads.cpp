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

void IFCBase::SetPacket( char unsigned, short, short, short )
{
// code at 0001:0001d48c
}

void IFCBase::SetPacket( char unsigned, short, short, short, short )
{
// code at 0001:0001d42c
}

void IFCBase::SetPacket( char unsigned, short, short, short, short, short )
{
// code at 0001:0001d3c0
}

void IFCBase::SetPacketDataBlast( void * )
{
// code at 0001:0001d39c
}

char unsigned PaletteSelector::IsSelectActive()
{
// code at 0001:0001d35c
}

void PaletteSelector::ClearSelect()
{
// code at 0001:0001d334
}

void GroupSelect::ResetGroup()
{
// code at 0001:0001d2f0
}

void BoundMmsToMySprite( MyMinSprite &, MySprite & )
{
// code at 0001:0001d1f8
}

void TeamCircles::Reset()
{
// code at 0001:0001ce98
}

void BasicPad::Init( Thing * )
{
// code at 0001:00019a3d
}

char unsigned BasicPad::Update( short )
{
// code at 0001:00019b00
}

void BasicPad::MapDraw()
{
// code at 0001:00019b43
}

void BasicPad::Draw( char signed )
{
// code at 0001:00019b5d
}

near GroupPad::GroupPad()
{
// code at 0001:00019b78
}

void GroupPad::Init( Thing * )
{
// code at 0001:00019c6e
}

char unsigned GroupPad::Update( short )
{
// code at 0001:00019d26
}

void GroupPad::MapDraw()
{
// code at 0001:0001a0c6
}

void GroupPad::Draw( char signed )
{
// code at 0001:0001a0e0
}

void WindowPad::Init( Thing * )
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

void WindowPad::Draw( char signed )
{
// code at 0001:0001adbb
}

char unsigned WindowPad::Update( short )
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

void BuildingPad::Init( Thing * )
{
// code at 0001:0001bd28
}

char unsigned BuildingPad::Update( short )
{
// code at 0001:0001beb1
}

void BuildingPad::MapDraw()
{
// code at 0001:0001c0ca
}

void BuildingPad::Draw( char signed )
{
// code at 0001:0001c1b1
}

void CreaturePad::Init( Thing * )
{
// code at 0001:0001c1f3
}

void CreaturePad::Close()
{
// code at 0001:0001c351
}

char unsigned CreaturePad::Update( short )
{
// code at 0001:0001c39b
}

void CreaturePad::MapDraw()
{
// code at 0001:0001c741
}

void CreaturePad::DrawAllPackMembers( char unsigned )
{
// code at 0001:0001c858
}

void CreaturePad::Draw( char signed )
{
// code at 0001:0001c873
}

void (near * const __vftbl[])();


/******************************************************************************/
