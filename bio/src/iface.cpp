/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file iface.cpp
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
#include "iface.hpp"

void Packet::SetPacket( char unsigned, short, short, short )
{
// code at 0001:000262ec
}

long GridTile::__defarg()
{
// code at 0001:00026288
}

char unsigned GridTile::IsFoundation()
{
// code at 0001:0002624c
}

char unsigned Thing::__defarg()
{
// code at 0001:0002622c
}

char unsigned Thing::__defarg()
{
// code at 0001:0002620c
}

char unsigned Creature::IsFrozen()
{
// code at 0001:000261d4
}

char unsigned Creature::CanGetOrders()
{
// code at 0001:00026178
}

void Creature::ClearPlayerActive()
{
// code at 0001:00026150
}

long Creature::ViewScale8()
{
// code at 0001:000260d0
}

char unsigned PlSpec::IsFullyCloaked()
{
// code at 0001:00026090
}

char unsigned IsoMapBuffer::__defarg()
{
// code at 0001:00026070
}

void IsoMapBuffer::Draw( char unsigned )
{
// code at 0001:00026044
}

void MapDisplay::SetCanSelectThing()
{
// code at 0001:00026020
}

void MapDisplay::ClearCanSelectThing()
{
// code at 0001:00025ffc
}

char unsigned MapDisplay::IsRegisteredRightClick()
{
// code at 0001:00025fc0
}

void MapDisplay::SetRegisteredRightClick()
{
// code at 0001:00025f9c
}

void MapDisplay::ClearRegisteredRightClick()
{
// code at 0001:00025f78
}

char unsigned MapDisplay::IsModified()
{
// code at 0001:00025f3c
}

void MapDisplay::ToggleGlassBuildings()
{
// code at 0001:00025f18
}

char unsigned ResearchGrid::CanPlantThisSpecies( PlantSpecies )
{
// code at 0001:00025ed8
}

void IFCBase::SetPacket( char unsigned )
{
// code at 0001:00025eb0
}

void InfoRequester::Invalidate()
{
// code at 0001:00025e8c
}

char unsigned InfoRequester::Valid()
{
// code at 0001:00025e54
}

near PaletteSelector::PaletteSelector()
{
// code at 0001:00025e28
}

void GroupSelect::Init()
{
// code at 0001:00025df8
}

void GroupSelect::Close()
{
// code at 0001:00025dd4
}

char unsigned GroupSelect::IsAGroupCurrentlySelected()
{
// code at 0001:00025d80
}

char unsigned GroupSelect::IsGroupSelecting()
{
// code at 0001:00025d44
}

void GroupSelect::AddIdxToGroup( short )
{
// code at 0001:00025cc8
}

char unsigned GroupSelect::IsAnchorGroupSelecting()
{
// code at 0001:00025c8c
}

void GroupSelect::SetGroupSelecting()
{
// code at 0001:00025c68
}

void GroupSelect::ClearGroupSelecting()
{
// code at 0001:00025c44
}

void GroupSelect::SetAnchorGroupSelecting( short, short )
{
// code at 0001:00025bf4
}

void GroupSelect::ClearAnchorGroupSelecting()
{
// code at 0001:00025bd0
}

void GroupSelect::SetTarget( XY )
{
// code at 0001:00025ba0
}

near BasicPad::BasicPad()
{
// code at 0001:00025ab4
}

near WindowPad::WindowPad( PaletteSelector & )
{
// code at 0001:000259bc
}

near BuildingPad::BuildingPad()
{
// code at 0001:000258e4
}

near CreaturePad::CreaturePad( PaletteSelector & )
{
// code at 0001:000257ec
}

near ClonePad::ClonePad()
{
// code at 0001:00025710
}

near EtherealScope::EtherealScope()
{
// code at 0001:000256dc
}

void EtherealScope::Init()
{
// code at 0001:000256b8
}

Thing * Player::__defarg()
{
// code at 0001:00025694
}

Thing * Player::__defarg()
{
// code at 0001:00025670
}

char unsigned Player::IsEnemy( Thing * )
{
// code at 0001:00025634
}

char unsigned Player::BaseColor()
{
// code at 0001:00025608
}

TheBase & Thing::Base()
{
// code at 0001:00025598
}

char unsigned Building::IsDamaged()
{
// code at 0001:00025540
}

char signed Player::GetNum( PlSpec * )
{
// code at 0001:000254e4
}

EtherealZone & Effect::GetEZone()
{
// code at 0001:000254b0
}

long PlSpec::ArchitectBuildCost( BuildingType )
{
// code at 0001:00025470
}

char unsigned TurnPrintInfo::Print()
{
// code at 0001:0001e160
}

char signed GroupSelect::ActionOn( Thing *, char unsigned )
{
// code at 0001:0001e39a
}

char unsigned GroupSelect::Update( short & )
{
// code at 0001:0001e556
}

void GroupSelect::Draw()
{
// code at 0001:0001e6e5
}

void GroupSelect::RemoveIdxFromGroup( short )
{
// code at 0001:0001e891
}

char unsigned GroupSelect::GroupSelectThings()
{
// code at 0001:0001e931
}

char unsigned GroupSelect::SetGroupSwitchTo()
{
// code at 0001:0001ed6b
}

void GroupSelect::DrawGroupSelected()
{
// code at 0001:0001edd9
}

void GroupSelect::AssignXYToTeam( XY, char unsigned, char unsigned )
{
// code at 0001:0001efbc
}

void GroupSelect::AssignXYToGroup( XY, short *, short, char unsigned, char unsigned )
{
// code at 0001:0001f05b
}

void GroupSelect::AssignTargetToGroup( Thing *, short *, short, char unsigned, char unsigned, char unsigned )
{
// code at 0001:0001f0d3
}

void GroupSelect::SwitchOffGroup( short *, short, char unsigned, char unsigned )
{
// code at 0001:0001f1f4
}

void EtherealScope::Draw()
{
// code at 0001:0001f248
}

void TeamCircles::Init()
{
// code at 0001:0001f563
}

void TeamCircles::Update()
{
// code at 0001:0001f5c4
}

void PaletteSelector::SetSelectFilter( char unsigned )
{
// code at 0001:00025434
}

void PaletteSelector::RestoreSelectFilter()
{
// code at 0001:000253fc
}

void TeamCircles::Draw()
{
// code at 0001:0001f612
}

void TeamCircles::StartStatic( char unsigned, char unsigned )
{
// code at 0001:0001f66c
}

void TeamCircles::StopStatic( char unsigned )
{
// code at 0001:0001f7bc
}

void TeamCircles::DrawTeamCircle( char unsigned )
{
// code at 0001:0001f7fd
}

void TeamCircles::SelectCircle( char unsigned )
{
// code at 0001:0001fae8
}

void PaletteSelector::SlideOpen()
{
// code at 0001:0001fbb0
}

void PaletteSelector::SlideClose()
{
// code at 0001:0001fc4f
}

void PaletteSelector::Init()
{
// code at 0001:0001fc70
}

void PaletteSelector::Create( Thing * )
{
// code at 0001:0001fcb2
}

void PaletteSelector::Close()
{
// code at 0001:0001ff11
}

void PaletteSelector::LockPalette()
{
// code at 0001:0001ff54
}

void PaletteSelector::UnlockPalette()
{
// code at 0001:0001ff7d
}

char signed PaletteSelector::GetSelected()
{
// code at 0001:0001ffa6
}

void PaletteSelector::CreateBuildingMenu()
{
// code at 0001:0001fffe
}

void PaletteSelector::CreatePlantMenu()
{
// code at 0001:000200e4
}

void IFCBase::__vfthunk()
{
// code at 0001:000253c8
}

void IFCBase::__vfthunk()
{
// code at 0001:00025394
}

void IFCBase::__vfthunk()
{
// code at 0001:00025360
}

void IFCBase::__vfthunk()
{
// code at 0001:0002532c
}

void PaletteSelector::CreateShepherdMenu()
{
// code at 0001:0002016c
}

char unsigned PaletteSelector::Update( short )
{
// code at 0001:000201ce
}

void PaletteSelector::Draw()
{
// code at 0001:000206eb
}

near IFCPlanetside::IFCPlanetside( MyGadget * )
{
// code at 0001:00020daa
}

void IFCPlanetside::CyanFlicker( char unsigned )
{
// code at 0001:00020f45
}

void IFCPlanetside::TgtFlagEffect( XY, Thing * )
{
// code at 0001:00020fdc
}

void IFCPlanetside::DisableAllCircles()
{
// code at 0001:0002107f
}

void IFCPlanetside::EnableAllCircles()
{
// code at 0001:000210b8
}

void IFCPlanetside::PlugIn()
{
// code at 0001:000210f1
}

void IFCPlanetside::PullOut()
{
// code at 0001:000214ed
}

void IFCPlanetside::ClearInterfaceReferencesTo( Thing * )
{
// code at 0001:000215ec
}

void IFCPlanetside::JumpToNextBuilding()
{
// code at 0001:00021681
}

void IFCPlanetside::Update()
{
// code at 0001:00021743
}

void IFCPlanetside::DrawTgtFlag()
{
// code at 0001:0002332f
}

void IFCPlanetside::Draw()
{
// code at 0001:000233fb
}

void IFCPlanetside::DrawBadBar( char unsigned )
{
// code at 0001:00025294
}

void IFCPlanetside::DrawGameMap()
{
// code at 0001:0002395f
}

void IFCPlanetside::DrawBadOMeter()
{
// code at 0001:00023da6
}

void IFCPlanetside::DrawGoopMeter()
{
// code at 0001:00023fa3
}

void IFCPlanetside::DrawAllBottomControls()
{
// code at 0001:0002410a
}

void IFCPlanetside::ResetForNewGame()
{
// code at 0001:0002416c
}

void IFCPlanetside::CircleHelp( MyGadget * )
{
// code at 0001:000241c2
}

void IFCPlanetside::GeneralGadgetHelp( MyGadget * )
{
// code at 0001:000242fc
}

void IFCPlanetside::BarHelp( MyGadget * )
{
// code at 0001:000245ba
}

void IFCPlanetside::MapHelp( MyGadget * )
{
// code at 0001:000249a5
}

void InfoRequester::DrawPic( long, long )
{
// code at 0001:0002518c
}

near InfoRequester::InfoRequester()
{
// code at 0001:00024a06
}

void InfoRequester::Create( char *, char *, char *, long, InfoRequesterStyle )
{
// code at 0001:00024a3c
}

char unsigned InfoRequester::Update()
{
// code at 0001:00024c85
}

void InfoRequester::Draw()
{
// code at 0001:00024cf4
}

void DrawRangeVSprite( short, short, short, short, long, long, TbSprite *, TbSprite * )
{
// code at 0001:00024e7f
}

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

int unsigned const __vbtbl[];

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void DrawRangeHSprite( short, short, short, short, long, long, TbSprite *, TbSprite * )
{
// code at 0001:00024ef9
}

void DrawRangeVBar( short, short, short, short, long, long, char unsigned, char unsigned )
{
// code at 0001:00024f73
}

void DrawRangeHBar( short, short, short, short, long, long, char unsigned )
{
// code at 0001:0002505e
}

void DrawRangeHBarDrawFlags( short, short, short, short, long, long, char unsigned, short unsigned )
{
// code at 0001:00025101
}


/******************************************************************************/
