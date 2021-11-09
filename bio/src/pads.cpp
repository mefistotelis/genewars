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

long Creature::Lifespan()
{
// code at 0001:0001dcbc
}

char unsigned Creature::IsPlayerActive()
{
// code at 0001:0001dc84
}

char unsigned Creature::IsTurfSet()
{
// code at 0001:0001dc44
}

short unsigned Creature::TurfRange()
{
// code at 0001:0001dbe8
}

char unsigned Creature::GetYesPitch()
{
// code at 0001:0001dbac
}

char unsigned PlSpec::IsActionAbortable()
{
// code at 0001:0001d948
}

char unsigned PlSpec::CanGetOrder()
{
// code at 0001:0001d8d8
}

long PlSpec::ShepherdCatchRange()
{
// code at 0001:0001d894
}

long PlSpec::FarmerPlantingRange()
{
// code at 0001:0001d850
}

long PlSpec::FarmerHarvestRange()
{
// code at 0001:0001d80c
}

long PlSpec::LumberjackFellRange()
{
// code at 0001:0001d7c8
}

long PlSpec::FarmerPackCapacity()
{
// code at 0001:0001d7a4
}

char unsigned PlSpec::GetGun( char unsigned )
{
// code at 0001:0001d70c
}

char unsigned MapDisplay::__defarg()
{
// code at 0001:0001d6ec
}

MyMinSprite * MapDisplay::__defarg()
{
// code at 0001:0001d6c8
}

MyMinSprite * MapDisplay::__defarg()
{
// code at 0001:0001d6a4
}

char unsigned MapDisplay::IsOnScreen( short, short )
{
// code at 0001:0001d634
}

char unsigned MapDisplay::IsScrolling()
{
// code at 0001:0001d5f4
}

void MapDisplay::SetDrawFoundations()
{
// code at 0001:0001d5c8
}

void MapDisplay::ClearDrawFoundations()
{
// code at 0001:0001d59c
}

char unsigned MapDisplay::IsDrawFoundations()
{
// code at 0001:0001d560
}

long ResearchGrid::ResearchCeiling()
{
// code at 0001:0001d528
}

char unsigned ResearchGrid::IsAGridStudyAtMax( char unsigned )
{
// code at 0001:0001d4e0
}

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

void MainInterfacePad::ClearUserPointer()
{
// code at 0001:0001d2c8
}

void MainInterfacePad::NullUserPointer()
{
// code at 0001:0001d2a0
}

void MainInterfacePad::SetViewerClip()
{
// code at 0001:0001d26c
}

char unsigned Player::IsSamePlayer( Thing * )
{
// code at 0001:0001d230
}

void BoundMmsToMySprite( MyMinSprite &, MySprite & )
{
// code at 0001:0001d1f8
}

void TeamCircles::Reset()
{
// code at 0001:0001ce98
}

long Creature::QualityXlate( char signed, long )
{
// code at 0001:0001ce54
}

ASpecies & Creature::Species()
{
// code at 0001:0001ce20
}

Gene & Creature::Gene()
{
// code at 0001:0001cdf0
}

char * Creature::GetName()
{
// code at 0001:0001cdc0
}

SampleID Creature::GetYesSample()
{
// code at 0001:0001cd88
}

void Creature::SoundYesSample()
{
// code at 0001:0001cd28
}

void IFCPlanetside::SetBarsRefresh( char unsigned )
{
// code at 0001:0001ccec
}

void MainInterfacePad::Init( Thing * )
{
// code at 0001:000190dc
}

void MainInterfacePad::Close()
{
// code at 0001:00019170
}

char unsigned MainInterfacePad::Update( short )
{
// code at 0001:000191b1
}

void MainInterfacePad::SetPointerToFrame()
{
// code at 0001:0001922a
}

void MainInterfacePad::SetUserPointer( char signed )
{
// code at 0001:0001927e
}

void MainInterfacePad::SetNormalPad()
{
// code at 0001:0001932f
}

void MainInterfacePad::LoadBitmap( PadBmp )
{
// code at 0001:00019396
}

void MainInterfacePad::DrawMainPanelBmp( long unsigned * )
{
// code at 0001:00019473
}

void MainInterfacePad::DrawMainPanelEdge()
{
// code at 0001:000194fb
}

void MainInterfacePad::DrawStatic( long, long, long, long )
{
// code at 0001:00019546
}

void MainInterfacePad::DrawBuildingStats( Building * )
{
// code at 0001:000195ed
}

void MainInterfacePad::DrawBottomPanelText( char * )
{
// code at 0001:000198e6
}

void MainInterfacePad::DrawPointerOverThing()
{
// code at 0001:0001996b
}

void MainInterfacePad::FinishViewerClip()
{
// code at 0001:0001cca8
}

void MainInterfacePad::__vfthunk( Thing * )
{
// code at 0001:0001cc70
}

char unsigned MainInterfacePad::__vfthunk( short )
{
// code at 0001:0001cc34
}

void MainInterfacePad::__vfthunk( char signed )
{
// code at 0001:0001cbfc
}

void MainInterfacePad::__vfthunk()
{
// code at 0001:0001cbc8
}

void MainInterfacePad::MapDraw()
{
// code at 0001:000199fc
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
